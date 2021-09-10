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
#include "TLorentzVector.h"
//SVfit stuff
#include "SVfit_utils.cc"

std::unordered_map<int, float> lumi;

int year;
std::unordered_map<std::string, bool> is_resonant;
std::unordered_map<std::string, float> process_ids;
std::vector<std::string> bad_files;
TFile* outFile;
TTree* output_tree;
TDirectory* rootdir;

float phi_mpi_pi(float x)
{
    if (isnan(x))
    {
        std::cout<<"phi_mpi_pi() function called with NaN"<<std::endl;
        return x;
    }

    while (x >= M_PI)
        x -= 2. * M_PI;

    while (x < -M_PI)
        x += 2. * M_PI;

    return x;
}


float helicity(LorentzVector p1, LorentzVector p2)
{
    LorentzVector parent = (p1 + p2);
    LorentzVector particle1 = p1; //copy constructor

    //vector that boosts parent to CM frame
    auto parentBeta = parent.BoostToCM();

    //boost object for this vector (transformation matrix)
    ROOT::Math::Boost parentBoost(parentBeta);

    //applying boost
    LorentzVector particle1InParentFrame = parentBoost(particle1);

    auto v1 = particle1InParentFrame.Vect(); //3 vector of the momentum in parent frame
    auto vParent = parent.Vect(); //3 vector of the parent momentum in lab frame

    //compute the dot
    double cosTheta = (v1.Dot(vParent))/(sqrt(v1.Mag2() * vParent.Mag2()));
    return cosTheta;
}

float helicity_flashgg(LorentzVector p1, LorentzVector p2)
{
    LorentzVector parent = (p1 + p2);
    LorentzVector particle1 = p1; //copy constructor

    //vector that boosts parent to CM frame
    auto parentBeta = parent.BoostToCM();

    //boost object for this vector (transformation matrix)
    ROOT::Math::Boost parentBoost(parentBeta);

    //applying boost
    LorentzVector particle1InParentFrame = parentBoost(particle1);

    auto v1 = particle1InParentFrame.Vect(); //3 vector of the momentum in parent frame
    auto vParent = parent.Vect(); //3 vector of the parent momentum in lab frame

    //compute the dot
    double cosTheta = cos(v1.Theta());
    return cosTheta;
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

    auto gHidx = nt.gHidx();
    bool leading_pt_mgg_cut = nt.Photon_pt()[gHidx[0]] / nt.gg_mass() > 0.33;
    bool trailing_pt_mgg_cut = nt.Photon_pt()[gHidx[1]] / nt.gg_mass() > 0.25;
    bool pt_mgg_cut = leading_pt_mgg_cut and trailing_pt_mgg_cut;

    bool trigger_cut = true;
/*    if(current_sample == "Data")
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
    }*/


    bool leading_photon_mvaID_cut = nt.Photon_mvaID()[gHidx[0]] > -0.7;
    bool trailing_photon_mvaID_cut = nt.Photon_mvaID()[gHidx[1]] > -0.7;
    bool mvaID_cut = leading_photon_mvaID_cut and trailing_photon_mvaID_cut;

    bool leading_photon_eveto_cut = nt.Photon_electronVeto()[gHidx[0]] >= 0.5;
    bool trailing_photon_eveto_cut = nt.Photon_electronVeto()[gHidx[1]] >= 0.5;
    bool eveto_cut = leading_photon_eveto_cut and trailing_photon_eveto_cut;

    return mgg_mask and pt_mgg_cut and trigger_cut and mvaID_cut and eveto_cut;
}


