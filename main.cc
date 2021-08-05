#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <unordered_map>

#include "TFile.h"
#include "TChain.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TTree.h"
#include "TChain.h"
#include "TTreeCache.h"
#include "TTreeCacheUnzip.h"
#include "TTreePerfStats.h"
#include "tqdm.h"
#include "Nano.cc"
#include "cxxopts.hpp"

std::unordered_map<int, float> lumi;

int year;
std::unordered_map<std::string, bool> is_resonant;
std::unordered_map<std::string, float> process_ids;
TFile* outFile;
TTree* output_tree;
TDirectory* rootdir;

bool passDiPhotonPreselections(std::string current_sample)
{
    bool mgg_mask;
    if(is_resonant[current_sample])
    {
        mgg_mask = nt.gg_mass() > 100 and nt.gg_mass() < 180; 
    }
    else
    {
        bool sideband_low = nt.gg_mass() > 100 and nt.gg_mass() < 120;
        bool sideband_high = nt.gg_mass() > 130 and nt.gg_mass() < 180;
        mgg_mask = sideband_low or sideband_high;
    }

    bool leading_pt_mgg_cut = nt.selectedPhoton_pt()[0] / nt.gg_mass() > 0.33;
    bool trailing_pt_mgg_cut = nt.selectedPhoton_pt()[1] / nt.gg_mass() > 0.25;
    bool pt_mgg_cut = leading_pt_mgg_cut and trailing_pt_mgg_cut;

    bool trigger_cut;
    if(current_sample == "Data")
    {
        if(year == 2016)
        {
            trigger_cut = nt.HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90();
        }
        else if(year == 2017 or year == 2018)
        {
             trigger_cut = nt.HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90();
        }
    }
    else
    {
        trigger_cut = nt.gg_mass() > 0;
    }
    return mgg_mask and pt_mgg_cut and trigger_cut;
}



void fill1DHistogram(std::string name, float xval, double weight, std::unordered_map<std::string, TH1D*>& hists, const char* title, int nbins, double xmin, double xmax, TDirectory* rootdir)
{
    if(strcmp(title,"") == 0)
    {
        title = name.c_str();
    }
    if(hists[name] == nullptr)
    {
        hists[name] = new TH1D((name + year),title,nbins,xmin,xmax);
        hists[name]->SetDirectory(rootdir);
        hists[name]->Sumw2();
    }

    hists[name]->Fill(xval,weight);
}

float computeWeight(std::string current_sample, float scale1fb)
{
    if(current_sample == "Data")
    {
        return 1.0;
    }
    return nt.genWeight() * scale1fb * lumi[year];
}

float deltaR(float eta1, float phi1, float eta2, float phi2)
{
    return sqrt((eta1 - eta2) * (eta1 - eta2) + (phi1 - phi2) * (phi1 - phi2));
}

float deltaR(LorentzVector& v1, LorentzVector& v2)
{
    return sqrt((v1.eta() - v2.eta()) * (v1.eta() - v2.eta()) + (v1.phi() - v2.phi()) *(v1.phi() - v2.phi()));
}
    
bool flag = false;
std::unordered_map<std::string, float> branches;

