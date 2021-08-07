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
std::unordered_map<std::string, float> deepcsv_thresholds_2016;
std::unordered_map<std::string, float> deepcsv_thresholds_2017;
std::unordered_map<std::string, float> deepcsv_thresholds_2018;

TFile* outFile;
TTree* output_tree;
TDirectory* rootdir;

float deltaR(float eta1, float phi1, float eta2, float phi2)
{
    return sqrt((eta1 - eta2) * (eta1 - eta2) + (phi1 - phi2) * (phi1 - phi2));
}

float deltaR(LorentzVector& v1, LorentzVector& v2)
{
    return sqrt((v1.eta() - v2.eta()) * (v1.eta() - v2.eta()) + (v1.phi() - v2.phi()) *(v1.phi() - v2.phi()));
}


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


bool passElectronPreselections(int iEl)
{
    bool pt_cut = nt.Electron_pt()[iEl] > 10;
    bool eta_cut = std::abs(nt.Electron_eta()[iEl]) < 2.4;
    bool dR_photons = true;
    for(size_t iPh = 0; iPh < nt.Photon_pt().size(); iPh++)
    {  
        if(deltaR(nt.Electron_eta()[iEl], nt.Electron_phi()[iEl], nt.Photon_eta()[iPh], nt.Photon_phi()[iPh]) < 0.2)
        {
            dR_photons = false;
            break;
        }
    }
    //ID cuts
    bool id_cut = nt.Electron_mvaFall17V2Iso_WP90()[iEl] or ((nt.Electron_mvaFall17V2noIso_WP90()[iEl]) and (nt.Electron_pfRelIso03_all()[iEl] < 0.3));
    //Impact parameter cuts
    bool ip_dxy_cut = std::abs(nt.Electron_dxy()[iEl]) < 0.045;
    bool ip_dz_cut = std::abs(nt.Electron_dz()[iEl]) < 0.2;

    return pt_cut and eta_cut and dR_photons and id_cut and ip_dxy_cut and ip_dz_cut;
}

bool passMuonPreselections(unsigned int iMu)
{
    bool pt_cut = nt.Muon_pt()[iMu] > 10;  
    bool eta_cut = std::abs(nt.Muon_eta()[iMu]) < 2.4;
    bool dR_photons = true;
    for(size_t iPh = 0; iPh < nt.Photon_pt().size(); iPh++)
    {  
        if(deltaR(nt.Muon_eta()[iMu], nt.Muon_phi()[iMu], nt.Photon_eta()[iPh], nt.Photon_phi()[iPh]) < 0.2)
        {
            dR_photons = false;
            break;
        }
    }
    //ID cuts
    bool ip_dxy_cut = std::abs(nt.Muon_dxy()[iMu]) < 0.045;
    bool ip_dz_cut = std::abs(nt.Muon_dz()[iMu]) < 0.2;

    bool id_cut = nt.Muon_pt()[iMu] > 0; //TODO:DUMMY CUT
    bool iso_cut = nt.Muon_pfRelIso03_all()[iMu] < 0.3;

    return pt_cut and eta_cut and dR_photons and id_cut and ip_dxy_cut and ip_dz_cut and iso_cut; 
   
}

