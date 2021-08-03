// -*- C++ -*-
// Generated with args: -t Events -n tas -c Nano -o nt /hadoop/cms/store/user/legianni/skimNano-HggHtautauselection/HHggtautau_Era2017_private_mc17/skimNano-HggHtautauselection__v5/210223_105049/0000/tree_2.root,/hadoop/cms/store/user/legianni/skimNano-HggHtautauselection/HHggtautau_Era2016_private_mc16/skimNano-HggHtautauselection__v5/210223_104934/0000/tree_15.root,/hadoop/cms/store/user/legianni/skimNano-HggHtautauselection/HHggtautau_Era2018_private_mc18/skimNano-HggHtautauselection__v5/210222_163027/0000/tree_32.root
#ifndef Nano_H
#define Nano_H
#include "Math/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"
#include "Math/Point3D.h"
#include "TMath.h"
#include "TBranch.h"
#include "TTree.h"
#include "TH1F.h"
#include "TFile.h"
#include "TBits.h"
#include "vector"
#include "unistd.h"
#include "chrono"
#include "ctime"
#include "numeric"
#include "TTreeReader.h"
#include "TTreeReaderValue.h"
#include "TTreeReaderArray.h"

typedef ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > LorentzVector;
#define makeP4(Collection, idx) LorentzVector(Collection##_pt[idx],Collection##_eta[idx],Collection##_phi[idx],Collection##_mass[idx]);
#define RANGE(a, b) unsigned a=0; a<b; a++

#define NSV_MAX 33 // for SV_* collection
#define NSOFTACTIVITYJET_MAX 21 // for SoftActivityJet_* collection
#define NLHESCALEWEIGHT_MAX 30 // for LHEScaleWeight_* collection
#define NCORRT1METJET_MAX 75 // for CorrT1METJet_* collection
#define NMUON_MAX 24 // for Muon_* collection
#define NGENJET_MAX 66 // for GenJet_* collection
#define NPSWEIGHT_MAX 6 // for PSWeight_* collection
#define NLHEPART_MAX 15 // for LHEPart_* collection
#define NTAU_MAX 21 // for Tau_* collection
#define NISOTRACK_MAX 21 // for IsoTrack_* collection
#define NLHEPDFWEIGHT_MAX 312 // for LHEPdfWeight_* collection
#define NFSRPHOTON_MAX 9 // for FsrPhoton_* collection
#define NSELECTEDPHOTON_MAX 6 // for selectedPhoton_* collection
#define NOTHERPV_MAX 12 // for OtherPV_* collection
#define NSELECTEDMUON_MAX 6 // for selectedMuon_* collection
#define NTRIGOBJ_MAX 120 // for TrigObj_* collection
#define NSUBJET_MAX 33 // for SubJet_* collection
#define NSUBGENJETAK8_MAX 45 // for SubGenJetAK8_* collection
#define NELEHIDX_MAX 6 // for eleHidx_* collection
#define NGENVISTAU_MAX 18 // for GenVisTau_* collection
#define NGHIDX_MAX 6 // for gHidx_* collection
#define NGENJETAK8_MAX 24 // for GenJetAK8_* collection
#define NELECTRON_MAX 24 // for Electron_* collection
#define NMUHIDX_MAX 6 // for muHidx_* collection
#define NJET_MAX 69 // for Jet_* collection
#define NGENISOLATEDPHOTON_MAX 15 // for GenIsolatedPhoton_* collection
#define NSELECTEDELECTRON_MAX 6 // for selectedElectron_* collection
#define NGENDRESSEDLEPTON_MAX 18 // for GenDressedLepton_* collection
#define NGENPART_MAX 348 // for GenPart_* collection
#define NTAUHIDXLOOSE_MAX 6 // for tauHidxLoose_* collection
#define NPHOTON_MAX 30 // for Photon_* collection
#define NLHEREWEIGHTINGWEIGHT_MAX 3 // for LHEReweightingWeight_* collection
#define NSELECTEDTAULOOSE_MAX 6 // for selectedTauLoose_* collection

using namespace std;

class Nano {
private:
protected:
    unsigned int index;
    float CaloMET_phi_;
    TBranch *b_CaloMET_phi_;
    bool loaded_CaloMET_phi_;
    float CaloMET_pt_;
    TBranch *b_CaloMET_pt_;
    bool loaded_CaloMET_pt_;
    float CaloMET_sumEt_;
    TBranch *b_CaloMET_sumEt_;
    bool loaded_CaloMET_sumEt_;
    int Category_;
    TBranch *b_Category_;
    bool loaded_Category_;
    int Category_lveto_;
    TBranch *b_Category_lveto_;
    bool loaded_Category_lveto_;
    int Category_pairsLoose_;
    TBranch *b_Category_pairsLoose_;
    bool loaded_Category_pairsLoose_;
    int Category_tauselLoose_;
    TBranch *b_Category_tauselLoose_;
    bool loaded_Category_tauselLoose_;
    float ChsMET_phi_;
    TBranch *b_ChsMET_phi_;
    bool loaded_ChsMET_phi_;
    float ChsMET_pt_;
    TBranch *b_ChsMET_pt_;
    bool loaded_ChsMET_pt_;
    float ChsMET_sumEt_;
    TBranch *b_ChsMET_sumEt_;
    bool loaded_ChsMET_sumEt_;
    float CorrT1METJet_area_[NCORRT1METJET_MAX];
    vector<float> v_CorrT1METJet_area_;
    TBranch *b_CorrT1METJet_area_;
    bool loaded_CorrT1METJet_area_;
    float CorrT1METJet_eta_[NCORRT1METJET_MAX];
    vector<float> v_CorrT1METJet_eta_;
    TBranch *b_CorrT1METJet_eta_;
    bool loaded_CorrT1METJet_eta_;
    float CorrT1METJet_muonSubtrFactor_[NCORRT1METJET_MAX];
    vector<float> v_CorrT1METJet_muonSubtrFactor_;
    TBranch *b_CorrT1METJet_muonSubtrFactor_;
    bool loaded_CorrT1METJet_muonSubtrFactor_;
    float CorrT1METJet_phi_[NCORRT1METJET_MAX];
    vector<float> v_CorrT1METJet_phi_;
    TBranch *b_CorrT1METJet_phi_;
    bool loaded_CorrT1METJet_phi_;
    float CorrT1METJet_rawPt_[NCORRT1METJET_MAX];
    vector<float> v_CorrT1METJet_rawPt_;
    TBranch *b_CorrT1METJet_rawPt_;
    bool loaded_CorrT1METJet_rawPt_;
    int Electron_charge_[NELECTRON_MAX];
    vector<int> v_Electron_charge_;
    TBranch *b_Electron_charge_;
    bool loaded_Electron_charge_;
    UChar_t Electron_cleanmask_[NELECTRON_MAX];
    vector<UChar_t> v_Electron_cleanmask_;
    TBranch *b_Electron_cleanmask_;
    bool loaded_Electron_cleanmask_;
    bool Electron_convVeto_[NELECTRON_MAX];
    vector<bool> v_Electron_convVeto_;
    TBranch *b_Electron_convVeto_;
    bool loaded_Electron_convVeto_;
    int Electron_cutBased_[NELECTRON_MAX];
    vector<int> v_Electron_cutBased_;
    TBranch *b_Electron_cutBased_;
    bool loaded_Electron_cutBased_;
    int Electron_cutBased_Fall17_V1_[NELECTRON_MAX];
    vector<int> v_Electron_cutBased_Fall17_V1_;
    TBranch *b_Electron_cutBased_Fall17_V1_;
    bool loaded_Electron_cutBased_Fall17_V1_;
    bool Electron_cutBased_HEEP_[NELECTRON_MAX];
    vector<bool> v_Electron_cutBased_HEEP_;
    TBranch *b_Electron_cutBased_HEEP_;
    bool loaded_Electron_cutBased_HEEP_;
    int Electron_cutBased_HLTPreSel_[NELECTRON_MAX];
    vector<int> v_Electron_cutBased_HLTPreSel_;
    TBranch *b_Electron_cutBased_HLTPreSel_;
    bool loaded_Electron_cutBased_HLTPreSel_;
    int Electron_cutBased_Spring15_[NELECTRON_MAX];
    vector<int> v_Electron_cutBased_Spring15_;
    TBranch *b_Electron_cutBased_Spring15_;
    bool loaded_Electron_cutBased_Spring15_;
    int Electron_cutBased_Sum16_[NELECTRON_MAX];
    vector<int> v_Electron_cutBased_Sum16_;
    TBranch *b_Electron_cutBased_Sum16_;
    bool loaded_Electron_cutBased_Sum16_;
    float Electron_deltaEtaSC_[NELECTRON_MAX];
    vector<float> v_Electron_deltaEtaSC_;
    TBranch *b_Electron_deltaEtaSC_;
    bool loaded_Electron_deltaEtaSC_;
    float Electron_dr03EcalRecHitSumEt_[NELECTRON_MAX];
    vector<float> v_Electron_dr03EcalRecHitSumEt_;
    TBranch *b_Electron_dr03EcalRecHitSumEt_;
    bool loaded_Electron_dr03EcalRecHitSumEt_;
    float Electron_dr03HcalDepth1TowerSumEt_[NELECTRON_MAX];
    vector<float> v_Electron_dr03HcalDepth1TowerSumEt_;
    TBranch *b_Electron_dr03HcalDepth1TowerSumEt_;
    bool loaded_Electron_dr03HcalDepth1TowerSumEt_;
    float Electron_dr03TkSumPt_[NELECTRON_MAX];
    vector<float> v_Electron_dr03TkSumPt_;
    TBranch *b_Electron_dr03TkSumPt_;
    bool loaded_Electron_dr03TkSumPt_;
    float Electron_dr03TkSumPtHEEP_[NELECTRON_MAX];
    vector<float> v_Electron_dr03TkSumPtHEEP_;
    TBranch *b_Electron_dr03TkSumPtHEEP_;
    bool loaded_Electron_dr03TkSumPtHEEP_;
    float Electron_dxy_[NELECTRON_MAX];
    vector<float> v_Electron_dxy_;
    TBranch *b_Electron_dxy_;
    bool loaded_Electron_dxy_;
    float Electron_dxyErr_[NELECTRON_MAX];
    vector<float> v_Electron_dxyErr_;
    TBranch *b_Electron_dxyErr_;
    bool loaded_Electron_dxyErr_;
    float Electron_dz_[NELECTRON_MAX];
    vector<float> v_Electron_dz_;
    TBranch *b_Electron_dz_;
    bool loaded_Electron_dz_;
    float Electron_dzErr_[NELECTRON_MAX];
    vector<float> v_Electron_dzErr_;
    TBranch *b_Electron_dzErr_;
    bool loaded_Electron_dzErr_;
    float Electron_eCorr_[NELECTRON_MAX];
    vector<float> v_Electron_eCorr_;
    TBranch *b_Electron_eCorr_;
    bool loaded_Electron_eCorr_;
    float Electron_eInvMinusPInv_[NELECTRON_MAX];
    vector<float> v_Electron_eInvMinusPInv_;
    TBranch *b_Electron_eInvMinusPInv_;
    bool loaded_Electron_eInvMinusPInv_;
    float Electron_energyErr_[NELECTRON_MAX];
    vector<float> v_Electron_energyErr_;
    TBranch *b_Electron_energyErr_;
    bool loaded_Electron_energyErr_;
    float Electron_eta_[NELECTRON_MAX];
    vector<float> v_Electron_eta_;
    TBranch *b_Electron_eta_;
    bool loaded_Electron_eta_;
    UChar_t Electron_genPartFlav_[NELECTRON_MAX];
    vector<UChar_t> v_Electron_genPartFlav_;
    TBranch *b_Electron_genPartFlav_;
    bool loaded_Electron_genPartFlav_;
    int Electron_genPartIdx_[NELECTRON_MAX];
    vector<int> v_Electron_genPartIdx_;
    TBranch *b_Electron_genPartIdx_;
    bool loaded_Electron_genPartIdx_;
    float Electron_hoe_[NELECTRON_MAX];
    vector<float> v_Electron_hoe_;
    TBranch *b_Electron_hoe_;
    bool loaded_Electron_hoe_;
    float Electron_ip3d_[NELECTRON_MAX];
    vector<float> v_Electron_ip3d_;
    TBranch *b_Electron_ip3d_;
    bool loaded_Electron_ip3d_;
    bool Electron_isPFcand_[NELECTRON_MAX];
    vector<bool> v_Electron_isPFcand_;
    TBranch *b_Electron_isPFcand_;
    bool loaded_Electron_isPFcand_;
    int Electron_jetIdx_[NELECTRON_MAX];
    vector<int> v_Electron_jetIdx_;
    TBranch *b_Electron_jetIdx_;
    bool loaded_Electron_jetIdx_;
    float Electron_jetPtRelv2_[NELECTRON_MAX];
    vector<float> v_Electron_jetPtRelv2_;
    TBranch *b_Electron_jetPtRelv2_;
    bool loaded_Electron_jetPtRelv2_;
    float Electron_jetRelIso_[NELECTRON_MAX];
    vector<float> v_Electron_jetRelIso_;
    TBranch *b_Electron_jetRelIso_;
    bool loaded_Electron_jetRelIso_;
    UChar_t Electron_lostHits_[NELECTRON_MAX];
    vector<UChar_t> v_Electron_lostHits_;
    TBranch *b_Electron_lostHits_;
    bool loaded_Electron_lostHits_;
    float Electron_mass_[NELECTRON_MAX];
    vector<float> v_Electron_mass_;
    TBranch *b_Electron_mass_;
    bool loaded_Electron_mass_;
    float Electron_miniPFRelIso_all_[NELECTRON_MAX];
    vector<float> v_Electron_miniPFRelIso_all_;
    TBranch *b_Electron_miniPFRelIso_all_;
    bool loaded_Electron_miniPFRelIso_all_;
    float Electron_miniPFRelIso_chg_[NELECTRON_MAX];
    vector<float> v_Electron_miniPFRelIso_chg_;
    TBranch *b_Electron_miniPFRelIso_chg_;
    bool loaded_Electron_miniPFRelIso_chg_;
    float Electron_mvaFall17V1Iso_[NELECTRON_MAX];
    vector<float> v_Electron_mvaFall17V1Iso_;
    TBranch *b_Electron_mvaFall17V1Iso_;
    bool loaded_Electron_mvaFall17V1Iso_;
    bool Electron_mvaFall17V1Iso_WP80_[NELECTRON_MAX];
    vector<bool> v_Electron_mvaFall17V1Iso_WP80_;
    TBranch *b_Electron_mvaFall17V1Iso_WP80_;
    bool loaded_Electron_mvaFall17V1Iso_WP80_;
    bool Electron_mvaFall17V1Iso_WP90_[NELECTRON_MAX];
    vector<bool> v_Electron_mvaFall17V1Iso_WP90_;
    TBranch *b_Electron_mvaFall17V1Iso_WP90_;
    bool loaded_Electron_mvaFall17V1Iso_WP90_;
    bool Electron_mvaFall17V1Iso_WPL_[NELECTRON_MAX];
    vector<bool> v_Electron_mvaFall17V1Iso_WPL_;
    TBranch *b_Electron_mvaFall17V1Iso_WPL_;
    bool loaded_Electron_mvaFall17V1Iso_WPL_;
    float Electron_mvaFall17V1noIso_[NELECTRON_MAX];
    vector<float> v_Electron_mvaFall17V1noIso_;
    TBranch *b_Electron_mvaFall17V1noIso_;
    bool loaded_Electron_mvaFall17V1noIso_;
    bool Electron_mvaFall17V1noIso_WP80_[NELECTRON_MAX];
    vector<bool> v_Electron_mvaFall17V1noIso_WP80_;
    TBranch *b_Electron_mvaFall17V1noIso_WP80_;
    bool loaded_Electron_mvaFall17V1noIso_WP80_;
    bool Electron_mvaFall17V1noIso_WP90_[NELECTRON_MAX];
    vector<bool> v_Electron_mvaFall17V1noIso_WP90_;
    TBranch *b_Electron_mvaFall17V1noIso_WP90_;
    bool loaded_Electron_mvaFall17V1noIso_WP90_;
    bool Electron_mvaFall17V1noIso_WPL_[NELECTRON_MAX];
    vector<bool> v_Electron_mvaFall17V1noIso_WPL_;
    TBranch *b_Electron_mvaFall17V1noIso_WPL_;
    bool loaded_Electron_mvaFall17V1noIso_WPL_;
    float Electron_mvaFall17V2Iso_[NELECTRON_MAX];
    vector<float> v_Electron_mvaFall17V2Iso_;
    TBranch *b_Electron_mvaFall17V2Iso_;
    bool loaded_Electron_mvaFall17V2Iso_;
    bool Electron_mvaFall17V2Iso_WP80_[NELECTRON_MAX];
    vector<bool> v_Electron_mvaFall17V2Iso_WP80_;
    TBranch *b_Electron_mvaFall17V2Iso_WP80_;
    bool loaded_Electron_mvaFall17V2Iso_WP80_;
    bool Electron_mvaFall17V2Iso_WP90_[NELECTRON_MAX];
    vector<bool> v_Electron_mvaFall17V2Iso_WP90_;
    TBranch *b_Electron_mvaFall17V2Iso_WP90_;
    bool loaded_Electron_mvaFall17V2Iso_WP90_;
    bool Electron_mvaFall17V2Iso_WPL_[NELECTRON_MAX];
    vector<bool> v_Electron_mvaFall17V2Iso_WPL_;
    TBranch *b_Electron_mvaFall17V2Iso_WPL_;
    bool loaded_Electron_mvaFall17V2Iso_WPL_;
    float Electron_mvaFall17V2noIso_[NELECTRON_MAX];
    vector<float> v_Electron_mvaFall17V2noIso_;
    TBranch *b_Electron_mvaFall17V2noIso_;
    bool loaded_Electron_mvaFall17V2noIso_;
    bool Electron_mvaFall17V2noIso_WP80_[NELECTRON_MAX];
    vector<bool> v_Electron_mvaFall17V2noIso_WP80_;
    TBranch *b_Electron_mvaFall17V2noIso_WP80_;
    bool loaded_Electron_mvaFall17V2noIso_WP80_;
    bool Electron_mvaFall17V2noIso_WP90_[NELECTRON_MAX];
    vector<bool> v_Electron_mvaFall17V2noIso_WP90_;
    TBranch *b_Electron_mvaFall17V2noIso_WP90_;
    bool loaded_Electron_mvaFall17V2noIso_WP90_;
    bool Electron_mvaFall17V2noIso_WPL_[NELECTRON_MAX];
    vector<bool> v_Electron_mvaFall17V2noIso_WPL_;
    TBranch *b_Electron_mvaFall17V2noIso_WPL_;
    bool loaded_Electron_mvaFall17V2noIso_WPL_;
    float Electron_mvaSpring16GP_[NELECTRON_MAX];
    vector<float> v_Electron_mvaSpring16GP_;
    TBranch *b_Electron_mvaSpring16GP_;
    bool loaded_Electron_mvaSpring16GP_;
    bool Electron_mvaSpring16GP_WP80_[NELECTRON_MAX];
    vector<bool> v_Electron_mvaSpring16GP_WP80_;
    TBranch *b_Electron_mvaSpring16GP_WP80_;
    bool loaded_Electron_mvaSpring16GP_WP80_;
    bool Electron_mvaSpring16GP_WP90_[NELECTRON_MAX];
    vector<bool> v_Electron_mvaSpring16GP_WP90_;
    TBranch *b_Electron_mvaSpring16GP_WP90_;
    bool loaded_Electron_mvaSpring16GP_WP90_;
    float Electron_mvaSpring16HZZ_[NELECTRON_MAX];
    vector<float> v_Electron_mvaSpring16HZZ_;
    TBranch *b_Electron_mvaSpring16HZZ_;
    bool loaded_Electron_mvaSpring16HZZ_;
    bool Electron_mvaSpring16HZZ_WPL_[NELECTRON_MAX];
    vector<bool> v_Electron_mvaSpring16HZZ_WPL_;
    TBranch *b_Electron_mvaSpring16HZZ_WPL_;
    bool loaded_Electron_mvaSpring16HZZ_WPL_;
    float Electron_mvaTTH_[NELECTRON_MAX];
    vector<float> v_Electron_mvaTTH_;
    TBranch *b_Electron_mvaTTH_;
    bool loaded_Electron_mvaTTH_;
    vector<LorentzVector> v_Electron_p4_;
    TBranch *b_Electron_p4_;
    bool loaded_Electron_p4_;
    int Electron_pdgId_[NELECTRON_MAX];
    vector<int> v_Electron_pdgId_;
    TBranch *b_Electron_pdgId_;
    bool loaded_Electron_pdgId_;
    float Electron_pfRelIso03_all_[NELECTRON_MAX];
    vector<float> v_Electron_pfRelIso03_all_;
    TBranch *b_Electron_pfRelIso03_all_;
    bool loaded_Electron_pfRelIso03_all_;
    float Electron_pfRelIso03_chg_[NELECTRON_MAX];
    vector<float> v_Electron_pfRelIso03_chg_;
    TBranch *b_Electron_pfRelIso03_chg_;
    bool loaded_Electron_pfRelIso03_chg_;
    float Electron_phi_[NELECTRON_MAX];
    vector<float> v_Electron_phi_;
    TBranch *b_Electron_phi_;
    bool loaded_Electron_phi_;
    int Electron_photonIdx_[NELECTRON_MAX];
    vector<int> v_Electron_photonIdx_;
    TBranch *b_Electron_photonIdx_;
    bool loaded_Electron_photonIdx_;
    float Electron_pt_[NELECTRON_MAX];
    vector<float> v_Electron_pt_;
    TBranch *b_Electron_pt_;
    bool loaded_Electron_pt_;
    float Electron_r9_[NELECTRON_MAX];
    vector<float> v_Electron_r9_;
    TBranch *b_Electron_r9_;
    bool loaded_Electron_r9_;
    float Electron_scEtOverPt_[NELECTRON_MAX];
    vector<float> v_Electron_scEtOverPt_;
    TBranch *b_Electron_scEtOverPt_;
    bool loaded_Electron_scEtOverPt_;
    UChar_t Electron_seedGain_[NELECTRON_MAX];
    vector<UChar_t> v_Electron_seedGain_;
    TBranch *b_Electron_seedGain_;
    bool loaded_Electron_seedGain_;
    float Electron_sieie_[NELECTRON_MAX];
    vector<float> v_Electron_sieie_;
    TBranch *b_Electron_sieie_;
    bool loaded_Electron_sieie_;
    float Electron_sip3d_[NELECTRON_MAX];
    vector<float> v_Electron_sip3d_;
    TBranch *b_Electron_sip3d_;
    bool loaded_Electron_sip3d_;
    int Electron_tightCharge_[NELECTRON_MAX];
    vector<int> v_Electron_tightCharge_;
    TBranch *b_Electron_tightCharge_;
    bool loaded_Electron_tightCharge_;
    int Electron_vidNestedWPBitmap_[NELECTRON_MAX];
    vector<int> v_Electron_vidNestedWPBitmap_;
    TBranch *b_Electron_vidNestedWPBitmap_;
    bool loaded_Electron_vidNestedWPBitmap_;
    int Electron_vidNestedWPBitmapHEEP_[NELECTRON_MAX];
    vector<int> v_Electron_vidNestedWPBitmapHEEP_;
    TBranch *b_Electron_vidNestedWPBitmapHEEP_;
    bool loaded_Electron_vidNestedWPBitmapHEEP_;
    int Electron_vidNestedWPBitmapSpring15_[NELECTRON_MAX];
    vector<int> v_Electron_vidNestedWPBitmapSpring15_;
    TBranch *b_Electron_vidNestedWPBitmapSpring15_;
    bool loaded_Electron_vidNestedWPBitmapSpring15_;
    int Electron_vidNestedWPBitmapSum16_[NELECTRON_MAX];
    vector<int> v_Electron_vidNestedWPBitmapSum16_;
    TBranch *b_Electron_vidNestedWPBitmapSum16_;
    bool loaded_Electron_vidNestedWPBitmapSum16_;
    bool Flag_BadChargedCandidateFilter_;
    TBranch *b_Flag_BadChargedCandidateFilter_;
    bool loaded_Flag_BadChargedCandidateFilter_;
    bool Flag_BadChargedCandidateSummer16Filter_;
    TBranch *b_Flag_BadChargedCandidateSummer16Filter_;
    bool loaded_Flag_BadChargedCandidateSummer16Filter_;
    bool Flag_BadPFMuonFilter_;
    TBranch *b_Flag_BadPFMuonFilter_;
    bool loaded_Flag_BadPFMuonFilter_;
    bool Flag_BadPFMuonSummer16Filter_;
    TBranch *b_Flag_BadPFMuonSummer16Filter_;
    bool loaded_Flag_BadPFMuonSummer16Filter_;
    bool Flag_CSCTightHalo2015Filter_;
    TBranch *b_Flag_CSCTightHalo2015Filter_;
    bool loaded_Flag_CSCTightHalo2015Filter_;
    bool Flag_CSCTightHaloFilter_;
    TBranch *b_Flag_CSCTightHaloFilter_;
    bool loaded_Flag_CSCTightHaloFilter_;
    bool Flag_CSCTightHaloTrkMuUnvetoFilter_;
    TBranch *b_Flag_CSCTightHaloTrkMuUnvetoFilter_;
    bool loaded_Flag_CSCTightHaloTrkMuUnvetoFilter_;
    bool Flag_EcalDeadCellBoundaryEnergyFilter_;
    TBranch *b_Flag_EcalDeadCellBoundaryEnergyFilter_;
    bool loaded_Flag_EcalDeadCellBoundaryEnergyFilter_;
    bool Flag_EcalDeadCellTriggerPrimitiveFilter_;
    TBranch *b_Flag_EcalDeadCellTriggerPrimitiveFilter_;
    bool loaded_Flag_EcalDeadCellTriggerPrimitiveFilter_;
    bool Flag_HBHENoiseFilter_;
    TBranch *b_Flag_HBHENoiseFilter_;
    bool loaded_Flag_HBHENoiseFilter_;
    bool Flag_HBHENoiseIsoFilter_;
    TBranch *b_Flag_HBHENoiseIsoFilter_;
    bool loaded_Flag_HBHENoiseIsoFilter_;
    bool Flag_HcalStripHaloFilter_;
    TBranch *b_Flag_HcalStripHaloFilter_;
    bool loaded_Flag_HcalStripHaloFilter_;
    bool Flag_METFilters_;
    TBranch *b_Flag_METFilters_;
    bool loaded_Flag_METFilters_;
    bool Flag_chargedHadronTrackResolutionFilter_;
    TBranch *b_Flag_chargedHadronTrackResolutionFilter_;
    bool loaded_Flag_chargedHadronTrackResolutionFilter_;
    bool Flag_ecalBadCalibFilter_;
    TBranch *b_Flag_ecalBadCalibFilter_;
    bool loaded_Flag_ecalBadCalibFilter_;
    bool Flag_ecalBadCalibFilterV2_;
    TBranch *b_Flag_ecalBadCalibFilterV2_;
    bool loaded_Flag_ecalBadCalibFilterV2_;
    bool Flag_ecalLaserCorrFilter_;
    TBranch *b_Flag_ecalLaserCorrFilter_;
    bool loaded_Flag_ecalLaserCorrFilter_;
    bool Flag_eeBadScFilter_;
    TBranch *b_Flag_eeBadScFilter_;
    bool loaded_Flag_eeBadScFilter_;
    bool Flag_globalSuperTightHalo2016Filter_;
    TBranch *b_Flag_globalSuperTightHalo2016Filter_;
    bool loaded_Flag_globalSuperTightHalo2016Filter_;
    bool Flag_globalTightHalo2016Filter_;
    TBranch *b_Flag_globalTightHalo2016Filter_;
    bool loaded_Flag_globalTightHalo2016Filter_;
    bool Flag_goodVertices_;
    TBranch *b_Flag_goodVertices_;
    bool loaded_Flag_goodVertices_;
    bool Flag_hcalLaserEventFilter_;
    TBranch *b_Flag_hcalLaserEventFilter_;
    bool loaded_Flag_hcalLaserEventFilter_;
    bool Flag_muonBadTrackFilter_;
    TBranch *b_Flag_muonBadTrackFilter_;
    bool loaded_Flag_muonBadTrackFilter_;
    bool Flag_trkPOGFilters_;
    TBranch *b_Flag_trkPOGFilters_;
    bool loaded_Flag_trkPOGFilters_;
    bool Flag_trkPOG_logErrorTooManyClusters_;
    TBranch *b_Flag_trkPOG_logErrorTooManyClusters_;
    bool loaded_Flag_trkPOG_logErrorTooManyClusters_;
    bool Flag_trkPOG_manystripclus53X_;
    TBranch *b_Flag_trkPOG_manystripclus53X_;
    bool loaded_Flag_trkPOG_manystripclus53X_;
    bool Flag_trkPOG_toomanystripclus53X_;
    TBranch *b_Flag_trkPOG_toomanystripclus53X_;
    bool loaded_Flag_trkPOG_toomanystripclus53X_;
    float FsrPhoton_dROverEt2_[NFSRPHOTON_MAX];
    vector<float> v_FsrPhoton_dROverEt2_;
    TBranch *b_FsrPhoton_dROverEt2_;
    bool loaded_FsrPhoton_dROverEt2_;
    float FsrPhoton_eta_[NFSRPHOTON_MAX];
    vector<float> v_FsrPhoton_eta_;
    TBranch *b_FsrPhoton_eta_;
    bool loaded_FsrPhoton_eta_;
    int FsrPhoton_muonIdx_[NFSRPHOTON_MAX];
    vector<int> v_FsrPhoton_muonIdx_;
    TBranch *b_FsrPhoton_muonIdx_;
    bool loaded_FsrPhoton_muonIdx_;
    float FsrPhoton_phi_[NFSRPHOTON_MAX];
    vector<float> v_FsrPhoton_phi_;
    TBranch *b_FsrPhoton_phi_;
    bool loaded_FsrPhoton_phi_;
    float FsrPhoton_pt_[NFSRPHOTON_MAX];
    vector<float> v_FsrPhoton_pt_;
    TBranch *b_FsrPhoton_pt_;
    bool loaded_FsrPhoton_pt_;
    float FsrPhoton_relIso03_[NFSRPHOTON_MAX];
    vector<float> v_FsrPhoton_relIso03_;
    TBranch *b_FsrPhoton_relIso03_;
    bool loaded_FsrPhoton_relIso03_;
    float GenDressedLepton_eta_[NGENDRESSEDLEPTON_MAX];
    vector<float> v_GenDressedLepton_eta_;
    TBranch *b_GenDressedLepton_eta_;
    bool loaded_GenDressedLepton_eta_;
    bool GenDressedLepton_hasTauAnc_[NGENDRESSEDLEPTON_MAX];
    vector<bool> v_GenDressedLepton_hasTauAnc_;
    TBranch *b_GenDressedLepton_hasTauAnc_;
    bool loaded_GenDressedLepton_hasTauAnc_;
    float GenDressedLepton_mass_[NGENDRESSEDLEPTON_MAX];
    vector<float> v_GenDressedLepton_mass_;
    TBranch *b_GenDressedLepton_mass_;
    bool loaded_GenDressedLepton_mass_;
    vector<LorentzVector> v_GenDressedLepton_p4_;
    TBranch *b_GenDressedLepton_p4_;
    bool loaded_GenDressedLepton_p4_;
    int GenDressedLepton_pdgId_[NGENDRESSEDLEPTON_MAX];
    vector<int> v_GenDressedLepton_pdgId_;
    TBranch *b_GenDressedLepton_pdgId_;
    bool loaded_GenDressedLepton_pdgId_;
    float GenDressedLepton_phi_[NGENDRESSEDLEPTON_MAX];
    vector<float> v_GenDressedLepton_phi_;
    TBranch *b_GenDressedLepton_phi_;
    bool loaded_GenDressedLepton_phi_;
    float GenDressedLepton_pt_[NGENDRESSEDLEPTON_MAX];
    vector<float> v_GenDressedLepton_pt_;
    TBranch *b_GenDressedLepton_pt_;
    bool loaded_GenDressedLepton_pt_;
    float GenIsolatedPhoton_eta_[NGENISOLATEDPHOTON_MAX];
    vector<float> v_GenIsolatedPhoton_eta_;
    TBranch *b_GenIsolatedPhoton_eta_;
    bool loaded_GenIsolatedPhoton_eta_;
    float GenIsolatedPhoton_mass_[NGENISOLATEDPHOTON_MAX];
    vector<float> v_GenIsolatedPhoton_mass_;
    TBranch *b_GenIsolatedPhoton_mass_;
    bool loaded_GenIsolatedPhoton_mass_;
    vector<LorentzVector> v_GenIsolatedPhoton_p4_;
    TBranch *b_GenIsolatedPhoton_p4_;
    bool loaded_GenIsolatedPhoton_p4_;
    float GenIsolatedPhoton_phi_[NGENISOLATEDPHOTON_MAX];
    vector<float> v_GenIsolatedPhoton_phi_;
    TBranch *b_GenIsolatedPhoton_phi_;
    bool loaded_GenIsolatedPhoton_phi_;
    float GenIsolatedPhoton_pt_[NGENISOLATEDPHOTON_MAX];
    vector<float> v_GenIsolatedPhoton_pt_;
    TBranch *b_GenIsolatedPhoton_pt_;
    bool loaded_GenIsolatedPhoton_pt_;
    float GenJetAK8_eta_[NGENJETAK8_MAX];
    vector<float> v_GenJetAK8_eta_;
    TBranch *b_GenJetAK8_eta_;
    bool loaded_GenJetAK8_eta_;
    UChar_t GenJetAK8_hadronFlavour_[NGENJETAK8_MAX];
    vector<UChar_t> v_GenJetAK8_hadronFlavour_;
    TBranch *b_GenJetAK8_hadronFlavour_;
    bool loaded_GenJetAK8_hadronFlavour_;
    float GenJetAK8_mass_[NGENJETAK8_MAX];
    vector<float> v_GenJetAK8_mass_;
    TBranch *b_GenJetAK8_mass_;
    bool loaded_GenJetAK8_mass_;
    vector<LorentzVector> v_GenJetAK8_p4_;
    TBranch *b_GenJetAK8_p4_;
    bool loaded_GenJetAK8_p4_;
    int GenJetAK8_partonFlavour_[NGENJETAK8_MAX];
    vector<int> v_GenJetAK8_partonFlavour_;
    TBranch *b_GenJetAK8_partonFlavour_;
    bool loaded_GenJetAK8_partonFlavour_;
    float GenJetAK8_phi_[NGENJETAK8_MAX];
    vector<float> v_GenJetAK8_phi_;
    TBranch *b_GenJetAK8_phi_;
    bool loaded_GenJetAK8_phi_;
    float GenJetAK8_pt_[NGENJETAK8_MAX];
    vector<float> v_GenJetAK8_pt_;
    TBranch *b_GenJetAK8_pt_;
    bool loaded_GenJetAK8_pt_;
    float GenJet_eta_[NGENJET_MAX];
    vector<float> v_GenJet_eta_;
    TBranch *b_GenJet_eta_;
    bool loaded_GenJet_eta_;
    UChar_t GenJet_hadronFlavour_[NGENJET_MAX];
    vector<UChar_t> v_GenJet_hadronFlavour_;
    TBranch *b_GenJet_hadronFlavour_;
    bool loaded_GenJet_hadronFlavour_;
    float GenJet_mass_[NGENJET_MAX];
    vector<float> v_GenJet_mass_;
    TBranch *b_GenJet_mass_;
    bool loaded_GenJet_mass_;
    vector<LorentzVector> v_GenJet_p4_;
    TBranch *b_GenJet_p4_;
    bool loaded_GenJet_p4_;
    int GenJet_partonFlavour_[NGENJET_MAX];
    vector<int> v_GenJet_partonFlavour_;
    TBranch *b_GenJet_partonFlavour_;
    bool loaded_GenJet_partonFlavour_;
    float GenJet_phi_[NGENJET_MAX];
    vector<float> v_GenJet_phi_;
    TBranch *b_GenJet_phi_;
    bool loaded_GenJet_phi_;
    float GenJet_pt_[NGENJET_MAX];
    vector<float> v_GenJet_pt_;
    TBranch *b_GenJet_pt_;
    bool loaded_GenJet_pt_;
    float GenMET_phi_;
    TBranch *b_GenMET_phi_;
    bool loaded_GenMET_phi_;
    float GenMET_pt_;
    TBranch *b_GenMET_pt_;
    bool loaded_GenMET_pt_;
    float GenPart_eta_[NGENPART_MAX];
    vector<float> v_GenPart_eta_;
    TBranch *b_GenPart_eta_;
    bool loaded_GenPart_eta_;
    int GenPart_genPartIdxMother_[NGENPART_MAX];
    vector<int> v_GenPart_genPartIdxMother_;
    TBranch *b_GenPart_genPartIdxMother_;
    bool loaded_GenPart_genPartIdxMother_;
    float GenPart_mass_[NGENPART_MAX];
    vector<float> v_GenPart_mass_;
    TBranch *b_GenPart_mass_;
    bool loaded_GenPart_mass_;
    vector<LorentzVector> v_GenPart_p4_;
    TBranch *b_GenPart_p4_;
    bool loaded_GenPart_p4_;
    int GenPart_pdgId_[NGENPART_MAX];
    vector<int> v_GenPart_pdgId_;
    TBranch *b_GenPart_pdgId_;
    bool loaded_GenPart_pdgId_;
    float GenPart_phi_[NGENPART_MAX];
    vector<float> v_GenPart_phi_;
    TBranch *b_GenPart_phi_;
    bool loaded_GenPart_phi_;
    float GenPart_pt_[NGENPART_MAX];
    vector<float> v_GenPart_pt_;
    TBranch *b_GenPart_pt_;
    bool loaded_GenPart_pt_;
    int GenPart_status_[NGENPART_MAX];
    vector<int> v_GenPart_status_;
    TBranch *b_GenPart_status_;
    bool loaded_GenPart_status_;
    int GenPart_statusFlags_[NGENPART_MAX];
    vector<int> v_GenPart_statusFlags_;
    TBranch *b_GenPart_statusFlags_;
    bool loaded_GenPart_statusFlags_;
    int GenVisTau_charge_[NGENVISTAU_MAX];
    vector<int> v_GenVisTau_charge_;
    TBranch *b_GenVisTau_charge_;
    bool loaded_GenVisTau_charge_;
    float GenVisTau_eta_[NGENVISTAU_MAX];
    vector<float> v_GenVisTau_eta_;
    TBranch *b_GenVisTau_eta_;
    bool loaded_GenVisTau_eta_;
    int GenVisTau_genPartIdxMother_[NGENVISTAU_MAX];
    vector<int> v_GenVisTau_genPartIdxMother_;
    TBranch *b_GenVisTau_genPartIdxMother_;
    bool loaded_GenVisTau_genPartIdxMother_;
    float GenVisTau_mass_[NGENVISTAU_MAX];
    vector<float> v_GenVisTau_mass_;
    TBranch *b_GenVisTau_mass_;
    bool loaded_GenVisTau_mass_;
    vector<LorentzVector> v_GenVisTau_p4_;
    TBranch *b_GenVisTau_p4_;
    bool loaded_GenVisTau_p4_;
    float GenVisTau_phi_[NGENVISTAU_MAX];
    vector<float> v_GenVisTau_phi_;
    TBranch *b_GenVisTau_phi_;
    bool loaded_GenVisTau_phi_;
    float GenVisTau_pt_[NGENVISTAU_MAX];
    vector<float> v_GenVisTau_pt_;
    TBranch *b_GenVisTau_pt_;
    bool loaded_GenVisTau_pt_;
    int GenVisTau_status_[NGENVISTAU_MAX];
    vector<int> v_GenVisTau_status_;
    TBranch *b_GenVisTau_status_;
    bool loaded_GenVisTau_status_;
    float Generator_binvar_;
    TBranch *b_Generator_binvar_;
    bool loaded_Generator_binvar_;
    int Generator_id1_;
    TBranch *b_Generator_id1_;
    bool loaded_Generator_id1_;
    int Generator_id2_;
    TBranch *b_Generator_id2_;
    bool loaded_Generator_id2_;
    float Generator_scalePDF_;
    TBranch *b_Generator_scalePDF_;
    bool loaded_Generator_scalePDF_;
    float Generator_weight_;
    TBranch *b_Generator_weight_;
    bool loaded_Generator_weight_;
    float Generator_x1_;
    TBranch *b_Generator_x1_;
    bool loaded_Generator_x1_;
    float Generator_x2_;
    TBranch *b_Generator_x2_;
    bool loaded_Generator_x2_;
    float Generator_xpdf1_;
    TBranch *b_Generator_xpdf1_;
    bool loaded_Generator_xpdf1_;
    float Generator_xpdf2_;
    TBranch *b_Generator_xpdf2_;
    bool loaded_Generator_xpdf2_;
    bool HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_;
    TBranch *b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_;
    bool loaded_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_;
    bool HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
    TBranch *b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
    bool loaded_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
    bool HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
    TBranch *b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
    bool loaded_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
    bool HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_;
    TBranch *b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_;
    bool loaded_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_;
    bool HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
    TBranch *b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
    bool loaded_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
    bool HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
    TBranch *b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
    bool loaded_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
    bool HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
    TBranch *b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
    bool loaded_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
    bool HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
    TBranch *b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
    bool loaded_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
    bool HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_;
    TBranch *b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_;
    bool loaded_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_;
    bool HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55_;
    TBranch *b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55_;
    bool loaded_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55_;
    bool HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70_;
    TBranch *b_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70_;
    bool loaded_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70_;
    bool HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_;
    TBranch *b_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_;
    bool loaded_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_;
    bool HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55_;
    TBranch *b_HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55_;
    bool loaded_HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55_;
    bool HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_;
    TBranch *b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_;
    bool loaded_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_;
    bool HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_;
    TBranch *b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_;
    bool loaded_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_;
    bool HLT_DoubleMu20_7_Mass0to30_Photon23_;
    TBranch *b_HLT_DoubleMu20_7_Mass0to30_Photon23_;
    bool loaded_HLT_DoubleMu20_7_Mass0to30_Photon23_;
    bool HLT_DoublePhoton33_CaloIdL_;
    TBranch *b_HLT_DoublePhoton33_CaloIdL_;
    bool loaded_HLT_DoublePhoton33_CaloIdL_;
    bool HLT_DoublePhoton60_;
    TBranch *b_HLT_DoublePhoton60_;
    bool loaded_HLT_DoublePhoton60_;
    bool HLT_DoublePhoton70_;
    TBranch *b_HLT_DoublePhoton70_;
    bool loaded_HLT_DoublePhoton70_;
    bool HLT_DoublePhoton85_;
    TBranch *b_HLT_DoublePhoton85_;
    bool loaded_HLT_DoublePhoton85_;
    bool HLT_HISinglePhoton10_;
    TBranch *b_HLT_HISinglePhoton10_;
    bool loaded_HLT_HISinglePhoton10_;
    bool HLT_HISinglePhoton10_Eta3p1ForPPRef_;
    TBranch *b_HLT_HISinglePhoton10_Eta3p1ForPPRef_;
    bool loaded_HLT_HISinglePhoton10_Eta3p1ForPPRef_;
    bool HLT_HISinglePhoton15_;
    TBranch *b_HLT_HISinglePhoton15_;
    bool loaded_HLT_HISinglePhoton15_;
    bool HLT_HISinglePhoton20_;
    TBranch *b_HLT_HISinglePhoton20_;
    bool loaded_HLT_HISinglePhoton20_;
    bool HLT_HISinglePhoton20_Eta3p1ForPPRef_;
    TBranch *b_HLT_HISinglePhoton20_Eta3p1ForPPRef_;
    bool loaded_HLT_HISinglePhoton20_Eta3p1ForPPRef_;
    bool HLT_HISinglePhoton30_Eta3p1ForPPRef_;
    TBranch *b_HLT_HISinglePhoton30_Eta3p1ForPPRef_;
    bool loaded_HLT_HISinglePhoton30_Eta3p1ForPPRef_;
    bool HLT_HISinglePhoton40_;
    TBranch *b_HLT_HISinglePhoton40_;
    bool loaded_HLT_HISinglePhoton40_;
    bool HLT_HISinglePhoton40_Eta3p1ForPPRef_;
    TBranch *b_HLT_HISinglePhoton40_Eta3p1ForPPRef_;
    bool loaded_HLT_HISinglePhoton40_Eta3p1ForPPRef_;
    bool HLT_HISinglePhoton50_Eta3p1ForPPRef_;
    TBranch *b_HLT_HISinglePhoton50_Eta3p1ForPPRef_;
    bool loaded_HLT_HISinglePhoton50_Eta3p1ForPPRef_;
    bool HLT_HISinglePhoton60_;
    TBranch *b_HLT_HISinglePhoton60_;
    bool loaded_HLT_HISinglePhoton60_;
    bool HLT_HISinglePhoton60_Eta3p1ForPPRef_;
    TBranch *b_HLT_HISinglePhoton60_Eta3p1ForPPRef_;
    bool loaded_HLT_HISinglePhoton60_Eta3p1ForPPRef_;
    bool HLT_Mu12_DoublePhoton20_;
    TBranch *b_HLT_Mu12_DoublePhoton20_;
    bool loaded_HLT_Mu12_DoublePhoton20_;
    bool HLT_Mu12_Photon25_CaloIdL_;
    TBranch *b_HLT_Mu12_Photon25_CaloIdL_;
    bool loaded_HLT_Mu12_Photon25_CaloIdL_;
    bool HLT_Mu12_Photon25_CaloIdL_L1ISO_;
    TBranch *b_HLT_Mu12_Photon25_CaloIdL_L1ISO_;
    bool loaded_HLT_Mu12_Photon25_CaloIdL_L1ISO_;
    bool HLT_Mu12_Photon25_CaloIdL_L1OR_;
    TBranch *b_HLT_Mu12_Photon25_CaloIdL_L1OR_;
    bool loaded_HLT_Mu12_Photon25_CaloIdL_L1OR_;
    bool HLT_Mu17_Photon22_CaloIdL_L1ISO_;
    TBranch *b_HLT_Mu17_Photon22_CaloIdL_L1ISO_;
    bool loaded_HLT_Mu17_Photon22_CaloIdL_L1ISO_;
    bool HLT_Mu17_Photon30_CaloIdL_L1ISO_;
    TBranch *b_HLT_Mu17_Photon30_CaloIdL_L1ISO_;
    bool loaded_HLT_Mu17_Photon30_CaloIdL_L1ISO_;
    bool HLT_Mu17_Photon30_IsoCaloId_;
    TBranch *b_HLT_Mu17_Photon30_IsoCaloId_;
    bool loaded_HLT_Mu17_Photon30_IsoCaloId_;
    bool HLT_Mu17_Photon35_CaloIdL_L1ISO_;
    TBranch *b_HLT_Mu17_Photon35_CaloIdL_L1ISO_;
    bool loaded_HLT_Mu17_Photon35_CaloIdL_L1ISO_;
    bool HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL_;
    TBranch *b_HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL_;
    bool loaded_HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL_;
    bool HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL_;
    TBranch *b_HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL_;
    bool loaded_HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL_;
    bool HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL_;
    TBranch *b_HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL_;
    bool loaded_HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL_;
    bool HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL_;
    TBranch *b_HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL_;
    bool loaded_HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL_;
    bool HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL_;
    TBranch *b_HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL_;
    bool loaded_HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL_;
    bool HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL_;
    TBranch *b_HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL_;
    bool loaded_HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL_;
    bool HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL_;
    TBranch *b_HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL_;
    bool loaded_HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL_;
    bool HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_;
    TBranch *b_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_;
    bool loaded_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_;
    bool HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_;
    TBranch *b_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_;
    bool loaded_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_;
    bool HLT_Photon100EBHE10_;
    TBranch *b_HLT_Photon100EBHE10_;
    bool loaded_HLT_Photon100EBHE10_;
    bool HLT_Photon100EB_TightID_TightIso_;
    TBranch *b_HLT_Photon100EB_TightID_TightIso_;
    bool loaded_HLT_Photon100EB_TightID_TightIso_;
    bool HLT_Photon100EEHE10_;
    TBranch *b_HLT_Photon100EEHE10_;
    bool loaded_HLT_Photon100EEHE10_;
    bool HLT_Photon100EE_TightID_TightIso_;
    TBranch *b_HLT_Photon100EE_TightID_TightIso_;
    bool loaded_HLT_Photon100EE_TightID_TightIso_;
    bool HLT_Photon110EB_TightID_TightIso_;
    TBranch *b_HLT_Photon110EB_TightID_TightIso_;
    bool loaded_HLT_Photon110EB_TightID_TightIso_;
    bool HLT_Photon120_;
    TBranch *b_HLT_Photon120_;
    bool loaded_HLT_Photon120_;
    bool HLT_Photon120EB_TightID_TightIso_;
    TBranch *b_HLT_Photon120EB_TightID_TightIso_;
    bool loaded_HLT_Photon120EB_TightID_TightIso_;
    bool HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
    TBranch *b_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
    bool loaded_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
    bool HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF_;
    TBranch *b_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF_;
    bool loaded_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF_;
    bool HLT_Photon120_R9Id90_HE10_IsoM_;
    TBranch *b_HLT_Photon120_R9Id90_HE10_IsoM_;
    bool loaded_HLT_Photon120_R9Id90_HE10_IsoM_;
    bool HLT_Photon125_;
    TBranch *b_HLT_Photon125_;
    bool loaded_HLT_Photon125_;
    bool HLT_Photon135_PFMET100_;
    TBranch *b_HLT_Photon135_PFMET100_;
    bool loaded_HLT_Photon135_PFMET100_;
    bool HLT_Photon150_;
    TBranch *b_HLT_Photon150_;
    bool loaded_HLT_Photon150_;
    bool HLT_Photon165_HE10_;
    TBranch *b_HLT_Photon165_HE10_;
    bool loaded_HLT_Photon165_HE10_;
    bool HLT_Photon165_R9Id90_HE10_IsoM_;
    TBranch *b_HLT_Photon165_R9Id90_HE10_IsoM_;
    bool loaded_HLT_Photon165_R9Id90_HE10_IsoM_;
    bool HLT_Photon175_;
    TBranch *b_HLT_Photon175_;
    bool loaded_HLT_Photon175_;
    bool HLT_Photon20_;
    TBranch *b_HLT_Photon20_;
    bool loaded_HLT_Photon20_;
    bool HLT_Photon200_;
    TBranch *b_HLT_Photon200_;
    bool loaded_HLT_Photon200_;
    bool HLT_Photon20_CaloIdVL_IsoL_;
    TBranch *b_HLT_Photon20_CaloIdVL_IsoL_;
    bool loaded_HLT_Photon20_CaloIdVL_IsoL_;
    bool HLT_Photon20_HoverELoose_;
    TBranch *b_HLT_Photon20_HoverELoose_;
    bool loaded_HLT_Photon20_HoverELoose_;
    bool HLT_Photon22_;
    TBranch *b_HLT_Photon22_;
    bool loaded_HLT_Photon22_;
    bool HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
    TBranch *b_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
    bool loaded_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
    bool HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF_;
    TBranch *b_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF_;
    bool loaded_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF_;
    bool HLT_Photon22_R9Id90_HE10_IsoM_;
    TBranch *b_HLT_Photon22_R9Id90_HE10_IsoM_;
    bool loaded_HLT_Photon22_R9Id90_HE10_IsoM_;
    bool HLT_Photon25_;
    TBranch *b_HLT_Photon25_;
    bool loaded_HLT_Photon25_;
    bool HLT_Photon250_NoHE_;
    TBranch *b_HLT_Photon250_NoHE_;
    bool loaded_HLT_Photon250_NoHE_;
    bool HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60_;
    TBranch *b_HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60_;
    bool loaded_HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60_;
    bool HLT_Photon30_;
    TBranch *b_HLT_Photon30_;
    bool loaded_HLT_Photon30_;
    bool HLT_Photon300_NoHE_;
    TBranch *b_HLT_Photon300_NoHE_;
    bool loaded_HLT_Photon300_NoHE_;
    bool HLT_Photon30_HoverELoose_;
    TBranch *b_HLT_Photon30_HoverELoose_;
    bool loaded_HLT_Photon30_HoverELoose_;
    bool HLT_Photon30_R9Id90_HE10_IsoM_;
    TBranch *b_HLT_Photon30_R9Id90_HE10_IsoM_;
    bool loaded_HLT_Photon30_R9Id90_HE10_IsoM_;
    bool HLT_Photon33_;
    TBranch *b_HLT_Photon33_;
    bool loaded_HLT_Photon33_;
    bool HLT_Photon35_TwoProngs35_;
    TBranch *b_HLT_Photon35_TwoProngs35_;
    bool loaded_HLT_Photon35_TwoProngs35_;
    bool HLT_Photon36_;
    TBranch *b_HLT_Photon36_;
    bool loaded_HLT_Photon36_;
    bool HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15_;
    TBranch *b_HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15_;
    bool loaded_HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15_;
    bool HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
    TBranch *b_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
    bool loaded_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
    bool HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF_;
    TBranch *b_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF_;
    bool loaded_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF_;
    bool HLT_Photon36_R9Id90_HE10_IsoM_;
    TBranch *b_HLT_Photon36_R9Id90_HE10_IsoM_;
    bool loaded_HLT_Photon36_R9Id90_HE10_IsoM_;
    bool HLT_Photon40_HoverELoose_;
    TBranch *b_HLT_Photon40_HoverELoose_;
    bool loaded_HLT_Photon40_HoverELoose_;
    bool HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15_;
    TBranch *b_HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15_;
    bool loaded_HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15_;
    bool HLT_Photon50_;
    TBranch *b_HLT_Photon50_;
    bool loaded_HLT_Photon50_;
    bool HLT_Photon500_;
    TBranch *b_HLT_Photon500_;
    bool loaded_HLT_Photon500_;
    bool HLT_Photon50_HoverELoose_;
    TBranch *b_HLT_Photon50_HoverELoose_;
    bool loaded_HLT_Photon50_HoverELoose_;
    bool HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
    TBranch *b_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
    bool loaded_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
    bool HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF_;
    TBranch *b_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF_;
    bool loaded_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF_;
    bool HLT_Photon50_R9Id90_HE10_IsoM_;
    TBranch *b_HLT_Photon50_R9Id90_HE10_IsoM_;
    bool loaded_HLT_Photon50_R9Id90_HE10_IsoM_;
    bool HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_;
    TBranch *b_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_;
    bool loaded_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_;
    bool HLT_Photon600_;
    TBranch *b_HLT_Photon600_;
    bool loaded_HLT_Photon600_;
    bool HLT_Photon60_HoverELoose_;
    TBranch *b_HLT_Photon60_HoverELoose_;
    bool loaded_HLT_Photon60_HoverELoose_;
    bool HLT_Photon60_R9Id90_CaloIdL_IsoL_;
    TBranch *b_HLT_Photon60_R9Id90_CaloIdL_IsoL_;
    bool loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_;
    bool HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_;
    TBranch *b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_;
    bool loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_;
    bool HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_;
    TBranch *b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_;
    bool loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_;
    bool HLT_Photon75_;
    TBranch *b_HLT_Photon75_;
    bool loaded_HLT_Photon75_;
    bool HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
    TBranch *b_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
    bool loaded_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
    bool HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF_;
    TBranch *b_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF_;
    bool loaded_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF_;
    bool HLT_Photon75_R9Id90_HE10_IsoM_;
    TBranch *b_HLT_Photon75_R9Id90_HE10_IsoM_;
    bool loaded_HLT_Photon75_R9Id90_HE10_IsoM_;
    bool HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3_;
    TBranch *b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3_;
    bool loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3_;
    bool HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3_;
    TBranch *b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3_;
    bool loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3_;
    bool HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_;
    TBranch *b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_;
    bool loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_;
    bool HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_;
    TBranch *b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_;
    bool loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_;
    bool HLT_Photon90_;
    TBranch *b_HLT_Photon90_;
    bool loaded_HLT_Photon90_;
    bool HLT_Photon90_CaloIdL_HT300_;
    TBranch *b_HLT_Photon90_CaloIdL_HT300_;
    bool loaded_HLT_Photon90_CaloIdL_HT300_;
    bool HLT_Photon90_CaloIdL_PFHT500_;
    TBranch *b_HLT_Photon90_CaloIdL_PFHT500_;
    bool loaded_HLT_Photon90_CaloIdL_PFHT500_;
    bool HLT_Photon90_CaloIdL_PFHT600_;
    TBranch *b_HLT_Photon90_CaloIdL_PFHT600_;
    bool loaded_HLT_Photon90_CaloIdL_PFHT600_;
    bool HLT_Photon90_CaloIdL_PFHT700_;
    TBranch *b_HLT_Photon90_CaloIdL_PFHT700_;
    bool loaded_HLT_Photon90_CaloIdL_PFHT700_;
    bool HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
    TBranch *b_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
    bool loaded_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
    bool HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF_;
    TBranch *b_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF_;
    bool loaded_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF_;
    bool HLT_Photon90_R9Id90_HE10_IsoM_;
    TBranch *b_HLT_Photon90_R9Id90_HE10_IsoM_;
    bool loaded_HLT_Photon90_R9Id90_HE10_IsoM_;
    bool HLT_SinglePhoton10_Eta3p1ForPPRef_;
    TBranch *b_HLT_SinglePhoton10_Eta3p1ForPPRef_;
    bool loaded_HLT_SinglePhoton10_Eta3p1ForPPRef_;
    bool HLT_SinglePhoton20_Eta3p1ForPPRef_;
    TBranch *b_HLT_SinglePhoton20_Eta3p1ForPPRef_;
    bool loaded_HLT_SinglePhoton20_Eta3p1ForPPRef_;
    bool HLT_SinglePhoton30_Eta3p1ForPPRef_;
    TBranch *b_HLT_SinglePhoton30_Eta3p1ForPPRef_;
    bool loaded_HLT_SinglePhoton30_Eta3p1ForPPRef_;
    bool HLT_TriplePhoton_20_20_20_CaloIdLV2_;
    TBranch *b_HLT_TriplePhoton_20_20_20_CaloIdLV2_;
    bool loaded_HLT_TriplePhoton_20_20_20_CaloIdLV2_;
    bool HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_;
    TBranch *b_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_;
    bool loaded_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_;
    bool HLT_TriplePhoton_30_30_10_CaloIdLV2_;
    TBranch *b_HLT_TriplePhoton_30_30_10_CaloIdLV2_;
    bool loaded_HLT_TriplePhoton_30_30_10_CaloIdLV2_;
    bool HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_;
    TBranch *b_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_;
    bool loaded_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_;
    bool HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_;
    TBranch *b_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_;
    bool loaded_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_;
    float HTXS_Higgs_pt_;
    TBranch *b_HTXS_Higgs_pt_;
    bool loaded_HTXS_Higgs_pt_;
    float HTXS_Higgs_y_;
    TBranch *b_HTXS_Higgs_y_;
    bool loaded_HTXS_Higgs_y_;
    UChar_t HTXS_njets25_;
    TBranch *b_HTXS_njets25_;
    bool loaded_HTXS_njets25_;
    UChar_t HTXS_njets30_;
    TBranch *b_HTXS_njets30_;
    bool loaded_HTXS_njets30_;
    int HTXS_stage1_1_cat_pTjet25GeV_;
    TBranch *b_HTXS_stage1_1_cat_pTjet25GeV_;
    bool loaded_HTXS_stage1_1_cat_pTjet25GeV_;
    int HTXS_stage1_1_cat_pTjet30GeV_;
    TBranch *b_HTXS_stage1_1_cat_pTjet30GeV_;
    bool loaded_HTXS_stage1_1_cat_pTjet30GeV_;
    int HTXS_stage1_1_fine_cat_pTjet25GeV_;
    TBranch *b_HTXS_stage1_1_fine_cat_pTjet25GeV_;
    bool loaded_HTXS_stage1_1_fine_cat_pTjet25GeV_;
    int HTXS_stage1_1_fine_cat_pTjet30GeV_;
    TBranch *b_HTXS_stage1_1_fine_cat_pTjet30GeV_;
    bool loaded_HTXS_stage1_1_fine_cat_pTjet30GeV_;
    int HTXS_stage1_2_cat_pTjet25GeV_;
    TBranch *b_HTXS_stage1_2_cat_pTjet25GeV_;
    bool loaded_HTXS_stage1_2_cat_pTjet25GeV_;
    int HTXS_stage1_2_cat_pTjet30GeV_;
    TBranch *b_HTXS_stage1_2_cat_pTjet30GeV_;
    bool loaded_HTXS_stage1_2_cat_pTjet30GeV_;
    int HTXS_stage1_2_fine_cat_pTjet25GeV_;
    TBranch *b_HTXS_stage1_2_fine_cat_pTjet25GeV_;
    bool loaded_HTXS_stage1_2_fine_cat_pTjet25GeV_;
    int HTXS_stage1_2_fine_cat_pTjet30GeV_;
    TBranch *b_HTXS_stage1_2_fine_cat_pTjet30GeV_;
    bool loaded_HTXS_stage1_2_fine_cat_pTjet30GeV_;
    int HTXS_stage_0_;
    TBranch *b_HTXS_stage_0_;
    bool loaded_HTXS_stage_0_;
    int HTXS_stage_1_pTjet25_;
    TBranch *b_HTXS_stage_1_pTjet25_;
    bool loaded_HTXS_stage_1_pTjet25_;
    int HTXS_stage_1_pTjet30_;
    TBranch *b_HTXS_stage_1_pTjet30_;
    bool loaded_HTXS_stage_1_pTjet30_;
    float IsoTrack_dxy_[NISOTRACK_MAX];
    vector<float> v_IsoTrack_dxy_;
    TBranch *b_IsoTrack_dxy_;
    bool loaded_IsoTrack_dxy_;
    float IsoTrack_dz_[NISOTRACK_MAX];
    vector<float> v_IsoTrack_dz_;
    TBranch *b_IsoTrack_dz_;
    bool loaded_IsoTrack_dz_;
    float IsoTrack_eta_[NISOTRACK_MAX];
    vector<float> v_IsoTrack_eta_;
    TBranch *b_IsoTrack_eta_;
    bool loaded_IsoTrack_eta_;
    int IsoTrack_fromPV_[NISOTRACK_MAX];
    vector<int> v_IsoTrack_fromPV_;
    TBranch *b_IsoTrack_fromPV_;
    bool loaded_IsoTrack_fromPV_;
    bool IsoTrack_isFromLostTrack_[NISOTRACK_MAX];
    vector<bool> v_IsoTrack_isFromLostTrack_;
    TBranch *b_IsoTrack_isFromLostTrack_;
    bool loaded_IsoTrack_isFromLostTrack_;
    bool IsoTrack_isHighPurityTrack_[NISOTRACK_MAX];
    vector<bool> v_IsoTrack_isHighPurityTrack_;
    TBranch *b_IsoTrack_isHighPurityTrack_;
    bool loaded_IsoTrack_isHighPurityTrack_;
    bool IsoTrack_isPFcand_[NISOTRACK_MAX];
    vector<bool> v_IsoTrack_isPFcand_;
    TBranch *b_IsoTrack_isPFcand_;
    bool loaded_IsoTrack_isPFcand_;
    float IsoTrack_miniPFRelIso_all_[NISOTRACK_MAX];
    vector<float> v_IsoTrack_miniPFRelIso_all_;
    TBranch *b_IsoTrack_miniPFRelIso_all_;
    bool loaded_IsoTrack_miniPFRelIso_all_;
    float IsoTrack_miniPFRelIso_chg_[NISOTRACK_MAX];
    vector<float> v_IsoTrack_miniPFRelIso_chg_;
    TBranch *b_IsoTrack_miniPFRelIso_chg_;
    bool loaded_IsoTrack_miniPFRelIso_chg_;
    int IsoTrack_pdgId_[NISOTRACK_MAX];
    vector<int> v_IsoTrack_pdgId_;
    TBranch *b_IsoTrack_pdgId_;
    bool loaded_IsoTrack_pdgId_;
    float IsoTrack_pfRelIso03_all_[NISOTRACK_MAX];
    vector<float> v_IsoTrack_pfRelIso03_all_;
    TBranch *b_IsoTrack_pfRelIso03_all_;
    bool loaded_IsoTrack_pfRelIso03_all_;
    float IsoTrack_pfRelIso03_chg_[NISOTRACK_MAX];
    vector<float> v_IsoTrack_pfRelIso03_chg_;
    TBranch *b_IsoTrack_pfRelIso03_chg_;
    bool loaded_IsoTrack_pfRelIso03_chg_;
    float IsoTrack_phi_[NISOTRACK_MAX];
    vector<float> v_IsoTrack_phi_;
    TBranch *b_IsoTrack_phi_;
    bool loaded_IsoTrack_phi_;
    float IsoTrack_pt_[NISOTRACK_MAX];
    vector<float> v_IsoTrack_pt_;
    TBranch *b_IsoTrack_pt_;
    bool loaded_IsoTrack_pt_;
    bool Jet_Filter_[NJET_MAX];
    vector<bool> v_Jet_Filter_;
    TBranch *b_Jet_Filter_;
    bool loaded_Jet_Filter_;
    bool Jet_FilterLoose_[NJET_MAX];
    vector<bool> v_Jet_FilterLoose_;
    TBranch *b_Jet_FilterLoose_;
    bool loaded_Jet_FilterLoose_;
    float Jet_area_[NJET_MAX];
    vector<float> v_Jet_area_;
    TBranch *b_Jet_area_;
    bool loaded_Jet_area_;
    float Jet_bRegCorr_[NJET_MAX];
    vector<float> v_Jet_bRegCorr_;
    TBranch *b_Jet_bRegCorr_;
    bool loaded_Jet_bRegCorr_;
    float Jet_bRegRes_[NJET_MAX];
    vector<float> v_Jet_bRegRes_;
    TBranch *b_Jet_bRegRes_;
    bool loaded_Jet_bRegRes_;
    float Jet_btagCMVA_[NJET_MAX];
    vector<float> v_Jet_btagCMVA_;
    TBranch *b_Jet_btagCMVA_;
    bool loaded_Jet_btagCMVA_;
    float Jet_btagCSVV2_[NJET_MAX];
    vector<float> v_Jet_btagCSVV2_;
    TBranch *b_Jet_btagCSVV2_;
    bool loaded_Jet_btagCSVV2_;
    float Jet_btagDeepB_[NJET_MAX];
    vector<float> v_Jet_btagDeepB_;
    TBranch *b_Jet_btagDeepB_;
    bool loaded_Jet_btagDeepB_;
    float Jet_btagDeepC_[NJET_MAX];
    vector<float> v_Jet_btagDeepC_;
    TBranch *b_Jet_btagDeepC_;
    bool loaded_Jet_btagDeepC_;
    float Jet_btagDeepFlavB_[NJET_MAX];
    vector<float> v_Jet_btagDeepFlavB_;
    TBranch *b_Jet_btagDeepFlavB_;
    bool loaded_Jet_btagDeepFlavB_;
    float Jet_btagDeepFlavC_[NJET_MAX];
    vector<float> v_Jet_btagDeepFlavC_;
    TBranch *b_Jet_btagDeepFlavC_;
    bool loaded_Jet_btagDeepFlavC_;
    float Jet_cRegCorr_[NJET_MAX];
    vector<float> v_Jet_cRegCorr_;
    TBranch *b_Jet_cRegCorr_;
    bool loaded_Jet_cRegCorr_;
    float Jet_cRegRes_[NJET_MAX];
    vector<float> v_Jet_cRegRes_;
    TBranch *b_Jet_cRegRes_;
    bool loaded_Jet_cRegRes_;
    float Jet_chEmEF_[NJET_MAX];
    vector<float> v_Jet_chEmEF_;
    TBranch *b_Jet_chEmEF_;
    bool loaded_Jet_chEmEF_;
    float Jet_chFPV0EF_[NJET_MAX];
    vector<float> v_Jet_chFPV0EF_;
    TBranch *b_Jet_chFPV0EF_;
    bool loaded_Jet_chFPV0EF_;
    float Jet_chFPV1EF_[NJET_MAX];
    vector<float> v_Jet_chFPV1EF_;
    TBranch *b_Jet_chFPV1EF_;
    bool loaded_Jet_chFPV1EF_;
    float Jet_chFPV2EF_[NJET_MAX];
    vector<float> v_Jet_chFPV2EF_;
    TBranch *b_Jet_chFPV2EF_;
    bool loaded_Jet_chFPV2EF_;
    float Jet_chFPV3EF_[NJET_MAX];
    vector<float> v_Jet_chFPV3EF_;
    TBranch *b_Jet_chFPV3EF_;
    bool loaded_Jet_chFPV3EF_;
    float Jet_chHEF_[NJET_MAX];
    vector<float> v_Jet_chHEF_;
    TBranch *b_Jet_chHEF_;
    bool loaded_Jet_chHEF_;
    UChar_t Jet_cleanmask_[NJET_MAX];
    vector<UChar_t> v_Jet_cleanmask_;
    TBranch *b_Jet_cleanmask_;
    bool loaded_Jet_cleanmask_;
    float Jet_corr_JEC_[NJET_MAX];
    vector<float> v_Jet_corr_JEC_;
    TBranch *b_Jet_corr_JEC_;
    bool loaded_Jet_corr_JEC_;
    float Jet_corr_JER_[NJET_MAX];
    vector<float> v_Jet_corr_JER_;
    TBranch *b_Jet_corr_JER_;
    bool loaded_Jet_corr_JER_;
    int Jet_electronIdx1_[NJET_MAX];
    vector<int> v_Jet_electronIdx1_;
    TBranch *b_Jet_electronIdx1_;
    bool loaded_Jet_electronIdx1_;
    int Jet_electronIdx2_[NJET_MAX];
    vector<int> v_Jet_electronIdx2_;
    TBranch *b_Jet_electronIdx2_;
    bool loaded_Jet_electronIdx2_;
    float Jet_eta_[NJET_MAX];
    vector<float> v_Jet_eta_;
    TBranch *b_Jet_eta_;
    bool loaded_Jet_eta_;
    int Jet_genJetIdx_[NJET_MAX];
    vector<int> v_Jet_genJetIdx_;
    TBranch *b_Jet_genJetIdx_;
    bool loaded_Jet_genJetIdx_;
    int Jet_hadronFlavour_[NJET_MAX];
    vector<int> v_Jet_hadronFlavour_;
    TBranch *b_Jet_hadronFlavour_;
    bool loaded_Jet_hadronFlavour_;
    int Jet_jetId_[NJET_MAX];
    vector<int> v_Jet_jetId_;
    TBranch *b_Jet_jetId_;
    bool loaded_Jet_jetId_;
    float Jet_mass_[NJET_MAX];
    vector<float> v_Jet_mass_;
    TBranch *b_Jet_mass_;
    bool loaded_Jet_mass_;
    float Jet_mass_jerDown_[NJET_MAX];
    vector<float> v_Jet_mass_jerDown_;
    TBranch *b_Jet_mass_jerDown_;
    bool loaded_Jet_mass_jerDown_;
    float Jet_mass_jerUp_[NJET_MAX];
    vector<float> v_Jet_mass_jerUp_;
    TBranch *b_Jet_mass_jerUp_;
    bool loaded_Jet_mass_jerUp_;
    float Jet_mass_jesTotalDown_[NJET_MAX];
    vector<float> v_Jet_mass_jesTotalDown_;
    TBranch *b_Jet_mass_jesTotalDown_;
    bool loaded_Jet_mass_jesTotalDown_;
    float Jet_mass_jesTotalUp_[NJET_MAX];
    vector<float> v_Jet_mass_jesTotalUp_;
    TBranch *b_Jet_mass_jesTotalUp_;
    bool loaded_Jet_mass_jesTotalUp_;
    float Jet_mass_nom_[NJET_MAX];
    vector<float> v_Jet_mass_nom_;
    TBranch *b_Jet_mass_nom_;
    bool loaded_Jet_mass_nom_;
    float Jet_mass_raw_[NJET_MAX];
    vector<float> v_Jet_mass_raw_;
    TBranch *b_Jet_mass_raw_;
    bool loaded_Jet_mass_raw_;
    float Jet_muEF_[NJET_MAX];
    vector<float> v_Jet_muEF_;
    TBranch *b_Jet_muEF_;
    bool loaded_Jet_muEF_;
    int Jet_muonIdx1_[NJET_MAX];
    vector<int> v_Jet_muonIdx1_;
    TBranch *b_Jet_muonIdx1_;
    bool loaded_Jet_muonIdx1_;
    int Jet_muonIdx2_[NJET_MAX];
    vector<int> v_Jet_muonIdx2_;
    TBranch *b_Jet_muonIdx2_;
    bool loaded_Jet_muonIdx2_;
    float Jet_muonSubtrFactor_[NJET_MAX];
    vector<float> v_Jet_muonSubtrFactor_;
    TBranch *b_Jet_muonSubtrFactor_;
    bool loaded_Jet_muonSubtrFactor_;
    int Jet_nConstituents_[NJET_MAX];
    vector<int> v_Jet_nConstituents_;
    TBranch *b_Jet_nConstituents_;
    bool loaded_Jet_nConstituents_;
    int Jet_nElectrons_[NJET_MAX];
    vector<int> v_Jet_nElectrons_;
    TBranch *b_Jet_nElectrons_;
    bool loaded_Jet_nElectrons_;
    int Jet_nMuons_[NJET_MAX];
    vector<int> v_Jet_nMuons_;
    TBranch *b_Jet_nMuons_;
    bool loaded_Jet_nMuons_;
    float Jet_neEmEF_[NJET_MAX];
    vector<float> v_Jet_neEmEF_;
    TBranch *b_Jet_neEmEF_;
    bool loaded_Jet_neEmEF_;
    float Jet_neHEF_[NJET_MAX];
    vector<float> v_Jet_neHEF_;
    TBranch *b_Jet_neHEF_;
    bool loaded_Jet_neHEF_;
    vector<LorentzVector> v_Jet_p4_;
    TBranch *b_Jet_p4_;
    bool loaded_Jet_p4_;
    int Jet_partonFlavour_[NJET_MAX];
    vector<int> v_Jet_partonFlavour_;
    TBranch *b_Jet_partonFlavour_;
    bool loaded_Jet_partonFlavour_;
    float Jet_phi_[NJET_MAX];
    vector<float> v_Jet_phi_;
    TBranch *b_Jet_phi_;
    bool loaded_Jet_phi_;
    float Jet_pt_[NJET_MAX];
    vector<float> v_Jet_pt_;
    TBranch *b_Jet_pt_;
    bool loaded_Jet_pt_;
    float Jet_pt_jerDown_[NJET_MAX];
    vector<float> v_Jet_pt_jerDown_;
    TBranch *b_Jet_pt_jerDown_;
    bool loaded_Jet_pt_jerDown_;
    float Jet_pt_jerUp_[NJET_MAX];
    vector<float> v_Jet_pt_jerUp_;
    TBranch *b_Jet_pt_jerUp_;
    bool loaded_Jet_pt_jerUp_;
    float Jet_pt_jesTotalDown_[NJET_MAX];
    vector<float> v_Jet_pt_jesTotalDown_;
    TBranch *b_Jet_pt_jesTotalDown_;
    bool loaded_Jet_pt_jesTotalDown_;
    float Jet_pt_jesTotalUp_[NJET_MAX];
    vector<float> v_Jet_pt_jesTotalUp_;
    TBranch *b_Jet_pt_jesTotalUp_;
    bool loaded_Jet_pt_jesTotalUp_;
    float Jet_pt_nom_[NJET_MAX];
    vector<float> v_Jet_pt_nom_;
    TBranch *b_Jet_pt_nom_;
    bool loaded_Jet_pt_nom_;
    float Jet_pt_raw_[NJET_MAX];
    vector<float> v_Jet_pt_raw_;
    TBranch *b_Jet_pt_raw_;
    bool loaded_Jet_pt_raw_;
    int Jet_puId_[NJET_MAX];
    vector<int> v_Jet_puId_;
    TBranch *b_Jet_puId_;
    bool loaded_Jet_puId_;
    float Jet_puIdDisc_[NJET_MAX];
    vector<float> v_Jet_puIdDisc_;
    TBranch *b_Jet_puIdDisc_;
    bool loaded_Jet_puIdDisc_;
    float Jet_qgl_[NJET_MAX];
    vector<float> v_Jet_qgl_;
    TBranch *b_Jet_qgl_;
    bool loaded_Jet_qgl_;
    float Jet_rawFactor_[NJET_MAX];
    vector<float> v_Jet_rawFactor_;
    TBranch *b_Jet_rawFactor_;
    bool loaded_Jet_rawFactor_;
    float LHEPart_eta_[NLHEPART_MAX];
    vector<float> v_LHEPart_eta_;
    TBranch *b_LHEPart_eta_;
    bool loaded_LHEPart_eta_;
    float LHEPart_incomingpz_[NLHEPART_MAX];
    vector<float> v_LHEPart_incomingpz_;
    TBranch *b_LHEPart_incomingpz_;
    bool loaded_LHEPart_incomingpz_;
    float LHEPart_mass_[NLHEPART_MAX];
    vector<float> v_LHEPart_mass_;
    TBranch *b_LHEPart_mass_;
    bool loaded_LHEPart_mass_;
    vector<LorentzVector> v_LHEPart_p4_;
    TBranch *b_LHEPart_p4_;
    bool loaded_LHEPart_p4_;
    int LHEPart_pdgId_[NLHEPART_MAX];
    vector<int> v_LHEPart_pdgId_;
    TBranch *b_LHEPart_pdgId_;
    bool loaded_LHEPart_pdgId_;
    float LHEPart_phi_[NLHEPART_MAX];
    vector<float> v_LHEPart_phi_;
    TBranch *b_LHEPart_phi_;
    bool loaded_LHEPart_phi_;
    float LHEPart_pt_[NLHEPART_MAX];
    vector<float> v_LHEPart_pt_;
    TBranch *b_LHEPart_pt_;
    bool loaded_LHEPart_pt_;
    int LHEPart_spin_[NLHEPART_MAX];
    vector<int> v_LHEPart_spin_;
    TBranch *b_LHEPart_spin_;
    bool loaded_LHEPart_spin_;
    int LHEPart_status_[NLHEPART_MAX];
    vector<int> v_LHEPart_status_;
    TBranch *b_LHEPart_status_;
    bool loaded_LHEPart_status_;
    float LHEPdfWeight_[NLHEPDFWEIGHT_MAX];
    vector<float> v_LHEPdfWeight_;
    TBranch *b_LHEPdfWeight_;
    bool loaded_LHEPdfWeight_;
    float LHEReweightingWeight_[NLHEREWEIGHTINGWEIGHT_MAX];
    vector<float> v_LHEReweightingWeight_;
    TBranch *b_LHEReweightingWeight_;
    bool loaded_LHEReweightingWeight_;
    float LHEScaleWeight_[NLHESCALEWEIGHT_MAX];
    vector<float> v_LHEScaleWeight_;
    TBranch *b_LHEScaleWeight_;
    bool loaded_LHEScaleWeight_;
    float LHEWeight_originalXWGTUP_;
    TBranch *b_LHEWeight_originalXWGTUP_;
    bool loaded_LHEWeight_originalXWGTUP_;
    float LHE_AlphaS_;
    TBranch *b_LHE_AlphaS_;
    bool loaded_LHE_AlphaS_;
    float LHE_HT_;
    TBranch *b_LHE_HT_;
    bool loaded_LHE_HT_;
    float LHE_HTIncoming_;
    TBranch *b_LHE_HTIncoming_;
    bool loaded_LHE_HTIncoming_;
    UChar_t LHE_Nb_;
    TBranch *b_LHE_Nb_;
    bool loaded_LHE_Nb_;
    UChar_t LHE_Nc_;
    TBranch *b_LHE_Nc_;
    bool loaded_LHE_Nc_;
    UChar_t LHE_Nglu_;
    TBranch *b_LHE_Nglu_;
    bool loaded_LHE_Nglu_;
    UChar_t LHE_Njets_;
    TBranch *b_LHE_Njets_;
    bool loaded_LHE_Njets_;
    UChar_t LHE_NpLO_;
    TBranch *b_LHE_NpLO_;
    bool loaded_LHE_NpLO_;
    UChar_t LHE_NpNLO_;
    TBranch *b_LHE_NpNLO_;
    bool loaded_LHE_NpNLO_;
    UChar_t LHE_Nuds_;
    TBranch *b_LHE_Nuds_;
    bool loaded_LHE_Nuds_;
    float LHE_Vpt_;
    TBranch *b_LHE_Vpt_;
    bool loaded_LHE_Vpt_;
    float METFixEE2017_MetUnclustEnUpDeltaX_;
    TBranch *b_METFixEE2017_MetUnclustEnUpDeltaX_;
    bool loaded_METFixEE2017_MetUnclustEnUpDeltaX_;
    float METFixEE2017_MetUnclustEnUpDeltaY_;
    TBranch *b_METFixEE2017_MetUnclustEnUpDeltaY_;
    bool loaded_METFixEE2017_MetUnclustEnUpDeltaY_;
    float METFixEE2017_covXX_;
    TBranch *b_METFixEE2017_covXX_;
    bool loaded_METFixEE2017_covXX_;
    float METFixEE2017_covXY_;
    TBranch *b_METFixEE2017_covXY_;
    bool loaded_METFixEE2017_covXY_;
    float METFixEE2017_covYY_;
    TBranch *b_METFixEE2017_covYY_;
    bool loaded_METFixEE2017_covYY_;
    float METFixEE2017_phi_;
    TBranch *b_METFixEE2017_phi_;
    bool loaded_METFixEE2017_phi_;
    float METFixEE2017_pt_;
    TBranch *b_METFixEE2017_pt_;
    bool loaded_METFixEE2017_pt_;
    float METFixEE2017_significance_;
    TBranch *b_METFixEE2017_significance_;
    bool loaded_METFixEE2017_significance_;
    float METFixEE2017_sumEt_;
    TBranch *b_METFixEE2017_sumEt_;
    bool loaded_METFixEE2017_sumEt_;
    float METFixEE2017_sumPtUnclustered_;
    TBranch *b_METFixEE2017_sumPtUnclustered_;
    bool loaded_METFixEE2017_sumPtUnclustered_;
    float MET_MetUnclustEnUpDeltaX_;
    TBranch *b_MET_MetUnclustEnUpDeltaX_;
    bool loaded_MET_MetUnclustEnUpDeltaX_;
    float MET_MetUnclustEnUpDeltaY_;
    TBranch *b_MET_MetUnclustEnUpDeltaY_;
    bool loaded_MET_MetUnclustEnUpDeltaY_;
    float MET_T1Smear_phi_;
    TBranch *b_MET_T1Smear_phi_;
    bool loaded_MET_T1Smear_phi_;
    float MET_T1Smear_phi_jerDown_;
    TBranch *b_MET_T1Smear_phi_jerDown_;
    bool loaded_MET_T1Smear_phi_jerDown_;
    float MET_T1Smear_phi_jerUp_;
    TBranch *b_MET_T1Smear_phi_jerUp_;
    bool loaded_MET_T1Smear_phi_jerUp_;
    float MET_T1Smear_phi_jesTotalDown_;
    TBranch *b_MET_T1Smear_phi_jesTotalDown_;
    bool loaded_MET_T1Smear_phi_jesTotalDown_;
    float MET_T1Smear_phi_jesTotalUp_;
    TBranch *b_MET_T1Smear_phi_jesTotalUp_;
    bool loaded_MET_T1Smear_phi_jesTotalUp_;
    float MET_T1Smear_pt_;
    TBranch *b_MET_T1Smear_pt_;
    bool loaded_MET_T1Smear_pt_;
    float MET_T1Smear_pt_jerDown_;
    TBranch *b_MET_T1Smear_pt_jerDown_;
    bool loaded_MET_T1Smear_pt_jerDown_;
    float MET_T1Smear_pt_jerUp_;
    TBranch *b_MET_T1Smear_pt_jerUp_;
    bool loaded_MET_T1Smear_pt_jerUp_;
    float MET_T1Smear_pt_jesTotalDown_;
    TBranch *b_MET_T1Smear_pt_jesTotalDown_;
    bool loaded_MET_T1Smear_pt_jesTotalDown_;
    float MET_T1Smear_pt_jesTotalUp_;
    TBranch *b_MET_T1Smear_pt_jesTotalUp_;
    bool loaded_MET_T1Smear_pt_jesTotalUp_;
    float MET_T1_phi_;
    TBranch *b_MET_T1_phi_;
    bool loaded_MET_T1_phi_;
    float MET_T1_phi_jerDown_;
    TBranch *b_MET_T1_phi_jerDown_;
    bool loaded_MET_T1_phi_jerDown_;
    float MET_T1_phi_jerUp_;
    TBranch *b_MET_T1_phi_jerUp_;
    bool loaded_MET_T1_phi_jerUp_;
    float MET_T1_phi_jesTotalDown_;
    TBranch *b_MET_T1_phi_jesTotalDown_;
    bool loaded_MET_T1_phi_jesTotalDown_;
    float MET_T1_phi_jesTotalUp_;
    TBranch *b_MET_T1_phi_jesTotalUp_;
    bool loaded_MET_T1_phi_jesTotalUp_;
    float MET_T1_pt_;
    TBranch *b_MET_T1_pt_;
    bool loaded_MET_T1_pt_;
    float MET_T1_pt_jerDown_;
    TBranch *b_MET_T1_pt_jerDown_;
    bool loaded_MET_T1_pt_jerDown_;
    float MET_T1_pt_jerUp_;
    TBranch *b_MET_T1_pt_jerUp_;
    bool loaded_MET_T1_pt_jerUp_;
    float MET_T1_pt_jesTotalDown_;
    TBranch *b_MET_T1_pt_jesTotalDown_;
    bool loaded_MET_T1_pt_jesTotalDown_;
    float MET_T1_pt_jesTotalUp_;
    TBranch *b_MET_T1_pt_jesTotalUp_;
    bool loaded_MET_T1_pt_jesTotalUp_;
    float MET_covXX_;
    TBranch *b_MET_covXX_;
    bool loaded_MET_covXX_;
    float MET_covXY_;
    TBranch *b_MET_covXY_;
    bool loaded_MET_covXY_;
    float MET_covYY_;
    TBranch *b_MET_covYY_;
    bool loaded_MET_covYY_;
    float MET_fiducialGenPhi_;
    TBranch *b_MET_fiducialGenPhi_;
    bool loaded_MET_fiducialGenPhi_;
    float MET_fiducialGenPt_;
    TBranch *b_MET_fiducialGenPt_;
    bool loaded_MET_fiducialGenPt_;
    float MET_phi_;
    TBranch *b_MET_phi_;
    bool loaded_MET_phi_;
    float MET_phi_unclustEnDown_;
    TBranch *b_MET_phi_unclustEnDown_;
    bool loaded_MET_phi_unclustEnDown_;
    float MET_phi_unclustEnUp_;
    TBranch *b_MET_phi_unclustEnUp_;
    bool loaded_MET_phi_unclustEnUp_;
    float MET_pt_;
    TBranch *b_MET_pt_;
    bool loaded_MET_pt_;
    float MET_pt_unclustEnDown_;
    TBranch *b_MET_pt_unclustEnDown_;
    bool loaded_MET_pt_unclustEnDown_;
    float MET_pt_unclustEnUp_;
    TBranch *b_MET_pt_unclustEnUp_;
    bool loaded_MET_pt_unclustEnUp_;
    float MET_significance_;
    TBranch *b_MET_significance_;
    bool loaded_MET_significance_;
    float MET_sumEt_;
    TBranch *b_MET_sumEt_;
    bool loaded_MET_sumEt_;
    float MET_sumPtUnclustered_;
    TBranch *b_MET_sumPtUnclustered_;
    bool loaded_MET_sumPtUnclustered_;
    int Muon_charge_[NMUON_MAX];
    vector<int> v_Muon_charge_;
    TBranch *b_Muon_charge_;
    bool loaded_Muon_charge_;
    UChar_t Muon_cleanmask_[NMUON_MAX];
    vector<UChar_t> v_Muon_cleanmask_;
    TBranch *b_Muon_cleanmask_;
    bool loaded_Muon_cleanmask_;
    float Muon_correctedDown_pt_[NMUON_MAX];
    vector<float> v_Muon_correctedDown_pt_;
    TBranch *b_Muon_correctedDown_pt_;
    bool loaded_Muon_correctedDown_pt_;
    float Muon_correctedUp_pt_[NMUON_MAX];
    vector<float> v_Muon_correctedUp_pt_;
    TBranch *b_Muon_correctedUp_pt_;
    bool loaded_Muon_correctedUp_pt_;
    float Muon_corrected_pt_[NMUON_MAX];
    vector<float> v_Muon_corrected_pt_;
    TBranch *b_Muon_corrected_pt_;
    bool loaded_Muon_corrected_pt_;
    float Muon_dxy_[NMUON_MAX];
    vector<float> v_Muon_dxy_;
    TBranch *b_Muon_dxy_;
    bool loaded_Muon_dxy_;
    float Muon_dxyErr_[NMUON_MAX];
    vector<float> v_Muon_dxyErr_;
    TBranch *b_Muon_dxyErr_;
    bool loaded_Muon_dxyErr_;
    float Muon_dxybs_[NMUON_MAX];
    vector<float> v_Muon_dxybs_;
    TBranch *b_Muon_dxybs_;
    bool loaded_Muon_dxybs_;
    float Muon_dz_[NMUON_MAX];
    vector<float> v_Muon_dz_;
    TBranch *b_Muon_dz_;
    bool loaded_Muon_dz_;
    float Muon_dzErr_[NMUON_MAX];
    vector<float> v_Muon_dzErr_;
    TBranch *b_Muon_dzErr_;
    bool loaded_Muon_dzErr_;
    float Muon_eta_[NMUON_MAX];
    vector<float> v_Muon_eta_;
    TBranch *b_Muon_eta_;
    bool loaded_Muon_eta_;
    int Muon_fsrPhotonIdx_[NMUON_MAX];
    vector<int> v_Muon_fsrPhotonIdx_;
    TBranch *b_Muon_fsrPhotonIdx_;
    bool loaded_Muon_fsrPhotonIdx_;
    UChar_t Muon_genPartFlav_[NMUON_MAX];
    vector<UChar_t> v_Muon_genPartFlav_;
    TBranch *b_Muon_genPartFlav_;
    bool loaded_Muon_genPartFlav_;
    int Muon_genPartIdx_[NMUON_MAX];
    vector<int> v_Muon_genPartIdx_;
    TBranch *b_Muon_genPartIdx_;
    bool loaded_Muon_genPartIdx_;
    UChar_t Muon_highPtId_[NMUON_MAX];
    vector<UChar_t> v_Muon_highPtId_;
    TBranch *b_Muon_highPtId_;
    bool loaded_Muon_highPtId_;
    bool Muon_highPurity_[NMUON_MAX];
    vector<bool> v_Muon_highPurity_;
    TBranch *b_Muon_highPurity_;
    bool loaded_Muon_highPurity_;
    bool Muon_inTimeMuon_[NMUON_MAX];
    vector<bool> v_Muon_inTimeMuon_;
    TBranch *b_Muon_inTimeMuon_;
    bool loaded_Muon_inTimeMuon_;
    float Muon_ip3d_[NMUON_MAX];
    vector<float> v_Muon_ip3d_;
    TBranch *b_Muon_ip3d_;
    bool loaded_Muon_ip3d_;
    bool Muon_isGlobal_[NMUON_MAX];
    vector<bool> v_Muon_isGlobal_;
    TBranch *b_Muon_isGlobal_;
    bool loaded_Muon_isGlobal_;
    bool Muon_isPFcand_[NMUON_MAX];
    vector<bool> v_Muon_isPFcand_;
    TBranch *b_Muon_isPFcand_;
    bool loaded_Muon_isPFcand_;
    bool Muon_isTracker_[NMUON_MAX];
    vector<bool> v_Muon_isTracker_;
    TBranch *b_Muon_isTracker_;
    bool loaded_Muon_isTracker_;
    int Muon_jetIdx_[NMUON_MAX];
    vector<int> v_Muon_jetIdx_;
    TBranch *b_Muon_jetIdx_;
    bool loaded_Muon_jetIdx_;
    float Muon_jetPtRelv2_[NMUON_MAX];
    vector<float> v_Muon_jetPtRelv2_;
    TBranch *b_Muon_jetPtRelv2_;
    bool loaded_Muon_jetPtRelv2_;
    float Muon_jetRelIso_[NMUON_MAX];
    vector<float> v_Muon_jetRelIso_;
    TBranch *b_Muon_jetRelIso_;
    bool loaded_Muon_jetRelIso_;
    bool Muon_looseId_[NMUON_MAX];
    vector<bool> v_Muon_looseId_;
    TBranch *b_Muon_looseId_;
    bool loaded_Muon_looseId_;
    float Muon_mass_[NMUON_MAX];
    vector<float> v_Muon_mass_;
    TBranch *b_Muon_mass_;
    bool loaded_Muon_mass_;
    bool Muon_mediumId_[NMUON_MAX];
    vector<bool> v_Muon_mediumId_;
    TBranch *b_Muon_mediumId_;
    bool loaded_Muon_mediumId_;
    bool Muon_mediumPromptId_[NMUON_MAX];
    vector<bool> v_Muon_mediumPromptId_;
    TBranch *b_Muon_mediumPromptId_;
    bool loaded_Muon_mediumPromptId_;
    UChar_t Muon_miniIsoId_[NMUON_MAX];
    vector<UChar_t> v_Muon_miniIsoId_;
    TBranch *b_Muon_miniIsoId_;
    bool loaded_Muon_miniIsoId_;
    float Muon_miniPFRelIso_all_[NMUON_MAX];
    vector<float> v_Muon_miniPFRelIso_all_;
    TBranch *b_Muon_miniPFRelIso_all_;
    bool loaded_Muon_miniPFRelIso_all_;
    float Muon_miniPFRelIso_chg_[NMUON_MAX];
    vector<float> v_Muon_miniPFRelIso_chg_;
    TBranch *b_Muon_miniPFRelIso_chg_;
    bool loaded_Muon_miniPFRelIso_chg_;
    UChar_t Muon_multiIsoId_[NMUON_MAX];
    vector<UChar_t> v_Muon_multiIsoId_;
    TBranch *b_Muon_multiIsoId_;
    bool loaded_Muon_multiIsoId_;
    UChar_t Muon_mvaId_[NMUON_MAX];
    vector<UChar_t> v_Muon_mvaId_;
    TBranch *b_Muon_mvaId_;
    bool loaded_Muon_mvaId_;
    float Muon_mvaLowPt_[NMUON_MAX];
    vector<float> v_Muon_mvaLowPt_;
    TBranch *b_Muon_mvaLowPt_;
    bool loaded_Muon_mvaLowPt_;
    float Muon_mvaTTH_[NMUON_MAX];
    vector<float> v_Muon_mvaTTH_;
    TBranch *b_Muon_mvaTTH_;
    bool loaded_Muon_mvaTTH_;
    int Muon_nStations_[NMUON_MAX];
    vector<int> v_Muon_nStations_;
    TBranch *b_Muon_nStations_;
    bool loaded_Muon_nStations_;
    int Muon_nTrackerLayers_[NMUON_MAX];
    vector<int> v_Muon_nTrackerLayers_;
    TBranch *b_Muon_nTrackerLayers_;
    bool loaded_Muon_nTrackerLayers_;
    vector<LorentzVector> v_Muon_p4_;
    TBranch *b_Muon_p4_;
    bool loaded_Muon_p4_;
    int Muon_pdgId_[NMUON_MAX];
    vector<int> v_Muon_pdgId_;
    TBranch *b_Muon_pdgId_;
    bool loaded_Muon_pdgId_;
    UChar_t Muon_pfIsoId_[NMUON_MAX];
    vector<UChar_t> v_Muon_pfIsoId_;
    TBranch *b_Muon_pfIsoId_;
    bool loaded_Muon_pfIsoId_;
    float Muon_pfRelIso03_all_[NMUON_MAX];
    vector<float> v_Muon_pfRelIso03_all_;
    TBranch *b_Muon_pfRelIso03_all_;
    bool loaded_Muon_pfRelIso03_all_;
    float Muon_pfRelIso03_chg_[NMUON_MAX];
    vector<float> v_Muon_pfRelIso03_chg_;
    TBranch *b_Muon_pfRelIso03_chg_;
    bool loaded_Muon_pfRelIso03_chg_;
    float Muon_pfRelIso04_all_[NMUON_MAX];
    vector<float> v_Muon_pfRelIso04_all_;
    TBranch *b_Muon_pfRelIso04_all_;
    bool loaded_Muon_pfRelIso04_all_;
    float Muon_phi_[NMUON_MAX];
    vector<float> v_Muon_phi_;
    TBranch *b_Muon_phi_;
    bool loaded_Muon_phi_;
    float Muon_pt_[NMUON_MAX];
    vector<float> v_Muon_pt_;
    TBranch *b_Muon_pt_;
    bool loaded_Muon_pt_;
    float Muon_ptErr_[NMUON_MAX];
    vector<float> v_Muon_ptErr_;
    TBranch *b_Muon_ptErr_;
    bool loaded_Muon_ptErr_;
    float Muon_segmentComp_[NMUON_MAX];
    vector<float> v_Muon_segmentComp_;
    TBranch *b_Muon_segmentComp_;
    bool loaded_Muon_segmentComp_;
    float Muon_sip3d_[NMUON_MAX];
    vector<float> v_Muon_sip3d_;
    TBranch *b_Muon_sip3d_;
    bool loaded_Muon_sip3d_;
    bool Muon_softId_[NMUON_MAX];
    vector<bool> v_Muon_softId_;
    TBranch *b_Muon_softId_;
    bool loaded_Muon_softId_;
    float Muon_softMva_[NMUON_MAX];
    vector<float> v_Muon_softMva_;
    TBranch *b_Muon_softMva_;
    bool loaded_Muon_softMva_;
    bool Muon_softMvaId_[NMUON_MAX];
    vector<bool> v_Muon_softMvaId_;
    TBranch *b_Muon_softMvaId_;
    bool loaded_Muon_softMvaId_;
    int Muon_tightCharge_[NMUON_MAX];
    vector<int> v_Muon_tightCharge_;
    TBranch *b_Muon_tightCharge_;
    bool loaded_Muon_tightCharge_;
    bool Muon_tightId_[NMUON_MAX];
    vector<bool> v_Muon_tightId_;
    TBranch *b_Muon_tightId_;
    bool loaded_Muon_tightId_;
    UChar_t Muon_tkIsoId_[NMUON_MAX];
    vector<UChar_t> v_Muon_tkIsoId_;
    TBranch *b_Muon_tkIsoId_;
    bool loaded_Muon_tkIsoId_;
    float Muon_tkRelIso_[NMUON_MAX];
    vector<float> v_Muon_tkRelIso_;
    TBranch *b_Muon_tkRelIso_;
    bool loaded_Muon_tkRelIso_;
    bool Muon_triggerIdLoose_[NMUON_MAX];
    vector<bool> v_Muon_triggerIdLoose_;
    TBranch *b_Muon_triggerIdLoose_;
    bool loaded_Muon_triggerIdLoose_;
    float Muon_tunepRelPt_[NMUON_MAX];
    vector<float> v_Muon_tunepRelPt_;
    TBranch *b_Muon_tunepRelPt_;
    bool loaded_Muon_tunepRelPt_;
    float OtherPV_z_[NOTHERPV_MAX];
    vector<float> v_OtherPV_z_;
    TBranch *b_OtherPV_z_;
    bool loaded_OtherPV_z_;
    float PSWeight_[NPSWEIGHT_MAX];
    vector<float> v_PSWeight_;
    TBranch *b_PSWeight_;
    bool loaded_PSWeight_;
    float PV_chi2_;
    TBranch *b_PV_chi2_;
    bool loaded_PV_chi2_;
    float PV_ndof_;
    TBranch *b_PV_ndof_;
    bool loaded_PV_ndof_;
    int PV_npvs_;
    TBranch *b_PV_npvs_;
    bool loaded_PV_npvs_;
    int PV_npvsGood_;
    TBranch *b_PV_npvsGood_;
    bool loaded_PV_npvsGood_;
    float PV_score_;
    TBranch *b_PV_score_;
    bool loaded_PV_score_;
    float PV_x_;
    TBranch *b_PV_x_;
    bool loaded_PV_x_;
    float PV_y_;
    TBranch *b_PV_y_;
    bool loaded_PV_y_;
    float PV_z_;
    TBranch *b_PV_z_;
    bool loaded_PV_z_;
    int Photon_charge_[NPHOTON_MAX];
    vector<int> v_Photon_charge_;
    TBranch *b_Photon_charge_;
    bool loaded_Photon_charge_;
    float Photon_chargedHadronIso_[NPHOTON_MAX];
    vector<float> v_Photon_chargedHadronIso_;
    TBranch *b_Photon_chargedHadronIso_;
    bool loaded_Photon_chargedHadronIso_;
    UChar_t Photon_cleanmask_[NPHOTON_MAX];
    vector<UChar_t> v_Photon_cleanmask_;
    TBranch *b_Photon_cleanmask_;
    bool loaded_Photon_cleanmask_;
    int Photon_cutBased_[NPHOTON_MAX];
    vector<int> v_Photon_cutBased_;
    TBranch *b_Photon_cutBased_;
    bool loaded_Photon_cutBased_;
    int Photon_cutBased_Fall17V1Bitmap_[NPHOTON_MAX];
    vector<int> v_Photon_cutBased_Fall17V1Bitmap_;
    TBranch *b_Photon_cutBased_Fall17V1Bitmap_;
    bool loaded_Photon_cutBased_Fall17V1Bitmap_;
    int Photon_cutBased_Spring16V2p2_[NPHOTON_MAX];
    vector<int> v_Photon_cutBased_Spring16V2p2_;
    TBranch *b_Photon_cutBased_Spring16V2p2_;
    bool loaded_Photon_cutBased_Spring16V2p2_;
    float Photon_eCorr_[NPHOTON_MAX];
    vector<float> v_Photon_eCorr_;
    TBranch *b_Photon_eCorr_;
    bool loaded_Photon_eCorr_;
    int Photon_electronIdx_[NPHOTON_MAX];
    vector<int> v_Photon_electronIdx_;
    TBranch *b_Photon_electronIdx_;
    bool loaded_Photon_electronIdx_;
    bool Photon_electronVeto_[NPHOTON_MAX];
    vector<bool> v_Photon_electronVeto_;
    TBranch *b_Photon_electronVeto_;
    bool loaded_Photon_electronVeto_;
    float Photon_energyErr_[NPHOTON_MAX];
    vector<float> v_Photon_energyErr_;
    TBranch *b_Photon_energyErr_;
    bool loaded_Photon_energyErr_;
    float Photon_eta_[NPHOTON_MAX];
    vector<float> v_Photon_eta_;
    TBranch *b_Photon_eta_;
    bool loaded_Photon_eta_;
    UChar_t Photon_genPartFlav_[NPHOTON_MAX];
    vector<UChar_t> v_Photon_genPartFlav_;
    TBranch *b_Photon_genPartFlav_;
    bool loaded_Photon_genPartFlav_;
    int Photon_genPartIdx_[NPHOTON_MAX];
    vector<int> v_Photon_genPartIdx_;
    TBranch *b_Photon_genPartIdx_;
    bool loaded_Photon_genPartIdx_;
    float Photon_hoe_[NPHOTON_MAX];
    vector<float> v_Photon_hoe_;
    TBranch *b_Photon_hoe_;
    bool loaded_Photon_hoe_;
    bool Photon_isScEtaEB_[NPHOTON_MAX];
    vector<bool> v_Photon_isScEtaEB_;
    TBranch *b_Photon_isScEtaEB_;
    bool loaded_Photon_isScEtaEB_;
    bool Photon_isScEtaEE_[NPHOTON_MAX];
    vector<bool> v_Photon_isScEtaEE_;
    TBranch *b_Photon_isScEtaEE_;
    bool loaded_Photon_isScEtaEE_;
    int Photon_jetIdx_[NPHOTON_MAX];
    vector<int> v_Photon_jetIdx_;
    TBranch *b_Photon_jetIdx_;
    bool loaded_Photon_jetIdx_;
    float Photon_mass_[NPHOTON_MAX];
    vector<float> v_Photon_mass_;
    TBranch *b_Photon_mass_;
    bool loaded_Photon_mass_;
    float Photon_mvaID_[NPHOTON_MAX];
    vector<float> v_Photon_mvaID_;
    TBranch *b_Photon_mvaID_;
    bool loaded_Photon_mvaID_;
    float Photon_mvaID_Fall17V1p1_[NPHOTON_MAX];
    vector<float> v_Photon_mvaID_Fall17V1p1_;
    TBranch *b_Photon_mvaID_Fall17V1p1_;
    bool loaded_Photon_mvaID_Fall17V1p1_;
    float Photon_mvaID_Spring16nonTrigV1_[NPHOTON_MAX];
    vector<float> v_Photon_mvaID_Spring16nonTrigV1_;
    TBranch *b_Photon_mvaID_Spring16nonTrigV1_;
    bool loaded_Photon_mvaID_Spring16nonTrigV1_;
    bool Photon_mvaID_WP80_[NPHOTON_MAX];
    vector<bool> v_Photon_mvaID_WP80_;
    TBranch *b_Photon_mvaID_WP80_;
    bool loaded_Photon_mvaID_WP80_;
    bool Photon_mvaID_WP90_[NPHOTON_MAX];
    vector<bool> v_Photon_mvaID_WP90_;
    TBranch *b_Photon_mvaID_WP90_;
    bool loaded_Photon_mvaID_WP90_;
    vector<LorentzVector> v_Photon_p4_;
    TBranch *b_Photon_p4_;
    bool loaded_Photon_p4_;
    int Photon_pdgId_[NPHOTON_MAX];
    vector<int> v_Photon_pdgId_;
    TBranch *b_Photon_pdgId_;
    bool loaded_Photon_pdgId_;
    float Photon_pfRelIso03_all_[NPHOTON_MAX];
    vector<float> v_Photon_pfRelIso03_all_;
    TBranch *b_Photon_pfRelIso03_all_;
    bool loaded_Photon_pfRelIso03_all_;
    float Photon_pfRelIso03_chg_[NPHOTON_MAX];
    vector<float> v_Photon_pfRelIso03_chg_;
    TBranch *b_Photon_pfRelIso03_chg_;
    bool loaded_Photon_pfRelIso03_chg_;
    float Photon_phi_[NPHOTON_MAX];
    vector<float> v_Photon_phi_;
    TBranch *b_Photon_phi_;
    bool loaded_Photon_phi_;
    float Photon_photonIso_[NPHOTON_MAX];
    vector<float> v_Photon_photonIso_;
    TBranch *b_Photon_photonIso_;
    bool loaded_Photon_photonIso_;
    bool Photon_pixelSeed_[NPHOTON_MAX];
    vector<bool> v_Photon_pixelSeed_;
    TBranch *b_Photon_pixelSeed_;
    bool loaded_Photon_pixelSeed_;
    float Photon_pt_[NPHOTON_MAX];
    vector<float> v_Photon_pt_;
    TBranch *b_Photon_pt_;
    bool loaded_Photon_pt_;
    float Photon_pt_FNUDown_[NPHOTON_MAX];
    vector<float> v_Photon_pt_FNUDown_;
    TBranch *b_Photon_pt_FNUDown_;
    bool loaded_Photon_pt_FNUDown_;
    float Photon_pt_FNUUp_[NPHOTON_MAX];
    vector<float> v_Photon_pt_FNUUp_;
    TBranch *b_Photon_pt_FNUUp_;
    bool loaded_Photon_pt_FNUUp_;
    float Photon_pt_MCScaleDown_[NPHOTON_MAX];
    vector<float> v_Photon_pt_MCScaleDown_;
    TBranch *b_Photon_pt_MCScaleDown_;
    bool loaded_Photon_pt_MCScaleDown_;
    float Photon_pt_MCScaleGainDown_[NPHOTON_MAX];
    vector<float> v_Photon_pt_MCScaleGainDown_;
    TBranch *b_Photon_pt_MCScaleGainDown_;
    bool loaded_Photon_pt_MCScaleGainDown_;
    float Photon_pt_MCScaleGainUp_[NPHOTON_MAX];
    vector<float> v_Photon_pt_MCScaleGainUp_;
    TBranch *b_Photon_pt_MCScaleGainUp_;
    bool loaded_Photon_pt_MCScaleGainUp_;
    float Photon_pt_MCScaleUp_[NPHOTON_MAX];
    vector<float> v_Photon_pt_MCScaleUp_;
    TBranch *b_Photon_pt_MCScaleUp_;
    bool loaded_Photon_pt_MCScaleUp_;
    float Photon_pt_MCSmearDown_[NPHOTON_MAX];
    vector<float> v_Photon_pt_MCSmearDown_;
    TBranch *b_Photon_pt_MCSmearDown_;
    bool loaded_Photon_pt_MCSmearDown_;
    float Photon_pt_MCSmearUp_[NPHOTON_MAX];
    vector<float> v_Photon_pt_MCSmearUp_;
    TBranch *b_Photon_pt_MCSmearUp_;
    bool loaded_Photon_pt_MCSmearUp_;
    float Photon_pt_MaterialDown_[NPHOTON_MAX];
    vector<float> v_Photon_pt_MaterialDown_;
    TBranch *b_Photon_pt_MaterialDown_;
    bool loaded_Photon_pt_MaterialDown_;
    float Photon_pt_MaterialUp_[NPHOTON_MAX];
    vector<float> v_Photon_pt_MaterialUp_;
    TBranch *b_Photon_pt_MaterialUp_;
    bool loaded_Photon_pt_MaterialUp_;
    float Photon_pt_ShowerShapeDown_[NPHOTON_MAX];
    vector<float> v_Photon_pt_ShowerShapeDown_;
    TBranch *b_Photon_pt_ShowerShapeDown_;
    bool loaded_Photon_pt_ShowerShapeDown_;
    float Photon_pt_ShowerShapeUp_[NPHOTON_MAX];
    vector<float> v_Photon_pt_ShowerShapeUp_;
    TBranch *b_Photon_pt_ShowerShapeUp_;
    bool loaded_Photon_pt_ShowerShapeUp_;
    float Photon_r9_[NPHOTON_MAX];
    vector<float> v_Photon_r9_;
    TBranch *b_Photon_r9_;
    bool loaded_Photon_r9_;
    UChar_t Photon_seedGain_[NPHOTON_MAX];
    vector<UChar_t> v_Photon_seedGain_;
    TBranch *b_Photon_seedGain_;
    bool loaded_Photon_seedGain_;
    float Photon_sieie_[NPHOTON_MAX];
    vector<float> v_Photon_sieie_;
    TBranch *b_Photon_sieie_;
    bool loaded_Photon_sieie_;
    float Photon_trkSumPtHollowConeDR03_[NPHOTON_MAX];
    vector<float> v_Photon_trkSumPtHollowConeDR03_;
    TBranch *b_Photon_trkSumPtHollowConeDR03_;
    bool loaded_Photon_trkSumPtHollowConeDR03_;
    int Photon_vidNestedWPBitmap_[NPHOTON_MAX];
    vector<int> v_Photon_vidNestedWPBitmap_;
    TBranch *b_Photon_vidNestedWPBitmap_;
    bool loaded_Photon_vidNestedWPBitmap_;
    int Photon_vidNestedWPBitmap_Spring16V2p2_[NPHOTON_MAX];
    vector<int> v_Photon_vidNestedWPBitmap_Spring16V2p2_;
    TBranch *b_Photon_vidNestedWPBitmap_Spring16V2p2_;
    bool loaded_Photon_vidNestedWPBitmap_Spring16V2p2_;
    float Pileup_gpudensity_;
    TBranch *b_Pileup_gpudensity_;
    bool loaded_Pileup_gpudensity_;
    int Pileup_nPU_;
    TBranch *b_Pileup_nPU_;
    bool loaded_Pileup_nPU_;
    float Pileup_nTrueInt_;
    TBranch *b_Pileup_nTrueInt_;
    bool loaded_Pileup_nTrueInt_;
    float Pileup_pudensity_;
    TBranch *b_Pileup_pudensity_;
    bool loaded_Pileup_pudensity_;
    int Pileup_sumEOOT_;
    TBranch *b_Pileup_sumEOOT_;
    bool loaded_Pileup_sumEOOT_;
    int Pileup_sumLOOT_;
    TBranch *b_Pileup_sumLOOT_;
    bool loaded_Pileup_sumLOOT_;
    float PrefireWeight_;
    TBranch *b_PrefireWeight_;
    bool loaded_PrefireWeight_;
    float PrefireWeight_Down_;
    TBranch *b_PrefireWeight_Down_;
    bool loaded_PrefireWeight_Down_;
    float PrefireWeight_Up_;
    TBranch *b_PrefireWeight_Up_;
    bool loaded_PrefireWeight_Up_;
    float PuppiMET_phi_;
    TBranch *b_PuppiMET_phi_;
    bool loaded_PuppiMET_phi_;
    float PuppiMET_phiJERUp_;
    TBranch *b_PuppiMET_phiJERUp_;
    bool loaded_PuppiMET_phiJERUp_;
    float PuppiMET_phiJESUp_;
    TBranch *b_PuppiMET_phiJESUp_;
    bool loaded_PuppiMET_phiJESUp_;
    float PuppiMET_pt_;
    TBranch *b_PuppiMET_pt_;
    bool loaded_PuppiMET_pt_;
    float PuppiMET_ptJERUp_;
    TBranch *b_PuppiMET_ptJERUp_;
    bool loaded_PuppiMET_ptJERUp_;
    float PuppiMET_ptJESUp_;
    TBranch *b_PuppiMET_ptJESUp_;
    bool loaded_PuppiMET_ptJESUp_;
    float PuppiMET_sumEt_;
    TBranch *b_PuppiMET_sumEt_;
    bool loaded_PuppiMET_sumEt_;
    float RawMET_phi_;
    TBranch *b_RawMET_phi_;
    bool loaded_RawMET_phi_;
    float RawMET_pt_;
    TBranch *b_RawMET_pt_;
    bool loaded_RawMET_pt_;
    float RawMET_sumEt_;
    TBranch *b_RawMET_sumEt_;
    bool loaded_RawMET_sumEt_;
    float RawPuppiMET_phi_;
    TBranch *b_RawPuppiMET_phi_;
    bool loaded_RawPuppiMET_phi_;
    float RawPuppiMET_pt_;
    TBranch *b_RawPuppiMET_pt_;
    bool loaded_RawPuppiMET_pt_;
    float RawPuppiMET_sumEt_;
    TBranch *b_RawPuppiMET_sumEt_;
    bool loaded_RawPuppiMET_sumEt_;
    float SV_chi2_[NSV_MAX];
    vector<float> v_SV_chi2_;
    TBranch *b_SV_chi2_;
    bool loaded_SV_chi2_;
    float SV_dlen_[NSV_MAX];
    vector<float> v_SV_dlen_;
    TBranch *b_SV_dlen_;
    bool loaded_SV_dlen_;
    float SV_dlenSig_[NSV_MAX];
    vector<float> v_SV_dlenSig_;
    TBranch *b_SV_dlenSig_;
    bool loaded_SV_dlenSig_;
    float SV_dxy_[NSV_MAX];
    vector<float> v_SV_dxy_;
    TBranch *b_SV_dxy_;
    bool loaded_SV_dxy_;
    float SV_dxySig_[NSV_MAX];
    vector<float> v_SV_dxySig_;
    TBranch *b_SV_dxySig_;
    bool loaded_SV_dxySig_;
    float SV_eta_[NSV_MAX];
    vector<float> v_SV_eta_;
    TBranch *b_SV_eta_;
    bool loaded_SV_eta_;
    float SV_mass_[NSV_MAX];
    vector<float> v_SV_mass_;
    TBranch *b_SV_mass_;
    bool loaded_SV_mass_;
    float SV_ndof_[NSV_MAX];
    vector<float> v_SV_ndof_;
    TBranch *b_SV_ndof_;
    bool loaded_SV_ndof_;
    vector<LorentzVector> v_SV_p4_;
    TBranch *b_SV_p4_;
    bool loaded_SV_p4_;
    float SV_pAngle_[NSV_MAX];
    vector<float> v_SV_pAngle_;
    TBranch *b_SV_pAngle_;
    bool loaded_SV_pAngle_;
    float SV_phi_[NSV_MAX];
    vector<float> v_SV_phi_;
    TBranch *b_SV_phi_;
    bool loaded_SV_phi_;
    float SV_pt_[NSV_MAX];
    vector<float> v_SV_pt_;
    TBranch *b_SV_pt_;
    bool loaded_SV_pt_;
    float SV_x_[NSV_MAX];
    vector<float> v_SV_x_;
    TBranch *b_SV_x_;
    bool loaded_SV_x_;
    float SV_y_[NSV_MAX];
    vector<float> v_SV_y_;
    TBranch *b_SV_y_;
    bool loaded_SV_y_;
    float SV_z_[NSV_MAX];
    vector<float> v_SV_z_;
    TBranch *b_SV_z_;
    bool loaded_SV_z_;
    float SoftActivityJetHT_;
    TBranch *b_SoftActivityJetHT_;
    bool loaded_SoftActivityJetHT_;
    float SoftActivityJetHT10_;
    TBranch *b_SoftActivityJetHT10_;
    bool loaded_SoftActivityJetHT10_;
    float SoftActivityJetHT2_;
    TBranch *b_SoftActivityJetHT2_;
    bool loaded_SoftActivityJetHT2_;
    float SoftActivityJetHT5_;
    TBranch *b_SoftActivityJetHT5_;
    bool loaded_SoftActivityJetHT5_;
    int SoftActivityJetNjets10_;
    TBranch *b_SoftActivityJetNjets10_;
    bool loaded_SoftActivityJetNjets10_;
    int SoftActivityJetNjets2_;
    TBranch *b_SoftActivityJetNjets2_;
    bool loaded_SoftActivityJetNjets2_;
    int SoftActivityJetNjets5_;
    TBranch *b_SoftActivityJetNjets5_;
    bool loaded_SoftActivityJetNjets5_;
    float SoftActivityJet_eta_[NSOFTACTIVITYJET_MAX];
    vector<float> v_SoftActivityJet_eta_;
    TBranch *b_SoftActivityJet_eta_;
    bool loaded_SoftActivityJet_eta_;
    float SoftActivityJet_phi_[NSOFTACTIVITYJET_MAX];
    vector<float> v_SoftActivityJet_phi_;
    TBranch *b_SoftActivityJet_phi_;
    bool loaded_SoftActivityJet_phi_;
    float SoftActivityJet_pt_[NSOFTACTIVITYJET_MAX];
    vector<float> v_SoftActivityJet_pt_;
    TBranch *b_SoftActivityJet_pt_;
    bool loaded_SoftActivityJet_pt_;
    float SubGenJetAK8_eta_[NSUBGENJETAK8_MAX];
    vector<float> v_SubGenJetAK8_eta_;
    TBranch *b_SubGenJetAK8_eta_;
    bool loaded_SubGenJetAK8_eta_;
    float SubGenJetAK8_mass_[NSUBGENJETAK8_MAX];
    vector<float> v_SubGenJetAK8_mass_;
    TBranch *b_SubGenJetAK8_mass_;
    bool loaded_SubGenJetAK8_mass_;
    vector<LorentzVector> v_SubGenJetAK8_p4_;
    TBranch *b_SubGenJetAK8_p4_;
    bool loaded_SubGenJetAK8_p4_;
    float SubGenJetAK8_phi_[NSUBGENJETAK8_MAX];
    vector<float> v_SubGenJetAK8_phi_;
    TBranch *b_SubGenJetAK8_phi_;
    bool loaded_SubGenJetAK8_phi_;
    float SubGenJetAK8_pt_[NSUBGENJETAK8_MAX];
    vector<float> v_SubGenJetAK8_pt_;
    TBranch *b_SubGenJetAK8_pt_;
    bool loaded_SubGenJetAK8_pt_;
    float SubJet_btagCMVA_[NSUBJET_MAX];
    vector<float> v_SubJet_btagCMVA_;
    TBranch *b_SubJet_btagCMVA_;
    bool loaded_SubJet_btagCMVA_;
    float SubJet_btagCSVV2_[NSUBJET_MAX];
    vector<float> v_SubJet_btagCSVV2_;
    TBranch *b_SubJet_btagCSVV2_;
    bool loaded_SubJet_btagCSVV2_;
    float SubJet_btagDeepB_[NSUBJET_MAX];
    vector<float> v_SubJet_btagDeepB_;
    TBranch *b_SubJet_btagDeepB_;
    bool loaded_SubJet_btagDeepB_;
    float SubJet_eta_[NSUBJET_MAX];
    vector<float> v_SubJet_eta_;
    TBranch *b_SubJet_eta_;
    bool loaded_SubJet_eta_;
    float SubJet_mass_[NSUBJET_MAX];
    vector<float> v_SubJet_mass_;
    TBranch *b_SubJet_mass_;
    bool loaded_SubJet_mass_;
    float SubJet_n2b1_[NSUBJET_MAX];
    vector<float> v_SubJet_n2b1_;
    TBranch *b_SubJet_n2b1_;
    bool loaded_SubJet_n2b1_;
    float SubJet_n3b1_[NSUBJET_MAX];
    vector<float> v_SubJet_n3b1_;
    TBranch *b_SubJet_n3b1_;
    bool loaded_SubJet_n3b1_;
    UChar_t SubJet_nBHadrons_[NSUBJET_MAX];
    vector<UChar_t> v_SubJet_nBHadrons_;
    TBranch *b_SubJet_nBHadrons_;
    bool loaded_SubJet_nBHadrons_;
    UChar_t SubJet_nCHadrons_[NSUBJET_MAX];
    vector<UChar_t> v_SubJet_nCHadrons_;
    TBranch *b_SubJet_nCHadrons_;
    bool loaded_SubJet_nCHadrons_;
    vector<LorentzVector> v_SubJet_p4_;
    TBranch *b_SubJet_p4_;
    bool loaded_SubJet_p4_;
    float SubJet_phi_[NSUBJET_MAX];
    vector<float> v_SubJet_phi_;
    TBranch *b_SubJet_phi_;
    bool loaded_SubJet_phi_;
    float SubJet_pt_[NSUBJET_MAX];
    vector<float> v_SubJet_pt_;
    TBranch *b_SubJet_pt_;
    bool loaded_SubJet_pt_;
    float SubJet_rawFactor_[NSUBJET_MAX];
    vector<float> v_SubJet_rawFactor_;
    TBranch *b_SubJet_rawFactor_;
    bool loaded_SubJet_rawFactor_;
    float SubJet_tau1_[NSUBJET_MAX];
    vector<float> v_SubJet_tau1_;
    TBranch *b_SubJet_tau1_;
    bool loaded_SubJet_tau1_;
    float SubJet_tau2_[NSUBJET_MAX];
    vector<float> v_SubJet_tau2_;
    TBranch *b_SubJet_tau2_;
    bool loaded_SubJet_tau2_;
    float SubJet_tau3_[NSUBJET_MAX];
    vector<float> v_SubJet_tau3_;
    TBranch *b_SubJet_tau3_;
    bool loaded_SubJet_tau3_;
    float SubJet_tau4_[NSUBJET_MAX];
    vector<float> v_SubJet_tau4_;
    TBranch *b_SubJet_tau4_;
    bool loaded_SubJet_tau4_;
    bool Tau_Filter_[NTAU_MAX];
    vector<bool> v_Tau_Filter_;
    TBranch *b_Tau_Filter_;
    bool loaded_Tau_Filter_;
    int Tau_charge_[NTAU_MAX];
    vector<int> v_Tau_charge_;
    TBranch *b_Tau_charge_;
    bool loaded_Tau_charge_;
    float Tau_chargedIso_[NTAU_MAX];
    vector<float> v_Tau_chargedIso_;
    TBranch *b_Tau_chargedIso_;
    bool loaded_Tau_chargedIso_;
    UChar_t Tau_cleanmask_[NTAU_MAX];
    vector<UChar_t> v_Tau_cleanmask_;
    TBranch *b_Tau_cleanmask_;
    bool loaded_Tau_cleanmask_;
    int Tau_decayMode_[NTAU_MAX];
    vector<int> v_Tau_decayMode_;
    TBranch *b_Tau_decayMode_;
    bool loaded_Tau_decayMode_;
    float Tau_dxy_[NTAU_MAX];
    vector<float> v_Tau_dxy_;
    TBranch *b_Tau_dxy_;
    bool loaded_Tau_dxy_;
    float Tau_dz_[NTAU_MAX];
    vector<float> v_Tau_dz_;
    TBranch *b_Tau_dz_;
    bool loaded_Tau_dz_;
    float Tau_eta_[NTAU_MAX];
    vector<float> v_Tau_eta_;
    TBranch *b_Tau_eta_;
    bool loaded_Tau_eta_;
    UChar_t Tau_genPartFlav_[NTAU_MAX];
    vector<UChar_t> v_Tau_genPartFlav_;
    TBranch *b_Tau_genPartFlav_;
    bool loaded_Tau_genPartFlav_;
    int Tau_genPartIdx_[NTAU_MAX];
    vector<int> v_Tau_genPartIdx_;
    TBranch *b_Tau_genPartIdx_;
    bool loaded_Tau_genPartIdx_;
    UChar_t Tau_idAntiEle_[NTAU_MAX];
    vector<UChar_t> v_Tau_idAntiEle_;
    TBranch *b_Tau_idAntiEle_;
    bool loaded_Tau_idAntiEle_;
    UChar_t Tau_idAntiEle2018_[NTAU_MAX];
    vector<UChar_t> v_Tau_idAntiEle2018_;
    TBranch *b_Tau_idAntiEle2018_;
    bool loaded_Tau_idAntiEle2018_;
    UChar_t Tau_idAntiMu_[NTAU_MAX];
    vector<UChar_t> v_Tau_idAntiMu_;
    TBranch *b_Tau_idAntiMu_;
    bool loaded_Tau_idAntiMu_;
    bool Tau_idDecayMode_[NTAU_MAX];
    vector<bool> v_Tau_idDecayMode_;
    TBranch *b_Tau_idDecayMode_;
    bool loaded_Tau_idDecayMode_;
    bool Tau_idDecayModeNewDMs_[NTAU_MAX];
    vector<bool> v_Tau_idDecayModeNewDMs_;
    TBranch *b_Tau_idDecayModeNewDMs_;
    bool loaded_Tau_idDecayModeNewDMs_;
    UChar_t Tau_idDeepTau2017v2p1VSe_[NTAU_MAX];
    vector<UChar_t> v_Tau_idDeepTau2017v2p1VSe_;
    TBranch *b_Tau_idDeepTau2017v2p1VSe_;
    bool loaded_Tau_idDeepTau2017v2p1VSe_;
    UChar_t Tau_idDeepTau2017v2p1VSjet_[NTAU_MAX];
    vector<UChar_t> v_Tau_idDeepTau2017v2p1VSjet_;
    TBranch *b_Tau_idDeepTau2017v2p1VSjet_;
    bool loaded_Tau_idDeepTau2017v2p1VSjet_;
    UChar_t Tau_idDeepTau2017v2p1VSmu_[NTAU_MAX];
    vector<UChar_t> v_Tau_idDeepTau2017v2p1VSmu_;
    TBranch *b_Tau_idDeepTau2017v2p1VSmu_;
    bool loaded_Tau_idDeepTau2017v2p1VSmu_;
    UChar_t Tau_idMVAnewDM2017v2_[NTAU_MAX];
    vector<UChar_t> v_Tau_idMVAnewDM2017v2_;
    TBranch *b_Tau_idMVAnewDM2017v2_;
    bool loaded_Tau_idMVAnewDM2017v2_;
    UChar_t Tau_idMVAoldDM_[NTAU_MAX];
    vector<UChar_t> v_Tau_idMVAoldDM_;
    TBranch *b_Tau_idMVAoldDM_;
    bool loaded_Tau_idMVAoldDM_;
    UChar_t Tau_idMVAoldDM2017v1_[NTAU_MAX];
    vector<UChar_t> v_Tau_idMVAoldDM2017v1_;
    TBranch *b_Tau_idMVAoldDM2017v1_;
    bool loaded_Tau_idMVAoldDM2017v1_;
    UChar_t Tau_idMVAoldDM2017v2_[NTAU_MAX];
    vector<UChar_t> v_Tau_idMVAoldDM2017v2_;
    TBranch *b_Tau_idMVAoldDM2017v2_;
    bool loaded_Tau_idMVAoldDM2017v2_;
    UChar_t Tau_idMVAoldDMdR032017v2_[NTAU_MAX];
    vector<UChar_t> v_Tau_idMVAoldDMdR032017v2_;
    TBranch *b_Tau_idMVAoldDMdR032017v2_;
    bool loaded_Tau_idMVAoldDMdR032017v2_;
    int Tau_jetIdx_[NTAU_MAX];
    vector<int> v_Tau_jetIdx_;
    TBranch *b_Tau_jetIdx_;
    bool loaded_Tau_jetIdx_;
    float Tau_leadTkDeltaEta_[NTAU_MAX];
    vector<float> v_Tau_leadTkDeltaEta_;
    TBranch *b_Tau_leadTkDeltaEta_;
    bool loaded_Tau_leadTkDeltaEta_;
    float Tau_leadTkDeltaPhi_[NTAU_MAX];
    vector<float> v_Tau_leadTkDeltaPhi_;
    TBranch *b_Tau_leadTkDeltaPhi_;
    bool loaded_Tau_leadTkDeltaPhi_;
    float Tau_leadTkPtOverTauPt_[NTAU_MAX];
    vector<float> v_Tau_leadTkPtOverTauPt_;
    TBranch *b_Tau_leadTkPtOverTauPt_;
    bool loaded_Tau_leadTkPtOverTauPt_;
    float Tau_mass_[NTAU_MAX];
    vector<float> v_Tau_mass_;
    TBranch *b_Tau_mass_;
    bool loaded_Tau_mass_;
    float Tau_neutralIso_[NTAU_MAX];
    vector<float> v_Tau_neutralIso_;
    TBranch *b_Tau_neutralIso_;
    bool loaded_Tau_neutralIso_;
    vector<LorentzVector> v_Tau_p4_;
    TBranch *b_Tau_p4_;
    bool loaded_Tau_p4_;
    float Tau_phi_[NTAU_MAX];
    vector<float> v_Tau_phi_;
    TBranch *b_Tau_phi_;
    bool loaded_Tau_phi_;
    float Tau_photonsOutsideSignalCone_[NTAU_MAX];
    vector<float> v_Tau_photonsOutsideSignalCone_;
    TBranch *b_Tau_photonsOutsideSignalCone_;
    bool loaded_Tau_photonsOutsideSignalCone_;
    float Tau_pt_[NTAU_MAX];
    vector<float> v_Tau_pt_;
    TBranch *b_Tau_pt_;
    bool loaded_Tau_pt_;
    float Tau_puCorr_[NTAU_MAX];
    vector<float> v_Tau_puCorr_;
    TBranch *b_Tau_puCorr_;
    bool loaded_Tau_puCorr_;
    float Tau_rawAntiEle_[NTAU_MAX];
    vector<float> v_Tau_rawAntiEle_;
    TBranch *b_Tau_rawAntiEle_;
    bool loaded_Tau_rawAntiEle_;
    float Tau_rawAntiEle2018_[NTAU_MAX];
    vector<float> v_Tau_rawAntiEle2018_;
    TBranch *b_Tau_rawAntiEle2018_;
    bool loaded_Tau_rawAntiEle2018_;
    int Tau_rawAntiEleCat_[NTAU_MAX];
    vector<int> v_Tau_rawAntiEleCat_;
    TBranch *b_Tau_rawAntiEleCat_;
    bool loaded_Tau_rawAntiEleCat_;
    int Tau_rawAntiEleCat2018_[NTAU_MAX];
    vector<int> v_Tau_rawAntiEleCat2018_;
    TBranch *b_Tau_rawAntiEleCat2018_;
    bool loaded_Tau_rawAntiEleCat2018_;
    float Tau_rawDeepTau2017v2p1VSe_[NTAU_MAX];
    vector<float> v_Tau_rawDeepTau2017v2p1VSe_;
    TBranch *b_Tau_rawDeepTau2017v2p1VSe_;
    bool loaded_Tau_rawDeepTau2017v2p1VSe_;
    float Tau_rawDeepTau2017v2p1VSjet_[NTAU_MAX];
    vector<float> v_Tau_rawDeepTau2017v2p1VSjet_;
    TBranch *b_Tau_rawDeepTau2017v2p1VSjet_;
    bool loaded_Tau_rawDeepTau2017v2p1VSjet_;
    float Tau_rawDeepTau2017v2p1VSmu_[NTAU_MAX];
    vector<float> v_Tau_rawDeepTau2017v2p1VSmu_;
    TBranch *b_Tau_rawDeepTau2017v2p1VSmu_;
    bool loaded_Tau_rawDeepTau2017v2p1VSmu_;
    float Tau_rawIso_[NTAU_MAX];
    vector<float> v_Tau_rawIso_;
    TBranch *b_Tau_rawIso_;
    bool loaded_Tau_rawIso_;
    float Tau_rawIsodR03_[NTAU_MAX];
    vector<float> v_Tau_rawIsodR03_;
    TBranch *b_Tau_rawIsodR03_;
    bool loaded_Tau_rawIsodR03_;
    float Tau_rawMVAnewDM2017v2_[NTAU_MAX];
    vector<float> v_Tau_rawMVAnewDM2017v2_;
    TBranch *b_Tau_rawMVAnewDM2017v2_;
    bool loaded_Tau_rawMVAnewDM2017v2_;
    float Tau_rawMVAoldDM_[NTAU_MAX];
    vector<float> v_Tau_rawMVAoldDM_;
    TBranch *b_Tau_rawMVAoldDM_;
    bool loaded_Tau_rawMVAoldDM_;
    float Tau_rawMVAoldDM2017v1_[NTAU_MAX];
    vector<float> v_Tau_rawMVAoldDM2017v1_;
    TBranch *b_Tau_rawMVAoldDM2017v1_;
    bool loaded_Tau_rawMVAoldDM2017v1_;
    float Tau_rawMVAoldDM2017v2_[NTAU_MAX];
    vector<float> v_Tau_rawMVAoldDM2017v2_;
    TBranch *b_Tau_rawMVAoldDM2017v2_;
    bool loaded_Tau_rawMVAoldDM2017v2_;
    float Tau_rawMVAoldDMdR032017v2_[NTAU_MAX];
    vector<float> v_Tau_rawMVAoldDMdR032017v2_;
    TBranch *b_Tau_rawMVAoldDMdR032017v2_;
    bool loaded_Tau_rawMVAoldDMdR032017v2_;
    float TkMET_phi_;
    TBranch *b_TkMET_phi_;
    bool loaded_TkMET_phi_;
    float TkMET_pt_;
    TBranch *b_TkMET_pt_;
    bool loaded_TkMET_pt_;
    float TkMET_sumEt_;
    TBranch *b_TkMET_sumEt_;
    bool loaded_TkMET_sumEt_;
    float TrigObj_eta_[NTRIGOBJ_MAX];
    vector<float> v_TrigObj_eta_;
    TBranch *b_TrigObj_eta_;
    bool loaded_TrigObj_eta_;
    int TrigObj_filterBits_[NTRIGOBJ_MAX];
    vector<int> v_TrigObj_filterBits_;
    TBranch *b_TrigObj_filterBits_;
    bool loaded_TrigObj_filterBits_;
    int TrigObj_id_[NTRIGOBJ_MAX];
    vector<int> v_TrigObj_id_;
    TBranch *b_TrigObj_id_;
    bool loaded_TrigObj_id_;
    int TrigObj_l1charge_[NTRIGOBJ_MAX];
    vector<int> v_TrigObj_l1charge_;
    TBranch *b_TrigObj_l1charge_;
    bool loaded_TrigObj_l1charge_;
    int TrigObj_l1iso_[NTRIGOBJ_MAX];
    vector<int> v_TrigObj_l1iso_;
    TBranch *b_TrigObj_l1iso_;
    bool loaded_TrigObj_l1iso_;
    float TrigObj_l1pt_[NTRIGOBJ_MAX];
    vector<float> v_TrigObj_l1pt_;
    TBranch *b_TrigObj_l1pt_;
    bool loaded_TrigObj_l1pt_;
    float TrigObj_l1pt_2_[NTRIGOBJ_MAX];
    vector<float> v_TrigObj_l1pt_2_;
    TBranch *b_TrigObj_l1pt_2_;
    bool loaded_TrigObj_l1pt_2_;
    float TrigObj_l2pt_[NTRIGOBJ_MAX];
    vector<float> v_TrigObj_l2pt_;
    TBranch *b_TrigObj_l2pt_;
    bool loaded_TrigObj_l2pt_;
    float TrigObj_phi_[NTRIGOBJ_MAX];
    vector<float> v_TrigObj_phi_;
    TBranch *b_TrigObj_phi_;
    bool loaded_TrigObj_phi_;
    float TrigObj_pt_[NTRIGOBJ_MAX];
    vector<float> v_TrigObj_pt_;
    TBranch *b_TrigObj_pt_;
    bool loaded_TrigObj_pt_;
    float btagWeight_CMVA_;
    TBranch *b_btagWeight_CMVA_;
    bool loaded_btagWeight_CMVA_;
    float btagWeight_CSVV2_;
    TBranch *b_btagWeight_CSVV2_;
    bool loaded_btagWeight_CSVV2_;
    float btagWeight_DeepCSVB_;
    TBranch *b_btagWeight_DeepCSVB_;
    bool loaded_btagWeight_DeepCSVB_;
    float dPhi_ggtautauLoose_;
    TBranch *b_dPhi_ggtautauLoose_;
    bool loaded_dPhi_ggtautauLoose_;
    float dPhi_ggtautauSVFitLoose_;
    TBranch *b_dPhi_ggtautauSVFitLoose_;
    bool loaded_dPhi_ggtautauSVFitLoose_;
    float dR_ggtautauLoose_;
    TBranch *b_dR_ggtautauLoose_;
    bool loaded_dR_ggtautauLoose_;
    float dR_ggtautauSVFitLoose_;
    TBranch *b_dR_ggtautauSVFitLoose_;
    bool loaded_dR_ggtautauSVFitLoose_;
    float dR_tautauLoose_;
    TBranch *b_dR_tautauLoose_;
    bool loaded_dR_tautauLoose_;
    float dR_tautauSVFitLoose_;
    TBranch *b_dR_tautauSVFitLoose_;
    bool loaded_dR_tautauSVFitLoose_;
    int eleHidx_[NELEHIDX_MAX];
    vector<int> v_eleHidx_;
    TBranch *b_eleHidx_;
    bool loaded_eleHidx_;
    float eta_tautauLoose_;
    TBranch *b_eta_tautauLoose_;
    bool loaded_eta_tautauLoose_;
    float eta_tautauSVFitLoose_;
    TBranch *b_eta_tautauSVFitLoose_;
    bool loaded_eta_tautauSVFitLoose_;
    float evWeight_electronVeto_;
    TBranch *b_evWeight_electronVeto_;
    bool loaded_evWeight_electronVeto_;
    float evWeight_electronVetoDown_;
    TBranch *b_evWeight_electronVetoDown_;
    bool loaded_evWeight_electronVetoDown_;
    float evWeight_electronVetoUp_;
    TBranch *b_evWeight_electronVetoUp_;
    bool loaded_evWeight_electronVetoUp_;
    float evWeight_looseMva_;
    TBranch *b_evWeight_looseMva_;
    bool loaded_evWeight_looseMva_;
    float evWeight_looseMvaDown_;
    TBranch *b_evWeight_looseMvaDown_;
    bool loaded_evWeight_looseMvaDown_;
    float evWeight_looseMvaUp_;
    TBranch *b_evWeight_looseMvaUp_;
    bool loaded_evWeight_looseMvaUp_;
    float evWeight_presel_;
    TBranch *b_evWeight_presel_;
    bool loaded_evWeight_presel_;
    float evWeight_preselDown_;
    TBranch *b_evWeight_preselDown_;
    bool loaded_evWeight_preselDown_;
    float evWeight_preselUp_;
    TBranch *b_evWeight_preselUp_;
    bool loaded_evWeight_preselUp_;
    ULong64_t event_;
    TBranch *b_event_;
    bool loaded_event_;
    float fixedGridRhoAll_;
    TBranch *b_fixedGridRhoAll_;
    bool loaded_fixedGridRhoAll_;
    float fixedGridRhoFastjetAll_;
    TBranch *b_fixedGridRhoFastjetAll_;
    bool loaded_fixedGridRhoFastjetAll_;
    float fixedGridRhoFastjetCentral_;
    TBranch *b_fixedGridRhoFastjetCentral_;
    bool loaded_fixedGridRhoFastjetCentral_;
    float fixedGridRhoFastjetCentralCalo_;
    TBranch *b_fixedGridRhoFastjetCentralCalo_;
    bool loaded_fixedGridRhoFastjetCentralCalo_;
    float fixedGridRhoFastjetCentralChargedPileUp_;
    TBranch *b_fixedGridRhoFastjetCentralChargedPileUp_;
    bool loaded_fixedGridRhoFastjetCentralChargedPileUp_;
    float fixedGridRhoFastjetCentralNeutral_;
    TBranch *b_fixedGridRhoFastjetCentralNeutral_;
    bool loaded_fixedGridRhoFastjetCentralNeutral_;
    int gHidx_[NGHIDX_MAX];
    vector<int> v_gHidx_;
    TBranch *b_gHidx_;
    bool loaded_gHidx_;
    int genTtbarId_;
    TBranch *b_genTtbarId_;
    bool loaded_genTtbarId_;
    float genWeight_;
    TBranch *b_genWeight_;
    bool loaded_genWeight_;
    float gg_eta_;
    TBranch *b_gg_eta_;
    bool loaded_gg_eta_;
    float gg_mass_;
    TBranch *b_gg_mass_;
    bool loaded_gg_mass_;
    LorentzVector gg_p4_;
    TBranch *b_gg_p4_;
    bool loaded_gg_p4_;
    float gg_phi_;
    TBranch *b_gg_phi_;
    bool loaded_gg_phi_;
    float gg_pt_;
    TBranch *b_gg_pt_;
    bool loaded_gg_pt_;
    UInt_t luminosityBlock_;
    TBranch *b_luminosityBlock_;
    bool loaded_luminosityBlock_;
    float m_tautauLoose_;
    TBranch *b_m_tautauLoose_;
    bool loaded_m_tautauLoose_;
    float m_tautauSVFitLoose_;
    TBranch *b_m_tautauSVFitLoose_;
    bool loaded_m_tautauSVFitLoose_;
    int muHidx_[NMUHIDX_MAX];
    vector<int> v_muHidx_;
    TBranch *b_muHidx_;
    bool loaded_muHidx_;
    UInt_t nCorrT1METJet_;
    TBranch *b_nCorrT1METJet_;
    bool loaded_nCorrT1METJet_;
    UInt_t nElectron_;
    TBranch *b_nElectron_;
    bool loaded_nElectron_;
    UInt_t nFsrPhoton_;
    TBranch *b_nFsrPhoton_;
    bool loaded_nFsrPhoton_;
    UInt_t nGenDressedLepton_;
    TBranch *b_nGenDressedLepton_;
    bool loaded_nGenDressedLepton_;
    UInt_t nGenIsolatedPhoton_;
    TBranch *b_nGenIsolatedPhoton_;
    bool loaded_nGenIsolatedPhoton_;
    UInt_t nGenJet_;
    TBranch *b_nGenJet_;
    bool loaded_nGenJet_;
    UInt_t nGenJetAK8_;
    TBranch *b_nGenJetAK8_;
    bool loaded_nGenJetAK8_;
    UInt_t nGenPart_;
    TBranch *b_nGenPart_;
    bool loaded_nGenPart_;
    UInt_t nGenVisTau_;
    TBranch *b_nGenVisTau_;
    bool loaded_nGenVisTau_;
    UInt_t nIsoTrack_;
    TBranch *b_nIsoTrack_;
    bool loaded_nIsoTrack_;
    UInt_t nJet_;
    TBranch *b_nJet_;
    bool loaded_nJet_;
    UInt_t nLHEPart_;
    TBranch *b_nLHEPart_;
    bool loaded_nLHEPart_;
    UInt_t nLHEPdfWeight_;
    TBranch *b_nLHEPdfWeight_;
    bool loaded_nLHEPdfWeight_;
    UInt_t nLHEReweightingWeight_;
    TBranch *b_nLHEReweightingWeight_;
    bool loaded_nLHEReweightingWeight_;
    UInt_t nLHEScaleWeight_;
    TBranch *b_nLHEScaleWeight_;
    bool loaded_nLHEScaleWeight_;
    UInt_t nMuon_;
    TBranch *b_nMuon_;
    bool loaded_nMuon_;
    UInt_t nOtherPV_;
    TBranch *b_nOtherPV_;
    bool loaded_nOtherPV_;
    UInt_t nPSWeight_;
    TBranch *b_nPSWeight_;
    bool loaded_nPSWeight_;
    UInt_t nPhoton_;
    TBranch *b_nPhoton_;
    bool loaded_nPhoton_;
    UInt_t nSV_;
    TBranch *b_nSV_;
    bool loaded_nSV_;
    UInt_t nSoftActivityJet_;
    TBranch *b_nSoftActivityJet_;
    bool loaded_nSoftActivityJet_;
    UInt_t nSubGenJetAK8_;
    TBranch *b_nSubGenJetAK8_;
    bool loaded_nSubGenJetAK8_;
    UInt_t nSubJet_;
    TBranch *b_nSubJet_;
    bool loaded_nSubJet_;
    UInt_t nTau_;
    TBranch *b_nTau_;
    bool loaded_nTau_;
    UInt_t nTrigObj_;
    TBranch *b_nTrigObj_;
    bool loaded_nTrigObj_;
    int nselectedElectron_;
    TBranch *b_nselectedElectron_;
    bool loaded_nselectedElectron_;
    int nselectedMuon_;
    TBranch *b_nselectedMuon_;
    bool loaded_nselectedMuon_;
    int nselectedTauLoose_;
    TBranch *b_nselectedTauLoose_;
    bool loaded_nselectedTauLoose_;
    Char_t passedDigammaPair_;
    TBranch *b_passedDigammaPair_;
    bool loaded_passedDigammaPair_;
    Char_t passedGoodPhotons_;
    TBranch *b_passedGoodPhotons_;
    bool loaded_passedGoodPhotons_;
    Char_t passedHPhotons_;
    TBranch *b_passedHPhotons_;
    bool loaded_passedHPhotons_;
    float phi_tautauLoose_;
    TBranch *b_phi_tautauLoose_;
    bool loaded_phi_tautauLoose_;
    float phi_tautauSVFitLoose_;
    TBranch *b_phi_tautauSVFitLoose_;
    bool loaded_phi_tautauSVFitLoose_;
    float pt_tautauLoose_;
    TBranch *b_pt_tautauLoose_;
    bool loaded_pt_tautauLoose_;
    float pt_tautauSVFitLoose_;
    TBranch *b_pt_tautauSVFitLoose_;
    bool loaded_pt_tautauSVFitLoose_;
    float puWeight_;
    TBranch *b_puWeight_;
    bool loaded_puWeight_;
    float puWeightDown_;
    TBranch *b_puWeightDown_;
    bool loaded_puWeightDown_;
    float puWeightUp_;
    TBranch *b_puWeightUp_;
    bool loaded_puWeightUp_;
    UInt_t run_;
    TBranch *b_run_;
    bool loaded_run_;
    float selectedElectron_charge_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_charge_;
    TBranch *b_selectedElectron_charge_;
    bool loaded_selectedElectron_charge_;
    float selectedElectron_cleanmask_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_cleanmask_;
    TBranch *b_selectedElectron_cleanmask_;
    bool loaded_selectedElectron_cleanmask_;
    float selectedElectron_convVeto_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_convVeto_;
    TBranch *b_selectedElectron_convVeto_;
    bool loaded_selectedElectron_convVeto_;
    float selectedElectron_cutBased_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_cutBased_;
    TBranch *b_selectedElectron_cutBased_;
    bool loaded_selectedElectron_cutBased_;
    float selectedElectron_cutBased_Fall17_V1_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_cutBased_Fall17_V1_;
    TBranch *b_selectedElectron_cutBased_Fall17_V1_;
    bool loaded_selectedElectron_cutBased_Fall17_V1_;
    float selectedElectron_cutBased_HEEP_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_cutBased_HEEP_;
    TBranch *b_selectedElectron_cutBased_HEEP_;
    bool loaded_selectedElectron_cutBased_HEEP_;
    float selectedElectron_cutBased_HLTPreSel_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_cutBased_HLTPreSel_;
    TBranch *b_selectedElectron_cutBased_HLTPreSel_;
    bool loaded_selectedElectron_cutBased_HLTPreSel_;
    float selectedElectron_cutBased_Spring15_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_cutBased_Spring15_;
    TBranch *b_selectedElectron_cutBased_Spring15_;
    bool loaded_selectedElectron_cutBased_Spring15_;
    float selectedElectron_cutBased_Sum16_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_cutBased_Sum16_;
    TBranch *b_selectedElectron_cutBased_Sum16_;
    bool loaded_selectedElectron_cutBased_Sum16_;
    float selectedElectron_deltaEtaSC_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_deltaEtaSC_;
    TBranch *b_selectedElectron_deltaEtaSC_;
    bool loaded_selectedElectron_deltaEtaSC_;
    float selectedElectron_dr03EcalRecHitSumEt_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_dr03EcalRecHitSumEt_;
    TBranch *b_selectedElectron_dr03EcalRecHitSumEt_;
    bool loaded_selectedElectron_dr03EcalRecHitSumEt_;
    float selectedElectron_dr03HcalDepth1TowerSumEt_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_dr03HcalDepth1TowerSumEt_;
    TBranch *b_selectedElectron_dr03HcalDepth1TowerSumEt_;
    bool loaded_selectedElectron_dr03HcalDepth1TowerSumEt_;
    float selectedElectron_dr03TkSumPt_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_dr03TkSumPt_;
    TBranch *b_selectedElectron_dr03TkSumPt_;
    bool loaded_selectedElectron_dr03TkSumPt_;
    float selectedElectron_dr03TkSumPtHEEP_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_dr03TkSumPtHEEP_;
    TBranch *b_selectedElectron_dr03TkSumPtHEEP_;
    bool loaded_selectedElectron_dr03TkSumPtHEEP_;
    float selectedElectron_dxy_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_dxy_;
    TBranch *b_selectedElectron_dxy_;
    bool loaded_selectedElectron_dxy_;
    float selectedElectron_dxyErr_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_dxyErr_;
    TBranch *b_selectedElectron_dxyErr_;
    bool loaded_selectedElectron_dxyErr_;
    float selectedElectron_dz_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_dz_;
    TBranch *b_selectedElectron_dz_;
    bool loaded_selectedElectron_dz_;
    float selectedElectron_dzErr_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_dzErr_;
    TBranch *b_selectedElectron_dzErr_;
    bool loaded_selectedElectron_dzErr_;
    float selectedElectron_eCorr_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_eCorr_;
    TBranch *b_selectedElectron_eCorr_;
    bool loaded_selectedElectron_eCorr_;
    float selectedElectron_eInvMinusPInv_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_eInvMinusPInv_;
    TBranch *b_selectedElectron_eInvMinusPInv_;
    bool loaded_selectedElectron_eInvMinusPInv_;
    float selectedElectron_energyErr_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_energyErr_;
    TBranch *b_selectedElectron_energyErr_;
    bool loaded_selectedElectron_energyErr_;
    float selectedElectron_eta_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_eta_;
    TBranch *b_selectedElectron_eta_;
    bool loaded_selectedElectron_eta_;
    float selectedElectron_etaSVFit_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_etaSVFit_;
    TBranch *b_selectedElectron_etaSVFit_;
    bool loaded_selectedElectron_etaSVFit_;
    float selectedElectron_genPartFlav_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_genPartFlav_;
    TBranch *b_selectedElectron_genPartFlav_;
    bool loaded_selectedElectron_genPartFlav_;
    float selectedElectron_genPartIdx_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_genPartIdx_;
    TBranch *b_selectedElectron_genPartIdx_;
    bool loaded_selectedElectron_genPartIdx_;
    float selectedElectron_hoe_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_hoe_;
    TBranch *b_selectedElectron_hoe_;
    bool loaded_selectedElectron_hoe_;
    float selectedElectron_ip3d_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_ip3d_;
    TBranch *b_selectedElectron_ip3d_;
    bool loaded_selectedElectron_ip3d_;
    float selectedElectron_isPFcand_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_isPFcand_;
    TBranch *b_selectedElectron_isPFcand_;
    bool loaded_selectedElectron_isPFcand_;
    float selectedElectron_jetIdx_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_jetIdx_;
    TBranch *b_selectedElectron_jetIdx_;
    bool loaded_selectedElectron_jetIdx_;
    float selectedElectron_jetPtRelv2_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_jetPtRelv2_;
    TBranch *b_selectedElectron_jetPtRelv2_;
    bool loaded_selectedElectron_jetPtRelv2_;
    float selectedElectron_jetRelIso_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_jetRelIso_;
    TBranch *b_selectedElectron_jetRelIso_;
    bool loaded_selectedElectron_jetRelIso_;
    float selectedElectron_lostHits_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_lostHits_;
    TBranch *b_selectedElectron_lostHits_;
    bool loaded_selectedElectron_lostHits_;
    float selectedElectron_mSVFit_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mSVFit_;
    TBranch *b_selectedElectron_mSVFit_;
    bool loaded_selectedElectron_mSVFit_;
    float selectedElectron_mass_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mass_;
    TBranch *b_selectedElectron_mass_;
    bool loaded_selectedElectron_mass_;
    float selectedElectron_miniPFRelIso_all_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_miniPFRelIso_all_;
    TBranch *b_selectedElectron_miniPFRelIso_all_;
    bool loaded_selectedElectron_miniPFRelIso_all_;
    float selectedElectron_miniPFRelIso_chg_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_miniPFRelIso_chg_;
    TBranch *b_selectedElectron_miniPFRelIso_chg_;
    bool loaded_selectedElectron_miniPFRelIso_chg_;
    float selectedElectron_mvaFall17V1Iso_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaFall17V1Iso_;
    TBranch *b_selectedElectron_mvaFall17V1Iso_;
    bool loaded_selectedElectron_mvaFall17V1Iso_;
    float selectedElectron_mvaFall17V1Iso_WP80_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaFall17V1Iso_WP80_;
    TBranch *b_selectedElectron_mvaFall17V1Iso_WP80_;
    bool loaded_selectedElectron_mvaFall17V1Iso_WP80_;
    float selectedElectron_mvaFall17V1Iso_WP90_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaFall17V1Iso_WP90_;
    TBranch *b_selectedElectron_mvaFall17V1Iso_WP90_;
    bool loaded_selectedElectron_mvaFall17V1Iso_WP90_;
    float selectedElectron_mvaFall17V1Iso_WPL_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaFall17V1Iso_WPL_;
    TBranch *b_selectedElectron_mvaFall17V1Iso_WPL_;
    bool loaded_selectedElectron_mvaFall17V1Iso_WPL_;
    float selectedElectron_mvaFall17V1noIso_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaFall17V1noIso_;
    TBranch *b_selectedElectron_mvaFall17V1noIso_;
    bool loaded_selectedElectron_mvaFall17V1noIso_;
    float selectedElectron_mvaFall17V1noIso_WP80_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaFall17V1noIso_WP80_;
    TBranch *b_selectedElectron_mvaFall17V1noIso_WP80_;
    bool loaded_selectedElectron_mvaFall17V1noIso_WP80_;
    float selectedElectron_mvaFall17V1noIso_WP90_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaFall17V1noIso_WP90_;
    TBranch *b_selectedElectron_mvaFall17V1noIso_WP90_;
    bool loaded_selectedElectron_mvaFall17V1noIso_WP90_;
    float selectedElectron_mvaFall17V1noIso_WPL_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaFall17V1noIso_WPL_;
    TBranch *b_selectedElectron_mvaFall17V1noIso_WPL_;
    bool loaded_selectedElectron_mvaFall17V1noIso_WPL_;
    float selectedElectron_mvaFall17V2Iso_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaFall17V2Iso_;
    TBranch *b_selectedElectron_mvaFall17V2Iso_;
    bool loaded_selectedElectron_mvaFall17V2Iso_;
    float selectedElectron_mvaFall17V2Iso_WP80_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaFall17V2Iso_WP80_;
    TBranch *b_selectedElectron_mvaFall17V2Iso_WP80_;
    bool loaded_selectedElectron_mvaFall17V2Iso_WP80_;
    float selectedElectron_mvaFall17V2Iso_WP90_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaFall17V2Iso_WP90_;
    TBranch *b_selectedElectron_mvaFall17V2Iso_WP90_;
    bool loaded_selectedElectron_mvaFall17V2Iso_WP90_;
    float selectedElectron_mvaFall17V2Iso_WPL_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaFall17V2Iso_WPL_;
    TBranch *b_selectedElectron_mvaFall17V2Iso_WPL_;
    bool loaded_selectedElectron_mvaFall17V2Iso_WPL_;
    float selectedElectron_mvaFall17V2noIso_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaFall17V2noIso_;
    TBranch *b_selectedElectron_mvaFall17V2noIso_;
    bool loaded_selectedElectron_mvaFall17V2noIso_;
    float selectedElectron_mvaFall17V2noIso_WP80_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaFall17V2noIso_WP80_;
    TBranch *b_selectedElectron_mvaFall17V2noIso_WP80_;
    bool loaded_selectedElectron_mvaFall17V2noIso_WP80_;
    float selectedElectron_mvaFall17V2noIso_WP90_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaFall17V2noIso_WP90_;
    TBranch *b_selectedElectron_mvaFall17V2noIso_WP90_;
    bool loaded_selectedElectron_mvaFall17V2noIso_WP90_;
    float selectedElectron_mvaFall17V2noIso_WPL_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaFall17V2noIso_WPL_;
    TBranch *b_selectedElectron_mvaFall17V2noIso_WPL_;
    bool loaded_selectedElectron_mvaFall17V2noIso_WPL_;
    float selectedElectron_mvaSpring16GP_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaSpring16GP_;
    TBranch *b_selectedElectron_mvaSpring16GP_;
    bool loaded_selectedElectron_mvaSpring16GP_;
    float selectedElectron_mvaSpring16GP_WP80_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaSpring16GP_WP80_;
    TBranch *b_selectedElectron_mvaSpring16GP_WP80_;
    bool loaded_selectedElectron_mvaSpring16GP_WP80_;
    float selectedElectron_mvaSpring16GP_WP90_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaSpring16GP_WP90_;
    TBranch *b_selectedElectron_mvaSpring16GP_WP90_;
    bool loaded_selectedElectron_mvaSpring16GP_WP90_;
    float selectedElectron_mvaSpring16HZZ_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaSpring16HZZ_;
    TBranch *b_selectedElectron_mvaSpring16HZZ_;
    bool loaded_selectedElectron_mvaSpring16HZZ_;
    float selectedElectron_mvaSpring16HZZ_WPL_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaSpring16HZZ_WPL_;
    TBranch *b_selectedElectron_mvaSpring16HZZ_WPL_;
    bool loaded_selectedElectron_mvaSpring16HZZ_WPL_;
    float selectedElectron_mvaTTH_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_mvaTTH_;
    TBranch *b_selectedElectron_mvaTTH_;
    bool loaded_selectedElectron_mvaTTH_;
    vector<LorentzVector> v_selectedElectron_p4_;
    TBranch *b_selectedElectron_p4_;
    bool loaded_selectedElectron_p4_;
    float selectedElectron_pdgId_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_pdgId_;
    TBranch *b_selectedElectron_pdgId_;
    bool loaded_selectedElectron_pdgId_;
    float selectedElectron_pfRelIso03_all_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_pfRelIso03_all_;
    TBranch *b_selectedElectron_pfRelIso03_all_;
    bool loaded_selectedElectron_pfRelIso03_all_;
    float selectedElectron_pfRelIso03_chg_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_pfRelIso03_chg_;
    TBranch *b_selectedElectron_pfRelIso03_chg_;
    bool loaded_selectedElectron_pfRelIso03_chg_;
    float selectedElectron_phi_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_phi_;
    TBranch *b_selectedElectron_phi_;
    bool loaded_selectedElectron_phi_;
    float selectedElectron_phiSVFit_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_phiSVFit_;
    TBranch *b_selectedElectron_phiSVFit_;
    bool loaded_selectedElectron_phiSVFit_;
    float selectedElectron_photonIdx_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_photonIdx_;
    TBranch *b_selectedElectron_photonIdx_;
    bool loaded_selectedElectron_photonIdx_;
    float selectedElectron_pt_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_pt_;
    TBranch *b_selectedElectron_pt_;
    bool loaded_selectedElectron_pt_;
    float selectedElectron_ptSVFit_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_ptSVFit_;
    TBranch *b_selectedElectron_ptSVFit_;
    bool loaded_selectedElectron_ptSVFit_;
    float selectedElectron_r9_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_r9_;
    TBranch *b_selectedElectron_r9_;
    bool loaded_selectedElectron_r9_;
    float selectedElectron_scEtOverPt_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_scEtOverPt_;
    TBranch *b_selectedElectron_scEtOverPt_;
    bool loaded_selectedElectron_scEtOverPt_;
    float selectedElectron_seedGain_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_seedGain_;
    TBranch *b_selectedElectron_seedGain_;
    bool loaded_selectedElectron_seedGain_;
    float selectedElectron_sieie_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_sieie_;
    TBranch *b_selectedElectron_sieie_;
    bool loaded_selectedElectron_sieie_;
    float selectedElectron_sip3d_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_sip3d_;
    TBranch *b_selectedElectron_sip3d_;
    bool loaded_selectedElectron_sip3d_;
    float selectedElectron_tightCharge_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_tightCharge_;
    TBranch *b_selectedElectron_tightCharge_;
    bool loaded_selectedElectron_tightCharge_;
    float selectedElectron_vidNestedWPBitmap_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_vidNestedWPBitmap_;
    TBranch *b_selectedElectron_vidNestedWPBitmap_;
    bool loaded_selectedElectron_vidNestedWPBitmap_;
    float selectedElectron_vidNestedWPBitmapHEEP_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_vidNestedWPBitmapHEEP_;
    TBranch *b_selectedElectron_vidNestedWPBitmapHEEP_;
    bool loaded_selectedElectron_vidNestedWPBitmapHEEP_;
    float selectedElectron_vidNestedWPBitmapSpring15_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_vidNestedWPBitmapSpring15_;
    TBranch *b_selectedElectron_vidNestedWPBitmapSpring15_;
    bool loaded_selectedElectron_vidNestedWPBitmapSpring15_;
    float selectedElectron_vidNestedWPBitmapSum16_[NSELECTEDELECTRON_MAX];
    vector<float> v_selectedElectron_vidNestedWPBitmapSum16_;
    TBranch *b_selectedElectron_vidNestedWPBitmapSum16_;
    bool loaded_selectedElectron_vidNestedWPBitmapSum16_;
    float selectedMuon_charge_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_charge_;
    TBranch *b_selectedMuon_charge_;
    bool loaded_selectedMuon_charge_;
    float selectedMuon_cleanmask_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_cleanmask_;
    TBranch *b_selectedMuon_cleanmask_;
    bool loaded_selectedMuon_cleanmask_;
    float selectedMuon_dxy_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_dxy_;
    TBranch *b_selectedMuon_dxy_;
    bool loaded_selectedMuon_dxy_;
    float selectedMuon_dxyErr_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_dxyErr_;
    TBranch *b_selectedMuon_dxyErr_;
    bool loaded_selectedMuon_dxyErr_;
    float selectedMuon_dxybs_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_dxybs_;
    TBranch *b_selectedMuon_dxybs_;
    bool loaded_selectedMuon_dxybs_;
    float selectedMuon_dz_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_dz_;
    TBranch *b_selectedMuon_dz_;
    bool loaded_selectedMuon_dz_;
    float selectedMuon_dzErr_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_dzErr_;
    TBranch *b_selectedMuon_dzErr_;
    bool loaded_selectedMuon_dzErr_;
    float selectedMuon_eta_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_eta_;
    TBranch *b_selectedMuon_eta_;
    bool loaded_selectedMuon_eta_;
    float selectedMuon_etaSVFit_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_etaSVFit_;
    TBranch *b_selectedMuon_etaSVFit_;
    bool loaded_selectedMuon_etaSVFit_;
    float selectedMuon_fsrPhotonIdx_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_fsrPhotonIdx_;
    TBranch *b_selectedMuon_fsrPhotonIdx_;
    bool loaded_selectedMuon_fsrPhotonIdx_;
    float selectedMuon_genPartFlav_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_genPartFlav_;
    TBranch *b_selectedMuon_genPartFlav_;
    bool loaded_selectedMuon_genPartFlav_;
    float selectedMuon_genPartIdx_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_genPartIdx_;
    TBranch *b_selectedMuon_genPartIdx_;
    bool loaded_selectedMuon_genPartIdx_;
    float selectedMuon_highPtId_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_highPtId_;
    TBranch *b_selectedMuon_highPtId_;
    bool loaded_selectedMuon_highPtId_;
    float selectedMuon_highPurity_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_highPurity_;
    TBranch *b_selectedMuon_highPurity_;
    bool loaded_selectedMuon_highPurity_;
    float selectedMuon_inTimeselectedMuon_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_inTimeselectedMuon_;
    TBranch *b_selectedMuon_inTimeselectedMuon_;
    bool loaded_selectedMuon_inTimeselectedMuon_;
    float selectedMuon_ip3d_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_ip3d_;
    TBranch *b_selectedMuon_ip3d_;
    bool loaded_selectedMuon_ip3d_;
    float selectedMuon_isGlobal_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_isGlobal_;
    TBranch *b_selectedMuon_isGlobal_;
    bool loaded_selectedMuon_isGlobal_;
    float selectedMuon_isPFcand_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_isPFcand_;
    TBranch *b_selectedMuon_isPFcand_;
    bool loaded_selectedMuon_isPFcand_;
    float selectedMuon_isTracker_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_isTracker_;
    TBranch *b_selectedMuon_isTracker_;
    bool loaded_selectedMuon_isTracker_;
    float selectedMuon_jetIdx_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_jetIdx_;
    TBranch *b_selectedMuon_jetIdx_;
    bool loaded_selectedMuon_jetIdx_;
    float selectedMuon_jetPtRelv2_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_jetPtRelv2_;
    TBranch *b_selectedMuon_jetPtRelv2_;
    bool loaded_selectedMuon_jetPtRelv2_;
    float selectedMuon_jetRelIso_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_jetRelIso_;
    TBranch *b_selectedMuon_jetRelIso_;
    bool loaded_selectedMuon_jetRelIso_;
    float selectedMuon_looseId_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_looseId_;
    TBranch *b_selectedMuon_looseId_;
    bool loaded_selectedMuon_looseId_;
    float selectedMuon_mSVFit_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_mSVFit_;
    TBranch *b_selectedMuon_mSVFit_;
    bool loaded_selectedMuon_mSVFit_;
    float selectedMuon_mass_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_mass_;
    TBranch *b_selectedMuon_mass_;
    bool loaded_selectedMuon_mass_;
    float selectedMuon_mediumId_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_mediumId_;
    TBranch *b_selectedMuon_mediumId_;
    bool loaded_selectedMuon_mediumId_;
    float selectedMuon_mediumPromptId_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_mediumPromptId_;
    TBranch *b_selectedMuon_mediumPromptId_;
    bool loaded_selectedMuon_mediumPromptId_;
    float selectedMuon_miniIsoId_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_miniIsoId_;
    TBranch *b_selectedMuon_miniIsoId_;
    bool loaded_selectedMuon_miniIsoId_;
    float selectedMuon_miniPFRelIso_all_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_miniPFRelIso_all_;
    TBranch *b_selectedMuon_miniPFRelIso_all_;
    bool loaded_selectedMuon_miniPFRelIso_all_;
    float selectedMuon_miniPFRelIso_chg_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_miniPFRelIso_chg_;
    TBranch *b_selectedMuon_miniPFRelIso_chg_;
    bool loaded_selectedMuon_miniPFRelIso_chg_;
    float selectedMuon_multiIsoId_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_multiIsoId_;
    TBranch *b_selectedMuon_multiIsoId_;
    bool loaded_selectedMuon_multiIsoId_;
    float selectedMuon_mvaId_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_mvaId_;
    TBranch *b_selectedMuon_mvaId_;
    bool loaded_selectedMuon_mvaId_;
    float selectedMuon_mvaLowPt_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_mvaLowPt_;
    TBranch *b_selectedMuon_mvaLowPt_;
    bool loaded_selectedMuon_mvaLowPt_;
    float selectedMuon_mvaTTH_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_mvaTTH_;
    TBranch *b_selectedMuon_mvaTTH_;
    bool loaded_selectedMuon_mvaTTH_;
    float selectedMuon_nStations_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_nStations_;
    TBranch *b_selectedMuon_nStations_;
    bool loaded_selectedMuon_nStations_;
    float selectedMuon_nTrackerLayers_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_nTrackerLayers_;
    TBranch *b_selectedMuon_nTrackerLayers_;
    bool loaded_selectedMuon_nTrackerLayers_;
    vector<LorentzVector> v_selectedMuon_p4_;
    TBranch *b_selectedMuon_p4_;
    bool loaded_selectedMuon_p4_;
    float selectedMuon_pdgId_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_pdgId_;
    TBranch *b_selectedMuon_pdgId_;
    bool loaded_selectedMuon_pdgId_;
    float selectedMuon_pfIsoId_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_pfIsoId_;
    TBranch *b_selectedMuon_pfIsoId_;
    bool loaded_selectedMuon_pfIsoId_;
    float selectedMuon_pfRelIso03_all_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_pfRelIso03_all_;
    TBranch *b_selectedMuon_pfRelIso03_all_;
    bool loaded_selectedMuon_pfRelIso03_all_;
    float selectedMuon_pfRelIso03_chg_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_pfRelIso03_chg_;
    TBranch *b_selectedMuon_pfRelIso03_chg_;
    bool loaded_selectedMuon_pfRelIso03_chg_;
    float selectedMuon_pfRelIso04_all_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_pfRelIso04_all_;
    TBranch *b_selectedMuon_pfRelIso04_all_;
    bool loaded_selectedMuon_pfRelIso04_all_;
    float selectedMuon_phi_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_phi_;
    TBranch *b_selectedMuon_phi_;
    bool loaded_selectedMuon_phi_;
    float selectedMuon_phiSVFit_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_phiSVFit_;
    TBranch *b_selectedMuon_phiSVFit_;
    bool loaded_selectedMuon_phiSVFit_;
    float selectedMuon_pt_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_pt_;
    TBranch *b_selectedMuon_pt_;
    bool loaded_selectedMuon_pt_;
    float selectedMuon_ptErr_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_ptErr_;
    TBranch *b_selectedMuon_ptErr_;
    bool loaded_selectedMuon_ptErr_;
    float selectedMuon_ptSVFit_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_ptSVFit_;
    TBranch *b_selectedMuon_ptSVFit_;
    bool loaded_selectedMuon_ptSVFit_;
    float selectedMuon_segmentComp_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_segmentComp_;
    TBranch *b_selectedMuon_segmentComp_;
    bool loaded_selectedMuon_segmentComp_;
    float selectedMuon_sip3d_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_sip3d_;
    TBranch *b_selectedMuon_sip3d_;
    bool loaded_selectedMuon_sip3d_;
    float selectedMuon_softId_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_softId_;
    TBranch *b_selectedMuon_softId_;
    bool loaded_selectedMuon_softId_;
    float selectedMuon_softMva_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_softMva_;
    TBranch *b_selectedMuon_softMva_;
    bool loaded_selectedMuon_softMva_;
    float selectedMuon_softMvaId_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_softMvaId_;
    TBranch *b_selectedMuon_softMvaId_;
    bool loaded_selectedMuon_softMvaId_;
    float selectedMuon_tightCharge_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_tightCharge_;
    TBranch *b_selectedMuon_tightCharge_;
    bool loaded_selectedMuon_tightCharge_;
    float selectedMuon_tightId_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_tightId_;
    TBranch *b_selectedMuon_tightId_;
    bool loaded_selectedMuon_tightId_;
    float selectedMuon_tkIsoId_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_tkIsoId_;
    TBranch *b_selectedMuon_tkIsoId_;
    bool loaded_selectedMuon_tkIsoId_;
    float selectedMuon_tkRelIso_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_tkRelIso_;
    TBranch *b_selectedMuon_tkRelIso_;
    bool loaded_selectedMuon_tkRelIso_;
    float selectedMuon_triggerIdLoose_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_triggerIdLoose_;
    TBranch *b_selectedMuon_triggerIdLoose_;
    bool loaded_selectedMuon_triggerIdLoose_;
    float selectedMuon_tunepRelPt_[NSELECTEDMUON_MAX];
    vector<float> v_selectedMuon_tunepRelPt_;
    TBranch *b_selectedMuon_tunepRelPt_;
    bool loaded_selectedMuon_tunepRelPt_;
    float selectedPhoton_charge_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_charge_;
    TBranch *b_selectedPhoton_charge_;
    bool loaded_selectedPhoton_charge_;
    float selectedPhoton_chargedHadronIso_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_chargedHadronIso_;
    TBranch *b_selectedPhoton_chargedHadronIso_;
    bool loaded_selectedPhoton_chargedHadronIso_;
    float selectedPhoton_cleanmask_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_cleanmask_;
    TBranch *b_selectedPhoton_cleanmask_;
    bool loaded_selectedPhoton_cleanmask_;
    float selectedPhoton_cutBased_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_cutBased_;
    TBranch *b_selectedPhoton_cutBased_;
    bool loaded_selectedPhoton_cutBased_;
    float selectedPhoton_cutBased_Fall17V1Bitmap_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_cutBased_Fall17V1Bitmap_;
    TBranch *b_selectedPhoton_cutBased_Fall17V1Bitmap_;
    bool loaded_selectedPhoton_cutBased_Fall17V1Bitmap_;
    float selectedPhoton_cutBased_Spring16V2p2_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_cutBased_Spring16V2p2_;
    TBranch *b_selectedPhoton_cutBased_Spring16V2p2_;
    bool loaded_selectedPhoton_cutBased_Spring16V2p2_;
    float selectedPhoton_eCorr_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_eCorr_;
    TBranch *b_selectedPhoton_eCorr_;
    bool loaded_selectedPhoton_eCorr_;
    float selectedPhoton_electronIdx_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_electronIdx_;
    TBranch *b_selectedPhoton_electronIdx_;
    bool loaded_selectedPhoton_electronIdx_;
    float selectedPhoton_electronVeto_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_electronVeto_;
    TBranch *b_selectedPhoton_electronVeto_;
    bool loaded_selectedPhoton_electronVeto_;
    float selectedPhoton_energyErr_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_energyErr_;
    TBranch *b_selectedPhoton_energyErr_;
    bool loaded_selectedPhoton_energyErr_;
    float selectedPhoton_eta_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_eta_;
    TBranch *b_selectedPhoton_eta_;
    bool loaded_selectedPhoton_eta_;
    float selectedPhoton_genPartFlav_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_genPartFlav_;
    TBranch *b_selectedPhoton_genPartFlav_;
    bool loaded_selectedPhoton_genPartFlav_;
    float selectedPhoton_genPartIdx_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_genPartIdx_;
    TBranch *b_selectedPhoton_genPartIdx_;
    bool loaded_selectedPhoton_genPartIdx_;
    float selectedPhoton_hoe_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_hoe_;
    TBranch *b_selectedPhoton_hoe_;
    bool loaded_selectedPhoton_hoe_;
    float selectedPhoton_isScEtaEB_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_isScEtaEB_;
    TBranch *b_selectedPhoton_isScEtaEB_;
    bool loaded_selectedPhoton_isScEtaEB_;
    float selectedPhoton_isScEtaEE_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_isScEtaEE_;
    TBranch *b_selectedPhoton_isScEtaEE_;
    bool loaded_selectedPhoton_isScEtaEE_;
    float selectedPhoton_jetIdx_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_jetIdx_;
    TBranch *b_selectedPhoton_jetIdx_;
    bool loaded_selectedPhoton_jetIdx_;
    float selectedPhoton_mass_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_mass_;
    TBranch *b_selectedPhoton_mass_;
    bool loaded_selectedPhoton_mass_;
    float selectedPhoton_mvaID_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_mvaID_;
    TBranch *b_selectedPhoton_mvaID_;
    bool loaded_selectedPhoton_mvaID_;
    float selectedPhoton_mvaID_Fall17V1p1_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_mvaID_Fall17V1p1_;
    TBranch *b_selectedPhoton_mvaID_Fall17V1p1_;
    bool loaded_selectedPhoton_mvaID_Fall17V1p1_;
    float selectedPhoton_mvaID_Spring16nonTrigV1_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_mvaID_Spring16nonTrigV1_;
    TBranch *b_selectedPhoton_mvaID_Spring16nonTrigV1_;
    bool loaded_selectedPhoton_mvaID_Spring16nonTrigV1_;
    float selectedPhoton_mvaID_WP80_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_mvaID_WP80_;
    TBranch *b_selectedPhoton_mvaID_WP80_;
    bool loaded_selectedPhoton_mvaID_WP80_;
    float selectedPhoton_mvaID_WP90_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_mvaID_WP90_;
    TBranch *b_selectedPhoton_mvaID_WP90_;
    bool loaded_selectedPhoton_mvaID_WP90_;
    vector<LorentzVector> v_selectedPhoton_p4_;
    TBranch *b_selectedPhoton_p4_;
    bool loaded_selectedPhoton_p4_;
    float selectedPhoton_pdgId_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_pdgId_;
    TBranch *b_selectedPhoton_pdgId_;
    bool loaded_selectedPhoton_pdgId_;
    float selectedPhoton_pfRelIso03_all_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_pfRelIso03_all_;
    TBranch *b_selectedPhoton_pfRelIso03_all_;
    bool loaded_selectedPhoton_pfRelIso03_all_;
    float selectedPhoton_pfRelIso03_chg_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_pfRelIso03_chg_;
    TBranch *b_selectedPhoton_pfRelIso03_chg_;
    bool loaded_selectedPhoton_pfRelIso03_chg_;
    float selectedPhoton_phi_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_phi_;
    TBranch *b_selectedPhoton_phi_;
    bool loaded_selectedPhoton_phi_;
    float selectedPhoton_photonIso_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_photonIso_;
    TBranch *b_selectedPhoton_photonIso_;
    bool loaded_selectedPhoton_photonIso_;
    float selectedPhoton_pixelSeed_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_pixelSeed_;
    TBranch *b_selectedPhoton_pixelSeed_;
    bool loaded_selectedPhoton_pixelSeed_;
    float selectedPhoton_pt_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_pt_;
    TBranch *b_selectedPhoton_pt_;
    bool loaded_selectedPhoton_pt_;
    float selectedPhoton_r9_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_r9_;
    TBranch *b_selectedPhoton_r9_;
    bool loaded_selectedPhoton_r9_;
    float selectedPhoton_seedGain_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_seedGain_;
    TBranch *b_selectedPhoton_seedGain_;
    bool loaded_selectedPhoton_seedGain_;
    float selectedPhoton_sieie_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_sieie_;
    TBranch *b_selectedPhoton_sieie_;
    bool loaded_selectedPhoton_sieie_;
    float selectedPhoton_trkSumPtHollowConeDR03_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_trkSumPtHollowConeDR03_;
    TBranch *b_selectedPhoton_trkSumPtHollowConeDR03_;
    bool loaded_selectedPhoton_trkSumPtHollowConeDR03_;
    float selectedPhoton_vidNestedWPBitmap_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_vidNestedWPBitmap_;
    TBranch *b_selectedPhoton_vidNestedWPBitmap_;
    bool loaded_selectedPhoton_vidNestedWPBitmap_;
    float selectedPhoton_vidNestedWPBitmap_Spring16V2p2_[NSELECTEDPHOTON_MAX];
    vector<float> v_selectedPhoton_vidNestedWPBitmap_Spring16V2p2_;
    TBranch *b_selectedPhoton_vidNestedWPBitmap_Spring16V2p2_;
    bool loaded_selectedPhoton_vidNestedWPBitmap_Spring16V2p2_;
    float selectedTauLoose_charge_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_charge_;
    TBranch *b_selectedTauLoose_charge_;
    bool loaded_selectedTauLoose_charge_;
    float selectedTauLoose_chargedIso_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_chargedIso_;
    TBranch *b_selectedTauLoose_chargedIso_;
    bool loaded_selectedTauLoose_chargedIso_;
    float selectedTauLoose_cleanmask_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_cleanmask_;
    TBranch *b_selectedTauLoose_cleanmask_;
    bool loaded_selectedTauLoose_cleanmask_;
    float selectedTauLoose_decayMode_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_decayMode_;
    TBranch *b_selectedTauLoose_decayMode_;
    bool loaded_selectedTauLoose_decayMode_;
    float selectedTauLoose_dxy_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_dxy_;
    TBranch *b_selectedTauLoose_dxy_;
    bool loaded_selectedTauLoose_dxy_;
    float selectedTauLoose_dz_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_dz_;
    TBranch *b_selectedTauLoose_dz_;
    bool loaded_selectedTauLoose_dz_;
    float selectedTauLoose_eta_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_eta_;
    TBranch *b_selectedTauLoose_eta_;
    bool loaded_selectedTauLoose_eta_;
    float selectedTauLoose_etaSVFit_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_etaSVFit_;
    TBranch *b_selectedTauLoose_etaSVFit_;
    bool loaded_selectedTauLoose_etaSVFit_;
    float selectedTauLoose_genPartFlav_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_genPartFlav_;
    TBranch *b_selectedTauLoose_genPartFlav_;
    bool loaded_selectedTauLoose_genPartFlav_;
    float selectedTauLoose_genPartIdx_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_genPartIdx_;
    TBranch *b_selectedTauLoose_genPartIdx_;
    bool loaded_selectedTauLoose_genPartIdx_;
    float selectedTauLoose_idAntiEle_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_idAntiEle_;
    TBranch *b_selectedTauLoose_idAntiEle_;
    bool loaded_selectedTauLoose_idAntiEle_;
    float selectedTauLoose_idAntiEle2018_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_idAntiEle2018_;
    TBranch *b_selectedTauLoose_idAntiEle2018_;
    bool loaded_selectedTauLoose_idAntiEle2018_;
    float selectedTauLoose_idAntiMu_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_idAntiMu_;
    TBranch *b_selectedTauLoose_idAntiMu_;
    bool loaded_selectedTauLoose_idAntiMu_;
    float selectedTauLoose_idDecayMode_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_idDecayMode_;
    TBranch *b_selectedTauLoose_idDecayMode_;
    bool loaded_selectedTauLoose_idDecayMode_;
    float selectedTauLoose_idDecayModeNewDMs_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_idDecayModeNewDMs_;
    TBranch *b_selectedTauLoose_idDecayModeNewDMs_;
    bool loaded_selectedTauLoose_idDecayModeNewDMs_;
    float selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe_;
    TBranch *b_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe_;
    bool loaded_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe_;
    float selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet_;
    TBranch *b_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet_;
    bool loaded_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet_;
    float selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu_;
    TBranch *b_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu_;
    bool loaded_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu_;
    float selectedTauLoose_idMVAnewDM2017v2_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_idMVAnewDM2017v2_;
    TBranch *b_selectedTauLoose_idMVAnewDM2017v2_;
    bool loaded_selectedTauLoose_idMVAnewDM2017v2_;
    float selectedTauLoose_idMVAoldDM_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_idMVAoldDM_;
    TBranch *b_selectedTauLoose_idMVAoldDM_;
    bool loaded_selectedTauLoose_idMVAoldDM_;
    float selectedTauLoose_idMVAoldDM2017v1_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_idMVAoldDM2017v1_;
    TBranch *b_selectedTauLoose_idMVAoldDM2017v1_;
    bool loaded_selectedTauLoose_idMVAoldDM2017v1_;
    float selectedTauLoose_idMVAoldDM2017v2_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_idMVAoldDM2017v2_;
    TBranch *b_selectedTauLoose_idMVAoldDM2017v2_;
    bool loaded_selectedTauLoose_idMVAoldDM2017v2_;
    float selectedTauLoose_idMVAoldDMdR032017v2_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_idMVAoldDMdR032017v2_;
    TBranch *b_selectedTauLoose_idMVAoldDMdR032017v2_;
    bool loaded_selectedTauLoose_idMVAoldDMdR032017v2_;
    float selectedTauLoose_jetIdx_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_jetIdx_;
    TBranch *b_selectedTauLoose_jetIdx_;
    bool loaded_selectedTauLoose_jetIdx_;
    float selectedTauLoose_leadTkDeltaEta_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_leadTkDeltaEta_;
    TBranch *b_selectedTauLoose_leadTkDeltaEta_;
    bool loaded_selectedTauLoose_leadTkDeltaEta_;
    float selectedTauLoose_leadTkDeltaPhi_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_leadTkDeltaPhi_;
    TBranch *b_selectedTauLoose_leadTkDeltaPhi_;
    bool loaded_selectedTauLoose_leadTkDeltaPhi_;
    float selectedTauLoose_leadTkPtOverselectedTauLoosePt_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_leadTkPtOverselectedTauLoosePt_;
    TBranch *b_selectedTauLoose_leadTkPtOverselectedTauLoosePt_;
    bool loaded_selectedTauLoose_leadTkPtOverselectedTauLoosePt_;
    float selectedTauLoose_mSVFit_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_mSVFit_;
    TBranch *b_selectedTauLoose_mSVFit_;
    bool loaded_selectedTauLoose_mSVFit_;
    float selectedTauLoose_mass_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_mass_;
    TBranch *b_selectedTauLoose_mass_;
    bool loaded_selectedTauLoose_mass_;
    float selectedTauLoose_neutralIso_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_neutralIso_;
    TBranch *b_selectedTauLoose_neutralIso_;
    bool loaded_selectedTauLoose_neutralIso_;
    vector<LorentzVector> v_selectedTauLoose_p4_;
    TBranch *b_selectedTauLoose_p4_;
    bool loaded_selectedTauLoose_p4_;
    float selectedTauLoose_phi_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_phi_;
    TBranch *b_selectedTauLoose_phi_;
    bool loaded_selectedTauLoose_phi_;
    float selectedTauLoose_phiSVFit_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_phiSVFit_;
    TBranch *b_selectedTauLoose_phiSVFit_;
    bool loaded_selectedTauLoose_phiSVFit_;
    float selectedTauLoose_photonsOutsideSignalCone_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_photonsOutsideSignalCone_;
    TBranch *b_selectedTauLoose_photonsOutsideSignalCone_;
    bool loaded_selectedTauLoose_photonsOutsideSignalCone_;
    float selectedTauLoose_pt_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_pt_;
    TBranch *b_selectedTauLoose_pt_;
    bool loaded_selectedTauLoose_pt_;
    float selectedTauLoose_ptSVFit_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_ptSVFit_;
    TBranch *b_selectedTauLoose_ptSVFit_;
    bool loaded_selectedTauLoose_ptSVFit_;
    float selectedTauLoose_puCorr_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_puCorr_;
    TBranch *b_selectedTauLoose_puCorr_;
    bool loaded_selectedTauLoose_puCorr_;
    float selectedTauLoose_rawAntiEle_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_rawAntiEle_;
    TBranch *b_selectedTauLoose_rawAntiEle_;
    bool loaded_selectedTauLoose_rawAntiEle_;
    float selectedTauLoose_rawAntiEle2018_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_rawAntiEle2018_;
    TBranch *b_selectedTauLoose_rawAntiEle2018_;
    bool loaded_selectedTauLoose_rawAntiEle2018_;
    float selectedTauLoose_rawAntiEleCat_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_rawAntiEleCat_;
    TBranch *b_selectedTauLoose_rawAntiEleCat_;
    bool loaded_selectedTauLoose_rawAntiEleCat_;
    float selectedTauLoose_rawAntiEleCat2018_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_rawAntiEleCat2018_;
    TBranch *b_selectedTauLoose_rawAntiEleCat2018_;
    bool loaded_selectedTauLoose_rawAntiEleCat2018_;
    float selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe_;
    TBranch *b_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe_;
    bool loaded_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe_;
    float selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet_;
    TBranch *b_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet_;
    bool loaded_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet_;
    float selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu_;
    TBranch *b_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu_;
    bool loaded_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu_;
    float selectedTauLoose_rawIso_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_rawIso_;
    TBranch *b_selectedTauLoose_rawIso_;
    bool loaded_selectedTauLoose_rawIso_;
    float selectedTauLoose_rawIsodR03_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_rawIsodR03_;
    TBranch *b_selectedTauLoose_rawIsodR03_;
    bool loaded_selectedTauLoose_rawIsodR03_;
    float selectedTauLoose_rawMVAnewDM2017v2_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_rawMVAnewDM2017v2_;
    TBranch *b_selectedTauLoose_rawMVAnewDM2017v2_;
    bool loaded_selectedTauLoose_rawMVAnewDM2017v2_;
    float selectedTauLoose_rawMVAoldDM_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_rawMVAoldDM_;
    TBranch *b_selectedTauLoose_rawMVAoldDM_;
    bool loaded_selectedTauLoose_rawMVAoldDM_;
    float selectedTauLoose_rawMVAoldDM2017v1_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_rawMVAoldDM2017v1_;
    TBranch *b_selectedTauLoose_rawMVAoldDM2017v1_;
    bool loaded_selectedTauLoose_rawMVAoldDM2017v1_;
    float selectedTauLoose_rawMVAoldDM2017v2_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_rawMVAoldDM2017v2_;
    TBranch *b_selectedTauLoose_rawMVAoldDM2017v2_;
    bool loaded_selectedTauLoose_rawMVAoldDM2017v2_;
    float selectedTauLoose_rawMVAoldDMdR032017v2_[NSELECTEDTAULOOSE_MAX];
    vector<float> v_selectedTauLoose_rawMVAoldDMdR032017v2_;
    TBranch *b_selectedTauLoose_rawMVAoldDMdR032017v2_;
    bool loaded_selectedTauLoose_rawMVAoldDMdR032017v2_;
    int tauHidxLoose_[NTAUHIDXLOOSE_MAX];
    vector<int> v_tauHidxLoose_;
    TBranch *b_tauHidxLoose_;
    bool loaded_tauHidxLoose_;
    Int_t year_;
public:
    void Init(TTree *tree);
    void SetYear(int year);
    void ParseYear(TTree *tree);
    void PrintUsage();
    void GetEntry(unsigned int idx);
    const float &CaloMET_phi();
    const float &CaloMET_pt();
    const float &CaloMET_sumEt();
    const int &Category();
    const int &Category_lveto();
    const int &Category_pairsLoose();
    const int &Category_tauselLoose();
    const float &ChsMET_phi();
    const float &ChsMET_pt();
    const float &ChsMET_sumEt();
    const vector<float> &CorrT1METJet_area();
    const vector<float> &CorrT1METJet_eta();
    const vector<float> &CorrT1METJet_muonSubtrFactor();
    const vector<float> &CorrT1METJet_phi();
    const vector<float> &CorrT1METJet_rawPt();
    const vector<int> &Electron_charge();
    const vector<UChar_t> &Electron_cleanmask();
    const vector<bool> &Electron_convVeto();
    const vector<int> &Electron_cutBased();
    const vector<int> &Electron_cutBased_Fall17_V1();
    const vector<bool> &Electron_cutBased_HEEP();
    const vector<int> &Electron_cutBased_HLTPreSel();
    const vector<int> &Electron_cutBased_Spring15();
    const vector<int> &Electron_cutBased_Sum16();
    const vector<float> &Electron_deltaEtaSC();
    const vector<float> &Electron_dr03EcalRecHitSumEt();
    const vector<float> &Electron_dr03HcalDepth1TowerSumEt();
    const vector<float> &Electron_dr03TkSumPt();
    const vector<float> &Electron_dr03TkSumPtHEEP();
    const vector<float> &Electron_dxy();
    const vector<float> &Electron_dxyErr();
    const vector<float> &Electron_dz();
    const vector<float> &Electron_dzErr();
    const vector<float> &Electron_eCorr();
    const vector<float> &Electron_eInvMinusPInv();
    const vector<float> &Electron_energyErr();
    const vector<float> &Electron_eta();
    const vector<UChar_t> &Electron_genPartFlav();
    const vector<int> &Electron_genPartIdx();
    const vector<float> &Electron_hoe();
    const vector<float> &Electron_ip3d();
    const vector<bool> &Electron_isPFcand();
    const vector<int> &Electron_jetIdx();
    const vector<float> &Electron_jetPtRelv2();
    const vector<float> &Electron_jetRelIso();
    const vector<UChar_t> &Electron_lostHits();
    const vector<float> &Electron_mass();
    const vector<float> &Electron_miniPFRelIso_all();
    const vector<float> &Electron_miniPFRelIso_chg();
    const vector<float> &Electron_mvaFall17V1Iso();
    const vector<bool> &Electron_mvaFall17V1Iso_WP80();
    const vector<bool> &Electron_mvaFall17V1Iso_WP90();
    const vector<bool> &Electron_mvaFall17V1Iso_WPL();
    const vector<float> &Electron_mvaFall17V1noIso();
    const vector<bool> &Electron_mvaFall17V1noIso_WP80();
    const vector<bool> &Electron_mvaFall17V1noIso_WP90();
    const vector<bool> &Electron_mvaFall17V1noIso_WPL();
    const vector<float> &Electron_mvaFall17V2Iso();
    const vector<bool> &Electron_mvaFall17V2Iso_WP80();
    const vector<bool> &Electron_mvaFall17V2Iso_WP90();
    const vector<bool> &Electron_mvaFall17V2Iso_WPL();
    const vector<float> &Electron_mvaFall17V2noIso();
    const vector<bool> &Electron_mvaFall17V2noIso_WP80();
    const vector<bool> &Electron_mvaFall17V2noIso_WP90();
    const vector<bool> &Electron_mvaFall17V2noIso_WPL();
    const vector<float> &Electron_mvaSpring16GP();
    const vector<bool> &Electron_mvaSpring16GP_WP80();
    const vector<bool> &Electron_mvaSpring16GP_WP90();
    const vector<float> &Electron_mvaSpring16HZZ();
    const vector<bool> &Electron_mvaSpring16HZZ_WPL();
    const vector<float> &Electron_mvaTTH();
    const vector<LorentzVector> &Electron_p4();
    const vector<int> &Electron_pdgId();
    const vector<float> &Electron_pfRelIso03_all();
    const vector<float> &Electron_pfRelIso03_chg();
    const vector<float> &Electron_phi();
    const vector<int> &Electron_photonIdx();
    const vector<float> &Electron_pt();
    const vector<float> &Electron_r9();
    const vector<float> &Electron_scEtOverPt();
    const vector<UChar_t> &Electron_seedGain();
    const vector<float> &Electron_sieie();
    const vector<float> &Electron_sip3d();
    const vector<int> &Electron_tightCharge();
    const vector<int> &Electron_vidNestedWPBitmap();
    const vector<int> &Electron_vidNestedWPBitmapHEEP();
    const vector<int> &Electron_vidNestedWPBitmapSpring15();
    const vector<int> &Electron_vidNestedWPBitmapSum16();
    const bool &Flag_BadChargedCandidateFilter();
    const bool &Flag_BadChargedCandidateSummer16Filter();
    const bool &Flag_BadPFMuonFilter();
    const bool &Flag_BadPFMuonSummer16Filter();
    const bool &Flag_CSCTightHalo2015Filter();
    const bool &Flag_CSCTightHaloFilter();
    const bool &Flag_CSCTightHaloTrkMuUnvetoFilter();
    const bool &Flag_EcalDeadCellBoundaryEnergyFilter();
    const bool &Flag_EcalDeadCellTriggerPrimitiveFilter();
    const bool &Flag_HBHENoiseFilter();
    const bool &Flag_HBHENoiseIsoFilter();
    const bool &Flag_HcalStripHaloFilter();
    const bool &Flag_METFilters();
    const bool &Flag_chargedHadronTrackResolutionFilter();
    const bool &Flag_ecalBadCalibFilter();
    const bool &Flag_ecalBadCalibFilterV2();
    const bool &Flag_ecalLaserCorrFilter();
    const bool &Flag_eeBadScFilter();
    const bool &Flag_globalSuperTightHalo2016Filter();
    const bool &Flag_globalTightHalo2016Filter();
    const bool &Flag_goodVertices();
    const bool &Flag_hcalLaserEventFilter();
    const bool &Flag_muonBadTrackFilter();
    const bool &Flag_trkPOGFilters();
    const bool &Flag_trkPOG_logErrorTooManyClusters();
    const bool &Flag_trkPOG_manystripclus53X();
    const bool &Flag_trkPOG_toomanystripclus53X();
    const vector<float> &FsrPhoton_dROverEt2();
    const vector<float> &FsrPhoton_eta();
    const vector<int> &FsrPhoton_muonIdx();
    const vector<float> &FsrPhoton_phi();
    const vector<float> &FsrPhoton_pt();
    const vector<float> &FsrPhoton_relIso03();
    const vector<float> &GenDressedLepton_eta();
    const vector<bool> &GenDressedLepton_hasTauAnc();
    const vector<float> &GenDressedLepton_mass();
    const vector<LorentzVector> &GenDressedLepton_p4();
    const vector<int> &GenDressedLepton_pdgId();
    const vector<float> &GenDressedLepton_phi();
    const vector<float> &GenDressedLepton_pt();
    const vector<float> &GenIsolatedPhoton_eta();
    const vector<float> &GenIsolatedPhoton_mass();
    const vector<LorentzVector> &GenIsolatedPhoton_p4();
    const vector<float> &GenIsolatedPhoton_phi();
    const vector<float> &GenIsolatedPhoton_pt();
    const vector<float> &GenJetAK8_eta();
    const vector<UChar_t> &GenJetAK8_hadronFlavour();
    const vector<float> &GenJetAK8_mass();
    const vector<LorentzVector> &GenJetAK8_p4();
    const vector<int> &GenJetAK8_partonFlavour();
    const vector<float> &GenJetAK8_phi();
    const vector<float> &GenJetAK8_pt();
    const vector<float> &GenJet_eta();
    const vector<UChar_t> &GenJet_hadronFlavour();
    const vector<float> &GenJet_mass();
    const vector<LorentzVector> &GenJet_p4();
    const vector<int> &GenJet_partonFlavour();
    const vector<float> &GenJet_phi();
    const vector<float> &GenJet_pt();
    const float &GenMET_phi();
    const float &GenMET_pt();
    const vector<float> &GenPart_eta();
    const vector<int> &GenPart_genPartIdxMother();
    const vector<float> &GenPart_mass();
    const vector<LorentzVector> &GenPart_p4();
    const vector<int> &GenPart_pdgId();
    const vector<float> &GenPart_phi();
    const vector<float> &GenPart_pt();
    const vector<int> &GenPart_status();
    const vector<int> &GenPart_statusFlags();
    const vector<int> &GenVisTau_charge();
    const vector<float> &GenVisTau_eta();
    const vector<int> &GenVisTau_genPartIdxMother();
    const vector<float> &GenVisTau_mass();
    const vector<LorentzVector> &GenVisTau_p4();
    const vector<float> &GenVisTau_phi();
    const vector<float> &GenVisTau_pt();
    const vector<int> &GenVisTau_status();
    const float &Generator_binvar();
    const int &Generator_id1();
    const int &Generator_id2();
    const float &Generator_scalePDF();
    const float &Generator_weight();
    const float &Generator_x1();
    const float &Generator_x2();
    const float &Generator_xpdf1();
    const float &Generator_xpdf2();
    const bool &HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55();
    const bool &HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55();
    const bool &HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55();
    const bool &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55();
    const bool &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55();
    const bool &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55();
    const bool &HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55();
    const bool &HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55();
    const bool &HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto();
    const bool &HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55();
    const bool &HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70();
    const bool &HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90();
    const bool &HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55();
    const bool &HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90();
    const bool &HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95();
    const bool &HLT_DoubleMu20_7_Mass0to30_Photon23();
    const bool &HLT_DoublePhoton33_CaloIdL();
    const bool &HLT_DoublePhoton60();
    const bool &HLT_DoublePhoton70();
    const bool &HLT_DoublePhoton85();
    const bool &HLT_HISinglePhoton10();
    const bool &HLT_HISinglePhoton10_Eta3p1ForPPRef();
    const bool &HLT_HISinglePhoton15();
    const bool &HLT_HISinglePhoton20();
    const bool &HLT_HISinglePhoton20_Eta3p1ForPPRef();
    const bool &HLT_HISinglePhoton30_Eta3p1ForPPRef();
    const bool &HLT_HISinglePhoton40();
    const bool &HLT_HISinglePhoton40_Eta3p1ForPPRef();
    const bool &HLT_HISinglePhoton50_Eta3p1ForPPRef();
    const bool &HLT_HISinglePhoton60();
    const bool &HLT_HISinglePhoton60_Eta3p1ForPPRef();
    const bool &HLT_Mu12_DoublePhoton20();
    const bool &HLT_Mu12_Photon25_CaloIdL();
    const bool &HLT_Mu12_Photon25_CaloIdL_L1ISO();
    const bool &HLT_Mu12_Photon25_CaloIdL_L1OR();
    const bool &HLT_Mu17_Photon22_CaloIdL_L1ISO();
    const bool &HLT_Mu17_Photon30_CaloIdL_L1ISO();
    const bool &HLT_Mu17_Photon30_IsoCaloId();
    const bool &HLT_Mu17_Photon35_CaloIdL_L1ISO();
    const bool &HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL();
    const bool &HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL();
    const bool &HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL();
    const bool &HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL();
    const bool &HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL();
    const bool &HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL();
    const bool &HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL();
    const bool &HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL();
    const bool &HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL();
    const bool &HLT_Photon100EBHE10();
    const bool &HLT_Photon100EB_TightID_TightIso();
    const bool &HLT_Photon100EEHE10();
    const bool &HLT_Photon100EE_TightID_TightIso();
    const bool &HLT_Photon110EB_TightID_TightIso();
    const bool &HLT_Photon120();
    const bool &HLT_Photon120EB_TightID_TightIso();
    const bool &HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40();
    const bool &HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF();
    const bool &HLT_Photon120_R9Id90_HE10_IsoM();
    const bool &HLT_Photon125();
    const bool &HLT_Photon135_PFMET100();
    const bool &HLT_Photon150();
    const bool &HLT_Photon165_HE10();
    const bool &HLT_Photon165_R9Id90_HE10_IsoM();
    const bool &HLT_Photon175();
    const bool &HLT_Photon20();
    const bool &HLT_Photon200();
    const bool &HLT_Photon20_CaloIdVL_IsoL();
    const bool &HLT_Photon20_HoverELoose();
    const bool &HLT_Photon22();
    const bool &HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40();
    const bool &HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF();
    const bool &HLT_Photon22_R9Id90_HE10_IsoM();
    const bool &HLT_Photon25();
    const bool &HLT_Photon250_NoHE();
    const bool &HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60();
    const bool &HLT_Photon30();
    const bool &HLT_Photon300_NoHE();
    const bool &HLT_Photon30_HoverELoose();
    const bool &HLT_Photon30_R9Id90_HE10_IsoM();
    const bool &HLT_Photon33();
    const bool &HLT_Photon35_TwoProngs35();
    const bool &HLT_Photon36();
    const bool &HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15();
    const bool &HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40();
    const bool &HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF();
    const bool &HLT_Photon36_R9Id90_HE10_IsoM();
    const bool &HLT_Photon40_HoverELoose();
    const bool &HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15();
    const bool &HLT_Photon50();
    const bool &HLT_Photon500();
    const bool &HLT_Photon50_HoverELoose();
    const bool &HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40();
    const bool &HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF();
    const bool &HLT_Photon50_R9Id90_HE10_IsoM();
    const bool &HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50();
    const bool &HLT_Photon600();
    const bool &HLT_Photon60_HoverELoose();
    const bool &HLT_Photon60_R9Id90_CaloIdL_IsoL();
    const bool &HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL();
    const bool &HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15();
    const bool &HLT_Photon75();
    const bool &HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40();
    const bool &HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF();
    const bool &HLT_Photon75_R9Id90_HE10_IsoM();
    const bool &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3();
    const bool &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3();
    const bool &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3();
    const bool &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3();
    const bool &HLT_Photon90();
    const bool &HLT_Photon90_CaloIdL_HT300();
    const bool &HLT_Photon90_CaloIdL_PFHT500();
    const bool &HLT_Photon90_CaloIdL_PFHT600();
    const bool &HLT_Photon90_CaloIdL_PFHT700();
    const bool &HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40();
    const bool &HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF();
    const bool &HLT_Photon90_R9Id90_HE10_IsoM();
    const bool &HLT_SinglePhoton10_Eta3p1ForPPRef();
    const bool &HLT_SinglePhoton20_Eta3p1ForPPRef();
    const bool &HLT_SinglePhoton30_Eta3p1ForPPRef();
    const bool &HLT_TriplePhoton_20_20_20_CaloIdLV2();
    const bool &HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL();
    const bool &HLT_TriplePhoton_30_30_10_CaloIdLV2();
    const bool &HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL();
    const bool &HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL();
    const float &HTXS_Higgs_pt();
    const float &HTXS_Higgs_y();
    const UChar_t &HTXS_njets25();
    const UChar_t &HTXS_njets30();
    const int &HTXS_stage1_1_cat_pTjet25GeV();
    const int &HTXS_stage1_1_cat_pTjet30GeV();
    const int &HTXS_stage1_1_fine_cat_pTjet25GeV();
    const int &HTXS_stage1_1_fine_cat_pTjet30GeV();
    const int &HTXS_stage1_2_cat_pTjet25GeV();
    const int &HTXS_stage1_2_cat_pTjet30GeV();
    const int &HTXS_stage1_2_fine_cat_pTjet25GeV();
    const int &HTXS_stage1_2_fine_cat_pTjet30GeV();
    const int &HTXS_stage_0();
    const int &HTXS_stage_1_pTjet25();
    const int &HTXS_stage_1_pTjet30();
    const vector<float> &IsoTrack_dxy();
    const vector<float> &IsoTrack_dz();
    const vector<float> &IsoTrack_eta();
    const vector<int> &IsoTrack_fromPV();
    const vector<bool> &IsoTrack_isFromLostTrack();
    const vector<bool> &IsoTrack_isHighPurityTrack();
    const vector<bool> &IsoTrack_isPFcand();
    const vector<float> &IsoTrack_miniPFRelIso_all();
    const vector<float> &IsoTrack_miniPFRelIso_chg();
    const vector<int> &IsoTrack_pdgId();
    const vector<float> &IsoTrack_pfRelIso03_all();
    const vector<float> &IsoTrack_pfRelIso03_chg();
    const vector<float> &IsoTrack_phi();
    const vector<float> &IsoTrack_pt();
    const vector<bool> &Jet_Filter();
    const vector<bool> &Jet_FilterLoose();
    const vector<float> &Jet_area();
    const vector<float> &Jet_bRegCorr();
    const vector<float> &Jet_bRegRes();
    const vector<float> &Jet_btagCMVA();
    const vector<float> &Jet_btagCSVV2();
    const vector<float> &Jet_btagDeepB();
    const vector<float> &Jet_btagDeepC();
    const vector<float> &Jet_btagDeepFlavB();
    const vector<float> &Jet_btagDeepFlavC();
    const vector<float> &Jet_cRegCorr();
    const vector<float> &Jet_cRegRes();
    const vector<float> &Jet_chEmEF();
    const vector<float> &Jet_chFPV0EF();
    const vector<float> &Jet_chFPV1EF();
    const vector<float> &Jet_chFPV2EF();
    const vector<float> &Jet_chFPV3EF();
    const vector<float> &Jet_chHEF();
    const vector<UChar_t> &Jet_cleanmask();
    const vector<float> &Jet_corr_JEC();
    const vector<float> &Jet_corr_JER();
    const vector<int> &Jet_electronIdx1();
    const vector<int> &Jet_electronIdx2();
    const vector<float> &Jet_eta();
    const vector<int> &Jet_genJetIdx();
    const vector<int> &Jet_hadronFlavour();
    const vector<int> &Jet_jetId();
    const vector<float> &Jet_mass();
    const vector<float> &Jet_mass_jerDown();
    const vector<float> &Jet_mass_jerUp();
    const vector<float> &Jet_mass_jesTotalDown();
    const vector<float> &Jet_mass_jesTotalUp();
    const vector<float> &Jet_mass_nom();
    const vector<float> &Jet_mass_raw();
    const vector<float> &Jet_muEF();
    const vector<int> &Jet_muonIdx1();
    const vector<int> &Jet_muonIdx2();
    const vector<float> &Jet_muonSubtrFactor();
    const vector<int> &Jet_nConstituents();
    const vector<int> &Jet_nElectrons();
    const vector<int> &Jet_nMuons();
    const vector<float> &Jet_neEmEF();
    const vector<float> &Jet_neHEF();
    const vector<LorentzVector> &Jet_p4();
    const vector<int> &Jet_partonFlavour();
    const vector<float> &Jet_phi();
    const vector<float> &Jet_pt();
    const vector<float> &Jet_pt_jerDown();
    const vector<float> &Jet_pt_jerUp();
    const vector<float> &Jet_pt_jesTotalDown();
    const vector<float> &Jet_pt_jesTotalUp();
    const vector<float> &Jet_pt_nom();
    const vector<float> &Jet_pt_raw();
    const vector<int> &Jet_puId();
    const vector<float> &Jet_puIdDisc();
    const vector<float> &Jet_qgl();
    const vector<float> &Jet_rawFactor();
    const vector<float> &LHEPart_eta();
    const vector<float> &LHEPart_incomingpz();
    const vector<float> &LHEPart_mass();
    const vector<LorentzVector> &LHEPart_p4();
    const vector<int> &LHEPart_pdgId();
    const vector<float> &LHEPart_phi();
    const vector<float> &LHEPart_pt();
    const vector<int> &LHEPart_spin();
    const vector<int> &LHEPart_status();
    const vector<float> &LHEPdfWeight();
    const vector<float> &LHEReweightingWeight();
    const vector<float> &LHEScaleWeight();
    const float &LHEWeight_originalXWGTUP();
    const float &LHE_AlphaS();
    const float &LHE_HT();
    const float &LHE_HTIncoming();
    const UChar_t &LHE_Nb();
    const UChar_t &LHE_Nc();
    const UChar_t &LHE_Nglu();
    const UChar_t &LHE_Njets();
    const UChar_t &LHE_NpLO();
    const UChar_t &LHE_NpNLO();
    const UChar_t &LHE_Nuds();
    const float &LHE_Vpt();
    const float &METFixEE2017_MetUnclustEnUpDeltaX();
    const float &METFixEE2017_MetUnclustEnUpDeltaY();
    const float &METFixEE2017_covXX();
    const float &METFixEE2017_covXY();
    const float &METFixEE2017_covYY();
    const float &METFixEE2017_phi();
    const float &METFixEE2017_pt();
    const float &METFixEE2017_significance();
    const float &METFixEE2017_sumEt();
    const float &METFixEE2017_sumPtUnclustered();
    const float &MET_MetUnclustEnUpDeltaX();
    const float &MET_MetUnclustEnUpDeltaY();
    const float &MET_T1Smear_phi();
    const float &MET_T1Smear_phi_jerDown();
    const float &MET_T1Smear_phi_jerUp();
    const float &MET_T1Smear_phi_jesTotalDown();
    const float &MET_T1Smear_phi_jesTotalUp();
    const float &MET_T1Smear_pt();
    const float &MET_T1Smear_pt_jerDown();
    const float &MET_T1Smear_pt_jerUp();
    const float &MET_T1Smear_pt_jesTotalDown();
    const float &MET_T1Smear_pt_jesTotalUp();
    const float &MET_T1_phi();
    const float &MET_T1_phi_jerDown();
    const float &MET_T1_phi_jerUp();
    const float &MET_T1_phi_jesTotalDown();
    const float &MET_T1_phi_jesTotalUp();
    const float &MET_T1_pt();
    const float &MET_T1_pt_jerDown();
    const float &MET_T1_pt_jerUp();
    const float &MET_T1_pt_jesTotalDown();
    const float &MET_T1_pt_jesTotalUp();
    const float &MET_covXX();
    const float &MET_covXY();
    const float &MET_covYY();
    const float &MET_fiducialGenPhi();
    const float &MET_fiducialGenPt();
    const float &MET_phi();
    const float &MET_phi_unclustEnDown();
    const float &MET_phi_unclustEnUp();
    const float &MET_pt();
    const float &MET_pt_unclustEnDown();
    const float &MET_pt_unclustEnUp();
    const float &MET_significance();
    const float &MET_sumEt();
    const float &MET_sumPtUnclustered();
    const vector<int> &Muon_charge();
    const vector<UChar_t> &Muon_cleanmask();
    const vector<float> &Muon_correctedDown_pt();
    const vector<float> &Muon_correctedUp_pt();
    const vector<float> &Muon_corrected_pt();
    const vector<float> &Muon_dxy();
    const vector<float> &Muon_dxyErr();
    const vector<float> &Muon_dxybs();
    const vector<float> &Muon_dz();
    const vector<float> &Muon_dzErr();
    const vector<float> &Muon_eta();
    const vector<int> &Muon_fsrPhotonIdx();
    const vector<UChar_t> &Muon_genPartFlav();
    const vector<int> &Muon_genPartIdx();
    const vector<UChar_t> &Muon_highPtId();
    const vector<bool> &Muon_highPurity();
    const vector<bool> &Muon_inTimeMuon();
    const vector<float> &Muon_ip3d();
    const vector<bool> &Muon_isGlobal();
    const vector<bool> &Muon_isPFcand();
    const vector<bool> &Muon_isTracker();
    const vector<int> &Muon_jetIdx();
    const vector<float> &Muon_jetPtRelv2();
    const vector<float> &Muon_jetRelIso();
    const vector<bool> &Muon_looseId();
    const vector<float> &Muon_mass();
    const vector<bool> &Muon_mediumId();
    const vector<bool> &Muon_mediumPromptId();
    const vector<UChar_t> &Muon_miniIsoId();
    const vector<float> &Muon_miniPFRelIso_all();
    const vector<float> &Muon_miniPFRelIso_chg();
    const vector<UChar_t> &Muon_multiIsoId();
    const vector<UChar_t> &Muon_mvaId();
    const vector<float> &Muon_mvaLowPt();
    const vector<float> &Muon_mvaTTH();
    const vector<int> &Muon_nStations();
    const vector<int> &Muon_nTrackerLayers();
    const vector<LorentzVector> &Muon_p4();
    const vector<int> &Muon_pdgId();
    const vector<UChar_t> &Muon_pfIsoId();
    const vector<float> &Muon_pfRelIso03_all();
    const vector<float> &Muon_pfRelIso03_chg();
    const vector<float> &Muon_pfRelIso04_all();
    const vector<float> &Muon_phi();
    const vector<float> &Muon_pt();
    const vector<float> &Muon_ptErr();
    const vector<float> &Muon_segmentComp();
    const vector<float> &Muon_sip3d();
    const vector<bool> &Muon_softId();
    const vector<float> &Muon_softMva();
    const vector<bool> &Muon_softMvaId();
    const vector<int> &Muon_tightCharge();
    const vector<bool> &Muon_tightId();
    const vector<UChar_t> &Muon_tkIsoId();
    const vector<float> &Muon_tkRelIso();
    const vector<bool> &Muon_triggerIdLoose();
    const vector<float> &Muon_tunepRelPt();
    const vector<float> &OtherPV_z();
    const vector<float> &PSWeight();
    const float &PV_chi2();
    const float &PV_ndof();
    const int &PV_npvs();
    const int &PV_npvsGood();
    const float &PV_score();
    const float &PV_x();
    const float &PV_y();
    const float &PV_z();
    const vector<int> &Photon_charge();
    const vector<float> &Photon_chargedHadronIso();
    const vector<UChar_t> &Photon_cleanmask();
    const vector<int> &Photon_cutBased();
    const vector<int> &Photon_cutBased_Fall17V1Bitmap();
    const vector<int> &Photon_cutBased_Spring16V2p2();
    const vector<float> &Photon_eCorr();
    const vector<int> &Photon_electronIdx();
    const vector<bool> &Photon_electronVeto();
    const vector<float> &Photon_energyErr();
    const vector<float> &Photon_eta();
    const vector<UChar_t> &Photon_genPartFlav();
    const vector<int> &Photon_genPartIdx();
    const vector<float> &Photon_hoe();
    const vector<bool> &Photon_isScEtaEB();
    const vector<bool> &Photon_isScEtaEE();
    const vector<int> &Photon_jetIdx();
    const vector<float> &Photon_mass();
    const vector<float> &Photon_mvaID();
    const vector<float> &Photon_mvaID_Fall17V1p1();
    const vector<float> &Photon_mvaID_Spring16nonTrigV1();
    const vector<bool> &Photon_mvaID_WP80();
    const vector<bool> &Photon_mvaID_WP90();
    const vector<LorentzVector> &Photon_p4();
    const vector<int> &Photon_pdgId();
    const vector<float> &Photon_pfRelIso03_all();
    const vector<float> &Photon_pfRelIso03_chg();
    const vector<float> &Photon_phi();
    const vector<float> &Photon_photonIso();
    const vector<bool> &Photon_pixelSeed();
    const vector<float> &Photon_pt();
    const vector<float> &Photon_pt_FNUDown();
    const vector<float> &Photon_pt_FNUUp();
    const vector<float> &Photon_pt_MCScaleDown();
    const vector<float> &Photon_pt_MCScaleGainDown();
    const vector<float> &Photon_pt_MCScaleGainUp();
    const vector<float> &Photon_pt_MCScaleUp();
    const vector<float> &Photon_pt_MCSmearDown();
    const vector<float> &Photon_pt_MCSmearUp();
    const vector<float> &Photon_pt_MaterialDown();
    const vector<float> &Photon_pt_MaterialUp();
    const vector<float> &Photon_pt_ShowerShapeDown();
    const vector<float> &Photon_pt_ShowerShapeUp();
    const vector<float> &Photon_r9();
    const vector<UChar_t> &Photon_seedGain();
    const vector<float> &Photon_sieie();
    const vector<float> &Photon_trkSumPtHollowConeDR03();
    const vector<int> &Photon_vidNestedWPBitmap();
    const vector<int> &Photon_vidNestedWPBitmap_Spring16V2p2();
    const float &Pileup_gpudensity();
    const int &Pileup_nPU();
    const float &Pileup_nTrueInt();
    const float &Pileup_pudensity();
    const int &Pileup_sumEOOT();
    const int &Pileup_sumLOOT();
    const float &PrefireWeight();
    const float &PrefireWeight_Down();
    const float &PrefireWeight_Up();
    const float &PuppiMET_phi();
    const float &PuppiMET_phiJERUp();
    const float &PuppiMET_phiJESUp();
    const float &PuppiMET_pt();
    const float &PuppiMET_ptJERUp();
    const float &PuppiMET_ptJESUp();
    const float &PuppiMET_sumEt();
    const float &RawMET_phi();
    const float &RawMET_pt();
    const float &RawMET_sumEt();
    const float &RawPuppiMET_phi();
    const float &RawPuppiMET_pt();
    const float &RawPuppiMET_sumEt();
    const vector<float> &SV_chi2();
    const vector<float> &SV_dlen();
    const vector<float> &SV_dlenSig();
    const vector<float> &SV_dxy();
    const vector<float> &SV_dxySig();
    const vector<float> &SV_eta();
    const vector<float> &SV_mass();
    const vector<float> &SV_ndof();
    const vector<LorentzVector> &SV_p4();
    const vector<float> &SV_pAngle();
    const vector<float> &SV_phi();
    const vector<float> &SV_pt();
    const vector<float> &SV_x();
    const vector<float> &SV_y();
    const vector<float> &SV_z();
    const float &SoftActivityJetHT();
    const float &SoftActivityJetHT10();
    const float &SoftActivityJetHT2();
    const float &SoftActivityJetHT5();
    const int &SoftActivityJetNjets10();
    const int &SoftActivityJetNjets2();
    const int &SoftActivityJetNjets5();
    const vector<float> &SoftActivityJet_eta();
    const vector<float> &SoftActivityJet_phi();
    const vector<float> &SoftActivityJet_pt();
    const vector<float> &SubGenJetAK8_eta();
    const vector<float> &SubGenJetAK8_mass();
    const vector<LorentzVector> &SubGenJetAK8_p4();
    const vector<float> &SubGenJetAK8_phi();
    const vector<float> &SubGenJetAK8_pt();
    const vector<float> &SubJet_btagCMVA();
    const vector<float> &SubJet_btagCSVV2();
    const vector<float> &SubJet_btagDeepB();
    const vector<float> &SubJet_eta();
    const vector<float> &SubJet_mass();
    const vector<float> &SubJet_n2b1();
    const vector<float> &SubJet_n3b1();
    const vector<UChar_t> &SubJet_nBHadrons();
    const vector<UChar_t> &SubJet_nCHadrons();
    const vector<LorentzVector> &SubJet_p4();
    const vector<float> &SubJet_phi();
    const vector<float> &SubJet_pt();
    const vector<float> &SubJet_rawFactor();
    const vector<float> &SubJet_tau1();
    const vector<float> &SubJet_tau2();
    const vector<float> &SubJet_tau3();
    const vector<float> &SubJet_tau4();
    const vector<bool> &Tau_Filter();
    const vector<int> &Tau_charge();
    const vector<float> &Tau_chargedIso();
    const vector<UChar_t> &Tau_cleanmask();
    const vector<int> &Tau_decayMode();
    const vector<float> &Tau_dxy();
    const vector<float> &Tau_dz();
    const vector<float> &Tau_eta();
    const vector<UChar_t> &Tau_genPartFlav();
    const vector<int> &Tau_genPartIdx();
    const vector<UChar_t> &Tau_idAntiEle();
    const vector<UChar_t> &Tau_idAntiEle2018();
    const vector<UChar_t> &Tau_idAntiMu();
    const vector<bool> &Tau_idDecayMode();
    const vector<bool> &Tau_idDecayModeNewDMs();
    const vector<UChar_t> &Tau_idDeepTau2017v2p1VSe();
    const vector<UChar_t> &Tau_idDeepTau2017v2p1VSjet();
    const vector<UChar_t> &Tau_idDeepTau2017v2p1VSmu();
    const vector<UChar_t> &Tau_idMVAnewDM2017v2();
    const vector<UChar_t> &Tau_idMVAoldDM();
    const vector<UChar_t> &Tau_idMVAoldDM2017v1();
    const vector<UChar_t> &Tau_idMVAoldDM2017v2();
    const vector<UChar_t> &Tau_idMVAoldDMdR032017v2();
    const vector<int> &Tau_jetIdx();
    const vector<float> &Tau_leadTkDeltaEta();
    const vector<float> &Tau_leadTkDeltaPhi();
    const vector<float> &Tau_leadTkPtOverTauPt();
    const vector<float> &Tau_mass();
    const vector<float> &Tau_neutralIso();
    const vector<LorentzVector> &Tau_p4();
    const vector<float> &Tau_phi();
    const vector<float> &Tau_photonsOutsideSignalCone();
    const vector<float> &Tau_pt();
    const vector<float> &Tau_puCorr();
    const vector<float> &Tau_rawAntiEle();
    const vector<float> &Tau_rawAntiEle2018();
    const vector<int> &Tau_rawAntiEleCat();
    const vector<int> &Tau_rawAntiEleCat2018();
    const vector<float> &Tau_rawDeepTau2017v2p1VSe();
    const vector<float> &Tau_rawDeepTau2017v2p1VSjet();
    const vector<float> &Tau_rawDeepTau2017v2p1VSmu();
    const vector<float> &Tau_rawIso();
    const vector<float> &Tau_rawIsodR03();
    const vector<float> &Tau_rawMVAnewDM2017v2();
    const vector<float> &Tau_rawMVAoldDM();
    const vector<float> &Tau_rawMVAoldDM2017v1();
    const vector<float> &Tau_rawMVAoldDM2017v2();
    const vector<float> &Tau_rawMVAoldDMdR032017v2();
    const float &TkMET_phi();
    const float &TkMET_pt();
    const float &TkMET_sumEt();
    const vector<float> &TrigObj_eta();
    const vector<int> &TrigObj_filterBits();
    const vector<int> &TrigObj_id();
    const vector<int> &TrigObj_l1charge();
    const vector<int> &TrigObj_l1iso();
    const vector<float> &TrigObj_l1pt();
    const vector<float> &TrigObj_l1pt_2();
    const vector<float> &TrigObj_l2pt();
    const vector<float> &TrigObj_phi();
    const vector<float> &TrigObj_pt();
    const float &btagWeight_CMVA();
    const float &btagWeight_CSVV2();
    const float &btagWeight_DeepCSVB();
    const float &dPhi_ggtautauLoose();
    const float &dPhi_ggtautauSVFitLoose();
    const float &dR_ggtautauLoose();
    const float &dR_ggtautauSVFitLoose();
    const float &dR_tautauLoose();
    const float &dR_tautauSVFitLoose();
    const vector<int> &eleHidx();
    const float &eta_tautauLoose();
    const float &eta_tautauSVFitLoose();
    const float &evWeight_electronVeto();
    const float &evWeight_electronVetoDown();
    const float &evWeight_electronVetoUp();
    const float &evWeight_looseMva();
    const float &evWeight_looseMvaDown();
    const float &evWeight_looseMvaUp();
    const float &evWeight_presel();
    const float &evWeight_preselDown();
    const float &evWeight_preselUp();
    const ULong64_t &event();
    const float &fixedGridRhoAll();
    const float &fixedGridRhoFastjetAll();
    const float &fixedGridRhoFastjetCentral();
    const float &fixedGridRhoFastjetCentralCalo();
    const float &fixedGridRhoFastjetCentralChargedPileUp();
    const float &fixedGridRhoFastjetCentralNeutral();
    const vector<int> &gHidx();
    const int &genTtbarId();
    const float &genWeight();
    const float &gg_eta();
    const float &gg_mass();
    const LorentzVector &gg_p4();
    const float &gg_phi();
    const float &gg_pt();
    const UInt_t &luminosityBlock();
    const float &m_tautauLoose();
    const float &m_tautauSVFitLoose();
    const vector<int> &muHidx();
    const UInt_t &nCorrT1METJet();
    const UInt_t &nElectron();
    const UInt_t &nFsrPhoton();
    const UInt_t &nGenDressedLepton();
    const UInt_t &nGenIsolatedPhoton();
    const UInt_t &nGenJet();
    const UInt_t &nGenJetAK8();
    const UInt_t &nGenPart();
    const UInt_t &nGenVisTau();
    const UInt_t &nIsoTrack();
    const UInt_t &nJet();
    const UInt_t &nLHEPart();
    const UInt_t &nLHEPdfWeight();
    const UInt_t &nLHEReweightingWeight();
    const UInt_t &nLHEScaleWeight();
    const UInt_t &nMuon();
    const UInt_t &nOtherPV();
    const UInt_t &nPSWeight();
    const UInt_t &nPhoton();
    const UInt_t &nSV();
    const UInt_t &nSoftActivityJet();
    const UInt_t &nSubGenJetAK8();
    const UInt_t &nSubJet();
    const UInt_t &nTau();
    const UInt_t &nTrigObj();
    const int &nselectedElectron();
    const int &nselectedMuon();
    const int &nselectedTauLoose();
    const Char_t &passedDigammaPair();
    const Char_t &passedGoodPhotons();
    const Char_t &passedHPhotons();
    const float &phi_tautauLoose();
    const float &phi_tautauSVFitLoose();
    const float &pt_tautauLoose();
    const float &pt_tautauSVFitLoose();
    const float &puWeight();
    const float &puWeightDown();
    const float &puWeightUp();
    const UInt_t &run();
    const vector<float> &selectedElectron_charge();
    const vector<float> &selectedElectron_cleanmask();
    const vector<float> &selectedElectron_convVeto();
    const vector<float> &selectedElectron_cutBased();
    const vector<float> &selectedElectron_cutBased_Fall17_V1();
    const vector<float> &selectedElectron_cutBased_HEEP();
    const vector<float> &selectedElectron_cutBased_HLTPreSel();
    const vector<float> &selectedElectron_cutBased_Spring15();
    const vector<float> &selectedElectron_cutBased_Sum16();
    const vector<float> &selectedElectron_deltaEtaSC();
    const vector<float> &selectedElectron_dr03EcalRecHitSumEt();
    const vector<float> &selectedElectron_dr03HcalDepth1TowerSumEt();
    const vector<float> &selectedElectron_dr03TkSumPt();
    const vector<float> &selectedElectron_dr03TkSumPtHEEP();
    const vector<float> &selectedElectron_dxy();
    const vector<float> &selectedElectron_dxyErr();
    const vector<float> &selectedElectron_dz();
    const vector<float> &selectedElectron_dzErr();
    const vector<float> &selectedElectron_eCorr();
    const vector<float> &selectedElectron_eInvMinusPInv();
    const vector<float> &selectedElectron_energyErr();
    const vector<float> &selectedElectron_eta();
    const vector<float> &selectedElectron_etaSVFit();
    const vector<float> &selectedElectron_genPartFlav();
    const vector<float> &selectedElectron_genPartIdx();
    const vector<float> &selectedElectron_hoe();
    const vector<float> &selectedElectron_ip3d();
    const vector<float> &selectedElectron_isPFcand();
    const vector<float> &selectedElectron_jetIdx();
    const vector<float> &selectedElectron_jetPtRelv2();
    const vector<float> &selectedElectron_jetRelIso();
    const vector<float> &selectedElectron_lostHits();
    const vector<float> &selectedElectron_mSVFit();
    const vector<float> &selectedElectron_mass();
    const vector<float> &selectedElectron_miniPFRelIso_all();
    const vector<float> &selectedElectron_miniPFRelIso_chg();
    const vector<float> &selectedElectron_mvaFall17V1Iso();
    const vector<float> &selectedElectron_mvaFall17V1Iso_WP80();
    const vector<float> &selectedElectron_mvaFall17V1Iso_WP90();
    const vector<float> &selectedElectron_mvaFall17V1Iso_WPL();
    const vector<float> &selectedElectron_mvaFall17V1noIso();
    const vector<float> &selectedElectron_mvaFall17V1noIso_WP80();
    const vector<float> &selectedElectron_mvaFall17V1noIso_WP90();
    const vector<float> &selectedElectron_mvaFall17V1noIso_WPL();
    const vector<float> &selectedElectron_mvaFall17V2Iso();
    const vector<float> &selectedElectron_mvaFall17V2Iso_WP80();
    const vector<float> &selectedElectron_mvaFall17V2Iso_WP90();
    const vector<float> &selectedElectron_mvaFall17V2Iso_WPL();
    const vector<float> &selectedElectron_mvaFall17V2noIso();
    const vector<float> &selectedElectron_mvaFall17V2noIso_WP80();
    const vector<float> &selectedElectron_mvaFall17V2noIso_WP90();
    const vector<float> &selectedElectron_mvaFall17V2noIso_WPL();
    const vector<float> &selectedElectron_mvaSpring16GP();
    const vector<float> &selectedElectron_mvaSpring16GP_WP80();
    const vector<float> &selectedElectron_mvaSpring16GP_WP90();
    const vector<float> &selectedElectron_mvaSpring16HZZ();
    const vector<float> &selectedElectron_mvaSpring16HZZ_WPL();
    const vector<float> &selectedElectron_mvaTTH();
    const vector<LorentzVector> &selectedElectron_p4();
    const vector<float> &selectedElectron_pdgId();
    const vector<float> &selectedElectron_pfRelIso03_all();
    const vector<float> &selectedElectron_pfRelIso03_chg();
    const vector<float> &selectedElectron_phi();
    const vector<float> &selectedElectron_phiSVFit();
    const vector<float> &selectedElectron_photonIdx();
    const vector<float> &selectedElectron_pt();
    const vector<float> &selectedElectron_ptSVFit();
    const vector<float> &selectedElectron_r9();
    const vector<float> &selectedElectron_scEtOverPt();
    const vector<float> &selectedElectron_seedGain();
    const vector<float> &selectedElectron_sieie();
    const vector<float> &selectedElectron_sip3d();
    const vector<float> &selectedElectron_tightCharge();
    const vector<float> &selectedElectron_vidNestedWPBitmap();
    const vector<float> &selectedElectron_vidNestedWPBitmapHEEP();
    const vector<float> &selectedElectron_vidNestedWPBitmapSpring15();
    const vector<float> &selectedElectron_vidNestedWPBitmapSum16();
    const vector<float> &selectedMuon_charge();
    const vector<float> &selectedMuon_cleanmask();
    const vector<float> &selectedMuon_dxy();
    const vector<float> &selectedMuon_dxyErr();
    const vector<float> &selectedMuon_dxybs();
    const vector<float> &selectedMuon_dz();
    const vector<float> &selectedMuon_dzErr();
    const vector<float> &selectedMuon_eta();
    const vector<float> &selectedMuon_etaSVFit();
    const vector<float> &selectedMuon_fsrPhotonIdx();
    const vector<float> &selectedMuon_genPartFlav();
    const vector<float> &selectedMuon_genPartIdx();
    const vector<float> &selectedMuon_highPtId();
    const vector<float> &selectedMuon_highPurity();
    const vector<float> &selectedMuon_inTimeselectedMuon();
    const vector<float> &selectedMuon_ip3d();
    const vector<float> &selectedMuon_isGlobal();
    const vector<float> &selectedMuon_isPFcand();
    const vector<float> &selectedMuon_isTracker();
    const vector<float> &selectedMuon_jetIdx();
    const vector<float> &selectedMuon_jetPtRelv2();
    const vector<float> &selectedMuon_jetRelIso();
    const vector<float> &selectedMuon_looseId();
    const vector<float> &selectedMuon_mSVFit();
    const vector<float> &selectedMuon_mass();
    const vector<float> &selectedMuon_mediumId();
    const vector<float> &selectedMuon_mediumPromptId();
    const vector<float> &selectedMuon_miniIsoId();
    const vector<float> &selectedMuon_miniPFRelIso_all();
    const vector<float> &selectedMuon_miniPFRelIso_chg();
    const vector<float> &selectedMuon_multiIsoId();
    const vector<float> &selectedMuon_mvaId();
    const vector<float> &selectedMuon_mvaLowPt();
    const vector<float> &selectedMuon_mvaTTH();
    const vector<float> &selectedMuon_nStations();
    const vector<float> &selectedMuon_nTrackerLayers();
    const vector<LorentzVector> &selectedMuon_p4();
    const vector<float> &selectedMuon_pdgId();
    const vector<float> &selectedMuon_pfIsoId();
    const vector<float> &selectedMuon_pfRelIso03_all();
    const vector<float> &selectedMuon_pfRelIso03_chg();
    const vector<float> &selectedMuon_pfRelIso04_all();
    const vector<float> &selectedMuon_phi();
    const vector<float> &selectedMuon_phiSVFit();
    const vector<float> &selectedMuon_pt();
    const vector<float> &selectedMuon_ptErr();
    const vector<float> &selectedMuon_ptSVFit();
    const vector<float> &selectedMuon_segmentComp();
    const vector<float> &selectedMuon_sip3d();
    const vector<float> &selectedMuon_softId();
    const vector<float> &selectedMuon_softMva();
    const vector<float> &selectedMuon_softMvaId();
    const vector<float> &selectedMuon_tightCharge();
    const vector<float> &selectedMuon_tightId();
    const vector<float> &selectedMuon_tkIsoId();
    const vector<float> &selectedMuon_tkRelIso();
    const vector<float> &selectedMuon_triggerIdLoose();
    const vector<float> &selectedMuon_tunepRelPt();
    const vector<float> &selectedPhoton_charge();
    const vector<float> &selectedPhoton_chargedHadronIso();
    const vector<float> &selectedPhoton_cleanmask();
    const vector<float> &selectedPhoton_cutBased();
    const vector<float> &selectedPhoton_cutBased_Fall17V1Bitmap();
    const vector<float> &selectedPhoton_cutBased_Spring16V2p2();
    const vector<float> &selectedPhoton_eCorr();
    const vector<float> &selectedPhoton_electronIdx();
    const vector<float> &selectedPhoton_electronVeto();
    const vector<float> &selectedPhoton_energyErr();
    const vector<float> &selectedPhoton_eta();
    const vector<float> &selectedPhoton_genPartFlav();
    const vector<float> &selectedPhoton_genPartIdx();
    const vector<float> &selectedPhoton_hoe();
    const vector<float> &selectedPhoton_isScEtaEB();
    const vector<float> &selectedPhoton_isScEtaEE();
    const vector<float> &selectedPhoton_jetIdx();
    const vector<float> &selectedPhoton_mass();
    const vector<float> &selectedPhoton_mvaID();
    const vector<float> &selectedPhoton_mvaID_Fall17V1p1();
    const vector<float> &selectedPhoton_mvaID_Spring16nonTrigV1();
    const vector<float> &selectedPhoton_mvaID_WP80();
    const vector<float> &selectedPhoton_mvaID_WP90();
    const vector<LorentzVector> &selectedPhoton_p4();
    const vector<float> &selectedPhoton_pdgId();
    const vector<float> &selectedPhoton_pfRelIso03_all();
    const vector<float> &selectedPhoton_pfRelIso03_chg();
    const vector<float> &selectedPhoton_phi();
    const vector<float> &selectedPhoton_photonIso();
    const vector<float> &selectedPhoton_pixelSeed();
    const vector<float> &selectedPhoton_pt();
    const vector<float> &selectedPhoton_r9();
    const vector<float> &selectedPhoton_seedGain();
    const vector<float> &selectedPhoton_sieie();
    const vector<float> &selectedPhoton_trkSumPtHollowConeDR03();
    const vector<float> &selectedPhoton_vidNestedWPBitmap();
    const vector<float> &selectedPhoton_vidNestedWPBitmap_Spring16V2p2();
    const vector<float> &selectedTauLoose_charge();
    const vector<float> &selectedTauLoose_chargedIso();
    const vector<float> &selectedTauLoose_cleanmask();
    const vector<float> &selectedTauLoose_decayMode();
    const vector<float> &selectedTauLoose_dxy();
    const vector<float> &selectedTauLoose_dz();
    const vector<float> &selectedTauLoose_eta();
    const vector<float> &selectedTauLoose_etaSVFit();
    const vector<float> &selectedTauLoose_genPartFlav();
    const vector<float> &selectedTauLoose_genPartIdx();
    const vector<float> &selectedTauLoose_idAntiEle();
    const vector<float> &selectedTauLoose_idAntiEle2018();
    const vector<float> &selectedTauLoose_idAntiMu();
    const vector<float> &selectedTauLoose_idDecayMode();
    const vector<float> &selectedTauLoose_idDecayModeNewDMs();
    const vector<float> &selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe();
    const vector<float> &selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet();
    const vector<float> &selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu();
    const vector<float> &selectedTauLoose_idMVAnewDM2017v2();
    const vector<float> &selectedTauLoose_idMVAoldDM();
    const vector<float> &selectedTauLoose_idMVAoldDM2017v1();
    const vector<float> &selectedTauLoose_idMVAoldDM2017v2();
    const vector<float> &selectedTauLoose_idMVAoldDMdR032017v2();
    const vector<float> &selectedTauLoose_jetIdx();
    const vector<float> &selectedTauLoose_leadTkDeltaEta();
    const vector<float> &selectedTauLoose_leadTkDeltaPhi();
    const vector<float> &selectedTauLoose_leadTkPtOverselectedTauLoosePt();
    const vector<float> &selectedTauLoose_mSVFit();
    const vector<float> &selectedTauLoose_mass();
    const vector<float> &selectedTauLoose_neutralIso();
    const vector<LorentzVector> &selectedTauLoose_p4();
    const vector<float> &selectedTauLoose_phi();
    const vector<float> &selectedTauLoose_phiSVFit();
    const vector<float> &selectedTauLoose_photonsOutsideSignalCone();
    const vector<float> &selectedTauLoose_pt();
    const vector<float> &selectedTauLoose_ptSVFit();
    const vector<float> &selectedTauLoose_puCorr();
    const vector<float> &selectedTauLoose_rawAntiEle();
    const vector<float> &selectedTauLoose_rawAntiEle2018();
    const vector<float> &selectedTauLoose_rawAntiEleCat();
    const vector<float> &selectedTauLoose_rawAntiEleCat2018();
    const vector<float> &selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe();
    const vector<float> &selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet();
    const vector<float> &selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu();
    const vector<float> &selectedTauLoose_rawIso();
    const vector<float> &selectedTauLoose_rawIsodR03();
    const vector<float> &selectedTauLoose_rawMVAnewDM2017v2();
    const vector<float> &selectedTauLoose_rawMVAoldDM();
    const vector<float> &selectedTauLoose_rawMVAoldDM2017v1();
    const vector<float> &selectedTauLoose_rawMVAoldDM2017v2();
    const vector<float> &selectedTauLoose_rawMVAoldDMdR032017v2();
    const vector<int> &tauHidxLoose();
    Bool_t isData();
    const Int_t &year();
};

#ifndef __CINT__
extern Nano nt;
#endif

namespace tas {
    const float &CaloMET_phi(); // phi
    const float &CaloMET_pt(); // pt
    const float &CaloMET_sumEt(); // scalar sum of Et
    const int &Category(); // Category/I
    const int &Category_lveto(); // Category_lveto/I
    const int &Category_pairsLoose(); // Category_pairsLoose/I
    const int &Category_tauselLoose(); // Category_tauselLoose/I
    const float &ChsMET_phi(); // raw chs PF MET phi
    const float &ChsMET_pt(); // raw chs PF MET pt
    const float &ChsMET_sumEt(); // raw chs PF scalar sum of Et
    const vector<float> &CorrT1METJet_area(); // jet catchment area, for JECs
    const vector<float> &CorrT1METJet_eta(); // eta
    const vector<float> &CorrT1METJet_muonSubtrFactor(); // 1-(muon-subtracted raw pt)/(raw pt)
    const vector<float> &CorrT1METJet_phi(); // phi
    const vector<float> &CorrT1METJet_rawPt(); // pt()*jecFactor('Uncorrected')
    const vector<int> &Electron_charge(); // electric charge
    const vector<UChar_t> &Electron_cleanmask(); // simple cleaning mask with priority to leptons
    const vector<bool> &Electron_convVeto(); // pass conversion veto
    const vector<int> &Electron_cutBased(); // cut-based ID Fall17 V2 (0:fail, 1:veto, 2:loose, 3:medium, 4:tight)
    const vector<int> &Electron_cutBased_Fall17_V1(); // cut-based ID Fall17 V1 (0:fail, 1:veto, 2:loose, 3:medium, 4:tight)
    const vector<bool> &Electron_cutBased_HEEP(); // cut-based HEEP ID
    const vector<int> &Electron_cutBased_HLTPreSel(); // cut-based HLT pre-selection ID
    const vector<int> &Electron_cutBased_Spring15(); // cut-based Spring15 ID (0:fail, 1:veto, 2:loose, 3:medium, 4:tight)
    const vector<int> &Electron_cutBased_Sum16(); // cut-based Summer16 ID (0:fail, 1:veto, 2:loose, 3:medium, 4:tight)
    const vector<float> &Electron_deltaEtaSC(); // delta eta (SC,ele) with sign
    const vector<float> &Electron_dr03EcalRecHitSumEt(); // Non-PF Ecal isolation within a delta R cone of 0.3 with electron pt > 35 GeV
    const vector<float> &Electron_dr03HcalDepth1TowerSumEt(); // Non-PF Hcal isolation within a delta R cone of 0.3 with electron pt > 35 GeV
    const vector<float> &Electron_dr03TkSumPt(); // Non-PF track isolation within a delta R cone of 0.3 with electron pt > 35 GeV
    const vector<float> &Electron_dr03TkSumPtHEEP(); // Non-PF track isolation within a delta R cone of 0.3 with electron pt > 35 GeV used in HEEP ID
    const vector<float> &Electron_dxy(); // dxy (with sign) wrt first PV, in cm
    const vector<float> &Electron_dxyErr(); // dxy uncertainty, in cm
    const vector<float> &Electron_dz(); // dz (with sign) wrt first PV, in cm
    const vector<float> &Electron_dzErr(); // dz uncertainty, in cm
    const vector<float> &Electron_eCorr(); // ratio of the calibrated energy/miniaod energy
    const vector<float> &Electron_eInvMinusPInv(); // 1/E_SC - 1/p_trk
    const vector<float> &Electron_energyErr(); // energy error of the cluster-track combination
    const vector<float> &Electron_eta(); // eta
    const vector<UChar_t> &Electron_genPartFlav(); // Flavour of genParticle for MC matching to status==1 electrons or photons: 1 = prompt electron (including gamma*->mu mu), 15 = electron from prompt tau, 22 = prompt photon (likely conversion), 5 = electron from b, 4 = electron from c, 3 = electron from light or unknown, 0 = unmatched
    const vector<int> &Electron_genPartIdx(); // Index into genParticle list for MC matching to status==1 electrons or photons
    const vector<float> &Electron_hoe(); // H over E
    const vector<float> &Electron_ip3d(); // 3D impact parameter wrt first PV, in cm
    const vector<bool> &Electron_isPFcand(); // electron is PF candidate
    const vector<int> &Electron_jetIdx(); // index of the associated jet (-1 if none)
    const vector<float> &Electron_jetPtRelv2(); // Relative momentum of the lepton with respect to the closest jet after subtracting the lepton
    const vector<float> &Electron_jetRelIso(); // Relative isolation in matched jet (1/ptRatio-1, pfRelIso04_all if no matched jet)
    const vector<UChar_t> &Electron_lostHits(); // number of missing inner hits
    const vector<float> &Electron_mass(); // mass
    const vector<float> &Electron_miniPFRelIso_all(); // mini PF relative isolation, total (with scaled rho*EA PU corrections)
    const vector<float> &Electron_miniPFRelIso_chg(); // mini PF relative isolation, charged component
    const vector<float> &Electron_mvaFall17V1Iso(); // MVA Iso ID V1 score
    const vector<bool> &Electron_mvaFall17V1Iso_WP80(); // MVA Iso ID V1 WP80
    const vector<bool> &Electron_mvaFall17V1Iso_WP90(); // MVA Iso ID V1 WP90
    const vector<bool> &Electron_mvaFall17V1Iso_WPL(); // MVA Iso ID V1 loose WP
    const vector<float> &Electron_mvaFall17V1noIso(); // MVA noIso ID V1 score
    const vector<bool> &Electron_mvaFall17V1noIso_WP80(); // MVA noIso ID V1 WP80
    const vector<bool> &Electron_mvaFall17V1noIso_WP90(); // MVA noIso ID V1 WP90
    const vector<bool> &Electron_mvaFall17V1noIso_WPL(); // MVA noIso ID V1 loose WP
    const vector<float> &Electron_mvaFall17V2Iso(); // MVA Iso ID V2 score
    const vector<bool> &Electron_mvaFall17V2Iso_WP80(); // MVA Iso ID V2 WP80
    const vector<bool> &Electron_mvaFall17V2Iso_WP90(); // MVA Iso ID V2 WP90
    const vector<bool> &Electron_mvaFall17V2Iso_WPL(); // MVA Iso ID V2 loose WP
    const vector<float> &Electron_mvaFall17V2noIso(); // MVA noIso ID V2 score
    const vector<bool> &Electron_mvaFall17V2noIso_WP80(); // MVA noIso ID V2 WP80
    const vector<bool> &Electron_mvaFall17V2noIso_WP90(); // MVA noIso ID V2 WP90
    const vector<bool> &Electron_mvaFall17V2noIso_WPL(); // MVA noIso ID V2 loose WP
    const vector<float> &Electron_mvaSpring16GP(); // MVA Spring16 general-purpose ID score
    const vector<bool> &Electron_mvaSpring16GP_WP80(); // MVA Spring16 general-purpose ID WP80
    const vector<bool> &Electron_mvaSpring16GP_WP90(); // MVA Spring16 general-purpose ID WP90
    const vector<float> &Electron_mvaSpring16HZZ(); // MVA Spring16 HZZ ID score
    const vector<bool> &Electron_mvaSpring16HZZ_WPL(); // MVA Spring16 HZZ ID loose WP
    const vector<float> &Electron_mvaTTH(); // TTH MVA lepton ID score
    const vector<LorentzVector> &Electron_p4(); // from Electron_pt,eta,phi,mass
    const vector<int> &Electron_pdgId(); // PDG code assigned by the event reconstruction (not by MC truth)
    const vector<float> &Electron_pfRelIso03_all(); // PF relative isolation dR=0.3, total (with rho*EA PU corrections)
    const vector<float> &Electron_pfRelIso03_chg(); // PF relative isolation dR=0.3, charged component
    const vector<float> &Electron_phi(); // phi
    const vector<int> &Electron_photonIdx(); // index of the associated photon (-1 if none)
    const vector<float> &Electron_pt(); // p_{T}
    const vector<float> &Electron_r9(); // R9 of the supercluster, calculated with full 5x5 region
    const vector<float> &Electron_scEtOverPt(); // (supercluster transverse energy)/pt-1
    const vector<UChar_t> &Electron_seedGain(); // Gain of the seed crystal
    const vector<float> &Electron_sieie(); // sigma_IetaIeta of the supercluster, calculated with full 5x5 region
    const vector<float> &Electron_sip3d(); // 3D impact parameter significance wrt first PV, in cm
    const vector<int> &Electron_tightCharge(); // Tight charge criteria (0:none, 1:isGsfScPixChargeConsistent, 2:isGsfCtfScPixChargeConsistent)
    const vector<int> &Electron_vidNestedWPBitmap(); // VID compressed bitmap (MinPtCut,GsfEleSCEtaMultiRangeCut,GsfEleDEtaInSeedCut,GsfEleDPhiInCut,GsfEleFull5x5SigmaIEtaIEtaCut,GsfEleHadronicOverEMEnergyScaledCut,GsfEleEInverseMinusPInverseCut,GsfEleRelPFIsoScaledCut,GsfEleConversionVetoCut,GsfEleMissingHitsCut), 3 bits per cut
    const vector<int> &Electron_vidNestedWPBitmapHEEP(); // VID compressed bitmap (MinPtCut,GsfEleSCEtaMultiRangeCut,GsfEleDEtaInSeedCut,GsfEleDPhiInCut,GsfEleFull5x5SigmaIEtaIEtaWithSatCut,GsfEleFull5x5E2x5OverE5x5WithSatCut,GsfEleHadronicOverEMLinearCut,GsfEleValueMapIsoRhoCut,GsfEleEmHadD1IsoRhoCut,GsfEleDxyCut,GsfEleMissingHitsCut,GsfEleEcalDrivenCut), 1 bits per cut
    const vector<int> &Electron_vidNestedWPBitmapSpring15(); // VID compressed bitmap (MinPtCut,GsfEleSCEtaMultiRangeCut,GsfEleDEtaInCut,GsfEleDPhiInCut,GsfEleFull5x5SigmaIEtaIEtaCut,GsfEleHadronicOverEMCut,GsfEleDxyCut,GsfEleDzCut,GsfEleEInverseMinusPInverseCut,GsfEleEffAreaPFIsoCut,GsfEleConversionVetoCut,GsfEleMissingHitsCut), 2 bits per cut
    const vector<int> &Electron_vidNestedWPBitmapSum16(); // VID compressed bitmap (MinPtCut,GsfEleSCEtaMultiRangeCut,GsfEleDEtaInSeedCut,GsfEleDPhiInCut,GsfEleFull5x5SigmaIEtaIEtaCut,GsfEleHadronicOverEMCut,GsfEleEInverseMinusPInverseCut,GsfEleEffAreaPFIsoCut,GsfEleConversionVetoCut,GsfEleMissingHitsCut), 3 bits per cut
    const bool &Flag_BadChargedCandidateFilter(); // Trigger/flag bit (process: PAT)
    const bool &Flag_BadChargedCandidateSummer16Filter(); // Trigger/flag bit (process: PAT)
    const bool &Flag_BadPFMuonFilter(); // Trigger/flag bit (process: PAT)
    const bool &Flag_BadPFMuonSummer16Filter(); // Trigger/flag bit (process: PAT)
    const bool &Flag_CSCTightHalo2015Filter(); // Trigger/flag bit (process: PAT)
    const bool &Flag_CSCTightHaloFilter(); // Trigger/flag bit (process: PAT)
    const bool &Flag_CSCTightHaloTrkMuUnvetoFilter(); // Trigger/flag bit (process: PAT)
    const bool &Flag_EcalDeadCellBoundaryEnergyFilter(); // Trigger/flag bit (process: PAT)
    const bool &Flag_EcalDeadCellTriggerPrimitiveFilter(); // Trigger/flag bit (process: PAT)
    const bool &Flag_HBHENoiseFilter(); // Trigger/flag bit (process: PAT)
    const bool &Flag_HBHENoiseIsoFilter(); // Trigger/flag bit (process: PAT)
    const bool &Flag_HcalStripHaloFilter(); // Trigger/flag bit (process: PAT)
    const bool &Flag_METFilters(); // Trigger/flag bit (process: PAT)
    const bool &Flag_chargedHadronTrackResolutionFilter(); // Trigger/flag bit (process: PAT)
    const bool &Flag_ecalBadCalibFilter(); // Trigger/flag bit (process: PAT)
    const bool &Flag_ecalBadCalibFilterV2(); // Bad ECAL calib flag (updated xtal list)
    const bool &Flag_ecalLaserCorrFilter(); // Trigger/flag bit (process: PAT)
    const bool &Flag_eeBadScFilter(); // Trigger/flag bit (process: PAT)
    const bool &Flag_globalSuperTightHalo2016Filter(); // Trigger/flag bit (process: PAT)
    const bool &Flag_globalTightHalo2016Filter(); // Trigger/flag bit (process: PAT)
    const bool &Flag_goodVertices(); // Trigger/flag bit (process: PAT)
    const bool &Flag_hcalLaserEventFilter(); // Trigger/flag bit (process: PAT)
    const bool &Flag_muonBadTrackFilter(); // Trigger/flag bit (process: PAT)
    const bool &Flag_trkPOGFilters(); // Trigger/flag bit (process: PAT)
    const bool &Flag_trkPOG_logErrorTooManyClusters(); // Trigger/flag bit (process: PAT)
    const bool &Flag_trkPOG_manystripclus53X(); // Trigger/flag bit (process: PAT)
    const bool &Flag_trkPOG_toomanystripclus53X(); // Trigger/flag bit (process: PAT)
    const vector<float> &FsrPhoton_dROverEt2(); // deltaR to associated muon divided by photon et2
    const vector<float> &FsrPhoton_eta(); // eta
    const vector<int> &FsrPhoton_muonIdx(); // index of associated muon
    const vector<float> &FsrPhoton_phi(); // phi
    const vector<float> &FsrPhoton_pt(); // pt
    const vector<float> &FsrPhoton_relIso03(); // relative isolation in a 0.3 cone without CHS
    const vector<float> &GenDressedLepton_eta(); // eta
    const vector<bool> &GenDressedLepton_hasTauAnc(); // true if Dressed lepton has a tau as ancestor
    const vector<float> &GenDressedLepton_mass(); // mass
    const vector<LorentzVector> &GenDressedLepton_p4(); // from GenDressedLepton_pt,eta,phi,mass
    const vector<int> &GenDressedLepton_pdgId(); // PDG id
    const vector<float> &GenDressedLepton_phi(); // phi
    const vector<float> &GenDressedLepton_pt(); // pt
    const vector<float> &GenIsolatedPhoton_eta(); // eta
    const vector<float> &GenIsolatedPhoton_mass(); // mass
    const vector<LorentzVector> &GenIsolatedPhoton_p4(); // from GenIsolatedPhoton_pt,eta,phi,mass
    const vector<float> &GenIsolatedPhoton_phi(); // phi
    const vector<float> &GenIsolatedPhoton_pt(); // pt
    const vector<float> &GenJetAK8_eta(); // eta
    const vector<UChar_t> &GenJetAK8_hadronFlavour(); // flavour from hadron ghost clustering
    const vector<float> &GenJetAK8_mass(); // mass
    const vector<LorentzVector> &GenJetAK8_p4(); // from GenJetAK8_pt,eta,phi,mass
    const vector<int> &GenJetAK8_partonFlavour(); // flavour from parton matching
    const vector<float> &GenJetAK8_phi(); // phi
    const vector<float> &GenJetAK8_pt(); // pt
    const vector<float> &GenJet_eta(); // eta
    const vector<UChar_t> &GenJet_hadronFlavour(); // flavour from hadron ghost clustering
    const vector<float> &GenJet_mass(); // mass
    const vector<LorentzVector> &GenJet_p4(); // from GenJet_pt,eta,phi,mass
    const vector<int> &GenJet_partonFlavour(); // flavour from parton matching
    const vector<float> &GenJet_phi(); // phi
    const vector<float> &GenJet_pt(); // pt
    const float &GenMET_phi(); // phi
    const float &GenMET_pt(); // pt
    const vector<float> &GenPart_eta(); // eta
    const vector<int> &GenPart_genPartIdxMother(); // index of the mother particle
    const vector<float> &GenPart_mass(); // Mass stored for all particles with the exception of quarks (except top), leptons/neutrinos, photons with mass < 1 GeV, gluons, pi0(111), pi+(211), D0(421), and D+(411). For these particles, you can lookup the value from PDG.
    const vector<LorentzVector> &GenPart_p4(); // from GenPart_pt,eta,phi,mass
    const vector<int> &GenPart_pdgId(); // PDG id
    const vector<float> &GenPart_phi(); // phi
    const vector<float> &GenPart_pt(); // pt
    const vector<int> &GenPart_status(); // Particle status. 1=stable
    const vector<int> &GenPart_statusFlags(); // gen status flags stored bitwise, bits are: 0 : isPrompt, 1 : isDecayedLeptonHadron, 2 : isTauDecayProduct, 3 : isPromptTauDecayProduct, 4 : isDirectTauDecayProduct, 5 : isDirectPromptTauDecayProduct, 6 : isDirectHadronDecayProduct, 7 : isHardProcess, 8 : fromHardProcess, 9 : isHardProcessTauDecayProduct, 10 : isDirectHardProcessTauDecayProduct, 11 : fromHardProcessBeforeFSR, 12 : isFirstCopy, 13 : isLastCopy, 14 : isLastCopyBeforeFSR, 
    const vector<int> &GenVisTau_charge(); // charge
    const vector<float> &GenVisTau_eta(); // eta
    const vector<int> &GenVisTau_genPartIdxMother(); // index of the mother particle
    const vector<float> &GenVisTau_mass(); // mass
    const vector<LorentzVector> &GenVisTau_p4(); // from GenVisTau_pt,eta,phi,mass
    const vector<float> &GenVisTau_phi(); // phi
    const vector<float> &GenVisTau_pt(); // pt
    const vector<int> &GenVisTau_status(); // Hadronic tau decay mode. 0=OneProng0PiZero, 1=OneProng1PiZero, 2=OneProng2PiZero, 10=ThreeProng0PiZero, 11=ThreeProng1PiZero, 15=Other
    const float &Generator_binvar(); // MC generation binning value
    const int &Generator_id1(); // id of first parton
    const int &Generator_id2(); // id of second parton
    const float &Generator_scalePDF(); // Q2 scale for PDF
    const float &Generator_weight(); // MC generator weight
    const float &Generator_x1(); // x1 fraction of proton momentum carried by the first parton
    const float &Generator_x2(); // x2 fraction of proton momentum carried by the second parton
    const float &Generator_xpdf1(); // x*pdf(x) for the first parton
    const float &Generator_xpdf2(); // x*pdf(x) for the second parton
    const bool &HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95(); // Trigger/flag bit (process: HLT)
    const bool &HLT_DoubleMu20_7_Mass0to30_Photon23(); // Trigger/flag bit (process: HLT)
    const bool &HLT_DoublePhoton33_CaloIdL(); // Trigger/flag bit (process: HLT)
    const bool &HLT_DoublePhoton60(); // Trigger/flag bit (process: HLT)
    const bool &HLT_DoublePhoton70(); // Trigger/flag bit (process: HLT)
    const bool &HLT_DoublePhoton85(); // Trigger/flag bit (process: HLT)
    const bool &HLT_HISinglePhoton10(); // Trigger/flag bit (process: HLT)
    const bool &HLT_HISinglePhoton10_Eta3p1ForPPRef(); // Trigger/flag bit (process: HLT)
    const bool &HLT_HISinglePhoton15(); // Trigger/flag bit (process: HLT)
    const bool &HLT_HISinglePhoton20(); // Trigger/flag bit (process: HLT)
    const bool &HLT_HISinglePhoton20_Eta3p1ForPPRef(); // Trigger/flag bit (process: HLT)
    const bool &HLT_HISinglePhoton30_Eta3p1ForPPRef(); // Trigger/flag bit (process: HLT)
    const bool &HLT_HISinglePhoton40(); // Trigger/flag bit (process: HLT)
    const bool &HLT_HISinglePhoton40_Eta3p1ForPPRef(); // Trigger/flag bit (process: HLT)
    const bool &HLT_HISinglePhoton50_Eta3p1ForPPRef(); // Trigger/flag bit (process: HLT)
    const bool &HLT_HISinglePhoton60(); // Trigger/flag bit (process: HLT)
    const bool &HLT_HISinglePhoton60_Eta3p1ForPPRef(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Mu12_DoublePhoton20(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Mu12_Photon25_CaloIdL(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Mu12_Photon25_CaloIdL_L1ISO(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Mu12_Photon25_CaloIdL_L1OR(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Mu17_Photon22_CaloIdL_L1ISO(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Mu17_Photon30_CaloIdL_L1ISO(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Mu17_Photon30_IsoCaloId(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Mu17_Photon35_CaloIdL_L1ISO(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon100EBHE10(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon100EB_TightID_TightIso(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon100EEHE10(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon100EE_TightID_TightIso(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon110EB_TightID_TightIso(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon120(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon120EB_TightID_TightIso(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon120_R9Id90_HE10_IsoM(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon125(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon135_PFMET100(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon150(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon165_HE10(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon165_R9Id90_HE10_IsoM(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon175(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon20(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon200(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon20_CaloIdVL_IsoL(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon20_HoverELoose(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon22(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon22_R9Id90_HE10_IsoM(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon25(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon250_NoHE(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon30(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon300_NoHE(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon30_HoverELoose(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon30_R9Id90_HE10_IsoM(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon33(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon35_TwoProngs35(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon36(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon36_R9Id90_HE10_IsoM(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon40_HoverELoose(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon50(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon500(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon50_HoverELoose(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon50_R9Id90_HE10_IsoM(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon600(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon60_HoverELoose(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon60_R9Id90_CaloIdL_IsoL(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon75(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon75_R9Id90_HE10_IsoM(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon90(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon90_CaloIdL_HT300(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon90_CaloIdL_PFHT500(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon90_CaloIdL_PFHT600(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon90_CaloIdL_PFHT700(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF(); // Trigger/flag bit (process: HLT)
    const bool &HLT_Photon90_R9Id90_HE10_IsoM(); // Trigger/flag bit (process: HLT)
    const bool &HLT_SinglePhoton10_Eta3p1ForPPRef(); // Trigger/flag bit (process: HLT)
    const bool &HLT_SinglePhoton20_Eta3p1ForPPRef(); // Trigger/flag bit (process: HLT)
    const bool &HLT_SinglePhoton30_Eta3p1ForPPRef(); // Trigger/flag bit (process: HLT)
    const bool &HLT_TriplePhoton_20_20_20_CaloIdLV2(); // Trigger/flag bit (process: HLT)
    const bool &HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL(); // Trigger/flag bit (process: HLT)
    const bool &HLT_TriplePhoton_30_30_10_CaloIdLV2(); // Trigger/flag bit (process: HLT)
    const bool &HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL(); // Trigger/flag bit (process: HLT)
    const bool &HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL(); // Trigger/flag bit (process: HLT)
    const float &HTXS_Higgs_pt(); // pt of the Higgs boson as identified in HTXS
    const float &HTXS_Higgs_y(); // rapidity of the Higgs boson as identified in HTXS
    const UChar_t &HTXS_njets25(); // number of jets with pt>25 GeV as identified in HTXS
    const UChar_t &HTXS_njets30(); // number of jets with pt>30 GeV as identified in HTXS
    const int &HTXS_stage1_1_cat_pTjet25GeV(); // HTXS stage-1.1 category(jet pt>25 GeV)
    const int &HTXS_stage1_1_cat_pTjet30GeV(); // HTXS stage-1.1 category(jet pt>30 GeV)
    const int &HTXS_stage1_1_fine_cat_pTjet25GeV(); // HTXS stage-1.1-fine category(jet pt>25 GeV)
    const int &HTXS_stage1_1_fine_cat_pTjet30GeV(); // HTXS stage-1.1-fine category(jet pt>30 GeV)
    const int &HTXS_stage1_2_cat_pTjet25GeV(); // HTXS stage-1.2 category(jet pt>25 GeV)
    const int &HTXS_stage1_2_cat_pTjet30GeV(); // HTXS stage-1.2 category(jet pt>30 GeV)
    const int &HTXS_stage1_2_fine_cat_pTjet25GeV(); // HTXS stage-1.2-fine category(jet pt>25 GeV)
    const int &HTXS_stage1_2_fine_cat_pTjet30GeV(); // HTXS stage-1.2-fine category(jet pt>30 GeV)
    const int &HTXS_stage_0(); // HTXS stage-0 category
    const int &HTXS_stage_1_pTjet25(); // HTXS stage-1 category (jet pt>25 GeV)
    const int &HTXS_stage_1_pTjet30(); // HTXS stage-1 category (jet pt>30 GeV)
    const vector<float> &IsoTrack_dxy(); // dxy (with sign) wrt first PV, in cm
    const vector<float> &IsoTrack_dz(); // dz (with sign) wrt first PV, in cm
    const vector<float> &IsoTrack_eta(); // eta
    const vector<int> &IsoTrack_fromPV(); // isolated track comes from PV
    const vector<bool> &IsoTrack_isFromLostTrack(); // if isolated track comes from a lost track
    const vector<bool> &IsoTrack_isHighPurityTrack(); // track is high purity
    const vector<bool> &IsoTrack_isPFcand(); // if isolated track is a PF candidate
    const vector<float> &IsoTrack_miniPFRelIso_all(); // mini PF relative isolation, total (with scaled rho*EA PU corrections)
    const vector<float> &IsoTrack_miniPFRelIso_chg(); // mini PF relative isolation, charged component
    const vector<int> &IsoTrack_pdgId(); // PDG id of PF cand
    const vector<float> &IsoTrack_pfRelIso03_all(); // PF relative isolation dR=0.3, total (deltaBeta corrections)
    const vector<float> &IsoTrack_pfRelIso03_chg(); // PF relative isolation dR=0.3, charged component
    const vector<float> &IsoTrack_phi(); // phi
    const vector<float> &IsoTrack_pt(); // pt
    const vector<bool> &Jet_Filter(); // Jet_Filter[nJet]/O
    const vector<bool> &Jet_FilterLoose(); // Jet_FilterLoose[nJet]/O
    const vector<float> &Jet_area(); // jet catchment area, for JECs
    const vector<float> &Jet_bRegCorr(); // pt correction for b-jet energy regression
    const vector<float> &Jet_bRegRes(); // res on pt corrected with b-jet regression
    const vector<float> &Jet_btagCMVA(); // CMVA V2 btag discriminator
    const vector<float> &Jet_btagCSVV2(); //  pfCombinedInclusiveSecondaryVertexV2 b-tag discriminator (aka CSVV2)
    const vector<float> &Jet_btagDeepB(); // DeepCSV b+bb tag discriminator
    const vector<float> &Jet_btagDeepC(); // DeepCSV charm btag discriminator
    const vector<float> &Jet_btagDeepFlavB(); // DeepFlavour b+bb+lepb tag discriminator
    const vector<float> &Jet_btagDeepFlavC(); // DeepFlavour charm tag discriminator
    const vector<float> &Jet_cRegCorr(); // pt correction for c-jet energy regression
    const vector<float> &Jet_cRegRes(); // res on pt corrected with c-jet regression
    const vector<float> &Jet_chEmEF(); // charged Electromagnetic Energy Fraction
    const vector<float> &Jet_chFPV0EF(); // charged fromPV==0 Energy Fraction (energy excluded from CHS jets). Previously called betastar.
    const vector<float> &Jet_chFPV1EF(); // charged fromPV==1 Energy Fraction (component of the total charged Energy Fraction).
    const vector<float> &Jet_chFPV2EF(); // charged fromPV==2 Energy Fraction (component of the total charged Energy Fraction).
    const vector<float> &Jet_chFPV3EF(); // charged fromPV==3 Energy Fraction (component of the total charged Energy Fraction).
    const vector<float> &Jet_chHEF(); // charged Hadron Energy Fraction
    const vector<UChar_t> &Jet_cleanmask(); // simple cleaning mask with priority to leptons
    const vector<float> &Jet_corr_JEC(); // Jet_corr_JEC[nJet]/F
    const vector<float> &Jet_corr_JER(); // Jet_corr_JER[nJet]/F
    const vector<int> &Jet_electronIdx1(); // index of first matching electron
    const vector<int> &Jet_electronIdx2(); // index of second matching electron
    const vector<float> &Jet_eta(); // eta
    const vector<int> &Jet_genJetIdx(); // index of matched gen jet
    const vector<int> &Jet_hadronFlavour(); // flavour from hadron ghost clustering
    const vector<int> &Jet_jetId(); // Jet ID flags bit1 is loose (always false in 2017 since it does not exist), bit2 is tight, bit3 is tightLepVeto
    const vector<float> &Jet_mass(); // mass
    const vector<float> &Jet_mass_jerDown(); // Jet_mass_jerDown[nJet]/F
    const vector<float> &Jet_mass_jerUp(); // Jet_mass_jerUp[nJet]/F
    const vector<float> &Jet_mass_jesTotalDown(); // Jet_mass_jesTotalDown[nJet]/F
    const vector<float> &Jet_mass_jesTotalUp(); // Jet_mass_jesTotalUp[nJet]/F
    const vector<float> &Jet_mass_nom(); // Jet_mass_nom[nJet]/F
    const vector<float> &Jet_mass_raw(); // Jet_mass_raw[nJet]/F
    const vector<float> &Jet_muEF(); // muon Energy Fraction
    const vector<int> &Jet_muonIdx1(); // index of first matching muon
    const vector<int> &Jet_muonIdx2(); // index of second matching muon
    const vector<float> &Jet_muonSubtrFactor(); // 1-(muon-subtracted raw pt)/(raw pt)
    const vector<int> &Jet_nConstituents(); // Number of particles in the jet
    const vector<int> &Jet_nElectrons(); // number of electrons in the jet
    const vector<int> &Jet_nMuons(); // number of muons in the jet
    const vector<float> &Jet_neEmEF(); // neutral Electromagnetic Energy Fraction
    const vector<float> &Jet_neHEF(); // neutral Hadron Energy Fraction
    const vector<LorentzVector> &Jet_p4(); // from Jet_pt,eta,phi,mass
    const vector<int> &Jet_partonFlavour(); // flavour from parton matching
    const vector<float> &Jet_phi(); // phi
    const vector<float> &Jet_pt(); // pt
    const vector<float> &Jet_pt_jerDown(); // Jet_pt_jerDown[nJet]/F
    const vector<float> &Jet_pt_jerUp(); // Jet_pt_jerUp[nJet]/F
    const vector<float> &Jet_pt_jesTotalDown(); // Jet_pt_jesTotalDown[nJet]/F
    const vector<float> &Jet_pt_jesTotalUp(); // Jet_pt_jesTotalUp[nJet]/F
    const vector<float> &Jet_pt_nom(); // Jet_pt_nom[nJet]/F
    const vector<float> &Jet_pt_raw(); // Jet_pt_raw[nJet]/F
    const vector<int> &Jet_puId(); // Pilup ID flags with 80X (2016) training
    const vector<float> &Jet_puIdDisc(); // Pilup ID discriminant with 94X (2017) training
    const vector<float> &Jet_qgl(); // Quark vs Gluon likelihood discriminator
    const vector<float> &Jet_rawFactor(); // 1 - Factor to get back to raw pT
    const vector<float> &LHEPart_eta(); // Pseodorapidity of LHE particles
    const vector<float> &LHEPart_incomingpz(); // Pz of incoming LHE particles
    const vector<float> &LHEPart_mass(); // Mass of LHE particles
    const vector<LorentzVector> &LHEPart_p4(); // from LHEPart_pt,eta,phi,mass
    const vector<int> &LHEPart_pdgId(); // PDG ID of LHE particles
    const vector<float> &LHEPart_phi(); // Phi of LHE particles
    const vector<float> &LHEPart_pt(); // Pt of LHE particles
    const vector<int> &LHEPart_spin(); // Spin of LHE particles
    const vector<int> &LHEPart_status(); // LHE particle status; -1:incoming, 1:outgoing
    const vector<float> &LHEPdfWeight(); // LHE pdf variation weights (w_var / w_nominal) for LHA IDs 306000 - 306102
    const vector<float> &LHEReweightingWeight(); // 
    const vector<float> &LHEScaleWeight(); // LHE scale variation weights (w_var / w_nominal); [0] is mur=0.5 muf=0.5 ; [1] is mur=0.5 muf=1 ; [2] is mur=0.5 muf=2 ; [3] is mur=1 muf=0.5 ; [4] is mur=1 muf=1 ; [5] is mur=1 muf=2 ; [6] is mur=2 muf=0.5 ; [7] is mur=2 muf=1 ; [8] is mur=2 muf=2 
    const float &LHEWeight_originalXWGTUP(); // Nominal event weight in the LHE file
    const float &LHE_AlphaS(); // Per-event alphaS
    const float &LHE_HT(); // HT, scalar sum of parton pTs at LHE step
    const float &LHE_HTIncoming(); // HT, scalar sum of parton pTs at LHE step, restricted to partons
    const UChar_t &LHE_Nb(); // Number of b partons at LHE step
    const UChar_t &LHE_Nc(); // Number of c partons at LHE step
    const UChar_t &LHE_Nglu(); // Number of gluon partons at LHE step
    const UChar_t &LHE_Njets(); // Number of jets (partons) at LHE step
    const UChar_t &LHE_NpLO(); // number of partons at LO
    const UChar_t &LHE_NpNLO(); // number of partons at NLO
    const UChar_t &LHE_Nuds(); // Number of u,d,s partons at LHE step
    const float &LHE_Vpt(); // pT of the W or Z boson at LHE step
    const float &METFixEE2017_MetUnclustEnUpDeltaX(); // Delta (METx_mod-METx) Unclustered Energy Up
    const float &METFixEE2017_MetUnclustEnUpDeltaY(); // Delta (METy_mod-METy) Unclustered Energy Up
    const float &METFixEE2017_covXX(); // xx element of met covariance matrix
    const float &METFixEE2017_covXY(); // xy element of met covariance matrix
    const float &METFixEE2017_covYY(); // yy element of met covariance matrix
    const float &METFixEE2017_phi(); // phi
    const float &METFixEE2017_pt(); // pt
    const float &METFixEE2017_significance(); // MET significance
    const float &METFixEE2017_sumEt(); // scalar sum of Et
    const float &METFixEE2017_sumPtUnclustered(); // sumPt used for MET significance
    const float &MET_MetUnclustEnUpDeltaX(); // Delta (METx_mod-METx) Unclustered Energy Up
    const float &MET_MetUnclustEnUpDeltaY(); // Delta (METy_mod-METy) Unclustered Energy Up
    const float &MET_T1Smear_phi(); // MET_T1Smear_phi/F
    const float &MET_T1Smear_phi_jerDown(); // MET_T1Smear_phi_jerDown/F
    const float &MET_T1Smear_phi_jerUp(); // MET_T1Smear_phi_jerUp/F
    const float &MET_T1Smear_phi_jesTotalDown(); // MET_T1Smear_phi_jesTotalDown/F
    const float &MET_T1Smear_phi_jesTotalUp(); // MET_T1Smear_phi_jesTotalUp/F
    const float &MET_T1Smear_pt(); // MET_T1Smear_pt/F
    const float &MET_T1Smear_pt_jerDown(); // MET_T1Smear_pt_jerDown/F
    const float &MET_T1Smear_pt_jerUp(); // MET_T1Smear_pt_jerUp/F
    const float &MET_T1Smear_pt_jesTotalDown(); // MET_T1Smear_pt_jesTotalDown/F
    const float &MET_T1Smear_pt_jesTotalUp(); // MET_T1Smear_pt_jesTotalUp/F
    const float &MET_T1_phi(); // MET_T1_phi/F
    const float &MET_T1_phi_jerDown(); // MET_T1_phi_jerDown/F
    const float &MET_T1_phi_jerUp(); // MET_T1_phi_jerUp/F
    const float &MET_T1_phi_jesTotalDown(); // MET_T1_phi_jesTotalDown/F
    const float &MET_T1_phi_jesTotalUp(); // MET_T1_phi_jesTotalUp/F
    const float &MET_T1_pt(); // MET_T1_pt/F
    const float &MET_T1_pt_jerDown(); // MET_T1_pt_jerDown/F
    const float &MET_T1_pt_jerUp(); // MET_T1_pt_jerUp/F
    const float &MET_T1_pt_jesTotalDown(); // MET_T1_pt_jesTotalDown/F
    const float &MET_T1_pt_jesTotalUp(); // MET_T1_pt_jesTotalUp/F
    const float &MET_covXX(); // xx element of met covariance matrix
    const float &MET_covXY(); // xy element of met covariance matrix
    const float &MET_covYY(); // yy element of met covariance matrix
    const float &MET_fiducialGenPhi(); // phi
    const float &MET_fiducialGenPt(); // pt
    const float &MET_phi(); // phi
    const float &MET_phi_unclustEnDown(); // MET_phi_unclustEnDown/F
    const float &MET_phi_unclustEnUp(); // MET_phi_unclustEnUp/F
    const float &MET_pt(); // pt
    const float &MET_pt_unclustEnDown(); // MET_pt_unclustEnDown/F
    const float &MET_pt_unclustEnUp(); // MET_pt_unclustEnUp/F
    const float &MET_significance(); // MET significance
    const float &MET_sumEt(); // scalar sum of Et
    const float &MET_sumPtUnclustered(); // sumPt used for MET significance
    const vector<int> &Muon_charge(); // electric charge
    const vector<UChar_t> &Muon_cleanmask(); // simple cleaning mask with priority to leptons
    const vector<float> &Muon_correctedDown_pt(); // Muon_correctedDown_pt[nMuon]/F
    const vector<float> &Muon_correctedUp_pt(); // Muon_correctedUp_pt[nMuon]/F
    const vector<float> &Muon_corrected_pt(); // Muon_corrected_pt[nMuon]/F
    const vector<float> &Muon_dxy(); // dxy (with sign) wrt first PV, in cm
    const vector<float> &Muon_dxyErr(); // dxy uncertainty, in cm
    const vector<float> &Muon_dxybs(); // dxy (with sign) wrt the beam spot, in cm
    const vector<float> &Muon_dz(); // dz (with sign) wrt first PV, in cm
    const vector<float> &Muon_dzErr(); // dz uncertainty, in cm
    const vector<float> &Muon_eta(); // eta
    const vector<int> &Muon_fsrPhotonIdx(); // Index of the associated FSR photon
    const vector<UChar_t> &Muon_genPartFlav(); // Flavour of genParticle for MC matching to status==1 muons: 1 = prompt muon (including gamma*->mu mu), 15 = muon from prompt tau, 5 = muon from b, 4 = muon from c, 3 = muon from light or unknown, 0 = unmatched
    const vector<int> &Muon_genPartIdx(); // Index into genParticle list for MC matching to status==1 muons
    const vector<UChar_t> &Muon_highPtId(); // high-pT cut-based ID (1 = tracker high pT, 2 = global high pT, which includes tracker high pT)
    const vector<bool> &Muon_highPurity(); // inner track is high purity
    const vector<bool> &Muon_inTimeMuon(); // inTimeMuon ID
    const vector<float> &Muon_ip3d(); // 3D impact parameter wrt first PV, in cm
    const vector<bool> &Muon_isGlobal(); // muon is global muon
    const vector<bool> &Muon_isPFcand(); // muon is PF candidate
    const vector<bool> &Muon_isTracker(); // muon is tracker muon
    const vector<int> &Muon_jetIdx(); // index of the associated jet (-1 if none)
    const vector<float> &Muon_jetPtRelv2(); // Relative momentum of the lepton with respect to the closest jet after subtracting the lepton
    const vector<float> &Muon_jetRelIso(); // Relative isolation in matched jet (1/ptRatio-1, pfRelIso04_all if no matched jet)
    const vector<bool> &Muon_looseId(); // muon is loose muon
    const vector<float> &Muon_mass(); // mass
    const vector<bool> &Muon_mediumId(); // cut-based ID, medium WP
    const vector<bool> &Muon_mediumPromptId(); // cut-based ID, medium prompt WP
    const vector<UChar_t> &Muon_miniIsoId(); // MiniIso ID from miniAOD selector (1=MiniIsoLoose, 2=MiniIsoMedium, 3=MiniIsoTight, 4=MiniIsoVeryTight)
    const vector<float> &Muon_miniPFRelIso_all(); // mini PF relative isolation, total (with scaled rho*EA PU corrections)
    const vector<float> &Muon_miniPFRelIso_chg(); // mini PF relative isolation, charged component
    const vector<UChar_t> &Muon_multiIsoId(); // MultiIsoId from miniAOD selector (1=MultiIsoLoose, 2=MultiIsoMedium)
    const vector<UChar_t> &Muon_mvaId(); // Mva ID from miniAOD selector (1=MvaLoose, 2=MvaMedium, 3=MvaTight)
    const vector<float> &Muon_mvaLowPt(); // Low pt muon ID score
    const vector<float> &Muon_mvaTTH(); // TTH MVA lepton ID score
    const vector<int> &Muon_nStations(); // number of matched stations with default arbitration (segment & track)
    const vector<int> &Muon_nTrackerLayers(); // number of layers in the tracker
    const vector<LorentzVector> &Muon_p4(); // from Muon_pt,eta,phi,mass
    const vector<int> &Muon_pdgId(); // PDG code assigned by the event reconstruction (not by MC truth)
    const vector<UChar_t> &Muon_pfIsoId(); // PFIso ID from miniAOD selector (1=PFIsoVeryLoose, 2=PFIsoLoose, 3=PFIsoMedium, 4=PFIsoTight, 5=PFIsoVeryTight, 6=PFIsoVeryVeryTight)
    const vector<float> &Muon_pfRelIso03_all(); // PF relative isolation dR=0.3, total (deltaBeta corrections)
    const vector<float> &Muon_pfRelIso03_chg(); // PF relative isolation dR=0.3, charged component
    const vector<float> &Muon_pfRelIso04_all(); // PF relative isolation dR=0.4, total (deltaBeta corrections)
    const vector<float> &Muon_phi(); // phi
    const vector<float> &Muon_pt(); // pt
    const vector<float> &Muon_ptErr(); // ptError of the muon track
    const vector<float> &Muon_segmentComp(); // muon segment compatibility
    const vector<float> &Muon_sip3d(); // 3D impact parameter significance wrt first PV
    const vector<bool> &Muon_softId(); // soft cut-based ID
    const vector<float> &Muon_softMva(); // soft MVA ID score
    const vector<bool> &Muon_softMvaId(); // soft MVA ID
    const vector<int> &Muon_tightCharge(); // Tight charge criterion using pterr/pt of muonBestTrack (0:fail, 2:pass)
    const vector<bool> &Muon_tightId(); // cut-based ID, tight WP
    const vector<UChar_t> &Muon_tkIsoId(); // TkIso ID (1=TkIsoLoose, 2=TkIsoTight)
    const vector<float> &Muon_tkRelIso(); // Tracker-based relative isolation dR=0.3 for highPt, trkIso/tunePpt
    const vector<bool> &Muon_triggerIdLoose(); // TriggerIdLoose ID
    const vector<float> &Muon_tunepRelPt(); // TuneP relative pt, tunePpt/pt
    const vector<float> &OtherPV_z(); // Z position of other primary vertices, excluding the main PV
    const vector<float> &PSWeight(); // dummy PS weight (1.0) 
    const float &PV_chi2(); // main primary vertex reduced chi2
    const float &PV_ndof(); // main primary vertex number of degree of freedom
    const int &PV_npvs(); // total number of reconstructed primary vertices
    const int &PV_npvsGood(); // number of good reconstructed primary vertices. selection:!isFake && ndof > 4 && abs(z) <= 24 && position.Rho <= 2
    const float &PV_score(); // main primary vertex score, i.e. sum pt2 of clustered objects
    const float &PV_x(); // main primary vertex position x coordinate
    const float &PV_y(); // main primary vertex position y coordinate
    const float &PV_z(); // main primary vertex position z coordinate
    const vector<int> &Photon_charge(); // electric charge
    const vector<float> &Photon_chargedHadronIso(); // charged hadron isolation with dxy,dz match to pv
    const vector<UChar_t> &Photon_cleanmask(); // simple cleaning mask with priority to leptons
    const vector<int> &Photon_cutBased(); // cut-based ID bitmap, Fall17V2, (0:fail, 1:loose, 2:medium, 3:tight)
    const vector<int> &Photon_cutBased_Fall17V1Bitmap(); // cut-based ID bitmap, Fall17V1, 2^(0:loose, 1:medium, 2:tight).
    const vector<int> &Photon_cutBased_Spring16V2p2(); // cut-based ID bitmap, Spring16V2p2, (0:fail, 1:loose, 2:medium, 3:tight)
    const vector<float> &Photon_eCorr(); // ratio of the calibrated energy/miniaod energy
    const vector<int> &Photon_electronIdx(); // index of the associated electron (-1 if none)
    const vector<bool> &Photon_electronVeto(); // pass electron veto
    const vector<float> &Photon_energyErr(); // energy error of the cluster from regression
    const vector<float> &Photon_eta(); // eta
    const vector<UChar_t> &Photon_genPartFlav(); // Flavour of genParticle for MC matching to status==1 photons or electrons: 1 = prompt photon, 11 = prompt electron, 0 = unknown or unmatched
    const vector<int> &Photon_genPartIdx(); // Index into genParticle list for MC matching to status==1 photons or electrons
    const vector<float> &Photon_hoe(); // H over E
    const vector<bool> &Photon_isScEtaEB(); // is supercluster eta within barrel acceptance
    const vector<bool> &Photon_isScEtaEE(); // is supercluster eta within endcap acceptance
    const vector<int> &Photon_jetIdx(); // index of the associated jet (-1 if none)
    const vector<float> &Photon_mass(); // mass
    const vector<float> &Photon_mvaID(); // MVA ID score, Fall17V2
    const vector<float> &Photon_mvaID_Fall17V1p1(); // MVA ID score, Fall17V1p1
    const vector<float> &Photon_mvaID_Spring16nonTrigV1(); // MVA ID score, Spring16nonTrigV1
    const vector<bool> &Photon_mvaID_WP80(); // MVA ID WP80, Fall17V2
    const vector<bool> &Photon_mvaID_WP90(); // MVA ID WP90, Fall17V2
    const vector<LorentzVector> &Photon_p4(); // from Photon_pt,eta,phi,mass
    const vector<int> &Photon_pdgId(); // PDG code assigned by the event reconstruction (not by MC truth)
    const vector<float> &Photon_pfRelIso03_all(); // PF relative isolation dR=0.3, total (with rho*EA PU corrections)
    const vector<float> &Photon_pfRelIso03_chg(); // PF relative isolation dR=0.3, charged component (with rho*EA PU corrections)
    const vector<float> &Photon_phi(); // phi
    const vector<float> &Photon_photonIso(); // photon iso
    const vector<bool> &Photon_pixelSeed(); // has pixel seed
    const vector<float> &Photon_pt(); // p_{T}
    const vector<float> &Photon_pt_FNUDown(); // Photon_pt_FNUDown[nPhoton]/F
    const vector<float> &Photon_pt_FNUUp(); // Photon_pt_FNUUp[nPhoton]/F
    const vector<float> &Photon_pt_MCScaleDown(); // Photon_pt_MCScaleDown[nPhoton]/F
    const vector<float> &Photon_pt_MCScaleGainDown(); // Photon_pt_MCScaleGainDown[nPhoton]/F
    const vector<float> &Photon_pt_MCScaleGainUp(); // Photon_pt_MCScaleGainUp[nPhoton]/F
    const vector<float> &Photon_pt_MCScaleUp(); // Photon_pt_MCScaleUp[nPhoton]/F
    const vector<float> &Photon_pt_MCSmearDown(); // Photon_pt_MCSmearDown[nPhoton]/F
    const vector<float> &Photon_pt_MCSmearUp(); // Photon_pt_MCSmearUp[nPhoton]/F
    const vector<float> &Photon_pt_MaterialDown(); // Photon_pt_MaterialDown[nPhoton]/F
    const vector<float> &Photon_pt_MaterialUp(); // Photon_pt_MaterialUp[nPhoton]/F
    const vector<float> &Photon_pt_ShowerShapeDown(); // Photon_pt_ShowerShapeDown[nPhoton]/F
    const vector<float> &Photon_pt_ShowerShapeUp(); // Photon_pt_ShowerShapeUp[nPhoton]/F
    const vector<float> &Photon_r9(); // R9 of the supercluster, calculated with full 5x5 region
    const vector<UChar_t> &Photon_seedGain(); // Gain of the seed crystal
    const vector<float> &Photon_sieie(); // sigma_IetaIeta of the supercluster, calculated with full 5x5 region
    const vector<float> &Photon_trkSumPtHollowConeDR03(); // Sum of track pT in a hollow cone of outer radius, inner radius
    const vector<int> &Photon_vidNestedWPBitmap(); // Fall17V2 VID compressed bitmap (MinPtCut,PhoSCEtaMultiRangeCut,PhoSingleTowerHadOverEmCut,PhoFull5x5SigmaIEtaIEtaCut,PhoAnyPFIsoWithEACut,PhoAnyPFIsoWithEAAndQuadScalingCut,PhoAnyPFIsoWithEACut), 2 bits per cut
    const vector<int> &Photon_vidNestedWPBitmap_Spring16V2p2(); // Spring16V2p2 VID compressed bitmap (MinPtCut,PhoSCEtaMultiRangeCut,PhoSingleTowerHadOverEmCut,PhoFull5x5SigmaIEtaIEtaCut,PhoAnyPFIsoWithEACut,PhoAnyPFIsoWithEAAndQuadScalingCut,PhoAnyPFIsoWithEACut), 2 bits per cut
    const float &Pileup_gpudensity(); // Generator-level PU vertices / mm
    const int &Pileup_nPU(); // the number of pileup interactions that have been added to the event in the current bunch crossing
    const float &Pileup_nTrueInt(); // the true mean number of the poisson distribution for this event from which the number of interactions each bunch crossing has been sampled
    const float &Pileup_pudensity(); // PU vertices / mm
    const int &Pileup_sumEOOT(); // number of early out of time pileup
    const int &Pileup_sumLOOT(); // number of late out of time pileup
    const float &PrefireWeight(); // PrefireWeight/F
    const float &PrefireWeight_Down(); // PrefireWeight_Down/F
    const float &PrefireWeight_Up(); // PrefireWeight_Up/F
    const float &PuppiMET_phi(); // phi
    const float &PuppiMET_phiJERUp(); // JER up phi
    const float &PuppiMET_phiJESUp(); // JES up phi
    const float &PuppiMET_pt(); // pt
    const float &PuppiMET_ptJERUp(); // JER up pt
    const float &PuppiMET_ptJESUp(); // JES up pt
    const float &PuppiMET_sumEt(); // scalar sum of Et
    const float &RawMET_phi(); // phi
    const float &RawMET_pt(); // pt
    const float &RawMET_sumEt(); // scalar sum of Et
    const float &RawPuppiMET_phi(); // phi
    const float &RawPuppiMET_pt(); // pt
    const float &RawPuppiMET_sumEt(); // scalar sum of Et
    const vector<float> &SV_chi2(); // reduced chi2, i.e. chi/ndof
    const vector<float> &SV_dlen(); // decay length in cm
    const vector<float> &SV_dlenSig(); // decay length significance
    const vector<float> &SV_dxy(); // 2D decay length in cm
    const vector<float> &SV_dxySig(); // 2D decay length significance
    const vector<float> &SV_eta(); // eta
    const vector<float> &SV_mass(); // mass
    const vector<float> &SV_ndof(); // number of degrees of freedom
    const vector<LorentzVector> &SV_p4(); // from SV_pt,eta,phi,mass
    const vector<float> &SV_pAngle(); // pointing angle, i.e. acos(p_SV * (SV - PV)) 
    const vector<float> &SV_phi(); // phi
    const vector<float> &SV_pt(); // pt
    const vector<float> &SV_x(); // secondary vertex X position, in cm
    const vector<float> &SV_y(); // secondary vertex Y position, in cm
    const vector<float> &SV_z(); // secondary vertex Z position, in cm
    const float &SoftActivityJetHT(); // scalar sum of soft activity jet pt, pt>1
    const float &SoftActivityJetHT10(); // scalar sum of soft activity jet pt , pt >10
    const float &SoftActivityJetHT2(); // scalar sum of soft activity jet pt, pt >2
    const float &SoftActivityJetHT5(); // scalar sum of soft activity jet pt, pt>5
    const int &SoftActivityJetNjets10(); // number of soft activity jet pt, pt >2
    const int &SoftActivityJetNjets2(); // number of soft activity jet pt, pt >10
    const int &SoftActivityJetNjets5(); // number of soft activity jet pt, pt >5
    const vector<float> &SoftActivityJet_eta(); // eta
    const vector<float> &SoftActivityJet_phi(); // phi
    const vector<float> &SoftActivityJet_pt(); // pt
    const vector<float> &SubGenJetAK8_eta(); // eta
    const vector<float> &SubGenJetAK8_mass(); // mass
    const vector<LorentzVector> &SubGenJetAK8_p4(); // from SubGenJetAK8_pt,eta,phi,mass
    const vector<float> &SubGenJetAK8_phi(); // phi
    const vector<float> &SubGenJetAK8_pt(); // pt
    const vector<float> &SubJet_btagCMVA(); // CMVA V2 btag discriminator
    const vector<float> &SubJet_btagCSVV2(); //  pfCombinedInclusiveSecondaryVertexV2 b-tag discriminator (aka CSVV2)
    const vector<float> &SubJet_btagDeepB(); // DeepCSV b+bb tag discriminator
    const vector<float> &SubJet_eta(); // eta
    const vector<float> &SubJet_mass(); // mass
    const vector<float> &SubJet_n2b1(); // N2 with beta=1
    const vector<float> &SubJet_n3b1(); // N3 with beta=1
    const vector<UChar_t> &SubJet_nBHadrons(); // number of b-hadrons
    const vector<UChar_t> &SubJet_nCHadrons(); // number of c-hadrons
    const vector<LorentzVector> &SubJet_p4(); // from SubJet_pt,eta,phi,mass
    const vector<float> &SubJet_phi(); // phi
    const vector<float> &SubJet_pt(); // pt
    const vector<float> &SubJet_rawFactor(); // 1 - Factor to get back to raw pT
    const vector<float> &SubJet_tau1(); // Nsubjettiness (1 axis)
    const vector<float> &SubJet_tau2(); // Nsubjettiness (2 axis)
    const vector<float> &SubJet_tau3(); // Nsubjettiness (3 axis)
    const vector<float> &SubJet_tau4(); // Nsubjettiness (4 axis)
    const vector<bool> &Tau_Filter(); // Tau_Filter[nTau]/O
    const vector<int> &Tau_charge(); // electric charge
    const vector<float> &Tau_chargedIso(); // charged isolation
    const vector<UChar_t> &Tau_cleanmask(); // simple cleaning mask with priority to leptons
    const vector<int> &Tau_decayMode(); // decayMode()
    const vector<float> &Tau_dxy(); // d_{xy} of lead track with respect to PV, in cm (with sign)
    const vector<float> &Tau_dz(); // d_{z} of lead track with respect to PV, in cm (with sign)
    const vector<float> &Tau_eta(); // eta
    const vector<UChar_t> &Tau_genPartFlav(); // Flavour of genParticle for MC matching to status==2 taus: 1 = prompt electron, 2 = prompt muon, 3 = tau->e decay, 4 = tau->mu decay, 5 = hadronic tau decay, 0 = unknown or unmatched
    const vector<int> &Tau_genPartIdx(); // Index into genParticle list for MC matching to status==2 taus
    const vector<UChar_t> &Tau_idAntiEle(); // Anti-electron MVA discriminator V6: bitmask 1 = VLoose, 2 = Loose, 4 = Medium, 8 = Tight, 16 = VTight
    const vector<UChar_t> &Tau_idAntiEle2018(); // Anti-electron MVA discriminator V6 (2018): bitmask 1 = VLoose, 2 = Loose, 4 = Medium, 8 = Tight, 16 = VTight
    const vector<UChar_t> &Tau_idAntiMu(); // Anti-muon discriminator V3: : bitmask 1 = Loose, 2 = Tight
    const vector<bool> &Tau_idDecayMode(); // tauID('decayModeFinding')
    const vector<bool> &Tau_idDecayModeNewDMs(); // tauID('decayModeFindingNewDMs')
    const vector<UChar_t> &Tau_idDeepTau2017v2p1VSe(); // byDeepTau2017v2p1VSe ID working points (deepTau2017v2p1): bitmask 1 = VVVLoose, 2 = VVLoose, 4 = VLoose, 8 = Loose, 16 = Medium, 32 = Tight, 64 = VTight, 128 = VVTight
    const vector<UChar_t> &Tau_idDeepTau2017v2p1VSjet(); // byDeepTau2017v2p1VSjet ID working points (deepTau2017v2p1): bitmask 1 = VVVLoose, 2 = VVLoose, 4 = VLoose, 8 = Loose, 16 = Medium, 32 = Tight, 64 = VTight, 128 = VVTight
    const vector<UChar_t> &Tau_idDeepTau2017v2p1VSmu(); // byDeepTau2017v2p1VSmu ID working points (deepTau2017v2p1): bitmask 1 = VLoose, 2 = Loose, 4 = Medium, 8 = Tight
    const vector<UChar_t> &Tau_idMVAnewDM2017v2(); // IsolationMVArun2v1DBnewDMwLT ID working point (2017v2): bitmask 1 = VVLoose, 2 = VLoose, 4 = Loose, 8 = Medium, 16 = Tight, 32 = VTight, 64 = VVTight
    const vector<UChar_t> &Tau_idMVAoldDM(); // IsolationMVArun2v1DBoldDMwLT ID working point (2015): bitmask 1 = VLoose, 2 = Loose, 4 = Medium, 8 = Tight, 16 = VTight, 32 = VVTight
    const vector<UChar_t> &Tau_idMVAoldDM2017v1(); // IsolationMVArun2v1DBoldDMwLT ID working point (2017v1): bitmask 1 = VVLoose, 2 = VLoose, 4 = Loose, 8 = Medium, 16 = Tight, 32 = VTight, 64 = VVTight
    const vector<UChar_t> &Tau_idMVAoldDM2017v2(); // IsolationMVArun2v1DBoldDMwLT ID working point (2017v2): bitmask 1 = VVLoose, 2 = VLoose, 4 = Loose, 8 = Medium, 16 = Tight, 32 = VTight, 64 = VVTight
    const vector<UChar_t> &Tau_idMVAoldDMdR032017v2(); // IsolationMVArun2v1DBoldDMdR0p3wLT ID working point (2017v2): bitmask 1 = VVLoose, 2 = VLoose, 4 = Loose, 8 = Medium, 16 = Tight, 32 = VTight, 64 = VVTight
    const vector<int> &Tau_jetIdx(); // index of the associated jet (-1 if none)
    const vector<float> &Tau_leadTkDeltaEta(); // eta of the leading track, minus tau eta
    const vector<float> &Tau_leadTkDeltaPhi(); // phi of the leading track, minus tau phi
    const vector<float> &Tau_leadTkPtOverTauPt(); // pt of the leading track divided by tau pt
    const vector<float> &Tau_mass(); // mass
    const vector<float> &Tau_neutralIso(); // neutral (photon) isolation
    const vector<LorentzVector> &Tau_p4(); // from Tau_pt,eta,phi,mass
    const vector<float> &Tau_phi(); // phi
    const vector<float> &Tau_photonsOutsideSignalCone(); // sum of photons outside signal cone
    const vector<float> &Tau_pt(); // pt
    const vector<float> &Tau_puCorr(); // pileup correction
    const vector<float> &Tau_rawAntiEle(); // Anti-electron MVA discriminator V6 raw output discriminator
    const vector<float> &Tau_rawAntiEle2018(); // Anti-electron MVA discriminator V6 raw output discriminator (2018)
    const vector<int> &Tau_rawAntiEleCat(); // Anti-electron MVA discriminator V6 category
    const vector<int> &Tau_rawAntiEleCat2018(); // Anti-electron MVA discriminator V6 category (2018)
    const vector<float> &Tau_rawDeepTau2017v2p1VSe(); // byDeepTau2017v2p1VSe raw output discriminator (deepTau2017v2p1)
    const vector<float> &Tau_rawDeepTau2017v2p1VSjet(); // byDeepTau2017v2p1VSjet raw output discriminator (deepTau2017v2p1)
    const vector<float> &Tau_rawDeepTau2017v2p1VSmu(); // byDeepTau2017v2p1VSmu raw output discriminator (deepTau2017v2p1)
    const vector<float> &Tau_rawIso(); // combined isolation (deltaBeta corrections)
    const vector<float> &Tau_rawIsodR03(); // combined isolation (deltaBeta corrections, dR=0.3)
    const vector<float> &Tau_rawMVAnewDM2017v2(); // byIsolationMVArun2v1DBnewDMwLT raw output discriminator (2017v2)
    const vector<float> &Tau_rawMVAoldDM(); // byIsolationMVArun2v1DBoldDMwLT raw output discriminator (2015)
    const vector<float> &Tau_rawMVAoldDM2017v1(); // byIsolationMVArun2v1DBoldDMwLT raw output discriminator (2017v1)
    const vector<float> &Tau_rawMVAoldDM2017v2(); // byIsolationMVArun2v1DBoldDMwLT raw output discriminator (2017v2)
    const vector<float> &Tau_rawMVAoldDMdR032017v2(); // byIsolationMVArun2v1DBdR03oldDMwLT raw output discriminator (2017v2)
    const float &TkMET_phi(); // raw track MET phi
    const float &TkMET_pt(); // raw track MET pt
    const float &TkMET_sumEt(); // raw track scalar sum of Et
    const vector<float> &TrigObj_eta(); // eta
    const vector<int> &TrigObj_filterBits(); // extra bits of associated information: 1 = CaloIdL_TrackIdL_IsoVL, 2 = 1e (WPTight), 4 = 1e (WPLoose), 8 = OverlapFilter PFTau, 16 = 2e, 32 = 1e-1mu, 64 = 1e-1tau, 128 = 3e, 256 = 2e-1mu, 512 = 1e-2mu, 1024 = 1e (32_L1DoubleEG_AND_L1SingleEGOr), 2048 = 1e (CaloIdVT_GsfTrkIdT), 4096 = 1e (PFJet), 8192 = 1e (Photon175_OR_Photon200) for Electron (PixelMatched e/gamma); 1 = TrkIsoVVL, 2 = Iso, 4 = OverlapFilter PFTau, 8 = 1mu, 16 = 2mu, 32 = 1mu-1e, 64 = 1mu-1tau, 128 = 3mu, 256 = 2mu-1e, 512 = 1mu-2e, 1024 = 1mu (Mu50), 2048 = 1mu (Mu100) for Muon; 1 = LooseChargedIso, 2 = MediumChargedIso, 4 = TightChargedIso, 8 = TightID OOSC photons, 16 = HPS, 32 = single-tau + tau+MET, 64 = di-tau, 128 = e-tau, 256 = mu-tau, 512 = VBF+di-tau for Tau; Jet bits: bit 0 for VBF cross-cleaned from loose iso PFTau, bit 1 for hltBTagCaloCSVp087Triple, bit 2 for hltDoubleCentralJet90, bit 3 for hltDoublePFCentralJetLooseID90, bit 4 for hltL1sTripleJetVBFIorHTTIorDoubleJetCIorSingleJet, bit 5 for hltQuadCentralJet30, bit 6 for hltQuadPFCentralJetLooseID30, bit 7 for hltL1sQuadJetC50IorQuadJetC60IorHTT280IorHTT300IorHTT320IorTripleJet846848VBFIorTripleJet887256VBFIorTripleJet927664VBF or hltL1sQuadJetCIorTripleJetVBFIorHTT, bit 8 for hltQuadCentralJet45, bit 9 for hltQuadPFCentralJetLooseID45, bit 10  for hltL1sQuadJetC60IorHTT380IorHTT280QuadJetIorHTT300QuadJet or hltL1sQuadJetC50to60IorHTT280to500IorHTT250to340QuadJet bit 11 for hltBTagCaloCSVp05Double or hltBTagCaloDeepCSVp17Double, bit 12 for hltPFCentralJetLooseIDQuad30, bit 13 for hlt1PFCentralJetLooseID75, bit 14 for hlt2PFCentralJetLooseID60, bit 15 for hlt3PFCentralJetLooseID45, bit 16 for hlt4PFCentralJetLooseID40, bit 17 for hltBTagPFCSVp070Triple or hltBTagPFDeepCSVp24Triple or hltBTagPFDeepCSV4p5Triple  for Jet; HT bits: bit 0 for hltL1sTripleJetVBFIorHTTIorDoubleJetCIorSingleJet, bit 1 for hltL1sQuadJetC50IorQuadJetC60IorHTT280IorHTT300IorHTT320IorTripleJet846848VBFIorTripleJet887256VBFIorTripleJet927664VBF or hltL1sQuadJetCIorTripleJetVBFIorHTT, bit 2 for hltL1sQuadJetC60IorHTT380IorHTT280QuadJetIorHTT300QuadJet or hltL1sQuadJetC50to60IorHTT280to500IorHTT250to340QuadJet, bit 3 for hltCaloQuadJet30HT300 or hltCaloQuadJet30HT320, bit 4 for hltPFCentralJetsLooseIDQuad30HT300 or hltPFCentralJetsLooseIDQuad30HT330 for HT; MHT bits: bit 0 for hltCaloQuadJet30HT300 or hltCaloQuadJet30HT320, bit 1 for hltPFCentralJetsLooseIDQuad30HT300 or hltPFCentralJetsLooseIDQuad30HT330 for MHT; 
    const vector<int> &TrigObj_id(); // ID of the object: 11 = Electron (PixelMatched e/gamma), 22 = Photon (PixelMatch-vetoed e/gamma), 13 = Muon, 15 = Tau, 1 = Jet, 6 = FatJet, 2 = MET, 3 = HT, 4 = MHT
    const vector<int> &TrigObj_l1charge(); // charge of associated L1 seed
    const vector<int> &TrigObj_l1iso(); // iso of associated L1 seed
    const vector<float> &TrigObj_l1pt(); // pt of associated L1 seed
    const vector<float> &TrigObj_l1pt_2(); // pt of associated secondary L1 seed
    const vector<float> &TrigObj_l2pt(); // pt of associated 'L2' seed (i.e. HLT before tracking/PF)
    const vector<float> &TrigObj_phi(); // phi
    const vector<float> &TrigObj_pt(); // pt
    const float &btagWeight_CMVA(); // b-tag event weight for CMVA
    const float &btagWeight_CSVV2(); // b-tag event weight for CSVV2
    const float &btagWeight_DeepCSVB(); // b-tag event weight for DeepCSVB
    const float &dPhi_ggtautauLoose(); // dPhi_ggtautauLoose/F
    const float &dPhi_ggtautauSVFitLoose(); // dPhi_ggtautauSVFitLoose/F
    const float &dR_ggtautauLoose(); // dR_ggtautauLoose/F
    const float &dR_ggtautauSVFitLoose(); // dR_ggtautauSVFitLoose/F
    const float &dR_tautauLoose(); // dR_tautauLoose/F
    const float &dR_tautauSVFitLoose(); // dR_tautauSVFitLoose/F
    const vector<int> &eleHidx(); // eleHidx[2]/I
    const float &eta_tautauLoose(); // eta_tautauLoose/F
    const float &eta_tautauSVFitLoose(); // eta_tautauSVFitLoose/F
    const float &evWeight_electronVeto(); // evWeight_electronVeto/F
    const float &evWeight_electronVetoDown(); // evWeight_electronVetoDown/F
    const float &evWeight_electronVetoUp(); // evWeight_electronVetoUp/F
    const float &evWeight_looseMva(); // evWeight_looseMva/F
    const float &evWeight_looseMvaDown(); // evWeight_looseMvaDown/F
    const float &evWeight_looseMvaUp(); // evWeight_looseMvaUp/F
    const float &evWeight_presel(); // evWeight_presel/F
    const float &evWeight_preselDown(); // evWeight_preselDown/F
    const float &evWeight_preselUp(); // evWeight_preselUp/F
    const ULong64_t &event(); // event/l
    const float &fixedGridRhoAll(); // test
    const float &fixedGridRhoFastjetAll(); // rho from all PF Candidates, used e.g. for JECs
    const float &fixedGridRhoFastjetCentral(); // rho from all PF Candidates for central region, used e.g. for JECs
    const float &fixedGridRhoFastjetCentralCalo(); // rho from calo towers with |eta| < 2.5, used e.g. egamma PFCluster isolation
    const float &fixedGridRhoFastjetCentralChargedPileUp(); // rho from charged PF Candidates for central region, used e.g. for JECs
    const float &fixedGridRhoFastjetCentralNeutral(); // rho from neutral PF Candidates with |eta| < 2.5, used e.g. for rho corrections of some lepton isolations
    const vector<int> &gHidx(); // gHidx[2]/I
    const int &genTtbarId(); // ttbar categorization
    const float &genWeight(); // generator weight
    const float &gg_eta(); // gg_eta/F
    const float &gg_mass(); // gg_mass/F
    const LorentzVector &gg_p4(); // from gg_pt,eta,phi,mass
    const float &gg_phi(); // gg_phi/F
    const float &gg_pt(); // gg_pt/F
    const UInt_t &luminosityBlock(); // luminosityBlock/i
    const float &m_tautauLoose(); // m_tautauLoose/F
    const float &m_tautauSVFitLoose(); // m_tautauSVFitLoose/F
    const vector<int> &muHidx(); // muHidx[2]/I
    const UInt_t &nCorrT1METJet(); // Additional low-pt jets for Type-1 MET re-correction
    const UInt_t &nElectron(); // slimmedElectrons after basic selection (pt > 5 )
    const UInt_t &nFsrPhoton(); // Final state radiation photons emitted by muons
    const UInt_t &nGenDressedLepton(); // Dressed leptons from Rivet-based ParticleLevelProducer
    const UInt_t &nGenIsolatedPhoton(); // Isolated photons from Rivet-based ParticleLevelProducer
    const UInt_t &nGenJet(); // slimmedGenJets, i.e. ak4 Jets made with visible genparticles
    const UInt_t &nGenJetAK8(); // slimmedGenJetsAK8, i.e. ak8 Jets made with visible genparticles
    const UInt_t &nGenPart(); // interesting gen particles 
    const UInt_t &nGenVisTau(); // gen hadronic taus 
    const UInt_t &nIsoTrack(); // isolated tracks after basic selection (((pt>5 && (abs(pdgId) == 11 || abs(pdgId) == 13)) || pt > 10) && (abs(pdgId) < 15 || abs(eta) < 2.5) && abs(dxy) < 0.2 && abs(dz) < 0.1 && ((pfIsolationDR03().chargedHadronIso < 5 && pt < 25) || pfIsolationDR03().chargedHadronIso/pt < 0.2)) and lepton veto
    const UInt_t &nJet(); // slimmedJets, i.e. ak4 PFJets CHS with JECs applied, after basic selection (pt > 15)
    const UInt_t &nLHEPart(); // 
    const UInt_t &nLHEPdfWeight(); // 
    const UInt_t &nLHEReweightingWeight(); // 
    const UInt_t &nLHEScaleWeight(); // 
    const UInt_t &nMuon(); // slimmedMuons after basic selection (pt > 3 && (passed('CutBasedIdLoose') || passed('SoftCutBasedId') || passed('SoftMvaId') || passed('CutBasedIdGlobalHighPt') || passed('CutBasedIdTrkHighPt')))
    const UInt_t &nOtherPV(); // 
    const UInt_t &nPSWeight(); // 
    const UInt_t &nPhoton(); // slimmedPhotons after basic selection (pt > 5 )
    const UInt_t &nSV(); // 
    const UInt_t &nSoftActivityJet(); // jets clustered from charged candidates compatible with primary vertex (charge()!=0 && pvAssociationQuality()>=5 && vertexRef().key()==0)
    const UInt_t &nSubGenJetAK8(); // slimmedGenJetsAK8SoftDropSubJets, i.e. subjets of ak8 Jets made with visible genparticles
    const UInt_t &nSubJet(); // slimmedJetsAK8, i.e. ak8 fat jets for boosted analysis
    const UInt_t &nTau(); // slimmedTaus after basic selection (pt > 18 && tauID('decayModeFindingNewDMs') && (tauID('byLooseCombinedIsolationDeltaBetaCorr3Hits') || tauID('byVLooseIsolationMVArun2v1DBoldDMwLT2015') || tauID('byVLooseIsolationMVArun2v1DBnewDMwLT') || tauID('byVLooseIsolationMVArun2v1DBdR03oldDMwLT') || tauID('byVVLooseIsolationMVArun2v1DBoldDMwLT') || tauID('byVVLooseIsolationMVArun2v1DBoldDMwLT2017v2') || tauID('byVVLooseIsolationMVArun2v1DBnewDMwLT2017v2') || tauID('byVVLooseIsolationMVArun2v1DBdR03oldDMwLT2017v2') || tauID('byVVVLooseDeepTau2017v2p1VSjet')))
    const UInt_t &nTrigObj(); // 
    const int &nselectedElectron(); // nselectedElectron/I
    const int &nselectedMuon(); // nselectedMuon/I
    const int &nselectedTauLoose(); // nselectedTauLoose/I
    const Char_t &passedDigammaPair(); // passedDigammaPair/B
    const Char_t &passedGoodPhotons(); // passedGoodPhotons/B
    const Char_t &passedHPhotons(); // passedHPhotons/B
    const float &phi_tautauLoose(); // phi_tautauLoose/F
    const float &phi_tautauSVFitLoose(); // phi_tautauSVFitLoose/F
    const float &pt_tautauLoose(); // pt_tautauLoose/F
    const float &pt_tautauSVFitLoose(); // pt_tautauSVFitLoose/F
    const float &puWeight(); // puWeight/F
    const float &puWeightDown(); // puWeightDown/F
    const float &puWeightUp(); // puWeightUp/F
    const UInt_t &run(); // run/i
    const vector<float> &selectedElectron_charge(); // selectedElectron_charge[2]/F
    const vector<float> &selectedElectron_cleanmask(); // selectedElectron_cleanmask[2]/F
    const vector<float> &selectedElectron_convVeto(); // selectedElectron_convVeto[2]/F
    const vector<float> &selectedElectron_cutBased(); // selectedElectron_cutBased[2]/F
    const vector<float> &selectedElectron_cutBased_Fall17_V1(); // selectedElectron_cutBased_Fall17_V1[2]/F
    const vector<float> &selectedElectron_cutBased_HEEP(); // selectedElectron_cutBased_HEEP[2]/F
    const vector<float> &selectedElectron_cutBased_HLTPreSel(); // selectedElectron_cutBased_HLTPreSel[2]/F
    const vector<float> &selectedElectron_cutBased_Spring15(); // selectedElectron_cutBased_Spring15[2]/F
    const vector<float> &selectedElectron_cutBased_Sum16(); // selectedElectron_cutBased_Sum16[2]/F
    const vector<float> &selectedElectron_deltaEtaSC(); // selectedElectron_deltaEtaSC[2]/F
    const vector<float> &selectedElectron_dr03EcalRecHitSumEt(); // selectedElectron_dr03EcalRecHitSumEt[2]/F
    const vector<float> &selectedElectron_dr03HcalDepth1TowerSumEt(); // selectedElectron_dr03HcalDepth1TowerSumEt[2]/F
    const vector<float> &selectedElectron_dr03TkSumPt(); // selectedElectron_dr03TkSumPt[2]/F
    const vector<float> &selectedElectron_dr03TkSumPtHEEP(); // selectedElectron_dr03TkSumPtHEEP[2]/F
    const vector<float> &selectedElectron_dxy(); // selectedElectron_dxy[2]/F
    const vector<float> &selectedElectron_dxyErr(); // selectedElectron_dxyErr[2]/F
    const vector<float> &selectedElectron_dz(); // selectedElectron_dz[2]/F
    const vector<float> &selectedElectron_dzErr(); // selectedElectron_dzErr[2]/F
    const vector<float> &selectedElectron_eCorr(); // selectedElectron_eCorr[2]/F
    const vector<float> &selectedElectron_eInvMinusPInv(); // selectedElectron_eInvMinusPInv[2]/F
    const vector<float> &selectedElectron_energyErr(); // selectedElectron_energyErr[2]/F
    const vector<float> &selectedElectron_eta(); // selectedElectron_eta[2]/F
    const vector<float> &selectedElectron_etaSVFit(); // selectedElectron_etaSVFit[2]/F
    const vector<float> &selectedElectron_genPartFlav(); // selectedElectron_genPartFlav[2]/F
    const vector<float> &selectedElectron_genPartIdx(); // selectedElectron_genPartIdx[2]/F
    const vector<float> &selectedElectron_hoe(); // selectedElectron_hoe[2]/F
    const vector<float> &selectedElectron_ip3d(); // selectedElectron_ip3d[2]/F
    const vector<float> &selectedElectron_isPFcand(); // selectedElectron_isPFcand[2]/F
    const vector<float> &selectedElectron_jetIdx(); // selectedElectron_jetIdx[2]/F
    const vector<float> &selectedElectron_jetPtRelv2(); // selectedElectron_jetPtRelv2[2]/F
    const vector<float> &selectedElectron_jetRelIso(); // selectedElectron_jetRelIso[2]/F
    const vector<float> &selectedElectron_lostHits(); // selectedElectron_lostHits[2]/F
    const vector<float> &selectedElectron_mSVFit(); // selectedElectron_mSVFit[2]/F
    const vector<float> &selectedElectron_mass(); // selectedElectron_mass[2]/F
    const vector<float> &selectedElectron_miniPFRelIso_all(); // selectedElectron_miniPFRelIso_all[2]/F
    const vector<float> &selectedElectron_miniPFRelIso_chg(); // selectedElectron_miniPFRelIso_chg[2]/F
    const vector<float> &selectedElectron_mvaFall17V1Iso(); // selectedElectron_mvaFall17V1Iso[2]/F
    const vector<float> &selectedElectron_mvaFall17V1Iso_WP80(); // selectedElectron_mvaFall17V1Iso_WP80[2]/F
    const vector<float> &selectedElectron_mvaFall17V1Iso_WP90(); // selectedElectron_mvaFall17V1Iso_WP90[2]/F
    const vector<float> &selectedElectron_mvaFall17V1Iso_WPL(); // selectedElectron_mvaFall17V1Iso_WPL[2]/F
    const vector<float> &selectedElectron_mvaFall17V1noIso(); // selectedElectron_mvaFall17V1noIso[2]/F
    const vector<float> &selectedElectron_mvaFall17V1noIso_WP80(); // selectedElectron_mvaFall17V1noIso_WP80[2]/F
    const vector<float> &selectedElectron_mvaFall17V1noIso_WP90(); // selectedElectron_mvaFall17V1noIso_WP90[2]/F
    const vector<float> &selectedElectron_mvaFall17V1noIso_WPL(); // selectedElectron_mvaFall17V1noIso_WPL[2]/F
    const vector<float> &selectedElectron_mvaFall17V2Iso(); // selectedElectron_mvaFall17V2Iso[2]/F
    const vector<float> &selectedElectron_mvaFall17V2Iso_WP80(); // selectedElectron_mvaFall17V2Iso_WP80[2]/F
    const vector<float> &selectedElectron_mvaFall17V2Iso_WP90(); // selectedElectron_mvaFall17V2Iso_WP90[2]/F
    const vector<float> &selectedElectron_mvaFall17V2Iso_WPL(); // selectedElectron_mvaFall17V2Iso_WPL[2]/F
    const vector<float> &selectedElectron_mvaFall17V2noIso(); // selectedElectron_mvaFall17V2noIso[2]/F
    const vector<float> &selectedElectron_mvaFall17V2noIso_WP80(); // selectedElectron_mvaFall17V2noIso_WP80[2]/F
    const vector<float> &selectedElectron_mvaFall17V2noIso_WP90(); // selectedElectron_mvaFall17V2noIso_WP90[2]/F
    const vector<float> &selectedElectron_mvaFall17V2noIso_WPL(); // selectedElectron_mvaFall17V2noIso_WPL[2]/F
    const vector<float> &selectedElectron_mvaSpring16GP(); // selectedElectron_mvaSpring16GP[2]/F
    const vector<float> &selectedElectron_mvaSpring16GP_WP80(); // selectedElectron_mvaSpring16GP_WP80[2]/F
    const vector<float> &selectedElectron_mvaSpring16GP_WP90(); // selectedElectron_mvaSpring16GP_WP90[2]/F
    const vector<float> &selectedElectron_mvaSpring16HZZ(); // selectedElectron_mvaSpring16HZZ[2]/F
    const vector<float> &selectedElectron_mvaSpring16HZZ_WPL(); // selectedElectron_mvaSpring16HZZ_WPL[2]/F
    const vector<float> &selectedElectron_mvaTTH(); // selectedElectron_mvaTTH[2]/F
    const vector<LorentzVector> &selectedElectron_p4(); // from selectedElectron_pt,eta,phi,mass
    const vector<float> &selectedElectron_pdgId(); // selectedElectron_pdgId[2]/F
    const vector<float> &selectedElectron_pfRelIso03_all(); // selectedElectron_pfRelIso03_all[2]/F
    const vector<float> &selectedElectron_pfRelIso03_chg(); // selectedElectron_pfRelIso03_chg[2]/F
    const vector<float> &selectedElectron_phi(); // selectedElectron_phi[2]/F
    const vector<float> &selectedElectron_phiSVFit(); // selectedElectron_phiSVFit[2]/F
    const vector<float> &selectedElectron_photonIdx(); // selectedElectron_photonIdx[2]/F
    const vector<float> &selectedElectron_pt(); // selectedElectron_pt[2]/F
    const vector<float> &selectedElectron_ptSVFit(); // selectedElectron_ptSVFit[2]/F
    const vector<float> &selectedElectron_r9(); // selectedElectron_r9[2]/F
    const vector<float> &selectedElectron_scEtOverPt(); // selectedElectron_scEtOverPt[2]/F
    const vector<float> &selectedElectron_seedGain(); // selectedElectron_seedGain[2]/F
    const vector<float> &selectedElectron_sieie(); // selectedElectron_sieie[2]/F
    const vector<float> &selectedElectron_sip3d(); // selectedElectron_sip3d[2]/F
    const vector<float> &selectedElectron_tightCharge(); // selectedElectron_tightCharge[2]/F
    const vector<float> &selectedElectron_vidNestedWPBitmap(); // selectedElectron_vidNestedWPBitmap[2]/F
    const vector<float> &selectedElectron_vidNestedWPBitmapHEEP(); // selectedElectron_vidNestedWPBitmapHEEP[2]/F
    const vector<float> &selectedElectron_vidNestedWPBitmapSpring15(); // selectedElectron_vidNestedWPBitmapSpring15[2]/F
    const vector<float> &selectedElectron_vidNestedWPBitmapSum16(); // selectedElectron_vidNestedWPBitmapSum16[2]/F
    const vector<float> &selectedMuon_charge(); // selectedMuon_charge[2]/F
    const vector<float> &selectedMuon_cleanmask(); // selectedMuon_cleanmask[2]/F
    const vector<float> &selectedMuon_dxy(); // selectedMuon_dxy[2]/F
    const vector<float> &selectedMuon_dxyErr(); // selectedMuon_dxyErr[2]/F
    const vector<float> &selectedMuon_dxybs(); // selectedMuon_dxybs[2]/F
    const vector<float> &selectedMuon_dz(); // selectedMuon_dz[2]/F
    const vector<float> &selectedMuon_dzErr(); // selectedMuon_dzErr[2]/F
    const vector<float> &selectedMuon_eta(); // selectedMuon_eta[2]/F
    const vector<float> &selectedMuon_etaSVFit(); // selectedMuon_etaSVFit[2]/F
    const vector<float> &selectedMuon_fsrPhotonIdx(); // selectedMuon_fsrPhotonIdx[2]/F
    const vector<float> &selectedMuon_genPartFlav(); // selectedMuon_genPartFlav[2]/F
    const vector<float> &selectedMuon_genPartIdx(); // selectedMuon_genPartIdx[2]/F
    const vector<float> &selectedMuon_highPtId(); // selectedMuon_highPtId[2]/F
    const vector<float> &selectedMuon_highPurity(); // selectedMuon_highPurity[2]/F
    const vector<float> &selectedMuon_inTimeselectedMuon(); // selectedMuon_inTimeselectedMuon[2]/F
    const vector<float> &selectedMuon_ip3d(); // selectedMuon_ip3d[2]/F
    const vector<float> &selectedMuon_isGlobal(); // selectedMuon_isGlobal[2]/F
    const vector<float> &selectedMuon_isPFcand(); // selectedMuon_isPFcand[2]/F
    const vector<float> &selectedMuon_isTracker(); // selectedMuon_isTracker[2]/F
    const vector<float> &selectedMuon_jetIdx(); // selectedMuon_jetIdx[2]/F
    const vector<float> &selectedMuon_jetPtRelv2(); // selectedMuon_jetPtRelv2[2]/F
    const vector<float> &selectedMuon_jetRelIso(); // selectedMuon_jetRelIso[2]/F
    const vector<float> &selectedMuon_looseId(); // selectedMuon_looseId[2]/F
    const vector<float> &selectedMuon_mSVFit(); // selectedMuon_mSVFit[2]/F
    const vector<float> &selectedMuon_mass(); // selectedMuon_mass[2]/F
    const vector<float> &selectedMuon_mediumId(); // selectedMuon_mediumId[2]/F
    const vector<float> &selectedMuon_mediumPromptId(); // selectedMuon_mediumPromptId[2]/F
    const vector<float> &selectedMuon_miniIsoId(); // selectedMuon_miniIsoId[2]/F
    const vector<float> &selectedMuon_miniPFRelIso_all(); // selectedMuon_miniPFRelIso_all[2]/F
    const vector<float> &selectedMuon_miniPFRelIso_chg(); // selectedMuon_miniPFRelIso_chg[2]/F
    const vector<float> &selectedMuon_multiIsoId(); // selectedMuon_multiIsoId[2]/F
    const vector<float> &selectedMuon_mvaId(); // selectedMuon_mvaId[2]/F
    const vector<float> &selectedMuon_mvaLowPt(); // selectedMuon_mvaLowPt[2]/F
    const vector<float> &selectedMuon_mvaTTH(); // selectedMuon_mvaTTH[2]/F
    const vector<float> &selectedMuon_nStations(); // selectedMuon_nStations[2]/F
    const vector<float> &selectedMuon_nTrackerLayers(); // selectedMuon_nTrackerLayers[2]/F
    const vector<LorentzVector> &selectedMuon_p4(); // from selectedMuon_pt,eta,phi,mass
    const vector<float> &selectedMuon_pdgId(); // selectedMuon_pdgId[2]/F
    const vector<float> &selectedMuon_pfIsoId(); // selectedMuon_pfIsoId[2]/F
    const vector<float> &selectedMuon_pfRelIso03_all(); // selectedMuon_pfRelIso03_all[2]/F
    const vector<float> &selectedMuon_pfRelIso03_chg(); // selectedMuon_pfRelIso03_chg[2]/F
    const vector<float> &selectedMuon_pfRelIso04_all(); // selectedMuon_pfRelIso04_all[2]/F
    const vector<float> &selectedMuon_phi(); // selectedMuon_phi[2]/F
    const vector<float> &selectedMuon_phiSVFit(); // selectedMuon_phiSVFit[2]/F
    const vector<float> &selectedMuon_pt(); // selectedMuon_pt[2]/F
    const vector<float> &selectedMuon_ptErr(); // selectedMuon_ptErr[2]/F
    const vector<float> &selectedMuon_ptSVFit(); // selectedMuon_ptSVFit[2]/F
    const vector<float> &selectedMuon_segmentComp(); // selectedMuon_segmentComp[2]/F
    const vector<float> &selectedMuon_sip3d(); // selectedMuon_sip3d[2]/F
    const vector<float> &selectedMuon_softId(); // selectedMuon_softId[2]/F
    const vector<float> &selectedMuon_softMva(); // selectedMuon_softMva[2]/F
    const vector<float> &selectedMuon_softMvaId(); // selectedMuon_softMvaId[2]/F
    const vector<float> &selectedMuon_tightCharge(); // selectedMuon_tightCharge[2]/F
    const vector<float> &selectedMuon_tightId(); // selectedMuon_tightId[2]/F
    const vector<float> &selectedMuon_tkIsoId(); // selectedMuon_tkIsoId[2]/F
    const vector<float> &selectedMuon_tkRelIso(); // selectedMuon_tkRelIso[2]/F
    const vector<float> &selectedMuon_triggerIdLoose(); // selectedMuon_triggerIdLoose[2]/F
    const vector<float> &selectedMuon_tunepRelPt(); // selectedMuon_tunepRelPt[2]/F
    const vector<float> &selectedPhoton_charge(); // selectedPhoton_charge[2]/F
    const vector<float> &selectedPhoton_chargedHadronIso(); // selectedPhoton_chargedHadronIso[2]/F
    const vector<float> &selectedPhoton_cleanmask(); // selectedPhoton_cleanmask[2]/F
    const vector<float> &selectedPhoton_cutBased(); // selectedPhoton_cutBased[2]/F
    const vector<float> &selectedPhoton_cutBased_Fall17V1Bitmap(); // selectedPhoton_cutBased_Fall17V1Bitmap[2]/F
    const vector<float> &selectedPhoton_cutBased_Spring16V2p2(); // selectedPhoton_cutBased_Spring16V2p2[2]/F
    const vector<float> &selectedPhoton_eCorr(); // selectedPhoton_eCorr[2]/F
    const vector<float> &selectedPhoton_electronIdx(); // selectedPhoton_electronIdx[2]/F
    const vector<float> &selectedPhoton_electronVeto(); // selectedPhoton_electronVeto[2]/F
    const vector<float> &selectedPhoton_energyErr(); // selectedPhoton_energyErr[2]/F
    const vector<float> &selectedPhoton_eta(); // selectedPhoton_eta[2]/F
    const vector<float> &selectedPhoton_genPartFlav(); // selectedPhoton_genPartFlav[2]/F
    const vector<float> &selectedPhoton_genPartIdx(); // selectedPhoton_genPartIdx[2]/F
    const vector<float> &selectedPhoton_hoe(); // selectedPhoton_hoe[2]/F
    const vector<float> &selectedPhoton_isScEtaEB(); // selectedPhoton_isScEtaEB[2]/F
    const vector<float> &selectedPhoton_isScEtaEE(); // selectedPhoton_isScEtaEE[2]/F
    const vector<float> &selectedPhoton_jetIdx(); // selectedPhoton_jetIdx[2]/F
    const vector<float> &selectedPhoton_mass(); // selectedPhoton_mass[2]/F
    const vector<float> &selectedPhoton_mvaID(); // selectedPhoton_mvaID[2]/F
    const vector<float> &selectedPhoton_mvaID_Fall17V1p1(); // selectedPhoton_mvaID_Fall17V1p1[2]/F
    const vector<float> &selectedPhoton_mvaID_Spring16nonTrigV1(); // selectedPhoton_mvaID_Spring16nonTrigV1[2]/F
    const vector<float> &selectedPhoton_mvaID_WP80(); // selectedPhoton_mvaID_WP80[2]/F
    const vector<float> &selectedPhoton_mvaID_WP90(); // selectedPhoton_mvaID_WP90[2]/F
    const vector<LorentzVector> &selectedPhoton_p4(); // from selectedPhoton_pt,eta,phi,mass
    const vector<float> &selectedPhoton_pdgId(); // selectedPhoton_pdgId[2]/F
    const vector<float> &selectedPhoton_pfRelIso03_all(); // selectedPhoton_pfRelIso03_all[2]/F
    const vector<float> &selectedPhoton_pfRelIso03_chg(); // selectedPhoton_pfRelIso03_chg[2]/F
    const vector<float> &selectedPhoton_phi(); // selectedPhoton_phi[2]/F
    const vector<float> &selectedPhoton_photonIso(); // selectedPhoton_photonIso[2]/F
    const vector<float> &selectedPhoton_pixelSeed(); // selectedPhoton_pixelSeed[2]/F
    const vector<float> &selectedPhoton_pt(); // selectedPhoton_pt[2]/F
    const vector<float> &selectedPhoton_r9(); // selectedPhoton_r9[2]/F
    const vector<float> &selectedPhoton_seedGain(); // selectedPhoton_seedGain[2]/F
    const vector<float> &selectedPhoton_sieie(); // selectedPhoton_sieie[2]/F
    const vector<float> &selectedPhoton_trkSumPtHollowConeDR03(); // selectedPhoton_trkSumPtHollowConeDR03[2]/F
    const vector<float> &selectedPhoton_vidNestedWPBitmap(); // selectedPhoton_vidNestedWPBitmap[2]/F
    const vector<float> &selectedPhoton_vidNestedWPBitmap_Spring16V2p2(); // selectedPhoton_vidNestedWPBitmap_Spring16V2p2[2]/F
    const vector<float> &selectedTauLoose_charge(); // selectedTauLoose_charge[2]/F
    const vector<float> &selectedTauLoose_chargedIso(); // selectedTauLoose_chargedIso[2]/F
    const vector<float> &selectedTauLoose_cleanmask(); // selectedTauLoose_cleanmask[2]/F
    const vector<float> &selectedTauLoose_decayMode(); // selectedTauLoose_decayMode[2]/F
    const vector<float> &selectedTauLoose_dxy(); // selectedTauLoose_dxy[2]/F
    const vector<float> &selectedTauLoose_dz(); // selectedTauLoose_dz[2]/F
    const vector<float> &selectedTauLoose_eta(); // selectedTauLoose_eta[2]/F
    const vector<float> &selectedTauLoose_etaSVFit(); // selectedTauLoose_etaSVFit[2]/F
    const vector<float> &selectedTauLoose_genPartFlav(); // selectedTauLoose_genPartFlav[2]/F
    const vector<float> &selectedTauLoose_genPartIdx(); // selectedTauLoose_genPartIdx[2]/F
    const vector<float> &selectedTauLoose_idAntiEle(); // selectedTauLoose_idAntiEle[2]/F
    const vector<float> &selectedTauLoose_idAntiEle2018(); // selectedTauLoose_idAntiEle2018[2]/F
    const vector<float> &selectedTauLoose_idAntiMu(); // selectedTauLoose_idAntiMu[2]/F
    const vector<float> &selectedTauLoose_idDecayMode(); // selectedTauLoose_idDecayMode[2]/F
    const vector<float> &selectedTauLoose_idDecayModeNewDMs(); // selectedTauLoose_idDecayModeNewDMs[2]/F
    const vector<float> &selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe(); // selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe[2]/F
    const vector<float> &selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet(); // selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet[2]/F
    const vector<float> &selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu(); // selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu[2]/F
    const vector<float> &selectedTauLoose_idMVAnewDM2017v2(); // selectedTauLoose_idMVAnewDM2017v2[2]/F
    const vector<float> &selectedTauLoose_idMVAoldDM(); // selectedTauLoose_idMVAoldDM[2]/F
    const vector<float> &selectedTauLoose_idMVAoldDM2017v1(); // selectedTauLoose_idMVAoldDM2017v1[2]/F
    const vector<float> &selectedTauLoose_idMVAoldDM2017v2(); // selectedTauLoose_idMVAoldDM2017v2[2]/F
    const vector<float> &selectedTauLoose_idMVAoldDMdR032017v2(); // selectedTauLoose_idMVAoldDMdR032017v2[2]/F
    const vector<float> &selectedTauLoose_jetIdx(); // selectedTauLoose_jetIdx[2]/F
    const vector<float> &selectedTauLoose_leadTkDeltaEta(); // selectedTauLoose_leadTkDeltaEta[2]/F
    const vector<float> &selectedTauLoose_leadTkDeltaPhi(); // selectedTauLoose_leadTkDeltaPhi[2]/F
    const vector<float> &selectedTauLoose_leadTkPtOverselectedTauLoosePt(); // selectedTauLoose_leadTkPtOverselectedTauLoosePt[2]/F
    const vector<float> &selectedTauLoose_mSVFit(); // selectedTauLoose_mSVFit[2]/F
    const vector<float> &selectedTauLoose_mass(); // selectedTauLoose_mass[2]/F
    const vector<float> &selectedTauLoose_neutralIso(); // selectedTauLoose_neutralIso[2]/F
    const vector<LorentzVector> &selectedTauLoose_p4(); // from selectedTauLoose_pt,eta,phi,mass
    const vector<float> &selectedTauLoose_phi(); // selectedTauLoose_phi[2]/F
    const vector<float> &selectedTauLoose_phiSVFit(); // selectedTauLoose_phiSVFit[2]/F
    const vector<float> &selectedTauLoose_photonsOutsideSignalCone(); // selectedTauLoose_photonsOutsideSignalCone[2]/F
    const vector<float> &selectedTauLoose_pt(); // selectedTauLoose_pt[2]/F
    const vector<float> &selectedTauLoose_ptSVFit(); // selectedTauLoose_ptSVFit[2]/F
    const vector<float> &selectedTauLoose_puCorr(); // selectedTauLoose_puCorr[2]/F
    const vector<float> &selectedTauLoose_rawAntiEle(); // selectedTauLoose_rawAntiEle[2]/F
    const vector<float> &selectedTauLoose_rawAntiEle2018(); // selectedTauLoose_rawAntiEle2018[2]/F
    const vector<float> &selectedTauLoose_rawAntiEleCat(); // selectedTauLoose_rawAntiEleCat[2]/F
    const vector<float> &selectedTauLoose_rawAntiEleCat2018(); // selectedTauLoose_rawAntiEleCat2018[2]/F
    const vector<float> &selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe(); // selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe[2]/F
    const vector<float> &selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet(); // selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet[2]/F
    const vector<float> &selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu(); // selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu[2]/F
    const vector<float> &selectedTauLoose_rawIso(); // selectedTauLoose_rawIso[2]/F
    const vector<float> &selectedTauLoose_rawIsodR03(); // selectedTauLoose_rawIsodR03[2]/F
    const vector<float> &selectedTauLoose_rawMVAnewDM2017v2(); // selectedTauLoose_rawMVAnewDM2017v2[2]/F
    const vector<float> &selectedTauLoose_rawMVAoldDM(); // selectedTauLoose_rawMVAoldDM[2]/F
    const vector<float> &selectedTauLoose_rawMVAoldDM2017v1(); // selectedTauLoose_rawMVAoldDM2017v1[2]/F
    const vector<float> &selectedTauLoose_rawMVAoldDM2017v2(); // selectedTauLoose_rawMVAoldDM2017v2[2]/F
    const vector<float> &selectedTauLoose_rawMVAoldDMdR032017v2(); // selectedTauLoose_rawMVAoldDMdR032017v2[2]/F
    const vector<int> &tauHidxLoose(); // tauHidxLoose[2]/I
    Bool_t isData();
    const Int_t &year();
    vector<float> GetVF(const string &name);
    Char_t GetC(const string &name);
    LorentzVector GetLV(const string &name);
    int GetI(const string &name);
    float GetF(const string &name);
    vector<int> GetVI(const string &name);
    vector<LorentzVector> GetVLV(const string &name);
    bool GetB(const string &name);
    vector<bool> GetVB(const string &name);
}
#endif