bool passElectronPreselections(int iEl)
{
    bool pt_cut = nt.Electron_pt()[iEl] > 7;
    bool eta_cut1 = std::abs(nt.Electron_eta()[iEl]) < 2.5;
    bool eta_cut2 = std::abs(nt.Electron_eta()[iEl]) < 1.4442;
    bool eta_cut3 = std::abs(nt.Electron_eta()[iEl]) > 1.566;

    bool eta_cut = eta_cut1 and (eta_cut2 or eta_cut3);

    bool dR_photons = false;

    auto gHidx = nt.gHidx();
    if((ROOT::Math::VectorUtil::DeltaR(nt.Electron_p4()[iEl], nt.Photon_p4()[gHidx[0]]) > 0.2) and (ROOT::Math::VectorUtil::DeltaR(nt.Electron_p4()[iEl], nt.Photon_p4()[gHidx[1]]) > 0.2))
    {
        dR_photons = true;
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
    bool pt_cut = nt.Muon_pt()[iMu] > 5;  
    bool eta_cut = std::abs(nt.Muon_eta()[iMu]) < 2.4;
    bool dR_photons = false;
    bool global_muon = nt.Muon_isGlobal()[iMu];
    auto gHidx = nt.gHidx();

    if((ROOT::Math::VectorUtil::DeltaR(nt.Muon_p4()[iMu], nt.Photon_p4()[gHidx[0]]) > 0.2) and (ROOT::Math::VectorUtil::DeltaR(nt.Muon_p4()[iMu], nt.Photon_p4()[gHidx[1]]) > 0.2))
    {
        dR_photons = true;
    }
   
    //ID cuts
    bool ip_dxy_cut = std::abs(nt.Muon_dxy()[iMu]) < 0.045;
    bool ip_dz_cut = std::abs(nt.Muon_dz()[iMu]) < 0.2;

    bool id_cut = nt.Muon_pt()[iMu] > 0; //TODO:DUMMY CUT
    bool iso_cut = nt.Muon_pfRelIso03_all()[iMu] < 0.3;


    return pt_cut and eta_cut and global_muon and dR_photons and ip_dxy_cut and ip_dz_cut and id_cut and iso_cut;
   
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
    bool dR_photons = true;

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

    for(size_t iPh = 0; iPh < nt.Photon_pt().size(); iPh++)
    {
        if(iPh != nt.gHidx()[0] and iPh != nt.gHidx()[1]) //restrict only to selected photons
        {
            continue;
        }

        if(ROOT::Math::VectorUtil::DeltaR(nt.Photon_p4()[iPh], nt.Tau_p4()[iTau]) <= 0.2)
        {
            dR_photons = false;
            break;
        }

    }

    return pt_cut and eta_cut and decay_mode_cut and ip_dz_cut and id_electron_cut and id_muon_cut and id_jet_cut and dR_electrons and dR_muons and dR_photons;
}


bool passIsotrackPreselection(unsigned int iTrk, std::vector<bool> goodElectrons, std::vector<bool> goodMuons, std::vector<bool> goodTaus)
{
    bool fromPV = nt.IsoTrack_fromPV()[iTrk]; //0th vertex
    bool pfCand = nt.IsoTrack_isPFcand()[iTrk];
//    bool pdgCut = (abs(nt.IsoTrack_pdgId()[iTrk]) != 11 and abs(nt.IsoTrack_pdgId()[iTrk]) != 13);
//    bool ptCut = nt.IsoTrack_pt()[iTrk] > 10;
    LorentzVector isoTrackP4(nt.IsoTrack_pt()[iTrk], nt.IsoTrack_eta()[iTrk], nt.IsoTrack_phi()[iTrk], 0);
    bool dR_taus = true;
    bool dR_photons = false;
    auto gHidx = nt.gHidx();
    if((ROOT::Math::VectorUtil::DeltaR(isoTrackP4, nt.Photon_p4()[gHidx[0]]) > 0.2) and (ROOT::Math::VectorUtil::DeltaR(isoTrackP4, nt.Photon_p4()[gHidx[1]]) > 0.2))
    {
        dR_photons = true;
    }

    for(size_t iTau = 0; iTau < nt.Tau_pt().size(); iTau++)
    {
        if(not goodTaus[iTau]) continue;

        if(ROOT::Math::VectorUtil::DeltaR(isoTrackP4, nt.Tau_p4()[iTau]) < 0.2)
        {
            dR_taus = false;
            break;
        }

    }

    return fromPV and pfCand and dR_taus and dR_photons; 
}

bool passJetPreselections(unsigned int iJet, std::vector<bool> goodElectrons, std::vector<bool> goodMuons, std::vector<bool> goodTaus)
{
    bool pt_cut = nt.Jet_pt()[iJet] > 25;
    bool eta_cut = std::abs(nt.Jet_eta()[iJet]) < 2.4;
    bool dR_electrons = true;
    bool dR_muons = true;
    bool dR_taus = true;
    bool dR_photons = false;

    for(size_t iEl = 0; iEl < nt.Electron_pt().size(); iEl++)
    {
        if(not goodElectrons[iEl]) continue;
        if(ROOT::Math::VectorUtil::DeltaR(nt.Electron_p4()[iEl], nt.Jet_p4()[iJet]) < 0.4)
        {
            dR_electrons = false;
            break;
        }
    }

    for(size_t iMu = 0; iMu < nt.Muon_pt().size(); iMu++)
    {
        if(not goodMuons[iMu]) continue;

        if(ROOT::Math::VectorUtil::DeltaR(nt.Muon_p4()[iMu], nt.Jet_p4()[iJet]) < 0.4)
        {
            dR_muons = false;
            break;
        }
    }

    for(size_t iTau = 0; iTau < nt.Tau_pt().size(); iTau++)
    {
        if(not goodTaus[iTau]) continue;
        if(ROOT::Math::VectorUtil::DeltaR(nt.Tau_p4()[iTau], nt.Jet_p4()[iJet]) < 0.4)
        {
            dR_taus = false;
            break;
        }
    }
    auto gHidx = nt.gHidx();
    if((ROOT::Math::VectorUtil::DeltaR(nt.Jet_p4()[iJet], nt.Photon_p4()[gHidx[0]]) > 0.4) and (ROOT::Math::VectorUtil::DeltaR(nt.Jet_p4()[iJet], nt.Photon_p4()[gHidx[1]]) > 0.4))
    {
        dR_photons= true;
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

bool passBTagSelections(unsigned int iJet)
{
    float deepCSV_thresholds[] = {0.3093, 0.3033, 0.2770};
    
    return nt.Jet_btagDeepFlavB()[iJet] > deepCSV_thresholds[year - 2016];
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

void loopTChain(TChain* ch, int year, float scale1fb, std::string current_sample, bool sync=false) 
{
    ::year = year;
    int nEventsTotal = 0;
    int nEventsChain = ch->GetEntries();
    TFile* currentFile = 0;
    TObjArray *listOfFiles = ch->GetListOfFiles();
    TIter fileIter(listOfFiles);
    tqdm bar;
    fstream syncOut;
    if(sync)
    {
        syncOut.open("/nfs-7/userdata/bsathian/sync_text_files/sync_"+current_sample+".txt", ios::out);
    }

    while ((currentFile = (TFile*)fileIter.Next())) 
    {
        if(std::find(bad_files.begin(), bad_files.end(), std::string(currentFile->GetTitle())) != bad_files.end())
        {
            //woopsie! bad file
            std::cout<<currentFile->GetTitle()<<" is bad! skipping!"<<std::endl;
            continue;
        }
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

            branches["gg_eta"] = nt.gg_eta();
            branches["gg_pt"] = nt.gg_pt();
            branches["gg_phi"] = nt.gg_phi();
            branches["gg_dR"] = ROOT::Math::VectorUtil::DeltaR(nt.selectedPhoton_p4()[0], nt.selectedPhoton_p4()[1]);
            branches["gg_dPhi"] = phi_mpi_pi(nt.selectedPhoton_phi()[0] - nt.selectedPhoton_phi()[1]);
            branches["gg_cosTheta_helicity"] = helicity(nt.selectedPhoton_p4()[0], nt.selectedPhoton_p4()[1]);
            branches["gg_cosTheta_helicity_flashgg"] = helicity_flashgg(nt.selectedPhoton_p4()[0], nt.selectedPhoton_p4()[1]);

            branches["n_jets"] = 0; //default value
            branches["n_bjets"] = 0; //default value
            branches["MET_pt"] = nt.MET_pt();
            branches["MET_phi"] = nt.MET_phi();

            LorentzVector diPhoton = nt.selectedPhoton_p4()[0] + nt.selectedPhoton_p4()[1];
            branches["MET_gg_dphi"] =  phi_mpi_pi(diPhoton.Phi() - nt.MET_phi());


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
            std::vector<size_t> goodIsoTrackIndices;
            for(size_t iTrk = 0; iTrk < nt.IsoTrack_pt().size(); iTrk++)
            {
                if(passIsotrackPreselection(iTrk, goodElectrons, goodMuons, goodTaus))
                {
                    goodIsoTracks.push_back(true); 
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
            float lep2_pt = -1, lep2_eta = -999, lep2_phi = -999, lep2_tightID = -999, lep2_id_vs_e = -999, lep2_id_vs_m = -999, lep2_id_vs_j = -999, lep2_mass = -999;

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
                        if(mll > 70 and mll < 110)
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
            float finalState_massPair = -999;
            for(size_t i = 0; i < nGoodTaus; i++)
            {
                for(size_t j = i+1; j < nGoodTaus; j++)
                {
                
                    if(nt.Tau_charge()[goodTauIndices[i]] * nt.Tau_charge()[goodTauIndices[j]] < 0)
                    {  
                        float temp = (nt.Tau_p4()[goodTauIndices[i]] +nt.Tau_p4()[goodTauIndices[j]]).M();
                        //if temp is closer to 125 than finalState_massPair is, then we keep temp
                        if(finalState_massPair >=0 and std::abs(temp-125) > std::abs(finalState_massPair - 125))
                        {
                            continue;
                        }
                        finalState_massPair = temp;
                        Category = 3;                  
                        decay_1_index = goodTauIndices[i];
                        decay_2_index = goodTauIndices[j];
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


            finalState_massPair = -999;
            if(Category < 0)
            {
                for(size_t i = 0; i < nGoodTaus; i++)
                {
                    for(size_t j = 0; j < nGoodMuons; j++)
                    {
                        if(nt.Tau_charge()[goodTauIndices[i]] * nt.Muon_charge()[goodMuonIndices[j]] < 0)
                        {  
                            float temp = (nt.Tau_p4()[goodTauIndices[i]] +nt.Muon_p4()[goodMuonIndices[j]]).M();
                            //if temp is closer to 125 than finalState_massPair is, then we keep temp
                            if(finalState_massPair >=0 and std::abs(temp-125) > std::abs(finalState_massPair - 125))
                            {
                                continue;
                            }
                            finalState_massPair = temp;
                            Category = 1;
                            decay_1_index = goodMuonIndices[j];
                            decay_2_index = goodTauIndices[i];
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

            finalState_massPair = -999;
            if(Category < 0)
            {
                for(size_t i = 0; i < nGoodTaus; i++)
                {
                    for(size_t j = 0; j < nGoodElectrons; j++)
                    {
                        if(nt.Tau_charge()[goodTauIndices[i]] * nt.Electron_charge()[goodElectronIndices[j]] < 0)
                        {  
                            float temp = (nt.Tau_p4()[goodTauIndices[i]] +nt.Electron_p4()[goodElectronIndices[j]]).M();
                            //if temp is closer to 125 than finalState_massPair is, then we keep temp
                            if(finalState_massPair >=0 and std::abs(temp-125) > std::abs(finalState_massPair - 125))
                            {
                                continue;
                            }
                            finalState_massPair = temp;
                            Category = 2;
                            decay_1_index = goodElectronIndices[j];
                            decay_2_index = goodTauIndices[i];
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
            finalState_massPair = -999;
            if(Category < 0)
            {
                for(size_t i = 0; i < nGoodMuons; i++)
                {
                    for(size_t j = 0; j < nGoodElectrons; j++)
                    {
                        if(nt.Muon_charge()[goodMuonIndices[i]] * nt.Electron_charge()[goodElectronIndices[j]] < 0)
                        {  
                            float temp = (nt.Muon_p4()[goodMuonIndices[i]] + nt.Electron_p4()[goodElectronIndices[j]]).M();
                            //if temp is closer to 125 than finalState_massPair is, then we keep temp
                            if(finalState_massPair >=0 and std::abs(temp-125) > std::abs(finalState_massPair - 125))
                            {
                                continue;
                            }
                            finalState_massPair = temp;
                            Category = 6;
                            decay_1_index = goodMuonIndices[i];
                            decay_2_index = goodElectronIndices[j];

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

            finalState_massPair = -999;
            if(Category < 0)
            {
                for(size_t i = 0; i < nGoodMuons; i++)
                {
                    for(size_t j = i+1; j < nGoodMuons; j++)
                    {
                        if(nt.Muon_charge()[goodMuonIndices[i]] * nt.Muon_charge()[goodMuonIndices[j]] < 0)
                        {  
                            float temp = (nt.Muon_p4()[goodMuonIndices[i]] + nt.Muon_p4()[goodMuonIndices[j]]).M();
                            //if temp is closer to 125 than finalState_massPair is, then we keep temp
                            if(finalState_massPair >=0 and std::abs(temp-125) > std::abs(finalState_massPair - 125))
                            {
                                continue;
                            }
                            finalState_massPair = temp;
                            Category = 4;
                            decay_1_index = goodMuonIndices[i];
                            decay_2_index = goodMuonIndices[j];

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


            finalState_massPair = -999;
            if(Category < 0)
            {
                for(size_t i = 0; i < nGoodElectrons; i++)
                {
                    for(size_t j = i+1; j < nGoodElectrons; j++)
                    {
                        if(nt.Electron_charge()[goodElectronIndices[i]] * nt.Electron_charge()[goodElectronIndices[j]] < 0)
                        {  
                            float temp = (nt.Electron_p4()[goodElectronIndices[i]] + nt.Electron_p4()[goodElectronIndices[j]]).M();
                            //if temp is closer to 125 than finalState_massPair is, then we keep temp
                            if(finalState_massPair >=0 and std::abs(temp-125) > std::abs(finalState_massPair - 125))
                            {
                                continue;
                            }
                            finalState_massPair = temp;
                            Category = 5;
                            decay_1_index = goodElectronIndices[i];
                            decay_2_index = goodElectronIndices[j];

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
            finalState_massPair = -999;


            if(Category < 0)
            {
                for(size_t i = 0; i < nGoodTaus; i++)
                {
                    for(size_t j = 0; j < nGoodIsoTracks; j++)
                    {
                        size_t iGoodTrk = goodIsoTrackIndices[j];

                        LorentzVector isoVec(nt.IsoTrack_pt()[iGoodTrk], nt.IsoTrack_eta()[iGoodTrk], nt.IsoTrack_phi()[iGoodTrk], 0);

                        if(nt.IsoTrack_pdgId()[iGoodTrk] * nt.Tau_charge()[goodTauIndices[i]] < 0)
                        {
                            float temp = (nt.Tau_p4()[goodTauIndices[i]] + isoVec).M();
                            if(finalState_massPair >= 0 and std::abs(temp-125) > std::abs(finalState_massPair - 125))
                            {
                                continue;
                            }
                            finalState_massPair = temp;
                            Category = 7;
                            decay_1_index = goodTauIndices[i];
                            decay_2_index = iGoodTrk;

                            lep1_pt = nt.Tau_pt()[goodTauIndices[i]];
                            lep1_eta = nt.Tau_eta()[goodTauIndices[i]];
                            lep1_phi = nt.Tau_phi()[goodTauIndices[i]];
                            lep1_mass = nt.Tau_mass()[goodTauIndices[i]];
                            lep1_id_vs_e = nt.Tau_idDeepTau2017v2p1VSe()[goodTauIndices[i]];
                            lep1_id_vs_m = nt.Tau_idDeepTau2017v2p1VSmu()[goodTauIndices[i]];
                            lep1_id_vs_j = nt.Tau_idDeepTau2017v2p1VSjet()[goodTauIndices[i]];
                            lep1_charge = nt.Tau_charge()[goodTauIndices[i]];
                            lep1_pdgID = nt.Tau_charge()[goodTauIndices[i]] * 15;

                            lep2_pt = nt.IsoTrack_pt()[goodIsoTrackIndices[j]];
                            lep2_eta = nt.IsoTrack_eta()[goodIsoTrackIndices[j]];
                            lep2_phi = nt.IsoTrack_phi()[goodIsoTrackIndices[j]];
                            lep2_mass = 0;
                            lep2_pdgID = nt.IsoTrack_pdgId()[goodIsoTrackIndices[j]];
                            lep2_charge = lep2_pdgID/std::abs(lep2_pdgID);
                        }
                    }
                }
            }

            if(Category < 0)
            {
                for(auto &iGoodTau:goodTauIndices)
                {
                    Category = 8;
                    decay_1_index = iGoodTau;
                    decay_2_index = -1;

                    lep1_pt = nt.Tau_pt()[decay_1_index];
                    lep1_eta = nt.Tau_eta()[decay_1_index];
                    lep1_phi = nt.Tau_phi()[decay_1_index];
                    lep1_mass = nt.Tau_mass()[decay_1_index];
                    lep1_id_vs_e = nt.Tau_idDeepTau2017v2p1VSe()[decay_1_index];
                    lep1_id_vs_m = nt.Tau_idDeepTau2017v2p1VSmu()[decay_1_index];
                    lep1_id_vs_j = nt.Tau_idDeepTau2017v2p1VSjet()[decay_1_index];
                    lep1_charge = nt.Tau_charge()[decay_1_index];
                    lep1_pdgID = nt.Tau_charge()[decay_1_index] * 15;
                }

            }

            if(Category < 0)
            {
                continue;
            }

            //jets
            int jet1(-1), jet2(-1);
            for(size_t iJet = 0; iJet < nt.Jet_pt().size(); iJet++)
            {
                //FIXME:Overlap removed with all good leptons!!!!!!!
                if(passJetPreselections(iJet, goodElectrons, goodMuons, goodTaus))
                {
                    branches["n_jets"]++;
                    if(jet1 < 0)
                    {
                        jet1 = iJet;
                    }
                    else if(jet2 < 0)
                    {
                        jet2 = iJet;
                    }

                    if(passBTagSelections(iJet))
                    {
                        branches["n_bjets"]++;
                    }
                }
            }

            //additional leptons
            
            //generic branches
            branches["lep1_pt"] = lep1_pt;
            branches["lep1_eta"] = lep1_eta;
            branches["lep1_phi"] = lep1_phi;
            branches["lep1_mass"] = lep1_mass;
            branches["lep1_pdgId"] = lep1_pdgID;
            branches["lep1_charge"] = lep1_charge;
            branches["lep1_tightID"] = lep1_tightID;
            branches["lep1_id_vs_e"] = lep1_id_vs_e;
            branches["lep1_id_vs_m"] = lep1_id_vs_m;
            branches["lep1_id_vs_j"] = lep1_id_vs_j;
            
            branches["lep2_pt"] = lep2_pt;
            branches["lep2_eta"] = lep2_eta;
            branches["lep2_phi"] = lep2_phi;
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

            if(Category < 8)
            {
                LorentzVector decay1(lep1_pt, lep1_eta, lep1_phi, lep1_mass);
                LorentzVector decay2(lep2_pt, lep2_eta, lep2_phi, lep2_mass);
                LorentzVector visibleParent = decay1 + decay2;
                branches["m_tautau_vis"] = (decay1 + decay2).M();
                branches["pt_tautau_vis"] = (decay1 + decay2).Pt();
                branches["eta_tautau_vis"] = (decay1 + decay2).Eta();
                branches["phi_tautau_vis"] = (decay1 + decay2).Phi();

                branches["MET_dil_dphi"] = phi_mpi_pi(visibleParent.Phi()- nt.MET_phi());
                branches["lep12_dphi"] = phi_mpi_pi(decay1.Phi() - decay2.Phi());
                branches["lep12_deta"] = decay1.Eta() - decay2.Eta();
                branches["lep12_dR"] = ROOT::Math::VectorUtil::DeltaR(decay1, decay2);

            }
            else
            {
                branches["m_tautau_vis"] = -999;
                branches["pt_tautau_vis"] = -999;
                branches["eta_tautau_vis"] = -999;
                branches["phi_tautau_vis"] = -999;

                branches["MET_dil_dphi"] = -999;
                branches["lep12_dphi"] = -999;
                branches["lep12_deta"] = -999;
                branches["lep12_dR"] = -999;
            }

            //SVFit!!
            float m_tautau_SVFit = -999;
            //if(Category <= 3)
            int tauDecay_mode1(-1), tauDecay_mode2(-1);
            int category1, category2;

            if(Category == 1)
            {
                category1 = 1;
                category2 = 3;
                tauDecay_mode2 = nt.Tau_decayMode()[decay_2_index];
            }

            else if(Category == 2)
            {
                category1 = 2;
                category2 = 3;
                tauDecay_mode2 = nt.Tau_decayMode()[decay_2_index];
            }

            else if(Category == 3)
            {
                category1 = 3;
                category2 = 3;
                tauDecay_mode1 = nt.Tau_decayMode()[decay_1_index];
                tauDecay_mode2 = nt.Tau_decayMode()[decay_2_index];
            }
            else if(Category == 4)
            {
                category1 = 1;
                category2 = 1;
            }
            else if(Category == 5)
            {
                category1 = 2;
                category2 = 2;
            }
            else if(Category == 6)
            {
                category1 = 1;
                category2 = 2;
            }

            if(Category < 7)
            {
                std::vector<double> tau_p4 = SVfit_ditau_p4(nt.MET_pt() * cos(nt.MET_phi()), nt.MET_pt() * sin(nt.MET_phi()), nt.MET_covXX(), nt.MET_covXY(), nt.MET_covYY(), tauDecay_mode1, tauDecay_mode2, category1, category2, lep1_pt, lep1_eta, lep1_phi, lep1_mass, lep2_pt, lep2_eta, lep2_phi, lep2_mass);
                
                branches["pt_tautau_SVFit"] = tau_p4[0];
                branches["eta_tautau_SVFit"] = tau_p4[1];
                branches["phi_tautau_SVFit"] = tau_p4[2];
                branches["m_tautau_SVFit"] = tau_p4[3];
            }
            else
            {
                branches["pt_tautau_SVFit"] = -999;
                branches["eta_tautau_SVFit"] = -999;
                branches["phi_tautau_SVFit"] = -999;
                branches["m_tautau_SVFit"] = -999;
            }
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

            if(sync)
            {
                syncOut<<nt.run()<<","<<nt.luminosityBlock()<<","<<nt.event()<<","<<nGoodElectrons<<","<<nGoodMuons<<","<<nGoodTaus<<","<<Category<<std::endl;
            }
           
        }

        delete file;
    }
    syncOut.close();
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

void readBadFiles(std::string fileName)
{
    std::fstream f(fileName.c_str(), std::ios::in);
    std::string line;

    while(std::getline(f, line))
    {
        if(line.length() == 0)
        {
            continue;
        }
        bad_files.push_back(line);
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

    process_ids["Data"] = 0;
    process_ids["HH_ggTauTau"] = -1;
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
        readFromTextFile("samples_2016.txt", samples_2016, scale1fb_2016);
        readFromTextFile("samples_2017.txt", samples_2017, scale1fb_2017);
        readFromTextFile("samples_2018.txt", samples_2018, scale1fb_2018);
    }
    else
    {
        readFromTextFile("samples_sync.txt", samples_2016, scale1fb_2016);
    }
    readBadFiles("bad_files.txt");

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