bool passTauPreselections(unsigned int iTau, std::vector<bool> goodElectrons, std::vector<bool> goodMuons)
{
    //hadronic tau
    bool pt_cut = nt.Tau_pt()[iTau] > 10;
    bool eta_cut = std::abs(nt.Tau_eta()[iTau]) < 2.4;
    bool decay_mode_cut = (nt.Tau_idDecayModeNewDMs()[iTau]);
    
    bool id_electron_cut = nt.Tau_idDeepTau2017v2p1VSe()[iTau] >= 1;
    bool id_muon_cut = nt.Tau_idDeepTau2017v2p1VSmu()[iTau] >= 0;
    bool id_jet_cut = nt.Tau_idDeepTau2017v2p1VSjet()[iTau] >= 7;

    //distance from good leptons
    bool dR_electrons = true;
    bool dR_muons = true;
    bool dR_photons = true;

    for(size_t iEl = 0; iEl < nt.Electron_pt().size(); iEl++)
    {
        if(not goodElectrons[iEl]) continue;

        if(deltaR(nt.Electron_eta()[iEl], nt.Electron_phi()[iEl], nt.Tau_eta()[iTau], nt.Tau_phi()[iTau]) < 0.2)
        {
            dR_electrons = false;
            break;
        }

    }

    for(size_t iMu = 0; iMu < nt.Muon_pt().size(); iMu++)
    {
        if(not goodMuons[iMu]) continue;

        if(deltaR(nt.Muon_eta()[iMu], nt.Muon_phi()[iMu], nt.Tau_eta()[iTau], nt.Tau_phi()[iTau]) < 0.2)
        {
            dR_muons = false;
            break;
        }

    }

    for(size_t iPh = 0; iPh < nt.Photon_pt().size(); iPh++)
    {
        if(deltaR(nt.Tau_eta()[iTau], nt.Tau_phi()[iTau], nt.Photon_eta()[iPh], nt.Photon_phi()[iPh]) < 0.2)
        {
            dR_photons = false;
            break;
        }

    }

   return pt_cut and eta_cut and decay_mode_cut and id_electron_cut and id_muon_cut and id_jet_cut and dR_electrons and dR_muons and dR_photons; 
}


bool passJetPreselections(unsigned int iJet, std::vector<bool> goodElectrons, std::vector<bool> goodMuons, std::vector<bool> goodTaus)
{
    bool pt_cut = nt.Jet_pt()[iJet] > 25;
    bool eta_cut = std::abs(nt.Jet_eta()[iJet]) < 2.4;
    bool dR_electrons = true;
    bool dR_muons = true;
    bool dR_taus = true;
    bool dR_photons = true;

    for(size_t iEl = 0; iEl < nt.Electron_pt().size(); iEl++)
    {
        if(not goodElectrons[iEl]) continue;
        if(deltaR(nt.Electron_eta()[iEl], nt.Electron_phi()[iEl], nt.Jet_eta()[iJet], nt.Jet_phi()[iJet]) < 0.4)
        {
            dR_electrons = false;
            break;
        }
    }

    for(size_t iMu = 0; iMu < nt.Muon_pt().size(); iMu++)
    {
        if(not goodMuons[iMu]) continue;

        if(deltaR(nt.Muon_eta()[iMu], nt.Muon_phi()[iMu], nt.Jet_eta()[iJet], nt.Jet_phi()[iJet]) < 0.4)
        {
            dR_muons = false;
            break;
        }
    }

    for(size_t iTau = 0; iTau < nt.Tau_pt().size(); iTau++)
    {
        if(not goodTaus[iTau]) continue;
        if(deltaR(nt.Tau_eta()[iTau], nt.Tau_phi()[iTau], nt.Jet_eta()[iJet], nt.Jet_phi()[iJet]) < 0.4)
        {
            dR_taus = false;
            break;
        }
    }

    for(size_t iPho = 0; iPho < nt.Photon_pt().size(); iPho++)
    {
        if(deltaR(nt.Photon_eta()[iPho], nt.Photon_phi()[iPho], nt.Jet_eta()[iJet], nt.Jet_phi()[iJet]) < 0.4)
        {
            dR_photons= false;
            break;
        }
    }
    //ID CUT
    bool nemf_cut = nt.Jet_neEmEF()[iJet] < 0.99;
    bool nh_cut = nt.Jet_neHEF()[iJet] < 0.99;
    bool chf_cut = nt.Jet_chHEF()[iJet] > 0;
    bool chemef_cut = nt.Jet_chEmEF()[iJet] < 0.99;
    bool constituent_cut = nt.Jet_nConstituents()[iJet] > 1;

    bool id_cut = nemf_cut and nh_cut and chf_cut and chemef_cut and constituent_cut;
    
    return pt_cut and eta_cut and dR_electrons and dR_muons and dR_taus and dR_photons and id_cut;
}

