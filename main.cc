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
#include "Math/VectorUtil.h"

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



float MT(float pt1, float pt2, float phi1, float phi2)
{
    return sqrt(2 * pt1 * pt2 * (1 - cos(phi1 - phi2)));
}

bool passElectronPreselections(int iEl)
{
    bool pt_cut = nt.Electron_pt()[iEl] > 7;
    bool eta_cut1 = std::abs(nt.Electron_eta()[iEl]) < 2.5;
    bool eta_cut2 = std::abs(nt.Electron_eta()[iEl]) < 1.4442;
    bool eta_cut3 = std::abs(nt.Electron_eta()[iEl]) > 1.566;

    bool eta_cut = eta_cut1 and (eta_cut2 or eta_cut3);

    //ID cuts
    bool id_cut = nt.Electron_mvaFall17V2Iso_WP90()[iEl] or ((nt.Electron_mvaFall17V2noIso_WP90()[iEl]) and (nt.Electron_pfRelIso03_all()[iEl] < 0.3));
    //Impact parameter cuts
    bool ip_dxy_cut = std::abs(nt.Electron_dxy()[iEl]) < 0.045;
    bool ip_dz_cut = std::abs(nt.Electron_dz()[iEl]) < 0.2;

    return pt_cut and eta_cut and id_cut and ip_dxy_cut and ip_dz_cut;
}

bool passMuonPreselections(unsigned int iMu)
{
    bool pt_cut = nt.Muon_pt()[iMu] > 5;  
    bool eta_cut = std::abs(nt.Muon_eta()[iMu]) < 2.4;
    bool global_muon = nt.Muon_isGlobal()[iMu];

    //ID cuts
    bool ip_dxy_cut = std::abs(nt.Muon_dxy()[iMu]) < 0.045;
    bool ip_dz_cut = std::abs(nt.Muon_dz()[iMu]) < 0.2;

    bool id_cut = nt.Muon_pt()[iMu] > 0; //TODO:DUMMY CUT
    bool iso_cut = nt.Muon_pfRelIso03_all()[iMu] < 0.3;


    return pt_cut and eta_cut and global_muon and ip_dxy_cut and ip_dz_cut and id_cut and iso_cut;
   
}

bool passTauPreselections(unsigned int iTau, std::vector<bool> goodElectrons, std::vector<bool> goodMuons)
{
    //hadronic tau
    bool pt_cut = nt.Tau_pt()[iTau] > 18;
    bool eta_cut = std::abs(nt.Tau_eta()[iTau]) < 2.3;
    bool decay_mode_cut = (nt.Tau_idDecayModeNewDMs()[iTau]);

    bool ip_dz_cut = std::abs(nt.Tau_dz()[iTau]) < 0.2;

    bool id_electron_cut = nt.Tau_idDeepTau2017v2p1VSe()[iTau] >= 1;
    bool id_muon_cut = nt.Tau_idDeepTau2017v2p1VSmu()[iTau] >= 0;
    bool id_jet_cut = nt.Tau_idDeepTau2017v2p1VSjet()[iTau] >= 7;

    //distance from good leptons
    bool dR_electrons = true;
    bool dR_muons = true;

    for(size_t iEl = 0; iEl < nt.Electron_pt().size(); iEl++)
    {
        if(not goodElectrons[iEl]) continue; //only selected electrons

        if(ROOT::Math::VectorUtil::DeltaR(nt.Electron_p4()[iEl], nt.Tau_p4()[iTau]) < 0.2)
        {
            dR_electrons = false;
            break;
        }

    }

    for(size_t iMu = 0; iMu < nt.Muon_pt().size(); iMu++)
    {
        if(not goodMuons[iMu]) continue; //only selected muons

        if(ROOT::Math::VectorUtil::DeltaR(nt.Muon_p4()[iMu], nt.Tau_p4()[iTau]) < 0.2)
        {
            dR_muons = false;
            break;
        }

    }

    return pt_cut and eta_cut and decay_mode_cut and ip_dz_cut and id_electron_cut and id_muon_cut and id_jet_cut and dR_electrons and dR_muons;
}