void loopTChain(TChain* ch, int year, float scale1fb, std::unordered_map<std::string, TH1D*>& hists1D, std::string current_sample) 
{
    ::year = year;
    int nEventsTotal = 0;
    int nEventsChain = ch->GetEntries();
    TFile* currentFile = 0;
    TObjArray *listOfFiles = ch->GetListOfFiles();
    TIter fileIter(listOfFiles);
    tqdm bar;

    while ((currentFile = (TFile*)fileIter.Next())) 
    {
        TFile *file = TFile::Open(currentFile->GetTitle());
        TTree *tree = (TTree*)file->Get("Events");
        TString filename(currentFile->GetTitle());

        tree->SetCacheSize(128*1024*1024);
        tree->SetCacheLearnEntries(100);
        nt.SetYear(year);
        nt.Init(tree);

        for( unsigned int event = 0; event < tree->GetEntriesFast(); ++event) 
        {
            nt.GetEntry(event);
            tree->LoadTree(event);

            nEventsTotal++;
            bar.progress(nEventsTotal, nEventsChain);

            if(not passDiPhotonPreselections(current_sample))
            {
                continue;
            }
            
            float weight = computeWeight(current_sample, scale1fb);


            //compute delta R stuff



            branches["process_id"] = process_ids[current_sample];
            branches["year"] = year;
            branches["weight"] = weight;
            branches["mgg"] = nt.gg_mass();

            branches["lead_pho_ptmgg"] = nt.selectedPhoton_pt()[0] / nt.gg_mass();
            branches["sublead_pho_ptmgg"] = nt.selectedPhoton_pt()[1] / nt.gg_mass();
            branches["lead_pho_pt"] = nt.selectedPhoton_pt()[0];
            branches["lead_pho_eta"] = nt.selectedPhoton_eta()[0];
            branches["lead_pho_phi"] = nt.selectedPhoton_phi()[0];
            branches["lead_pho_idmva"] = nt.selectedPhoton_mvaID()[0];
            branches["lead_pho_pixelSeed"] = nt.selectedPhoton_pixelSeed()[0];


            branches["sublead_pho_pt"] = nt.selectedPhoton_pt()[1];
            branches["sublead_pho_eta"] = nt.selectedPhoton_eta()[1];
            branches["sublead_pho_phi"] = nt.selectedPhoton_phi()[1];
            branches["sublead_pho_idmva"] = nt.selectedPhoton_mvaID()[1];
            branches["sublead_pho_pixelSeed"] = nt.selectedPhoton_pixelSeed()[1];

            branches["nJet"] = nt.nJet();
            branches["MET_pt"] = nt.MET_pt();
            branches["MET_phi"] = nt.MET_phi();
            branches["diphoton_eta"] = nt.gg_eta();
            branches["diphoton_pt"] = nt.gg_pt();
            branches["diphoton_phi"] = nt.gg_phi();
            branches["diphoton_deltaR"] = deltaR(nt.selectedPhoton_eta()[0], nt.selectedPhoton_phi()[0], nt.selectedPhoton_eta()[1], nt.selectedPhoton_phi()[1]);

            //write out branches
            if(not flag)
            {
                for(auto &it:branches)
                {
                    output_tree->Branch(it.first.c_str(), &it.second);
                }
                flag = true;
            }

            output_tree->Fill();

        }

        delete file;
    }
    bar.finish();

}

/*
 * Elaborate stuff to read file names from text files
 */
void addToChain(std::unordered_map<std::string, std::vector<std::string>> datasets,TChain *ch, TString set)
{
    std::string setToAdd(set.Data());

    if(datasets[setToAdd].size() == 0) //illegal file name!
    {
        std::cout<<"wrong dataset name!"<<std::endl;
        exit(1);
    }
    for(auto &it:datasets[setToAdd])
    {
        ch->Add(it.c_str());
    }
}

void readFromTextFile(std::string fileName, std::unordered_map<std::string, std::vector<std::string>>& datasets, std::unordered_map<std::string, float>& scale1fb)
{
    //read stuff from fileName
    std::fstream f(fileName.c_str(), std::ios::in);
    std::string line;
    std::string currentDS;
    
    while(std::getline(f, line))
    {
        if(line.length() == 0)
        {
            continue;
        }
        if(line.at(0) == '#')
        {
            continue;
        }
        if(line.find("ds") == 0)
        {
           currentDS = line.substr(line.find("ds") + 3, std::string::npos); 
        }
        else if(line.find("scale1fb") == 0)
        {
            scale1fb[currentDS] = stof(line.substr(9, std::string::npos));
        }
        else
        {
            line += "/*.root";
            datasets[currentDS].push_back(line);
        }
    }
}

void addHists(std::unordered_map<std::string, TH1D*>& hists1D2016, std::unordered_map<std::string, TH1D*>& hists1D2017, std::unordered_map<std::string, TH1D*>& hists1D2018, std::unordered_map<std::string, TH1D*>& hists1DTotal)
{
     for(auto&it : hists1D2016)
    {
        std::string sample = it.first;
        hists1DTotal[sample] = (TH1D*)(hists1D2016[sample]->Clone(sample.c_str()));
        hists1DTotal[sample]->SetDirectory(rootdir);
        hists1DTotal[sample]->Add(hists1D2017[sample]);
        hists1DTotal[sample]->Add(hists1D2018[sample]);
    }
}