float computeWeight(std::string current_sample, float scale1fb)
{
    if(current_sample == "Data")
    {
        return 1.0;
    }
    return nt.genWeight() * scale1fb * lumi[year];
}

    
bool flag = false;
std::unordered_map<std::string, float> branches;

void loopTChain(TChain* ch, int year, float scale1fb, std::string current_sample) 
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

            branches["process_id"] = process_ids[current_sample];
            branches["year"] = year;
            branches["weight"] = weight;
            branches["mgg"] = nt.gg_mass();

            branches["g1_ptmgg"] = nt.selectedPhoton_pt()[0] / nt.gg_mass();
            branches["g2_ptmgg"] = nt.selectedPhoton_pt()[1] / nt.gg_mass();
            branches["g1_pt"] = nt.selectedPhoton_pt()[0];
            branches["g1_eta"] = nt.selectedPhoton_eta()[0];
            branches["g1_phi"] = nt.selectedPhoton_phi()[0];
            branches["g1_idmva"] = nt.selectedPhoton_mvaID()[0];
            branches["g1_pixVeto"] = nt.selectedPhoton_pixelSeed()[0];


            branches["g2_pt"] = nt.selectedPhoton_pt()[1];
            branches["g2_eta"] = nt.selectedPhoton_eta()[1];
            branches["g2_phi"] = nt.selectedPhoton_phi()[1];
            branches["g2_idmva"] = nt.selectedPhoton_mvaID()[1];
            branches["g2_pixVeto"] = nt.selectedPhoton_pixelSeed()[1];

            branches["nJet"] = nt.nJet();
            branches["MET_pt"] = nt.MET_pt();
            branches["MET_phi"] = nt.MET_phi();
            branches["gg_eta"] = nt.gg_eta();
            branches["gg_pt"] = nt.gg_pt();
            branches["gg_phi"] = nt.gg_phi();
            branches["gg_dR"] = deltaR(nt.selectedPhoton_eta()[0], nt.selectedPhoton_phi()[0], nt.selectedPhoton_eta()[1], nt.selectedPhoton_phi()[1]);

            //lepton and jet branches - default values
            
            branches["ele1_pt"] = -999;
            branches["ele1_eta"] = -999;
            branches["ele1_phi"] = -999;
            branches["ele1_tightID"] = -999;
            branches["ele1_charge"] = -999;
            branches["muon1_pt"] = -999;
            branches["muon1_eta"] = -999;
            branches["muon1_phi"] = -999;
            branches["muon1_tightID"] = -999;
            branches["muon1_charge"] = -999;

            branches["tau1_pt"] = -999;
            branches["tau1_eta"] = -999;
            branches["tau1_phi"] = -999;
            branches["tau1_charge"] = -999;
            branches["tau1_id_vs_e"] = -999;
            branches["tau1_id_vs_m"] = -999;
            branches["tau1_id_vs_j"] = -999;

            branches["tau2_pt"] = -999;
            branches["tau2_eta"] = -999;
            branches["tau2_phi"] = -999;
            branches["tau2_charge"] = -999;
            branches["tau2_id_vs_e"] = -999;
            branches["tau2_id_vs_m"] = -999;
            branches["tau2_id_vs_j"] = -999;

            branches["jet1_pt"] = -999;
            branches["jet1_eta"] = -999;
            branches["jet1_bTag"] = -999;
            branches["jet1_id"] = -999;
            branches["jet2_pt"] = -999;
            branches["jet2_eta"] = -999;
            branches["jet2_bTag"] = -999;
            branches["jet2_id"] = -999;
            branches["m_tautau_vis"] = -999;

            //loop through leptons and do the pre-selections
            std::vector<bool> goodElectrons, goodMuons, goodTaus;

            for(unsigned int iEl = 0; iEl < nt.Electron_pt().size(); iEl++)
            {
                if(passElectronPreselections(iEl))
                {
                    goodElectrons.push_back(true);
                }
                else
                {
                    goodElectrons.push_back(false);
                }
            }

            for(unsigned int iMu = 0; iMu < nt.Muon_pt().size(); iMu++)
            {
                if(passMuonPreselections(iMu))
                {
                    goodMuons.push_back(true);
                }
                else
                {
                    goodMuons.push_back(false);
                }
            }
            for(unsigned int iTau = 0; iTau < nt.Tau_pt().size(); iTau++)
            {
                if(passTauPreselections(iTau, goodElectrons, goodMuons))
                {
                    goodTaus.push_back(true);
                }
                else
                {
                    goodTaus.push_back(false);
                }
            }

            //dilepton categories
            //priority order - mumu, emu, ee. Do not save these!
            int Category = -1;
            size_t nGoodMuons(0), nGoodElectrons(0), nGoodTaus(0);
            for(auto it:goodMuons)
            {
                nGoodMuons += it;
            }
            for(auto it:goodElectrons)
            {
                nGoodElectrons += it;
            }
            for(auto it:goodTaus)
            {
                nGoodTaus += it;
            }
            int decay_1_index, decay_2_index;

            for(size_t i = 0; i < nt.Muon_pt().size(); i++)
            {
                if(not goodMuons[i]) continue;
                for(size_t j  = i+1; j < nt.Muon_pt().size(); j++)
                {
                    if(not goodMuons[j]) continue;

                    if(nt.Muon_charge()[i] * nt.Muon_charge()[j] == -1 and nGoodElectrons + nGoodMuons == 2)
                    {
                        Category = 4;
                        decay_1_index = i;
                        decay_2_index = j;
                    }
                }
                for(size_t j = 0; j < nt.Electron_pt().size(); j++)
                {
                    if(not goodElectrons[i]) continue;
                    if(nt.Muon_charge()[i] * nt.Electron_charge()[j] == -1 and nGoodElectrons + nGoodMuons == 2)
                    {
                        Category = 6;
                        decay_1_index = i;
                        decay_2_index = j;
                    }
                }
            }
            for(size_t i = 0; i < nt.Electron_pt().size(); i++)
            {
                if(not goodElectrons[i]) continue;
                for(size_t j = i+1; j < nt.Electron_pt().size(); j++)
                {
                    if(not goodElectrons[j]) continue;
                    if(nt.Electron_charge()[i] * nt.Electron_charge()[j] == -1 and nGoodElectrons + nGoodMuons == 2)
                    {
                        Category = 5;
                        decay_1_index = i;
                        decay_2_index = j;
                    }
                }
            }

            if(Category < 0)
            {
                if(nGoodMuons == 1 and nGoodElectrons == 0)
                {
                    for(size_t i = 0; i < nt.Muon_pt().size(); i++)
                    {
                        if(not goodMuons[i]) continue;
                        decay_1_index = i;
                        for(size_t j = 0; j < nt.Tau_pt().size(); j++)
                        {
                            if(not goodTaus[i]) continue;
                            if(nt.Muon_charge()[i] * nt.Tau_charge()[j] == -1)
                            {
                                Category = 1;
                                decay_2_index = j;
                            }
                        }
                    }
                }
                else if(nGoodMuons == 0 and nGoodElectrons == 1)
                {
                    for(size_t i = 0; i < nt.Electron_pt().size(); i++)
                    {
                        if(not goodElectrons[i]) continue;
                        decay_1_index = i;
                        for(size_t j = 0; j < nt.Tau_pt().size(); j++)
                        {
                            if(not goodTaus[i]) continue;
                            if(nt.Electron_charge()[i] * nt.Tau_charge()[j] == -1)
                            {
                                Category = 2;
                                decay_2_index = j;
                            }
                        }
                    }
                   
                }
                else if(nGoodMuons == 0 and nGoodElectrons == 0)
                {
                    for(size_t i = 0; i < nt.Tau_pt().size(); i++)
                    {
                        if(not goodTaus[i]) continue;
                        for(size_t j = i+1; j < nt.Tau_pt().size(); j++)
                        {
                            if(not goodTaus[j]) continue;
                            if(nt.Tau_charge()[i] * nt.Tau_charge()[j] == -1)
                            {
                                decay_1_index = i;
                                decay_2_index = j;
                                Category = 3;
                            }
                        }
                    }
                }
            }

            //jets
            int nJet = 0;
            int jet1(-1), jet2(-1);
            for(size_t iJet = 0; iJet < nt.Jet_pt().size(); iJet++)
            {
                if(passJetPreselections(iJet, goodElectrons, goodMuons, goodTaus))
                {
                    if(jet1 < 0)
                    {
                        jet1 = iJet;
                    }
                    else if(jet2 < 0)
                    {
                        jet2 = iJet;
                    }
                }
            }
            //FIXME: ONLY ACCEPTING at least one had tau!
            if(nGoodTaus < 1) continue;

            //fill relevant branches
            if(Category == 1)
            {
                //muon 1 and tau1
                branches["muon1_pt"] = nt.Muon_pt()[decay_1_index];
                branches["muon1_eta"] = nt.Muon_eta()[decay_1_index];
                branches["muon1_phi"] = nt.Muon_phi()[decay_1_index];
                branches["muon1_tightID"] = nt.Muon_tightId()[decay_1_index];
                branches["muon1_charge"] = nt.Muon_charge()[decay_1_index];

                branches["tau1_pt"] = nt.Tau_pt()[decay_2_index];
                branches["tau1_eta"] = nt.Tau_eta()[decay_2_index];
                branches["tau1_phi"] = nt.Tau_phi()[decay_2_index];
                branches["tau1_id_vs_e"] = nt.Tau_idDeepTau2017v2p1VSe()[decay_2_index];
                branches["tau1_id_vs_m"] = nt.Tau_idDeepTau2017v2p1VSmu()[decay_2_index];
                branches["tau1_id_vs_j"] = nt.Tau_idDeepTau2017v2p1VSjet()[decay_2_index];
                
                branches["m_tautau_vis"] = (nt.Muon_p4()[decay_1_index] + nt.Tau_p4()[decay_2_index]).M();
            }
            else if(Category == 2)
            {
                branches["ele1_pt"] = nt.Electron_pt()[decay_1_index];
                branches["ele1_eta"] = nt.Electron_eta()[decay_1_index];
                branches["ele1_phi"] = nt.Electron_phi()[decay_1_index];
                branches["ele1_tightID"] = nt.Electron_mvaFall17V2Iso_WP80()[decay_1_index];
                branches["ele1_charge"] = nt.Electron_charge()[decay_1_index];

                branches["tau1_pt"] = nt.Tau_pt()[decay_2_index];
                branches["tau1_eta"] = nt.Tau_eta()[decay_2_index];
                branches["tau1_phi"] = nt.Tau_phi()[decay_2_index];
                branches["tau1_id_vs_e"] = nt.Tau_idDeepTau2017v2p1VSe()[decay_2_index];
                branches["tau1_id_vs_m"] = nt.Tau_idDeepTau2017v2p1VSmu()[decay_2_index];
                branches["tau1_id_vs_j"] = nt.Tau_idDeepTau2017v2p1VSjet()[decay_2_index];
                branches["m_tautau_vis"] = (nt.Electron_p4()[decay_1_index] + nt.Tau_p4()[decay_2_index]).M();


            }
            else if(Category == 3)
            {
                branches["tau1_pt"] = nt.Tau_pt()[decay_1_index];
                branches["tau1_eta"] = nt.Tau_eta()[decay_1_index];
                branches["tau1_phi"] = nt.Tau_phi()[decay_1_index];
                branches["tau1_id_vs_e"] = nt.Tau_idDeepTau2017v2p1VSe()[decay_1_index];
                branches["tau1_id_vs_m"] = nt.Tau_idDeepTau2017v2p1VSmu()[decay_1_index];
                branches["tau2_id_vs_j"] = nt.Tau_idDeepTau2017v2p1VSjet()[decay_1_index];


                branches["tau2_pt"] = nt.Tau_pt()[decay_2_index];
                branches["tau2_eta"] = nt.Tau_eta()[decay_2_index];
                branches["tau2_phi"] = nt.Tau_phi()[decay_2_index];
                branches["tau2_id_vs_e"] = nt.Tau_idDeepTau2017v2p1VSe()[decay_2_index];
                branches["tau2_id_vs_m"] = nt.Tau_idDeepTau2017v2p1VSmu()[decay_2_index];
                branches["tau2_id_vs_j"] = nt.Tau_idDeepTau2017v2p1VSjet()[decay_2_index];

                branches["m_tautau_vis"] = (nt.Tau_p4()[decay_1_index] + nt.Tau_p4()[decay_2_index]).M();

            }

            if(jet1 >= 0)
            {
                branches["jet1_pt"] = nt.Jet_pt()[jet1];
                branches["jet1_eta"] = nt.Jet_eta()[jet1];
                branches["jet1_bTag"] = nt.Jet_btagDeepFlavB()[jet1];
                branches["jet1_id"] = nt.Jet_jetId()[jet1]; //FIXME
            }
            if(jet2 > 0)
            {
                branches["jet2_pt"] = nt.Jet_pt()[jet2];
                branches["jet2_eta"] = nt.Jet_eta()[jet2];
                branches["jet2_bTag"] = nt.Jet_btagDeepFlavB()[jet2];
                branches["jet2_id"] = nt.Jet_jetId()[jet2]; //FIXME
            }
            branches["Category"] = Category;

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
    process_ids["DiPhoton"] = 3;
    process_ids["GJets_HT-100To200"] = 8;
    process_ids["GJets_HT-200To400"] = 8;
    process_ids["GJets_HT-400To600"] = 8;
    process_ids["GJets_HT-600ToInf"] = 8;
    process_ids["GJets_HT-40To100"] = 8;
    process_ids["TTGG"] = 7;
    process_ids["TTGamma"] = 6;
    process_ids["TTBar"] = 5;
    process_ids["VH"] = 9;
    process_ids["WGamma"] = 4;
    process_ids["ZGamma"] = 2;
    process_ids["ttH"] = 10;
    process_ids["ggH"] = 11;
    process_ids["VBFH"] = 12;


    TChain *ch = new TChain("Events");
    //hardcoding paths
    std::unordered_map<std::string, std::vector<std::string>> samples_2016;
    std::unordered_map<std::string, std::vector<std::string>> samples_2017;
    std::unordered_map<std::string, std::vector<std::string>> samples_2018;
    //elaborate gymnatics for scale1fb
    std::unordered_map<std::string, float> scale1fb_2016;
    std::unordered_map<std::string, float> scale1fb_2017;
    std::unordered_map<std::string, float> scale1fb_2018;

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
        loopTChain(ch_2016, 2016, scale1fb_2016[sample], sample);
        delete ch_2016;
        loopTChain(ch_2017, 2017, scale1fb_2017[sample], sample);
        delete ch_2017;
        loopTChain(ch_2018, 2018, scale1fb_2018[sample], sample);
        delete ch_2018;
    }

    outFile->cd();
    output_tree->Write();
    outFile->Write();
    outFile->Close();

    return 0;
}