bool passIsotrackPreselection(unsigned int iTrk, std::vector<bool> goodElectrons, std::vector<bool> goodMuons, std::vector<bool> goodTaus)
{
    bool fromPV = nt.IsoTrack_fromPV()[iTrk]; //0th vertex
    bool pfCand = nt.IsoTrack_isPFcand()[iTrk];
    LorentzVector isoTrackP4(nt.IsoTrack_pt()[iTrk], nt.IsoTrack_eta()[iTrk], nt.IsoTrack_phi()[iTrk], 0);
    bool dR_electrons = true, dR_muons = true, dR_taus = true;

    for(size_t iTau = 0; iTau < nt.Tau_pt().size(); iTau++)
    {
        if(not goodTaus[iTau]) continue;

        if(ROOT::Math::VectorUtil::DeltaR(isoTrackP4, nt.Tau_p4()[iTau]) <= 0.2)
        {
            dR_taus = false;
            break;
        }

    }

    return fromPV and pfCand and dR_taus; 


}

bool passJetPreselections(unsigned int iJet, std::vector<bool> goodElectrons, std::vector<bool> goodMuons, std::vector<bool> goodTaus)
{
    bool pt_cut = nt.Jet_pt()[iJet] > 25;
    bool eta_cut = std::abs(nt.Jet_eta()[iJet]) < 2.4;
    bool dR_electrons = true;
    bool dR_muons = true;
    bool dR_taus = true;

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

    bool nemf_cut = nt.Jet_neEmEF()[iJet] < 0.99;
    bool nh_cut = nt.Jet_neHEF()[iJet] < 0.99;
    bool chf_cut = nt.Jet_chHEF()[iJet] > 0;
    bool chemef_cut = nt.Jet_chEmEF()[iJet] < 0.99;
    bool constituent_cut = nt.Jet_nConstituents()[iJet] > 1;

    bool id_cut = nemf_cut and nh_cut and chf_cut and chemef_cut and constituent_cut;
    
    return pt_cut and eta_cut and dR_electrons and dR_muons and dR_taus and id_cut;
}

float computeWeight(std::string current_sample, float scale1fb)
{
    if(current_sample == "Data")
    {
        return 1.0;
    }
    return nt.genWeight() * scale1fb * lumi[year];
}

float computeRotationOffset(LorentzVector visibleTau)
{
    return -visibleTau.phi();
}

LorentzVector computeHadronicActivity()
{
    //all jets pt > 15, so we add them blindly!
    LorentzVector hadronicActivity(0,0,0,0);
    for(auto &it:nt.Jet_p4())
    {
        hadronicActivity += it;
    }
    return hadronicActivity;
}

bool flag = false;
std::unordered_map<std::string, float> branches;