int main(int argc, char* argv[])
{
    cxxopts::Options options("looper", "Prototype looper");
    options.add_options()
        ("no_data", "don't run on data", cxxopts::value<bool>()->default_value("false"))
        ("select_sample", "run only on one sample", cxxopts::value<std::string>()->default_value(""))
        ("output", "output root file name", cxxopts::value<std::string>()->default_value("output.root"))
        ("h, help", "Print help");

    auto result = options.parse(argc, argv);

    if(result.count("help"))
    {
        std::cout<<options.help()<<std::endl;
        exit(1);
    }

    std::string outputName = result["output"].as<std::string>();

    outFile = new TFile(outputName.c_str(), "RECREATE");
    rootdir = gDirectory->GetDirectory("Rint:");
    lumi[2016] = 35.9;
    lumi[2017] = 41.5;
    lumi[2018] = 59.8; 

    std::string select_samples = result["select_sample"].as<std::string>();

    is_resonant["Data"] = false;
    is_resonant["DiPhoton"] = false;
    is_resonant["GJets_HT-100To200"] = false;
    is_resonant["GJets_HT-200To400"] = false;
    is_resonant["GJets_HT-400To600"] = false;
    is_resonant["GJets_HT-40To100"] = false;
    is_resonant["GJets_HT-600ToInf"] = false;
    is_resonant["HH_ggTauTau"] = true;
    is_resonant["TTGG"] = false;
    is_resonant["TTGamma"] = false;
    is_resonant["TTBar"] = false;
    is_resonant["VH"] = true;
    is_resonant["WGamma"] = false;
    is_resonant["ZGamma"] = false;
    is_resonant["ttH"] = true;
    is_resonant["ggH"] = true;
    is_resonant["VBFH"] = true;

    process_ids["Data"] = 0;
    process_ids["HH_ggTauTau"] = -1;
    process_ids["DiPhoton"] = 1;
    process_ids["GJets_HT-100To200"] = 2;
    process_ids["GJets_HT-200To400"] = 2;
    process_ids["GJets_HT-400To600"] = 2;
    process_ids["GJets_HT-600ToInf"] = 2;
    process_ids["GJets_HT-40To100"] = 2;
    process_ids["TTGG"] = 3;
    process_ids["TTGamma"] = 4;
    process_ids["TTBar"] = 5;
    process_ids["VH"] = 6;
    process_ids["WGamma"] = 7;
    process_ids["ZGamma"] = 8;
    process_ids["ttH"] = 9;
    process_ids["ggH"] = 10;
    process_ids["VBFH"] = 11;


    TChain *ch = new TChain("Events");
    //hardcoding paths
    std::unordered_map<std::string, std::vector<std::string>> samples_2016;
    std::unordered_map<std::string, std::vector<std::string>> samples_2017;
    std::unordered_map<std::string, std::vector<std::string>> samples_2018;
    //elaborate gymnatics for scale1fb
    std::unordered_map<std::string, float> scale1fb_2016;
    std::unordered_map<std::string, float> scale1fb_2017;
    std::unordered_map<std::string, float> scale1fb_2018;

    std::unordered_map<std::string, TH1D*> hists1D_2016;
    std::unordered_map<std::string, TH1D*> hists1D_2017;
    std::unordered_map<std::string, TH1D*> hists1D_2018;
    std::unordered_map<std::string, TH1D*> hists1DTotal;

    outFile->cd();
    output_tree = new TTree("t", "A Baby Ntuple");


    readFromTextFile("samples_2016.txt", samples_2016, scale1fb_2016);
    readFromTextFile("samples_2017.txt", samples_2017, scale1fb_2017);
    readFromTextFile("samples_2018.txt", samples_2018, scale1fb_2018);
    for(auto& jt:samples_2016)
    {
        std::string sample = jt.first;
        if(select_samples != "" and sample != select_samples)
        {
            continue;
        }
        if(result["no_data"].as<bool>() and sample == "Data")
        {
            continue;
        }


        TChain *ch_2016 = new TChain("Events");
        TChain *ch_2017 = new TChain("Events");
        TChain *ch_2018 = new TChain("Events");

        addToChain(samples_2016, ch_2016, TString(sample.c_str()));
        addToChain(samples_2017, ch_2017, TString(sample.c_str()));
        addToChain(samples_2018, ch_2018, TString(sample.c_str()));

        std::cout<<"sample name = "<<sample<<std::endl;
        loopTChain(ch_2016, 2016, scale1fb_2016[sample], hists1D_2016, sample);
        delete ch_2016;
        loopTChain(ch_2017, 2017, scale1fb_2017[sample], hists1D_2017, sample);
        delete ch_2017;
        loopTChain(ch_2018, 2018, scale1fb_2018[sample], hists1D_2018, sample);
        delete ch_2018;
    }

    outFile->cd();
    output_tree->Write();
    outFile->Write();
    outFile->Close();

    return 0;
}