void loopTChain(TChain* ch, int year, float scale1fb, std::string current_sample, bool sync=false) 
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

            float weight = computeWeight(current_sample, scale1fb);

            branches["process_id"] = process_ids[current_sample];
            branches["year"] = year;
            branches["weight"] = weight;

            branches["mT_decay1_MET"] = -999;
            branches["mT_decay2_MET"] = -999;

            //lepton and jet branches - default values
            branches["jet1_pt"] = -999;
            branches["jet1_eta"] = -999;
            branches["jet1_bTag"] = -999;
            branches["jet1_id"] = -999;
            branches["jet2_pt"] = -999;
            branches["jet2_eta"] = -999;
            branches["jet2_bTag"] = -999;
            branches["jet2_id"] = -999;
            branches["m_tautau_vis"] = -999;
            branches["pt_tautau_vis"] = -999;
            branches["eta_tautau_vis"] = -999;
            branches["phi_tautau_vis"] = -999;

            //loop through leptons and do the pre-selections
            std::vector<bool> goodElectrons, goodMuons, goodTaus;
            std::vector<size_t> goodMuonIndices, goodElectronIndices, goodTauIndices;
            for(unsigned int iEl = 0; iEl < nt.Electron_pt().size(); iEl++)
            {
                if(passElectronPreselections(iEl))
                {
                    goodElectrons.push_back(true);
                    goodElectronIndices.push_back(iEl);
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
                    goodMuonIndices.push_back(iMu);
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
                    goodTauIndices.push_back(iTau);
                }
                else
                {
                    goodTaus.push_back(false);
                }
            }

            std::vector<bool> goodIsoTracks;
            std::vector<int> goodIsoTrackIndices;
            for(size_t iTrk = 0; iTrk < nt.IsoTrack_pt().size(); iTrk++)
            {
                if(passIsotrackPreselection(iTrk, goodElectrons, goodMuons, goodTaus))
                {
                    goodIsoTracks.push_back(iTrk); 
                    goodIsoTrackIndices.push_back(iTrk);
                }
                else
                {
                    goodIsoTracks.push_back(false);
                }
            }

            //dilepton categories - Reproducing Leonardo's glorious selections
            int Category = -999;
            int lep1_pdgID = -999, lep2_pdgID = -999, lep1_charge = -999, lep2_charge = -999;
            float lep1_pt = -999, lep1_eta = -999, lep1_phi = -999, lep1_tightID = -999, lep1_id_vs_e = -999, lep1_id_vs_m = -999, lep1_id_vs_j = -999, lep1_mass = -999;
            float lep2_pt = -999, lep2_eta = -999, lep2_phi = -999, lep2_tightID = -999, lep2_id_vs_e = -999, lep2_id_vs_m = -999, lep2_id_vs_j = -999, lep2_mass = -999;

            size_t nGoodMuons(0), nGoodElectrons(0), nGoodTaus(0), nGoodIsoTracks;

            nGoodMuons = goodMuonIndices.size();
            nGoodElectrons = goodElectronIndices.size();
            nGoodTaus = goodTauIndices.size();
            nGoodIsoTracks = goodIsoTrackIndices.size();

            bool ZFlag = false;
            //FIXME:Checking only good electrons and good muons!
            for(size_t i = 0; i < nGoodElectrons;i++)
            {
                for(size_t j = i + 1; j < nGoodElectrons; j++)
                {
                    if(nt.Electron_charge()[goodElectronIndices[i]] * nt.Electron_charge()[goodElectronIndices[j]] < 0)
                    {
                        float mll = (nt.Electron_p4()[goodElectronIndices[i]] + nt.Electron_p4()[goodElectronIndices[j]]).M();
                        if(mll >= 70 and mll <= 110)
                        {
                            ZFlag = true;
                        }
                    }
                }
            }

            for(size_t i = 0; i < nGoodMuons;i++)
            {
                for(size_t j = i + 1; j < nGoodMuons; j++)
                {
                    if(nt.Muon_charge()[goodMuonIndices[i]] * nt.Muon_charge()[goodMuonIndices[j]] < 0)
                    {
                        float mll = (nt.Muon_p4()[goodMuonIndices[i]] + nt.Muon_p4()[goodMuonIndices[j]]).M();
                        if(mll >= 70 and mll <= 110)
                        {
                            ZFlag = true;
                        }
                    }
                }
            }
            //Z boson veto! - all pairs!
            if(ZFlag) continue;

            int decay_1_index, decay_2_index;


            //Implementing Claudio's suggestions
            for(size_t i = 0; i < nGoodTaus; i++)
            {
                for(size_t j = i+1; j < nGoodTaus; j++)
                {
                
                    if(nt.Tau_charge()[goodTauIndices[i]] * nt.Tau_charge()[goodTauIndices[j]] < 0)
                    {  
                        Category = 3;                  
                        decay_1_index = i;
                        decay_2_index = j;
                        lep1_pt = nt.Tau_pt()[goodTauIndices[i]];
                        lep1_eta = nt.Tau_eta()[goodTauIndices[i]];
                        lep1_phi = nt.Tau_phi()[goodTauIndices[i]];
                        lep1_mass = nt.Tau_mass()[goodTauIndices[i]];
                        lep1_id_vs_e = nt.Tau_idDeepTau2017v2p1VSe()[goodTauIndices[i]];
                        lep1_id_vs_m = nt.Tau_idDeepTau2017v2p1VSmu()[goodTauIndices[i]];
                        lep1_id_vs_j = nt.Tau_idDeepTau2017v2p1VSjet()[goodTauIndices[i]];
                        lep1_charge = nt.Tau_charge()[goodTauIndices[i]];
                        lep1_pdgID = nt.Tau_charge()[goodTauIndices[i]] * 15;

                        lep2_pt = nt.Tau_pt()[goodTauIndices[j]];
                        lep2_eta = nt.Tau_eta()[goodTauIndices[j]];
                        lep2_phi = nt.Tau_phi()[goodTauIndices[j]];
                        lep2_mass = nt.Tau_mass()[goodTauIndices[j]];
                        lep2_id_vs_e = nt.Tau_idDeepTau2017v2p1VSe()[goodTauIndices[j]];
                        lep2_id_vs_m = nt.Tau_idDeepTau2017v2p1VSmu()[goodTauIndices[j]];
                        lep2_id_vs_j = nt.Tau_idDeepTau2017v2p1VSjet()[goodTauIndices[j]];
                        lep2_charge = nt.Tau_charge()[goodTauIndices[j]];
                        lep2_pdgID = nt.Tau_charge()[goodTauIndices[j]] * 15;
                        
                    }

                }
            }


            if(Category < 0)
            {
                for(size_t i = 0; i < nGoodTaus; i++)
                {
                    for(size_t j = 0; j < nGoodMuons; j++)
                    {
                        if(nt.Tau_charge()[goodTauIndices[i]] * nt.Muon_charge()[goodMuonIndices[j]] < 0)
                        {  
                            Category = 1;
                            decay_1_index = i;
                            decay_2_index = j;
                            lep1_pt = nt.Muon_pt()[goodMuonIndices[j]];
                            lep1_eta = nt.Muon_eta()[goodMuonIndices[j]];
                            lep1_phi = nt.Muon_phi()[goodMuonIndices[j]];
                            lep1_mass = nt.Muon_mass()[goodMuonIndices[j]];
                            lep1_tightID = nt.Muon_tightId()[goodMuonIndices[j]];
                            lep1_charge = nt.Muon_charge()[goodMuonIndices[j]];
                            lep1_pdgID = nt.Muon_pdgId()[goodMuonIndices[j]];

                            lep2_pt = nt.Tau_pt()[goodTauIndices[i]];
                            lep2_eta = nt.Tau_eta()[goodTauIndices[i]];
                            lep2_phi = nt.Tau_phi()[goodTauIndices[i]];
                            lep2_mass = nt.Tau_mass()[goodTauIndices[i]];
                            lep2_id_vs_e = nt.Tau_idDeepTau2017v2p1VSe()[goodTauIndices[i]];
                            lep2_id_vs_m = nt.Tau_idDeepTau2017v2p1VSmu()[goodTauIndices[i]];
                            lep2_id_vs_j = nt.Tau_idDeepTau2017v2p1VSjet()[goodTauIndices[i]];
                            lep2_charge = nt.Tau_charge()[goodTauIndices[i]];
                            lep2_pdgID = nt.Tau_charge()[goodTauIndices[i]] * 15;
                        }
                    }
                }
            }

            if(Category < 0)
            {
                for(size_t i = 0; i < nGoodTaus; i++)
                {
                    for(size_t j = 0; j < nGoodElectrons; j++)
                    {
                        if(nt.Tau_charge()[goodTauIndices[i]] * nt.Electron_charge()[goodElectronIndices[j]] < 0)
                        {  
                            Category = 2;
                            decay_1_index = i;
                            decay_2_index = j;
                            lep1_pt = nt.Electron_pt()[goodElectronIndices[j]];
                            lep1_eta = nt.Electron_eta()[goodElectronIndices[j]];
                            lep1_phi = nt.Electron_phi()[goodElectronIndices[j]];
                            lep1_mass = nt.Electron_mass()[goodElectronIndices[j]];
                            lep1_tightID = nt.Electron_mvaFall17V2Iso_WP80()[goodElectronIndices[j]];
                            lep1_charge = nt.Electron_charge()[goodElectronIndices[j]];
                            lep1_pdgID = nt.Electron_pdgId()[goodElectronIndices[j]];

                            lep2_pt = nt.Tau_pt()[goodTauIndices[i]];
                            lep2_eta = nt.Tau_eta()[goodTauIndices[i]];
                            lep2_phi = nt.Tau_phi()[goodTauIndices[i]];
                            lep2_mass = nt.Tau_mass()[goodTauIndices[i]];
                            lep2_id_vs_e = nt.Tau_idDeepTau2017v2p1VSe()[goodTauIndices[i]];
                            lep2_id_vs_m = nt.Tau_idDeepTau2017v2p1VSmu()[goodTauIndices[i]];
                            lep2_id_vs_j = nt.Tau_idDeepTau2017v2p1VSjet()[goodTauIndices[i]];
                            lep2_charge = nt.Tau_charge()[goodTauIndices[i]];
                            lep2_pdgID = nt.Tau_charge()[goodTauIndices[i]] * 15;
                        }
                    }
                }

            }
            if(Category < 0)
            {
                for(size_t i = 0; i < nGoodMuons; i++)
                {
                    for(size_t j = 0; j < nGoodElectrons; j++)
                    {
                        if(nt.Muon_charge()[goodMuonIndices[i]] * nt.Electron_charge()[goodElectronIndices[j]] < 0)
                        {  
                            Category = 6;
                            decay_1_index = i;
                            decay_2_index = j;

                            lep1_pt = nt.Muon_pt()[goodMuonIndices[i]];
                            lep1_eta = nt.Muon_eta()[goodMuonIndices[i]];
                            lep1_phi = nt.Muon_phi()[goodMuonIndices[i]];
                            lep1_mass = nt.Muon_mass()[goodMuonIndices[i]];
                            lep1_tightID = nt.Muon_tightId()[goodMuonIndices[i]];
                            lep1_charge = nt.Muon_charge()[goodMuonIndices[i]];
                            lep1_pdgID = nt.Muon_pdgId()[goodMuonIndices[i]];

                            lep2_pt = nt.Electron_pt()[goodElectronIndices[j]];
                            lep2_eta = nt.Electron_eta()[goodElectronIndices[j]];
                            lep2_phi = nt.Electron_phi()[goodElectronIndices[j]];
                            lep2_mass = nt.Electron_mass()[goodElectronIndices[j]];
                            lep2_tightID = nt.Electron_mvaFall17V2Iso_WP80()[goodElectronIndices[j]];
                            lep2_charge = nt.Electron_charge()[goodElectronIndices[j]];
                            lep2_pdgID = nt.Electron_pdgId()[goodElectronIndices[j]];

                        }
                    }
                }
           
            }

            if(Category < 0)
            {
                for(size_t i = 0; i < nGoodMuons; i++)
                {
                    for(size_t j = i+1; j < nGoodMuons; j++)
                    {
                        if(nt.Muon_charge()[goodMuonIndices[i]] * nt.Muon_charge()[goodMuonIndices[j]] < 0)
                        {  
                            Category = 4;
                            decay_1_index = i;
                            decay_2_index = j;

                            lep1_pt = nt.Muon_pt()[goodMuonIndices[i]];
                            lep1_eta = nt.Muon_eta()[goodMuonIndices[i]];
                            lep1_phi = nt.Muon_phi()[goodMuonIndices[i]];
                            lep1_mass = nt.Muon_mass()[goodMuonIndices[i]];
                            lep1_tightID = nt.Muon_tightId()[goodMuonIndices[i]];
                            lep1_charge = nt.Muon_charge()[goodMuonIndices[i]];
                            lep1_pdgID = nt.Muon_pdgId()[goodMuonIndices[i]];

                            lep2_pt = nt.Muon_pt()[goodMuonIndices[j]];
                            lep2_eta = nt.Muon_eta()[goodMuonIndices[j]];
                            lep2_phi = nt.Muon_phi()[goodMuonIndices[j]];
                            lep2_mass = nt.Muon_mass()[goodMuonIndices[j]];
                            lep2_tightID = nt.Muon_tightId()[goodMuonIndices[j]];
                            lep2_charge = nt.Muon_charge()[goodMuonIndices[j]];
                            lep2_pdgID = nt.Muon_pdgId()[goodMuonIndices[j]];

                        }
                    }
                }
           
            }           


            if(Category < 0)
            {
                for(size_t i = 0; i < nGoodElectrons; i++)
                {
                    for(size_t j = i+1; j < nGoodElectrons; j++)
                    {
                        if(nt.Electron_charge()[goodElectronIndices[i]] * nt.Electron_charge()[goodElectronIndices[j]] < 0)
                        {  
                            Category = 5;
                            decay_1_index = i;
                            decay_2_index = j;

                            lep1_pt = nt.Electron_pt()[goodElectronIndices[i]];
                            lep1_eta = nt.Electron_eta()[goodElectronIndices[i]];
                            lep1_phi = nt.Electron_phi()[goodElectronIndices[i]];
                            lep1_mass = nt.Electron_mass()[goodElectronIndices[i]];
                            lep1_tightID = nt.Electron_mvaFall17V2Iso_WP80()[goodElectronIndices[i]];
                            lep1_charge = nt.Electron_charge()[goodElectronIndices[i]];
                            lep1_pdgID = nt.Electron_pdgId()[goodElectronIndices[i]];

                            lep2_pt = nt.Electron_pt()[goodElectronIndices[j]];
                            lep2_eta = nt.Electron_eta()[goodElectronIndices[j]];
                            lep2_phi = nt.Electron_phi()[goodElectronIndices[j]];
                            lep2_mass = nt.Electron_mass()[goodElectronIndices[j]];
                            lep2_tightID = nt.Electron_mvaFall17V2Iso_WP80()[goodElectronIndices[j]];
                            lep2_charge = nt.Electron_charge()[goodElectronIndices[j]];
                            lep2_pdgID = nt.Electron_pdgId()[goodElectronIndices[j]];
                        }
                    }
                }
           
            }
            /*
            if(Category < 0)
            {
                for(size_t i = 0; i < nGoodTaus; i++)
                {
                    Category = 8;
                    for(size_t iGoodTrk:goodIsoTrackIndices)
                    {
                            LorentzVector isoTrackP4(nt.IsoTrack_pt()[iGoodTrk], nt.IsoTrack_eta()[iGoodTrk], nt.IsoTrack_phi()[iGoodTrk], 0);

                        int isoTrack_charge = nt.IsoTrack_pdgId()[iGoodTrk] / std::abs(nt.IsoTrack_pdgId()[iGoodTrk]);
                        if(isoTrack_charge * nt.Tau_charge()[goodTauIndices[i]] < 0)
                        {
                            Category = 7;
                            decay_1_index = i;
                            decay_2_index = iGoodTrk;
                        }

                    }
                }
            }*/

            if(Category < 0)
            {
                continue;
            }

            //jets
            int nJet = 0;
            int jet1(-1), jet2(-1);
            for(size_t iJet = 0; iJet < nt.Jet_pt().size(); iJet++)
            {
                //FIXME:Overlap removed with all good leptons!!!!!!!
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

            //additional leptons
            LorentzVector visibleParent;
            float offsetPhi = 0;

            if(Category < 7)
            {
                LorentzVector decay1(lep1_pt, lep1_eta, lep1_phi, lep1_mass);
                LorentzVector decay2(lep2_pt, lep2_eta, lep2_phi, lep2_mass);
                visibleParent = decay1 + decay2;
                offsetPhi = computeRotationOffset(visibleParent);

                branches["m_tautau_vis"] = (decay1 + decay2).M();
                branches["pt_tautau_vis"] = (decay1 + decay2).Pt();
                branches["eta_tautau_vis"] = (decay1 + decay2).Eta();
                branches["phi_tautau_vis"] = (decay1 + decay2).Phi() + offsetPhi;

                branches["px_tautau_vis"] = (decay1 + decay2).px();
                branches["py_tautau_vis"] = (decay1 + decay2).py(); 

            }
            else
            {
                branches["m_tautau_vis"] = -999;
                branches["pt_tautau_vis"] = -999;
                branches["eta_tautau_vis"] = -999;
                branches["phi_tautau_vis"] = -999;
            }

            branches["MET_covXX"] = nt.MET_covXX();
            branches["MET_covYY"] = nt.MET_covYY();
            branches["MET_covXY"] = nt.MET_covXY();
            branches["MET_pt"] = nt.MET_pt();
            branches["MET_phi"] = nt.MET_phi() + offsetPhi; 

            //compute mT
            if(Category < 7)
            {
                float mT_decay1_MET = MT(lep1_pt, nt.MET_pt(), lep1_phi + offsetPhi, nt.MET_phi() + offsetPhi); 
                float mT_decay2_MET = MT(lep2_pt, nt.MET_pt(), lep2_phi + offsetPhi, nt.MET_phi() + offsetPhi); 
                branches["mT_decay1_MET"] = mT_decay1_MET;
                branches["mT_decay2_MET"] = mT_decay2_MET;
            }
             
            //generic branches
            branches["lep1_pt"] = lep1_pt;
            branches["lep1_eta"] = lep1_eta;
            branches["lep1_phi"] = lep1_phi + offsetPhi;

            branches["lep1_px"] = lep1_pt * cos(lep1_phi);
            branches["lep1_py"] = lep1_pt * sin(lep1_phi);

            branches["lep1_mass"] = lep1_mass;
            branches["lep1_pdgId"] = lep1_pdgID;
            branches["lep1_charge"] = lep1_charge;
            branches["lep1_tightID"] = lep1_tightID;
            branches["lep1_id_vs_e"] = lep1_id_vs_e;
            branches["lep1_id_vs_m"] = lep1_id_vs_m;
            branches["lep1_id_vs_j"] = lep1_id_vs_j;
            
            branches["lep2_pt"] = lep2_pt;
            branches["lep2_eta"] = lep2_eta;
            branches["lep2_phi"] = lep2_phi + offsetPhi;
            
            branches["lep2_px"] = lep2_pt * cos(lep2_phi);
            branches["lep2_py"] = lep2_pt * sin(lep2_phi);

            branches["lep2_mass"] = lep2_mass;
            branches["lep2_pdgId"] = lep2_pdgID;
            branches["lep2_charge"] = lep2_charge;
            branches["lep2_tightID"] = lep2_tightID;
            branches["lep2_id_vs_e"] = lep2_id_vs_e;
            branches["lep2_id_vs_m"] = lep2_id_vs_m;
            branches["lep2_id_vs_j"] = lep2_id_vs_j;
        
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


            //hadronic activity 
            auto hadronicActivity = computeHadronicActivity();
            branches["allJets_pt"] = hadronicActivity.Pt();
            branches["allJets_eta"] = hadronicActivity.Eta();
            branches["allJets_phi"] = hadronicActivity.Phi() + offsetPhi;
            branches["allJets_mass"] = hadronicActivity.M() + offsetPhi;

            branches["allJets_px"] = hadronicActivity.Px();
            branches["allJets_py"] = hadronicActivity.Py();

            //find the gen higgs mass
            float gen_higgs_mass;
            for(size_t i = 0; i < nt.GenPart_pdgId().size(); i++)
            {
                if(abs(nt.GenPart_pdgId()[i]) == 25)
                {
                    gen_higgs_mass = nt.GenPart_mass()[i];
                    break;
                }
            }
            branches["gen_higgs_mass"] = gen_higgs_mass;

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
        std::cout<<setToAdd<<" - wrong dataset name!"<<std::endl;
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
            if(line.substr(line.size() - 4, std::string::npos) != "root")
            {
                line += "/*.root";
            }

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
        ("sync","run sync exercise", cxxopts::value<bool>()->default_value("false"))
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
    bool sync = result["sync"].as<bool>();

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
    is_resonant["HTauTau"] = true;

    process_ids["Data"] = 0;
    process_ids["HH_ggTauTau"] = -1;
    process_ids["HTauTau"] = -1;
    process_ids["HH_ggZZ"] = -2;
    process_ids["HH_ggWW_dileptonic"] = -3;
    process_ids["HH_ggWW_semileptonic"] = -4;
    process_ids["DiPhoton"] = 3;
    process_ids["GJets_HT-100To200"] = 8;
    process_ids["GJets_HT-200To400"] = 8;
    process_ids["GJets_HT-400To600"] = 8;
    process_ids["GJets_HT-600ToInf"] = 8;
    process_ids["GJets_HT-40To100"] = 8;
    process_ids["TTGG"] = 7;
    process_ids["TTGamma"] = 6;
    process_ids["TTbar"] = 5;
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

    if(not sync)
    {
        readFromTextFile("HTauTau_samples_2016.txt", samples_2016, scale1fb_2016);
        readFromTextFile("HTauTau_samples_2017.txt", samples_2017, scale1fb_2017);
        readFromTextFile("HTauTau_samples_2018.txt", samples_2018, scale1fb_2018);
    }
    else
    {
        readFromTextFile("samples_sync.txt", samples_2016, scale1fb_2016);
    }

    for(auto &jt:samples_2016)
    {
        std::cout<<jt.first<<std::endl;
    }
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
        std::cout<<"Added 2016 to chain"<<std::endl;
        if(not sync)
        {
            addToChain(samples_2017, ch_2017, TString(sample.c_str()));
            addToChain(samples_2018, ch_2018, TString(sample.c_str()));
        }

        std::cout<<"sample name = "<<sample<<std::endl;
        loopTChain(ch_2016, 2016, scale1fb_2016[sample], sample, sync);
        delete ch_2016;
        if(not sync)
        {
            loopTChain(ch_2017, 2017, scale1fb_2017[sample], sample);
            loopTChain(ch_2018, 2018, scale1fb_2018[sample], sample);
        }
        delete ch_2017;
        delete ch_2018;
    }

    outFile->cd();
    output_tree->Write();
    outFile->Write();
    outFile->Close();

    return 0;
}
