#include "Nano.h"
Nano nt;

void Nano::Init(TTree *tree) {
    b_CaloMET_phi_ = tree->GetBranch("CaloMET_phi");
    if (b_CaloMET_phi_) { b_CaloMET_phi_->SetAddress(&CaloMET_phi_); }
    b_CaloMET_pt_ = tree->GetBranch("CaloMET_pt");
    if (b_CaloMET_pt_) { b_CaloMET_pt_->SetAddress(&CaloMET_pt_); }
    b_CaloMET_sumEt_ = tree->GetBranch("CaloMET_sumEt");
    if (b_CaloMET_sumEt_) { b_CaloMET_sumEt_->SetAddress(&CaloMET_sumEt_); }
    b_Category_ = tree->GetBranch("Category");
    if (b_Category_) { b_Category_->SetAddress(&Category_); }
    b_Category_lveto_ = tree->GetBranch("Category_lveto");
    if (b_Category_lveto_) { b_Category_lveto_->SetAddress(&Category_lveto_); }
    b_Category_pairsLoose_ = tree->GetBranch("Category_pairsLoose");
    if (b_Category_pairsLoose_) { b_Category_pairsLoose_->SetAddress(&Category_pairsLoose_); }
    b_Category_tauselLoose_ = tree->GetBranch("Category_tauselLoose");
    if (b_Category_tauselLoose_) { b_Category_tauselLoose_->SetAddress(&Category_tauselLoose_); }
    b_ChsMET_phi_ = tree->GetBranch("ChsMET_phi");
    if (b_ChsMET_phi_) { b_ChsMET_phi_->SetAddress(&ChsMET_phi_); }
    b_ChsMET_pt_ = tree->GetBranch("ChsMET_pt");
    if (b_ChsMET_pt_) { b_ChsMET_pt_->SetAddress(&ChsMET_pt_); }
    b_ChsMET_sumEt_ = tree->GetBranch("ChsMET_sumEt");
    if (b_ChsMET_sumEt_) { b_ChsMET_sumEt_->SetAddress(&ChsMET_sumEt_); }
    b_CorrT1METJet_area_ = tree->GetBranch("CorrT1METJet_area");
    if (b_CorrT1METJet_area_) { b_CorrT1METJet_area_->SetAddress(&CorrT1METJet_area_); }
    b_CorrT1METJet_eta_ = tree->GetBranch("CorrT1METJet_eta");
    if (b_CorrT1METJet_eta_) { b_CorrT1METJet_eta_->SetAddress(&CorrT1METJet_eta_); }
    b_CorrT1METJet_muonSubtrFactor_ = tree->GetBranch("CorrT1METJet_muonSubtrFactor");
    if (b_CorrT1METJet_muonSubtrFactor_) { b_CorrT1METJet_muonSubtrFactor_->SetAddress(&CorrT1METJet_muonSubtrFactor_); }
    b_CorrT1METJet_phi_ = tree->GetBranch("CorrT1METJet_phi");
    if (b_CorrT1METJet_phi_) { b_CorrT1METJet_phi_->SetAddress(&CorrT1METJet_phi_); }
    b_CorrT1METJet_rawPt_ = tree->GetBranch("CorrT1METJet_rawPt");
    if (b_CorrT1METJet_rawPt_) { b_CorrT1METJet_rawPt_->SetAddress(&CorrT1METJet_rawPt_); }
    b_Electron_charge_ = tree->GetBranch("Electron_charge");
    if (b_Electron_charge_) { b_Electron_charge_->SetAddress(&Electron_charge_); }
    b_Electron_cleanmask_ = tree->GetBranch("Electron_cleanmask");
    if (b_Electron_cleanmask_) { b_Electron_cleanmask_->SetAddress(&Electron_cleanmask_); }
    b_Electron_convVeto_ = tree->GetBranch("Electron_convVeto");
    if (b_Electron_convVeto_) { b_Electron_convVeto_->SetAddress(&Electron_convVeto_); }
    b_Electron_cutBased_ = tree->GetBranch("Electron_cutBased");
    if (b_Electron_cutBased_) { b_Electron_cutBased_->SetAddress(&Electron_cutBased_); }
    b_Electron_cutBased_Fall17_V1_ = tree->GetBranch("Electron_cutBased_Fall17_V1");
    if (b_Electron_cutBased_Fall17_V1_) { b_Electron_cutBased_Fall17_V1_->SetAddress(&Electron_cutBased_Fall17_V1_); }
    b_Electron_cutBased_HEEP_ = tree->GetBranch("Electron_cutBased_HEEP");
    if (b_Electron_cutBased_HEEP_) { b_Electron_cutBased_HEEP_->SetAddress(&Electron_cutBased_HEEP_); }
    b_Electron_cutBased_HLTPreSel_ = tree->GetBranch("Electron_cutBased_HLTPreSel");
    if (b_Electron_cutBased_HLTPreSel_) { b_Electron_cutBased_HLTPreSel_->SetAddress(&Electron_cutBased_HLTPreSel_); }
    b_Electron_cutBased_Spring15_ = tree->GetBranch("Electron_cutBased_Spring15");
    if (b_Electron_cutBased_Spring15_) { b_Electron_cutBased_Spring15_->SetAddress(&Electron_cutBased_Spring15_); }
    b_Electron_cutBased_Sum16_ = tree->GetBranch("Electron_cutBased_Sum16");
    if (b_Electron_cutBased_Sum16_) { b_Electron_cutBased_Sum16_->SetAddress(&Electron_cutBased_Sum16_); }
    b_Electron_deltaEtaSC_ = tree->GetBranch("Electron_deltaEtaSC");
    if (b_Electron_deltaEtaSC_) { b_Electron_deltaEtaSC_->SetAddress(&Electron_deltaEtaSC_); }
    b_Electron_dr03EcalRecHitSumEt_ = tree->GetBranch("Electron_dr03EcalRecHitSumEt");
    if (b_Electron_dr03EcalRecHitSumEt_) { b_Electron_dr03EcalRecHitSumEt_->SetAddress(&Electron_dr03EcalRecHitSumEt_); }
    b_Electron_dr03HcalDepth1TowerSumEt_ = tree->GetBranch("Electron_dr03HcalDepth1TowerSumEt");
    if (b_Electron_dr03HcalDepth1TowerSumEt_) { b_Electron_dr03HcalDepth1TowerSumEt_->SetAddress(&Electron_dr03HcalDepth1TowerSumEt_); }
    b_Electron_dr03TkSumPt_ = tree->GetBranch("Electron_dr03TkSumPt");
    if (b_Electron_dr03TkSumPt_) { b_Electron_dr03TkSumPt_->SetAddress(&Electron_dr03TkSumPt_); }
    b_Electron_dr03TkSumPtHEEP_ = tree->GetBranch("Electron_dr03TkSumPtHEEP");
    if (b_Electron_dr03TkSumPtHEEP_) { b_Electron_dr03TkSumPtHEEP_->SetAddress(&Electron_dr03TkSumPtHEEP_); }
    b_Electron_dxy_ = tree->GetBranch("Electron_dxy");
    if (b_Electron_dxy_) { b_Electron_dxy_->SetAddress(&Electron_dxy_); }
    b_Electron_dxyErr_ = tree->GetBranch("Electron_dxyErr");
    if (b_Electron_dxyErr_) { b_Electron_dxyErr_->SetAddress(&Electron_dxyErr_); }
    b_Electron_dz_ = tree->GetBranch("Electron_dz");
    if (b_Electron_dz_) { b_Electron_dz_->SetAddress(&Electron_dz_); }
    b_Electron_dzErr_ = tree->GetBranch("Electron_dzErr");
    if (b_Electron_dzErr_) { b_Electron_dzErr_->SetAddress(&Electron_dzErr_); }
    b_Electron_eCorr_ = tree->GetBranch("Electron_eCorr");
    if (b_Electron_eCorr_) { b_Electron_eCorr_->SetAddress(&Electron_eCorr_); }
    b_Electron_eInvMinusPInv_ = tree->GetBranch("Electron_eInvMinusPInv");
    if (b_Electron_eInvMinusPInv_) { b_Electron_eInvMinusPInv_->SetAddress(&Electron_eInvMinusPInv_); }
    b_Electron_energyErr_ = tree->GetBranch("Electron_energyErr");
    if (b_Electron_energyErr_) { b_Electron_energyErr_->SetAddress(&Electron_energyErr_); }
    b_Electron_eta_ = tree->GetBranch("Electron_eta");
    if (b_Electron_eta_) { b_Electron_eta_->SetAddress(&Electron_eta_); }
    b_Electron_genPartFlav_ = tree->GetBranch("Electron_genPartFlav");
    if (b_Electron_genPartFlav_) { b_Electron_genPartFlav_->SetAddress(&Electron_genPartFlav_); }
    b_Electron_genPartIdx_ = tree->GetBranch("Electron_genPartIdx");
    if (b_Electron_genPartIdx_) { b_Electron_genPartIdx_->SetAddress(&Electron_genPartIdx_); }
    b_Electron_hoe_ = tree->GetBranch("Electron_hoe");
    if (b_Electron_hoe_) { b_Electron_hoe_->SetAddress(&Electron_hoe_); }
    b_Electron_ip3d_ = tree->GetBranch("Electron_ip3d");
    if (b_Electron_ip3d_) { b_Electron_ip3d_->SetAddress(&Electron_ip3d_); }
    b_Electron_isPFcand_ = tree->GetBranch("Electron_isPFcand");
    if (b_Electron_isPFcand_) { b_Electron_isPFcand_->SetAddress(&Electron_isPFcand_); }
    b_Electron_jetIdx_ = tree->GetBranch("Electron_jetIdx");
    if (b_Electron_jetIdx_) { b_Electron_jetIdx_->SetAddress(&Electron_jetIdx_); }
    b_Electron_jetPtRelv2_ = tree->GetBranch("Electron_jetPtRelv2");
    if (b_Electron_jetPtRelv2_) { b_Electron_jetPtRelv2_->SetAddress(&Electron_jetPtRelv2_); }
    b_Electron_jetRelIso_ = tree->GetBranch("Electron_jetRelIso");
    if (b_Electron_jetRelIso_) { b_Electron_jetRelIso_->SetAddress(&Electron_jetRelIso_); }
    b_Electron_lostHits_ = tree->GetBranch("Electron_lostHits");
    if (b_Electron_lostHits_) { b_Electron_lostHits_->SetAddress(&Electron_lostHits_); }
    b_Electron_mass_ = tree->GetBranch("Electron_mass");
    if (b_Electron_mass_) { b_Electron_mass_->SetAddress(&Electron_mass_); }
    b_Electron_miniPFRelIso_all_ = tree->GetBranch("Electron_miniPFRelIso_all");
    if (b_Electron_miniPFRelIso_all_) { b_Electron_miniPFRelIso_all_->SetAddress(&Electron_miniPFRelIso_all_); }
    b_Electron_miniPFRelIso_chg_ = tree->GetBranch("Electron_miniPFRelIso_chg");
    if (b_Electron_miniPFRelIso_chg_) { b_Electron_miniPFRelIso_chg_->SetAddress(&Electron_miniPFRelIso_chg_); }
    b_Electron_mvaFall17V1Iso_ = tree->GetBranch("Electron_mvaFall17V1Iso");
    if (b_Electron_mvaFall17V1Iso_) { b_Electron_mvaFall17V1Iso_->SetAddress(&Electron_mvaFall17V1Iso_); }
    b_Electron_mvaFall17V1Iso_WP80_ = tree->GetBranch("Electron_mvaFall17V1Iso_WP80");
    if (b_Electron_mvaFall17V1Iso_WP80_) { b_Electron_mvaFall17V1Iso_WP80_->SetAddress(&Electron_mvaFall17V1Iso_WP80_); }
    b_Electron_mvaFall17V1Iso_WP90_ = tree->GetBranch("Electron_mvaFall17V1Iso_WP90");
    if (b_Electron_mvaFall17V1Iso_WP90_) { b_Electron_mvaFall17V1Iso_WP90_->SetAddress(&Electron_mvaFall17V1Iso_WP90_); }
    b_Electron_mvaFall17V1Iso_WPL_ = tree->GetBranch("Electron_mvaFall17V1Iso_WPL");
    if (b_Electron_mvaFall17V1Iso_WPL_) { b_Electron_mvaFall17V1Iso_WPL_->SetAddress(&Electron_mvaFall17V1Iso_WPL_); }
    b_Electron_mvaFall17V1noIso_ = tree->GetBranch("Electron_mvaFall17V1noIso");
    if (b_Electron_mvaFall17V1noIso_) { b_Electron_mvaFall17V1noIso_->SetAddress(&Electron_mvaFall17V1noIso_); }
    b_Electron_mvaFall17V1noIso_WP80_ = tree->GetBranch("Electron_mvaFall17V1noIso_WP80");
    if (b_Electron_mvaFall17V1noIso_WP80_) { b_Electron_mvaFall17V1noIso_WP80_->SetAddress(&Electron_mvaFall17V1noIso_WP80_); }
    b_Electron_mvaFall17V1noIso_WP90_ = tree->GetBranch("Electron_mvaFall17V1noIso_WP90");
    if (b_Electron_mvaFall17V1noIso_WP90_) { b_Electron_mvaFall17V1noIso_WP90_->SetAddress(&Electron_mvaFall17V1noIso_WP90_); }
    b_Electron_mvaFall17V1noIso_WPL_ = tree->GetBranch("Electron_mvaFall17V1noIso_WPL");
    if (b_Electron_mvaFall17V1noIso_WPL_) { b_Electron_mvaFall17V1noIso_WPL_->SetAddress(&Electron_mvaFall17V1noIso_WPL_); }
    b_Electron_mvaFall17V2Iso_ = tree->GetBranch("Electron_mvaFall17V2Iso");
    if (b_Electron_mvaFall17V2Iso_) { b_Electron_mvaFall17V2Iso_->SetAddress(&Electron_mvaFall17V2Iso_); }
    b_Electron_mvaFall17V2Iso_WP80_ = tree->GetBranch("Electron_mvaFall17V2Iso_WP80");
    if (b_Electron_mvaFall17V2Iso_WP80_) { b_Electron_mvaFall17V2Iso_WP80_->SetAddress(&Electron_mvaFall17V2Iso_WP80_); }
    b_Electron_mvaFall17V2Iso_WP90_ = tree->GetBranch("Electron_mvaFall17V2Iso_WP90");
    if (b_Electron_mvaFall17V2Iso_WP90_) { b_Electron_mvaFall17V2Iso_WP90_->SetAddress(&Electron_mvaFall17V2Iso_WP90_); }
    b_Electron_mvaFall17V2Iso_WPL_ = tree->GetBranch("Electron_mvaFall17V2Iso_WPL");
    if (b_Electron_mvaFall17V2Iso_WPL_) { b_Electron_mvaFall17V2Iso_WPL_->SetAddress(&Electron_mvaFall17V2Iso_WPL_); }
    b_Electron_mvaFall17V2noIso_ = tree->GetBranch("Electron_mvaFall17V2noIso");
    if (b_Electron_mvaFall17V2noIso_) { b_Electron_mvaFall17V2noIso_->SetAddress(&Electron_mvaFall17V2noIso_); }
    b_Electron_mvaFall17V2noIso_WP80_ = tree->GetBranch("Electron_mvaFall17V2noIso_WP80");
    if (b_Electron_mvaFall17V2noIso_WP80_) { b_Electron_mvaFall17V2noIso_WP80_->SetAddress(&Electron_mvaFall17V2noIso_WP80_); }
    b_Electron_mvaFall17V2noIso_WP90_ = tree->GetBranch("Electron_mvaFall17V2noIso_WP90");
    if (b_Electron_mvaFall17V2noIso_WP90_) { b_Electron_mvaFall17V2noIso_WP90_->SetAddress(&Electron_mvaFall17V2noIso_WP90_); }
    b_Electron_mvaFall17V2noIso_WPL_ = tree->GetBranch("Electron_mvaFall17V2noIso_WPL");
    if (b_Electron_mvaFall17V2noIso_WPL_) { b_Electron_mvaFall17V2noIso_WPL_->SetAddress(&Electron_mvaFall17V2noIso_WPL_); }
    b_Electron_mvaSpring16GP_ = tree->GetBranch("Electron_mvaSpring16GP");
    if (b_Electron_mvaSpring16GP_) { b_Electron_mvaSpring16GP_->SetAddress(&Electron_mvaSpring16GP_); }
    b_Electron_mvaSpring16GP_WP80_ = tree->GetBranch("Electron_mvaSpring16GP_WP80");
    if (b_Electron_mvaSpring16GP_WP80_) { b_Electron_mvaSpring16GP_WP80_->SetAddress(&Electron_mvaSpring16GP_WP80_); }
    b_Electron_mvaSpring16GP_WP90_ = tree->GetBranch("Electron_mvaSpring16GP_WP90");
    if (b_Electron_mvaSpring16GP_WP90_) { b_Electron_mvaSpring16GP_WP90_->SetAddress(&Electron_mvaSpring16GP_WP90_); }
    b_Electron_mvaSpring16HZZ_ = tree->GetBranch("Electron_mvaSpring16HZZ");
    if (b_Electron_mvaSpring16HZZ_) { b_Electron_mvaSpring16HZZ_->SetAddress(&Electron_mvaSpring16HZZ_); }
    b_Electron_mvaSpring16HZZ_WPL_ = tree->GetBranch("Electron_mvaSpring16HZZ_WPL");
    if (b_Electron_mvaSpring16HZZ_WPL_) { b_Electron_mvaSpring16HZZ_WPL_->SetAddress(&Electron_mvaSpring16HZZ_WPL_); }
    b_Electron_mvaTTH_ = tree->GetBranch("Electron_mvaTTH");
    if (b_Electron_mvaTTH_) { b_Electron_mvaTTH_->SetAddress(&Electron_mvaTTH_); }
    b_Electron_pdgId_ = tree->GetBranch("Electron_pdgId");
    if (b_Electron_pdgId_) { b_Electron_pdgId_->SetAddress(&Electron_pdgId_); }
    b_Electron_pfRelIso03_all_ = tree->GetBranch("Electron_pfRelIso03_all");
    if (b_Electron_pfRelIso03_all_) { b_Electron_pfRelIso03_all_->SetAddress(&Electron_pfRelIso03_all_); }
    b_Electron_pfRelIso03_chg_ = tree->GetBranch("Electron_pfRelIso03_chg");
    if (b_Electron_pfRelIso03_chg_) { b_Electron_pfRelIso03_chg_->SetAddress(&Electron_pfRelIso03_chg_); }
    b_Electron_phi_ = tree->GetBranch("Electron_phi");
    if (b_Electron_phi_) { b_Electron_phi_->SetAddress(&Electron_phi_); }
    b_Electron_photonIdx_ = tree->GetBranch("Electron_photonIdx");
    if (b_Electron_photonIdx_) { b_Electron_photonIdx_->SetAddress(&Electron_photonIdx_); }
    b_Electron_pt_ = tree->GetBranch("Electron_pt");
    if (b_Electron_pt_) { b_Electron_pt_->SetAddress(&Electron_pt_); }
    b_Electron_r9_ = tree->GetBranch("Electron_r9");
    if (b_Electron_r9_) { b_Electron_r9_->SetAddress(&Electron_r9_); }
    b_Electron_scEtOverPt_ = tree->GetBranch("Electron_scEtOverPt");
    if (b_Electron_scEtOverPt_) { b_Electron_scEtOverPt_->SetAddress(&Electron_scEtOverPt_); }
    b_Electron_seedGain_ = tree->GetBranch("Electron_seedGain");
    if (b_Electron_seedGain_) { b_Electron_seedGain_->SetAddress(&Electron_seedGain_); }
    b_Electron_sieie_ = tree->GetBranch("Electron_sieie");
    if (b_Electron_sieie_) { b_Electron_sieie_->SetAddress(&Electron_sieie_); }
    b_Electron_sip3d_ = tree->GetBranch("Electron_sip3d");
    if (b_Electron_sip3d_) { b_Electron_sip3d_->SetAddress(&Electron_sip3d_); }
    b_Electron_tightCharge_ = tree->GetBranch("Electron_tightCharge");
    if (b_Electron_tightCharge_) { b_Electron_tightCharge_->SetAddress(&Electron_tightCharge_); }
    b_Electron_vidNestedWPBitmap_ = tree->GetBranch("Electron_vidNestedWPBitmap");
    if (b_Electron_vidNestedWPBitmap_) { b_Electron_vidNestedWPBitmap_->SetAddress(&Electron_vidNestedWPBitmap_); }
    b_Electron_vidNestedWPBitmapHEEP_ = tree->GetBranch("Electron_vidNestedWPBitmapHEEP");
    if (b_Electron_vidNestedWPBitmapHEEP_) { b_Electron_vidNestedWPBitmapHEEP_->SetAddress(&Electron_vidNestedWPBitmapHEEP_); }
    b_Electron_vidNestedWPBitmapSpring15_ = tree->GetBranch("Electron_vidNestedWPBitmapSpring15");
    if (b_Electron_vidNestedWPBitmapSpring15_) { b_Electron_vidNestedWPBitmapSpring15_->SetAddress(&Electron_vidNestedWPBitmapSpring15_); }
    b_Electron_vidNestedWPBitmapSum16_ = tree->GetBranch("Electron_vidNestedWPBitmapSum16");
    if (b_Electron_vidNestedWPBitmapSum16_) { b_Electron_vidNestedWPBitmapSum16_->SetAddress(&Electron_vidNestedWPBitmapSum16_); }
    b_Flag_BadChargedCandidateFilter_ = tree->GetBranch("Flag_BadChargedCandidateFilter");
    if (b_Flag_BadChargedCandidateFilter_) { b_Flag_BadChargedCandidateFilter_->SetAddress(&Flag_BadChargedCandidateFilter_); }
    b_Flag_BadChargedCandidateSummer16Filter_ = tree->GetBranch("Flag_BadChargedCandidateSummer16Filter");
    if (b_Flag_BadChargedCandidateSummer16Filter_) { b_Flag_BadChargedCandidateSummer16Filter_->SetAddress(&Flag_BadChargedCandidateSummer16Filter_); }
    b_Flag_BadPFMuonFilter_ = tree->GetBranch("Flag_BadPFMuonFilter");
    if (b_Flag_BadPFMuonFilter_) { b_Flag_BadPFMuonFilter_->SetAddress(&Flag_BadPFMuonFilter_); }
    b_Flag_BadPFMuonSummer16Filter_ = tree->GetBranch("Flag_BadPFMuonSummer16Filter");
    if (b_Flag_BadPFMuonSummer16Filter_) { b_Flag_BadPFMuonSummer16Filter_->SetAddress(&Flag_BadPFMuonSummer16Filter_); }
    b_Flag_CSCTightHalo2015Filter_ = tree->GetBranch("Flag_CSCTightHalo2015Filter");
    if (b_Flag_CSCTightHalo2015Filter_) { b_Flag_CSCTightHalo2015Filter_->SetAddress(&Flag_CSCTightHalo2015Filter_); }
    b_Flag_CSCTightHaloFilter_ = tree->GetBranch("Flag_CSCTightHaloFilter");
    if (b_Flag_CSCTightHaloFilter_) { b_Flag_CSCTightHaloFilter_->SetAddress(&Flag_CSCTightHaloFilter_); }
    b_Flag_CSCTightHaloTrkMuUnvetoFilter_ = tree->GetBranch("Flag_CSCTightHaloTrkMuUnvetoFilter");
    if (b_Flag_CSCTightHaloTrkMuUnvetoFilter_) { b_Flag_CSCTightHaloTrkMuUnvetoFilter_->SetAddress(&Flag_CSCTightHaloTrkMuUnvetoFilter_); }
    b_Flag_EcalDeadCellBoundaryEnergyFilter_ = tree->GetBranch("Flag_EcalDeadCellBoundaryEnergyFilter");
    if (b_Flag_EcalDeadCellBoundaryEnergyFilter_) { b_Flag_EcalDeadCellBoundaryEnergyFilter_->SetAddress(&Flag_EcalDeadCellBoundaryEnergyFilter_); }
    b_Flag_EcalDeadCellTriggerPrimitiveFilter_ = tree->GetBranch("Flag_EcalDeadCellTriggerPrimitiveFilter");
    if (b_Flag_EcalDeadCellTriggerPrimitiveFilter_) { b_Flag_EcalDeadCellTriggerPrimitiveFilter_->SetAddress(&Flag_EcalDeadCellTriggerPrimitiveFilter_); }
    b_Flag_HBHENoiseFilter_ = tree->GetBranch("Flag_HBHENoiseFilter");
    if (b_Flag_HBHENoiseFilter_) { b_Flag_HBHENoiseFilter_->SetAddress(&Flag_HBHENoiseFilter_); }
    b_Flag_HBHENoiseIsoFilter_ = tree->GetBranch("Flag_HBHENoiseIsoFilter");
    if (b_Flag_HBHENoiseIsoFilter_) { b_Flag_HBHENoiseIsoFilter_->SetAddress(&Flag_HBHENoiseIsoFilter_); }
    b_Flag_HcalStripHaloFilter_ = tree->GetBranch("Flag_HcalStripHaloFilter");
    if (b_Flag_HcalStripHaloFilter_) { b_Flag_HcalStripHaloFilter_->SetAddress(&Flag_HcalStripHaloFilter_); }
    b_Flag_METFilters_ = tree->GetBranch("Flag_METFilters");
    if (b_Flag_METFilters_) { b_Flag_METFilters_->SetAddress(&Flag_METFilters_); }
    b_Flag_chargedHadronTrackResolutionFilter_ = tree->GetBranch("Flag_chargedHadronTrackResolutionFilter");
    if (b_Flag_chargedHadronTrackResolutionFilter_) { b_Flag_chargedHadronTrackResolutionFilter_->SetAddress(&Flag_chargedHadronTrackResolutionFilter_); }
    b_Flag_ecalBadCalibFilter_ = tree->GetBranch("Flag_ecalBadCalibFilter");
    if (b_Flag_ecalBadCalibFilter_) { b_Flag_ecalBadCalibFilter_->SetAddress(&Flag_ecalBadCalibFilter_); }
    b_Flag_ecalBadCalibFilterV2_ = tree->GetBranch("Flag_ecalBadCalibFilterV2");
    if (b_Flag_ecalBadCalibFilterV2_) { b_Flag_ecalBadCalibFilterV2_->SetAddress(&Flag_ecalBadCalibFilterV2_); }
    b_Flag_ecalLaserCorrFilter_ = tree->GetBranch("Flag_ecalLaserCorrFilter");
    if (b_Flag_ecalLaserCorrFilter_) { b_Flag_ecalLaserCorrFilter_->SetAddress(&Flag_ecalLaserCorrFilter_); }
    b_Flag_eeBadScFilter_ = tree->GetBranch("Flag_eeBadScFilter");
    if (b_Flag_eeBadScFilter_) { b_Flag_eeBadScFilter_->SetAddress(&Flag_eeBadScFilter_); }
    b_Flag_globalSuperTightHalo2016Filter_ = tree->GetBranch("Flag_globalSuperTightHalo2016Filter");
    if (b_Flag_globalSuperTightHalo2016Filter_) { b_Flag_globalSuperTightHalo2016Filter_->SetAddress(&Flag_globalSuperTightHalo2016Filter_); }
    b_Flag_globalTightHalo2016Filter_ = tree->GetBranch("Flag_globalTightHalo2016Filter");
    if (b_Flag_globalTightHalo2016Filter_) { b_Flag_globalTightHalo2016Filter_->SetAddress(&Flag_globalTightHalo2016Filter_); }
    b_Flag_goodVertices_ = tree->GetBranch("Flag_goodVertices");
    if (b_Flag_goodVertices_) { b_Flag_goodVertices_->SetAddress(&Flag_goodVertices_); }
    b_Flag_hcalLaserEventFilter_ = tree->GetBranch("Flag_hcalLaserEventFilter");
    if (b_Flag_hcalLaserEventFilter_) { b_Flag_hcalLaserEventFilter_->SetAddress(&Flag_hcalLaserEventFilter_); }
    b_Flag_muonBadTrackFilter_ = tree->GetBranch("Flag_muonBadTrackFilter");
    if (b_Flag_muonBadTrackFilter_) { b_Flag_muonBadTrackFilter_->SetAddress(&Flag_muonBadTrackFilter_); }
    b_Flag_trkPOGFilters_ = tree->GetBranch("Flag_trkPOGFilters");
    if (b_Flag_trkPOGFilters_) { b_Flag_trkPOGFilters_->SetAddress(&Flag_trkPOGFilters_); }
    b_Flag_trkPOG_logErrorTooManyClusters_ = tree->GetBranch("Flag_trkPOG_logErrorTooManyClusters");
    if (b_Flag_trkPOG_logErrorTooManyClusters_) { b_Flag_trkPOG_logErrorTooManyClusters_->SetAddress(&Flag_trkPOG_logErrorTooManyClusters_); }
    b_Flag_trkPOG_manystripclus53X_ = tree->GetBranch("Flag_trkPOG_manystripclus53X");
    if (b_Flag_trkPOG_manystripclus53X_) { b_Flag_trkPOG_manystripclus53X_->SetAddress(&Flag_trkPOG_manystripclus53X_); }
    b_Flag_trkPOG_toomanystripclus53X_ = tree->GetBranch("Flag_trkPOG_toomanystripclus53X");
    if (b_Flag_trkPOG_toomanystripclus53X_) { b_Flag_trkPOG_toomanystripclus53X_->SetAddress(&Flag_trkPOG_toomanystripclus53X_); }
    b_FsrPhoton_dROverEt2_ = tree->GetBranch("FsrPhoton_dROverEt2");
    if (b_FsrPhoton_dROverEt2_) { b_FsrPhoton_dROverEt2_->SetAddress(&FsrPhoton_dROverEt2_); }
    b_FsrPhoton_eta_ = tree->GetBranch("FsrPhoton_eta");
    if (b_FsrPhoton_eta_) { b_FsrPhoton_eta_->SetAddress(&FsrPhoton_eta_); }
    b_FsrPhoton_muonIdx_ = tree->GetBranch("FsrPhoton_muonIdx");
    if (b_FsrPhoton_muonIdx_) { b_FsrPhoton_muonIdx_->SetAddress(&FsrPhoton_muonIdx_); }
    b_FsrPhoton_phi_ = tree->GetBranch("FsrPhoton_phi");
    if (b_FsrPhoton_phi_) { b_FsrPhoton_phi_->SetAddress(&FsrPhoton_phi_); }
    b_FsrPhoton_pt_ = tree->GetBranch("FsrPhoton_pt");
    if (b_FsrPhoton_pt_) { b_FsrPhoton_pt_->SetAddress(&FsrPhoton_pt_); }
    b_FsrPhoton_relIso03_ = tree->GetBranch("FsrPhoton_relIso03");
    if (b_FsrPhoton_relIso03_) { b_FsrPhoton_relIso03_->SetAddress(&FsrPhoton_relIso03_); }
    b_GenDressedLepton_eta_ = tree->GetBranch("GenDressedLepton_eta");
    if (b_GenDressedLepton_eta_) { b_GenDressedLepton_eta_->SetAddress(&GenDressedLepton_eta_); }
    b_GenDressedLepton_hasTauAnc_ = tree->GetBranch("GenDressedLepton_hasTauAnc");
    if (b_GenDressedLepton_hasTauAnc_) { b_GenDressedLepton_hasTauAnc_->SetAddress(&GenDressedLepton_hasTauAnc_); }
    b_GenDressedLepton_mass_ = tree->GetBranch("GenDressedLepton_mass");
    if (b_GenDressedLepton_mass_) { b_GenDressedLepton_mass_->SetAddress(&GenDressedLepton_mass_); }
    b_GenDressedLepton_pdgId_ = tree->GetBranch("GenDressedLepton_pdgId");
    if (b_GenDressedLepton_pdgId_) { b_GenDressedLepton_pdgId_->SetAddress(&GenDressedLepton_pdgId_); }
    b_GenDressedLepton_phi_ = tree->GetBranch("GenDressedLepton_phi");
    if (b_GenDressedLepton_phi_) { b_GenDressedLepton_phi_->SetAddress(&GenDressedLepton_phi_); }
    b_GenDressedLepton_pt_ = tree->GetBranch("GenDressedLepton_pt");
    if (b_GenDressedLepton_pt_) { b_GenDressedLepton_pt_->SetAddress(&GenDressedLepton_pt_); }
    b_GenIsolatedPhoton_eta_ = tree->GetBranch("GenIsolatedPhoton_eta");
    if (b_GenIsolatedPhoton_eta_) { b_GenIsolatedPhoton_eta_->SetAddress(&GenIsolatedPhoton_eta_); }
    b_GenIsolatedPhoton_mass_ = tree->GetBranch("GenIsolatedPhoton_mass");
    if (b_GenIsolatedPhoton_mass_) { b_GenIsolatedPhoton_mass_->SetAddress(&GenIsolatedPhoton_mass_); }
    b_GenIsolatedPhoton_phi_ = tree->GetBranch("GenIsolatedPhoton_phi");
    if (b_GenIsolatedPhoton_phi_) { b_GenIsolatedPhoton_phi_->SetAddress(&GenIsolatedPhoton_phi_); }
    b_GenIsolatedPhoton_pt_ = tree->GetBranch("GenIsolatedPhoton_pt");
    if (b_GenIsolatedPhoton_pt_) { b_GenIsolatedPhoton_pt_->SetAddress(&GenIsolatedPhoton_pt_); }
    b_GenJetAK8_eta_ = tree->GetBranch("GenJetAK8_eta");
    if (b_GenJetAK8_eta_) { b_GenJetAK8_eta_->SetAddress(&GenJetAK8_eta_); }
    b_GenJetAK8_hadronFlavour_ = tree->GetBranch("GenJetAK8_hadronFlavour");
    if (b_GenJetAK8_hadronFlavour_) { b_GenJetAK8_hadronFlavour_->SetAddress(&GenJetAK8_hadronFlavour_); }
    b_GenJetAK8_mass_ = tree->GetBranch("GenJetAK8_mass");
    if (b_GenJetAK8_mass_) { b_GenJetAK8_mass_->SetAddress(&GenJetAK8_mass_); }
    b_GenJetAK8_partonFlavour_ = tree->GetBranch("GenJetAK8_partonFlavour");
    if (b_GenJetAK8_partonFlavour_) { b_GenJetAK8_partonFlavour_->SetAddress(&GenJetAK8_partonFlavour_); }
    b_GenJetAK8_phi_ = tree->GetBranch("GenJetAK8_phi");
    if (b_GenJetAK8_phi_) { b_GenJetAK8_phi_->SetAddress(&GenJetAK8_phi_); }
    b_GenJetAK8_pt_ = tree->GetBranch("GenJetAK8_pt");
    if (b_GenJetAK8_pt_) { b_GenJetAK8_pt_->SetAddress(&GenJetAK8_pt_); }
    b_GenJet_eta_ = tree->GetBranch("GenJet_eta");
    if (b_GenJet_eta_) { b_GenJet_eta_->SetAddress(&GenJet_eta_); }
    b_GenJet_hadronFlavour_ = tree->GetBranch("GenJet_hadronFlavour");
    if (b_GenJet_hadronFlavour_) { b_GenJet_hadronFlavour_->SetAddress(&GenJet_hadronFlavour_); }
    b_GenJet_mass_ = tree->GetBranch("GenJet_mass");
    if (b_GenJet_mass_) { b_GenJet_mass_->SetAddress(&GenJet_mass_); }
    b_GenJet_partonFlavour_ = tree->GetBranch("GenJet_partonFlavour");
    if (b_GenJet_partonFlavour_) { b_GenJet_partonFlavour_->SetAddress(&GenJet_partonFlavour_); }
    b_GenJet_phi_ = tree->GetBranch("GenJet_phi");
    if (b_GenJet_phi_) { b_GenJet_phi_->SetAddress(&GenJet_phi_); }
    b_GenJet_pt_ = tree->GetBranch("GenJet_pt");
    if (b_GenJet_pt_) { b_GenJet_pt_->SetAddress(&GenJet_pt_); }
    b_GenMET_phi_ = tree->GetBranch("GenMET_phi");
    if (b_GenMET_phi_) { b_GenMET_phi_->SetAddress(&GenMET_phi_); }
    b_GenMET_pt_ = tree->GetBranch("GenMET_pt");
    if (b_GenMET_pt_) { b_GenMET_pt_->SetAddress(&GenMET_pt_); }
    b_GenPart_eta_ = tree->GetBranch("GenPart_eta");
    if (b_GenPart_eta_) { b_GenPart_eta_->SetAddress(&GenPart_eta_); }
    b_GenPart_genPartIdxMother_ = tree->GetBranch("GenPart_genPartIdxMother");
    if (b_GenPart_genPartIdxMother_) { b_GenPart_genPartIdxMother_->SetAddress(&GenPart_genPartIdxMother_); }
    b_GenPart_mass_ = tree->GetBranch("GenPart_mass");
    if (b_GenPart_mass_) { b_GenPart_mass_->SetAddress(&GenPart_mass_); }
    b_GenPart_pdgId_ = tree->GetBranch("GenPart_pdgId");
    if (b_GenPart_pdgId_) { b_GenPart_pdgId_->SetAddress(&GenPart_pdgId_); }
    b_GenPart_phi_ = tree->GetBranch("GenPart_phi");
    if (b_GenPart_phi_) { b_GenPart_phi_->SetAddress(&GenPart_phi_); }
    b_GenPart_pt_ = tree->GetBranch("GenPart_pt");
    if (b_GenPart_pt_) { b_GenPart_pt_->SetAddress(&GenPart_pt_); }
    b_GenPart_status_ = tree->GetBranch("GenPart_status");
    if (b_GenPart_status_) { b_GenPart_status_->SetAddress(&GenPart_status_); }
    b_GenPart_statusFlags_ = tree->GetBranch("GenPart_statusFlags");
    if (b_GenPart_statusFlags_) { b_GenPart_statusFlags_->SetAddress(&GenPart_statusFlags_); }
    b_GenVisTau_charge_ = tree->GetBranch("GenVisTau_charge");
    if (b_GenVisTau_charge_) { b_GenVisTau_charge_->SetAddress(&GenVisTau_charge_); }
    b_GenVisTau_eta_ = tree->GetBranch("GenVisTau_eta");
    if (b_GenVisTau_eta_) { b_GenVisTau_eta_->SetAddress(&GenVisTau_eta_); }
    b_GenVisTau_genPartIdxMother_ = tree->GetBranch("GenVisTau_genPartIdxMother");
    if (b_GenVisTau_genPartIdxMother_) { b_GenVisTau_genPartIdxMother_->SetAddress(&GenVisTau_genPartIdxMother_); }
    b_GenVisTau_mass_ = tree->GetBranch("GenVisTau_mass");
    if (b_GenVisTau_mass_) { b_GenVisTau_mass_->SetAddress(&GenVisTau_mass_); }
    b_GenVisTau_phi_ = tree->GetBranch("GenVisTau_phi");
    if (b_GenVisTau_phi_) { b_GenVisTau_phi_->SetAddress(&GenVisTau_phi_); }
    b_GenVisTau_pt_ = tree->GetBranch("GenVisTau_pt");
    if (b_GenVisTau_pt_) { b_GenVisTau_pt_->SetAddress(&GenVisTau_pt_); }
    b_GenVisTau_status_ = tree->GetBranch("GenVisTau_status");
    if (b_GenVisTau_status_) { b_GenVisTau_status_->SetAddress(&GenVisTau_status_); }
    b_Generator_binvar_ = tree->GetBranch("Generator_binvar");
    if (b_Generator_binvar_) { b_Generator_binvar_->SetAddress(&Generator_binvar_); }
    b_Generator_id1_ = tree->GetBranch("Generator_id1");
    if (b_Generator_id1_) { b_Generator_id1_->SetAddress(&Generator_id1_); }
    b_Generator_id2_ = tree->GetBranch("Generator_id2");
    if (b_Generator_id2_) { b_Generator_id2_->SetAddress(&Generator_id2_); }
    b_Generator_scalePDF_ = tree->GetBranch("Generator_scalePDF");
    if (b_Generator_scalePDF_) { b_Generator_scalePDF_->SetAddress(&Generator_scalePDF_); }
    b_Generator_weight_ = tree->GetBranch("Generator_weight");
    if (b_Generator_weight_) { b_Generator_weight_->SetAddress(&Generator_weight_); }
    b_Generator_x1_ = tree->GetBranch("Generator_x1");
    if (b_Generator_x1_) { b_Generator_x1_->SetAddress(&Generator_x1_); }
    b_Generator_x2_ = tree->GetBranch("Generator_x2");
    if (b_Generator_x2_) { b_Generator_x2_->SetAddress(&Generator_x2_); }
    b_Generator_xpdf1_ = tree->GetBranch("Generator_xpdf1");
    if (b_Generator_xpdf1_) { b_Generator_xpdf1_->SetAddress(&Generator_xpdf1_); }
    b_Generator_xpdf2_ = tree->GetBranch("Generator_xpdf2");
    if (b_Generator_xpdf2_) { b_Generator_xpdf2_->SetAddress(&Generator_xpdf2_); }
    b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_ = tree->GetBranch("HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55");
    if (b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_) { b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_->SetAddress(&HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_); }
    b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_ = tree->GetBranch("HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55");
    if (b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_) { b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_->SetAddress(&HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_); }
    b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_ = tree->GetBranch("HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55");
    if (b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_) { b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_->SetAddress(&HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_); }
    b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_ = tree->GetBranch("HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55");
    if (b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_) { b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_->SetAddress(&HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_); }
    b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_ = tree->GetBranch("HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55");
    if (b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_) { b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_->SetAddress(&HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_); }
    b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_ = tree->GetBranch("HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55");
    if (b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_) { b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_->SetAddress(&HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_); }
    b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_ = tree->GetBranch("HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55");
    if (b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_) { b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_->SetAddress(&HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_); }
    b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_ = tree->GetBranch("HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55");
    if (b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_) { b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_->SetAddress(&HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_); }
    b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_ = tree->GetBranch("HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto");
    if (b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_) { b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_->SetAddress(&HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_); }
    b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55_ = tree->GetBranch("HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55");
    if (b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55_) { b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55_->SetAddress(&HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55_); }
    b_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70_ = tree->GetBranch("HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70");
    if (b_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70_) { b_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70_->SetAddress(&HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70_); }
    b_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_ = tree->GetBranch("HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90");
    if (b_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_) { b_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_->SetAddress(&HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_); }
    b_HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55_ = tree->GetBranch("HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55");
    if (b_HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55_) { b_HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55_->SetAddress(&HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55_); }
    b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_ = tree->GetBranch("HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90");
    if (b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_) { b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_->SetAddress(&HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_); }
    b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_ = tree->GetBranch("HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95");
    if (b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_) { b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_->SetAddress(&HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_); }
    b_HLT_DoubleMu20_7_Mass0to30_Photon23_ = tree->GetBranch("HLT_DoubleMu20_7_Mass0to30_Photon23");
    if (b_HLT_DoubleMu20_7_Mass0to30_Photon23_) { b_HLT_DoubleMu20_7_Mass0to30_Photon23_->SetAddress(&HLT_DoubleMu20_7_Mass0to30_Photon23_); }
    b_HLT_DoublePhoton33_CaloIdL_ = tree->GetBranch("HLT_DoublePhoton33_CaloIdL");
    if (b_HLT_DoublePhoton33_CaloIdL_) { b_HLT_DoublePhoton33_CaloIdL_->SetAddress(&HLT_DoublePhoton33_CaloIdL_); }
    b_HLT_DoublePhoton60_ = tree->GetBranch("HLT_DoublePhoton60");
    if (b_HLT_DoublePhoton60_) { b_HLT_DoublePhoton60_->SetAddress(&HLT_DoublePhoton60_); }
    b_HLT_DoublePhoton70_ = tree->GetBranch("HLT_DoublePhoton70");
    if (b_HLT_DoublePhoton70_) { b_HLT_DoublePhoton70_->SetAddress(&HLT_DoublePhoton70_); }
    b_HLT_DoublePhoton85_ = tree->GetBranch("HLT_DoublePhoton85");
    if (b_HLT_DoublePhoton85_) { b_HLT_DoublePhoton85_->SetAddress(&HLT_DoublePhoton85_); }
    b_HLT_HISinglePhoton10_ = tree->GetBranch("HLT_HISinglePhoton10");
    if (b_HLT_HISinglePhoton10_) { b_HLT_HISinglePhoton10_->SetAddress(&HLT_HISinglePhoton10_); }
    b_HLT_HISinglePhoton10_Eta3p1ForPPRef_ = tree->GetBranch("HLT_HISinglePhoton10_Eta3p1ForPPRef");
    if (b_HLT_HISinglePhoton10_Eta3p1ForPPRef_) { b_HLT_HISinglePhoton10_Eta3p1ForPPRef_->SetAddress(&HLT_HISinglePhoton10_Eta3p1ForPPRef_); }
    b_HLT_HISinglePhoton15_ = tree->GetBranch("HLT_HISinglePhoton15");
    if (b_HLT_HISinglePhoton15_) { b_HLT_HISinglePhoton15_->SetAddress(&HLT_HISinglePhoton15_); }
    b_HLT_HISinglePhoton20_ = tree->GetBranch("HLT_HISinglePhoton20");
    if (b_HLT_HISinglePhoton20_) { b_HLT_HISinglePhoton20_->SetAddress(&HLT_HISinglePhoton20_); }
    b_HLT_HISinglePhoton20_Eta3p1ForPPRef_ = tree->GetBranch("HLT_HISinglePhoton20_Eta3p1ForPPRef");
    if (b_HLT_HISinglePhoton20_Eta3p1ForPPRef_) { b_HLT_HISinglePhoton20_Eta3p1ForPPRef_->SetAddress(&HLT_HISinglePhoton20_Eta3p1ForPPRef_); }
    b_HLT_HISinglePhoton30_Eta3p1ForPPRef_ = tree->GetBranch("HLT_HISinglePhoton30_Eta3p1ForPPRef");
    if (b_HLT_HISinglePhoton30_Eta3p1ForPPRef_) { b_HLT_HISinglePhoton30_Eta3p1ForPPRef_->SetAddress(&HLT_HISinglePhoton30_Eta3p1ForPPRef_); }
    b_HLT_HISinglePhoton40_ = tree->GetBranch("HLT_HISinglePhoton40");
    if (b_HLT_HISinglePhoton40_) { b_HLT_HISinglePhoton40_->SetAddress(&HLT_HISinglePhoton40_); }
    b_HLT_HISinglePhoton40_Eta3p1ForPPRef_ = tree->GetBranch("HLT_HISinglePhoton40_Eta3p1ForPPRef");
    if (b_HLT_HISinglePhoton40_Eta3p1ForPPRef_) { b_HLT_HISinglePhoton40_Eta3p1ForPPRef_->SetAddress(&HLT_HISinglePhoton40_Eta3p1ForPPRef_); }
    b_HLT_HISinglePhoton50_Eta3p1ForPPRef_ = tree->GetBranch("HLT_HISinglePhoton50_Eta3p1ForPPRef");
    if (b_HLT_HISinglePhoton50_Eta3p1ForPPRef_) { b_HLT_HISinglePhoton50_Eta3p1ForPPRef_->SetAddress(&HLT_HISinglePhoton50_Eta3p1ForPPRef_); }
    b_HLT_HISinglePhoton60_ = tree->GetBranch("HLT_HISinglePhoton60");
    if (b_HLT_HISinglePhoton60_) { b_HLT_HISinglePhoton60_->SetAddress(&HLT_HISinglePhoton60_); }
    b_HLT_HISinglePhoton60_Eta3p1ForPPRef_ = tree->GetBranch("HLT_HISinglePhoton60_Eta3p1ForPPRef");
    if (b_HLT_HISinglePhoton60_Eta3p1ForPPRef_) { b_HLT_HISinglePhoton60_Eta3p1ForPPRef_->SetAddress(&HLT_HISinglePhoton60_Eta3p1ForPPRef_); }
    b_HLT_Mu12_DoublePhoton20_ = tree->GetBranch("HLT_Mu12_DoublePhoton20");
    if (b_HLT_Mu12_DoublePhoton20_) { b_HLT_Mu12_DoublePhoton20_->SetAddress(&HLT_Mu12_DoublePhoton20_); }
    b_HLT_Mu12_Photon25_CaloIdL_ = tree->GetBranch("HLT_Mu12_Photon25_CaloIdL");
    if (b_HLT_Mu12_Photon25_CaloIdL_) { b_HLT_Mu12_Photon25_CaloIdL_->SetAddress(&HLT_Mu12_Photon25_CaloIdL_); }
    b_HLT_Mu12_Photon25_CaloIdL_L1ISO_ = tree->GetBranch("HLT_Mu12_Photon25_CaloIdL_L1ISO");
    if (b_HLT_Mu12_Photon25_CaloIdL_L1ISO_) { b_HLT_Mu12_Photon25_CaloIdL_L1ISO_->SetAddress(&HLT_Mu12_Photon25_CaloIdL_L1ISO_); }
    b_HLT_Mu12_Photon25_CaloIdL_L1OR_ = tree->GetBranch("HLT_Mu12_Photon25_CaloIdL_L1OR");
    if (b_HLT_Mu12_Photon25_CaloIdL_L1OR_) { b_HLT_Mu12_Photon25_CaloIdL_L1OR_->SetAddress(&HLT_Mu12_Photon25_CaloIdL_L1OR_); }
    b_HLT_Mu17_Photon22_CaloIdL_L1ISO_ = tree->GetBranch("HLT_Mu17_Photon22_CaloIdL_L1ISO");
    if (b_HLT_Mu17_Photon22_CaloIdL_L1ISO_) { b_HLT_Mu17_Photon22_CaloIdL_L1ISO_->SetAddress(&HLT_Mu17_Photon22_CaloIdL_L1ISO_); }
    b_HLT_Mu17_Photon30_CaloIdL_L1ISO_ = tree->GetBranch("HLT_Mu17_Photon30_CaloIdL_L1ISO");
    if (b_HLT_Mu17_Photon30_CaloIdL_L1ISO_) { b_HLT_Mu17_Photon30_CaloIdL_L1ISO_->SetAddress(&HLT_Mu17_Photon30_CaloIdL_L1ISO_); }
    b_HLT_Mu17_Photon30_IsoCaloId_ = tree->GetBranch("HLT_Mu17_Photon30_IsoCaloId");
    if (b_HLT_Mu17_Photon30_IsoCaloId_) { b_HLT_Mu17_Photon30_IsoCaloId_->SetAddress(&HLT_Mu17_Photon30_IsoCaloId_); }
    b_HLT_Mu17_Photon35_CaloIdL_L1ISO_ = tree->GetBranch("HLT_Mu17_Photon35_CaloIdL_L1ISO");
    if (b_HLT_Mu17_Photon35_CaloIdL_L1ISO_) { b_HLT_Mu17_Photon35_CaloIdL_L1ISO_->SetAddress(&HLT_Mu17_Photon35_CaloIdL_L1ISO_); }
    b_HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL_ = tree->GetBranch("HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL");
    if (b_HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL_) { b_HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL_->SetAddress(&HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL_); }
    b_HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL_ = tree->GetBranch("HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL");
    if (b_HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL_) { b_HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL_->SetAddress(&HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL_); }
    b_HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL_ = tree->GetBranch("HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL");
    if (b_HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL_) { b_HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL_->SetAddress(&HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL_); }
    b_HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL_ = tree->GetBranch("HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL");
    if (b_HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL_) { b_HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL_->SetAddress(&HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL_); }
    b_HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL_ = tree->GetBranch("HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL");
    if (b_HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL_) { b_HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL_->SetAddress(&HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL_); }
    b_HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL_ = tree->GetBranch("HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL");
    if (b_HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL_) { b_HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL_->SetAddress(&HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL_); }
    b_HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL_ = tree->GetBranch("HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL");
    if (b_HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL_) { b_HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL_->SetAddress(&HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL_); }
    b_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_ = tree->GetBranch("HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL");
    if (b_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_) { b_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_->SetAddress(&HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_); }
    b_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_ = tree->GetBranch("HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL");
    if (b_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_) { b_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_->SetAddress(&HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_); }
    b_HLT_Photon100EBHE10_ = tree->GetBranch("HLT_Photon100EBHE10");
    if (b_HLT_Photon100EBHE10_) { b_HLT_Photon100EBHE10_->SetAddress(&HLT_Photon100EBHE10_); }
    b_HLT_Photon100EB_TightID_TightIso_ = tree->GetBranch("HLT_Photon100EB_TightID_TightIso");
    if (b_HLT_Photon100EB_TightID_TightIso_) { b_HLT_Photon100EB_TightID_TightIso_->SetAddress(&HLT_Photon100EB_TightID_TightIso_); }
    b_HLT_Photon100EEHE10_ = tree->GetBranch("HLT_Photon100EEHE10");
    if (b_HLT_Photon100EEHE10_) { b_HLT_Photon100EEHE10_->SetAddress(&HLT_Photon100EEHE10_); }
    b_HLT_Photon100EE_TightID_TightIso_ = tree->GetBranch("HLT_Photon100EE_TightID_TightIso");
    if (b_HLT_Photon100EE_TightID_TightIso_) { b_HLT_Photon100EE_TightID_TightIso_->SetAddress(&HLT_Photon100EE_TightID_TightIso_); }
    b_HLT_Photon110EB_TightID_TightIso_ = tree->GetBranch("HLT_Photon110EB_TightID_TightIso");
    if (b_HLT_Photon110EB_TightID_TightIso_) { b_HLT_Photon110EB_TightID_TightIso_->SetAddress(&HLT_Photon110EB_TightID_TightIso_); }
    b_HLT_Photon120_ = tree->GetBranch("HLT_Photon120");
    if (b_HLT_Photon120_) { b_HLT_Photon120_->SetAddress(&HLT_Photon120_); }
    b_HLT_Photon120EB_TightID_TightIso_ = tree->GetBranch("HLT_Photon120EB_TightID_TightIso");
    if (b_HLT_Photon120EB_TightID_TightIso_) { b_HLT_Photon120EB_TightID_TightIso_->SetAddress(&HLT_Photon120EB_TightID_TightIso_); }
    b_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40_ = tree->GetBranch("HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40");
    if (b_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40_) { b_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40_->SetAddress(&HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40_); }
    b_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF_ = tree->GetBranch("HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF");
    if (b_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF_) { b_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF_->SetAddress(&HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF_); }
    b_HLT_Photon120_R9Id90_HE10_IsoM_ = tree->GetBranch("HLT_Photon120_R9Id90_HE10_IsoM");
    if (b_HLT_Photon120_R9Id90_HE10_IsoM_) { b_HLT_Photon120_R9Id90_HE10_IsoM_->SetAddress(&HLT_Photon120_R9Id90_HE10_IsoM_); }
    b_HLT_Photon125_ = tree->GetBranch("HLT_Photon125");
    if (b_HLT_Photon125_) { b_HLT_Photon125_->SetAddress(&HLT_Photon125_); }
    b_HLT_Photon135_PFMET100_ = tree->GetBranch("HLT_Photon135_PFMET100");
    if (b_HLT_Photon135_PFMET100_) { b_HLT_Photon135_PFMET100_->SetAddress(&HLT_Photon135_PFMET100_); }
    b_HLT_Photon150_ = tree->GetBranch("HLT_Photon150");
    if (b_HLT_Photon150_) { b_HLT_Photon150_->SetAddress(&HLT_Photon150_); }
    b_HLT_Photon165_HE10_ = tree->GetBranch("HLT_Photon165_HE10");
    if (b_HLT_Photon165_HE10_) { b_HLT_Photon165_HE10_->SetAddress(&HLT_Photon165_HE10_); }
    b_HLT_Photon165_R9Id90_HE10_IsoM_ = tree->GetBranch("HLT_Photon165_R9Id90_HE10_IsoM");
    if (b_HLT_Photon165_R9Id90_HE10_IsoM_) { b_HLT_Photon165_R9Id90_HE10_IsoM_->SetAddress(&HLT_Photon165_R9Id90_HE10_IsoM_); }
    b_HLT_Photon175_ = tree->GetBranch("HLT_Photon175");
    if (b_HLT_Photon175_) { b_HLT_Photon175_->SetAddress(&HLT_Photon175_); }
    b_HLT_Photon20_ = tree->GetBranch("HLT_Photon20");
    if (b_HLT_Photon20_) { b_HLT_Photon20_->SetAddress(&HLT_Photon20_); }
    b_HLT_Photon200_ = tree->GetBranch("HLT_Photon200");
    if (b_HLT_Photon200_) { b_HLT_Photon200_->SetAddress(&HLT_Photon200_); }
    b_HLT_Photon20_CaloIdVL_IsoL_ = tree->GetBranch("HLT_Photon20_CaloIdVL_IsoL");
    if (b_HLT_Photon20_CaloIdVL_IsoL_) { b_HLT_Photon20_CaloIdVL_IsoL_->SetAddress(&HLT_Photon20_CaloIdVL_IsoL_); }
    b_HLT_Photon20_HoverELoose_ = tree->GetBranch("HLT_Photon20_HoverELoose");
    if (b_HLT_Photon20_HoverELoose_) { b_HLT_Photon20_HoverELoose_->SetAddress(&HLT_Photon20_HoverELoose_); }
    b_HLT_Photon22_ = tree->GetBranch("HLT_Photon22");
    if (b_HLT_Photon22_) { b_HLT_Photon22_->SetAddress(&HLT_Photon22_); }
    b_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40_ = tree->GetBranch("HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40");
    if (b_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40_) { b_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40_->SetAddress(&HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40_); }
    b_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF_ = tree->GetBranch("HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF");
    if (b_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF_) { b_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF_->SetAddress(&HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF_); }
    b_HLT_Photon22_R9Id90_HE10_IsoM_ = tree->GetBranch("HLT_Photon22_R9Id90_HE10_IsoM");
    if (b_HLT_Photon22_R9Id90_HE10_IsoM_) { b_HLT_Photon22_R9Id90_HE10_IsoM_->SetAddress(&HLT_Photon22_R9Id90_HE10_IsoM_); }
    b_HLT_Photon25_ = tree->GetBranch("HLT_Photon25");
    if (b_HLT_Photon25_) { b_HLT_Photon25_->SetAddress(&HLT_Photon25_); }
    b_HLT_Photon250_NoHE_ = tree->GetBranch("HLT_Photon250_NoHE");
    if (b_HLT_Photon250_NoHE_) { b_HLT_Photon250_NoHE_->SetAddress(&HLT_Photon250_NoHE_); }
    b_HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60_ = tree->GetBranch("HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60");
    if (b_HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60_) { b_HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60_->SetAddress(&HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60_); }
    b_HLT_Photon30_ = tree->GetBranch("HLT_Photon30");
    if (b_HLT_Photon30_) { b_HLT_Photon30_->SetAddress(&HLT_Photon30_); }
    b_HLT_Photon300_NoHE_ = tree->GetBranch("HLT_Photon300_NoHE");
    if (b_HLT_Photon300_NoHE_) { b_HLT_Photon300_NoHE_->SetAddress(&HLT_Photon300_NoHE_); }
    b_HLT_Photon30_HoverELoose_ = tree->GetBranch("HLT_Photon30_HoverELoose");
    if (b_HLT_Photon30_HoverELoose_) { b_HLT_Photon30_HoverELoose_->SetAddress(&HLT_Photon30_HoverELoose_); }
    b_HLT_Photon30_R9Id90_HE10_IsoM_ = tree->GetBranch("HLT_Photon30_R9Id90_HE10_IsoM");
    if (b_HLT_Photon30_R9Id90_HE10_IsoM_) { b_HLT_Photon30_R9Id90_HE10_IsoM_->SetAddress(&HLT_Photon30_R9Id90_HE10_IsoM_); }
    b_HLT_Photon33_ = tree->GetBranch("HLT_Photon33");
    if (b_HLT_Photon33_) { b_HLT_Photon33_->SetAddress(&HLT_Photon33_); }
    b_HLT_Photon35_TwoProngs35_ = tree->GetBranch("HLT_Photon35_TwoProngs35");
    if (b_HLT_Photon35_TwoProngs35_) { b_HLT_Photon35_TwoProngs35_->SetAddress(&HLT_Photon35_TwoProngs35_); }
    b_HLT_Photon36_ = tree->GetBranch("HLT_Photon36");
    if (b_HLT_Photon36_) { b_HLT_Photon36_->SetAddress(&HLT_Photon36_); }
    b_HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15_ = tree->GetBranch("HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15");
    if (b_HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15_) { b_HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15_->SetAddress(&HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15_); }
    b_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40_ = tree->GetBranch("HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40");
    if (b_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40_) { b_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40_->SetAddress(&HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40_); }
    b_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF_ = tree->GetBranch("HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF");
    if (b_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF_) { b_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF_->SetAddress(&HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF_); }
    b_HLT_Photon36_R9Id90_HE10_IsoM_ = tree->GetBranch("HLT_Photon36_R9Id90_HE10_IsoM");
    if (b_HLT_Photon36_R9Id90_HE10_IsoM_) { b_HLT_Photon36_R9Id90_HE10_IsoM_->SetAddress(&HLT_Photon36_R9Id90_HE10_IsoM_); }
    b_HLT_Photon40_HoverELoose_ = tree->GetBranch("HLT_Photon40_HoverELoose");
    if (b_HLT_Photon40_HoverELoose_) { b_HLT_Photon40_HoverELoose_->SetAddress(&HLT_Photon40_HoverELoose_); }
    b_HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15_ = tree->GetBranch("HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15");
    if (b_HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15_) { b_HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15_->SetAddress(&HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15_); }
    b_HLT_Photon50_ = tree->GetBranch("HLT_Photon50");
    if (b_HLT_Photon50_) { b_HLT_Photon50_->SetAddress(&HLT_Photon50_); }
    b_HLT_Photon500_ = tree->GetBranch("HLT_Photon500");
    if (b_HLT_Photon500_) { b_HLT_Photon500_->SetAddress(&HLT_Photon500_); }
    b_HLT_Photon50_HoverELoose_ = tree->GetBranch("HLT_Photon50_HoverELoose");
    if (b_HLT_Photon50_HoverELoose_) { b_HLT_Photon50_HoverELoose_->SetAddress(&HLT_Photon50_HoverELoose_); }
    b_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40_ = tree->GetBranch("HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40");
    if (b_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40_) { b_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40_->SetAddress(&HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40_); }
    b_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF_ = tree->GetBranch("HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF");
    if (b_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF_) { b_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF_->SetAddress(&HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF_); }
    b_HLT_Photon50_R9Id90_HE10_IsoM_ = tree->GetBranch("HLT_Photon50_R9Id90_HE10_IsoM");
    if (b_HLT_Photon50_R9Id90_HE10_IsoM_) { b_HLT_Photon50_R9Id90_HE10_IsoM_->SetAddress(&HLT_Photon50_R9Id90_HE10_IsoM_); }
    b_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_ = tree->GetBranch("HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50");
    if (b_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_) { b_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_->SetAddress(&HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_); }
    b_HLT_Photon600_ = tree->GetBranch("HLT_Photon600");
    if (b_HLT_Photon600_) { b_HLT_Photon600_->SetAddress(&HLT_Photon600_); }
    b_HLT_Photon60_HoverELoose_ = tree->GetBranch("HLT_Photon60_HoverELoose");
    if (b_HLT_Photon60_HoverELoose_) { b_HLT_Photon60_HoverELoose_->SetAddress(&HLT_Photon60_HoverELoose_); }
    b_HLT_Photon60_R9Id90_CaloIdL_IsoL_ = tree->GetBranch("HLT_Photon60_R9Id90_CaloIdL_IsoL");
    if (b_HLT_Photon60_R9Id90_CaloIdL_IsoL_) { b_HLT_Photon60_R9Id90_CaloIdL_IsoL_->SetAddress(&HLT_Photon60_R9Id90_CaloIdL_IsoL_); }
    b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_ = tree->GetBranch("HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL");
    if (b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_) { b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_->SetAddress(&HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_); }
    b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_ = tree->GetBranch("HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15");
    if (b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_) { b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_->SetAddress(&HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_); }
    b_HLT_Photon75_ = tree->GetBranch("HLT_Photon75");
    if (b_HLT_Photon75_) { b_HLT_Photon75_->SetAddress(&HLT_Photon75_); }
    b_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40_ = tree->GetBranch("HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40");
    if (b_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40_) { b_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40_->SetAddress(&HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40_); }
    b_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF_ = tree->GetBranch("HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF");
    if (b_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF_) { b_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF_->SetAddress(&HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF_); }
    b_HLT_Photon75_R9Id90_HE10_IsoM_ = tree->GetBranch("HLT_Photon75_R9Id90_HE10_IsoM");
    if (b_HLT_Photon75_R9Id90_HE10_IsoM_) { b_HLT_Photon75_R9Id90_HE10_IsoM_->SetAddress(&HLT_Photon75_R9Id90_HE10_IsoM_); }
    b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3_ = tree->GetBranch("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3");
    if (b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3_) { b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3_->SetAddress(&HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3_); }
    b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3_ = tree->GetBranch("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3");
    if (b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3_) { b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3_->SetAddress(&HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3_); }
    b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_ = tree->GetBranch("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3");
    if (b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_) { b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_->SetAddress(&HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_); }
    b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_ = tree->GetBranch("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3");
    if (b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_) { b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_->SetAddress(&HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_); }
    b_HLT_Photon90_ = tree->GetBranch("HLT_Photon90");
    if (b_HLT_Photon90_) { b_HLT_Photon90_->SetAddress(&HLT_Photon90_); }
    b_HLT_Photon90_CaloIdL_HT300_ = tree->GetBranch("HLT_Photon90_CaloIdL_HT300");
    if (b_HLT_Photon90_CaloIdL_HT300_) { b_HLT_Photon90_CaloIdL_HT300_->SetAddress(&HLT_Photon90_CaloIdL_HT300_); }
    b_HLT_Photon90_CaloIdL_PFHT500_ = tree->GetBranch("HLT_Photon90_CaloIdL_PFHT500");
    if (b_HLT_Photon90_CaloIdL_PFHT500_) { b_HLT_Photon90_CaloIdL_PFHT500_->SetAddress(&HLT_Photon90_CaloIdL_PFHT500_); }
    b_HLT_Photon90_CaloIdL_PFHT600_ = tree->GetBranch("HLT_Photon90_CaloIdL_PFHT600");
    if (b_HLT_Photon90_CaloIdL_PFHT600_) { b_HLT_Photon90_CaloIdL_PFHT600_->SetAddress(&HLT_Photon90_CaloIdL_PFHT600_); }
    b_HLT_Photon90_CaloIdL_PFHT700_ = tree->GetBranch("HLT_Photon90_CaloIdL_PFHT700");
    if (b_HLT_Photon90_CaloIdL_PFHT700_) { b_HLT_Photon90_CaloIdL_PFHT700_->SetAddress(&HLT_Photon90_CaloIdL_PFHT700_); }
    b_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40_ = tree->GetBranch("HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40");
    if (b_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40_) { b_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40_->SetAddress(&HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40_); }
    b_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF_ = tree->GetBranch("HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF");
    if (b_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF_) { b_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF_->SetAddress(&HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF_); }
    b_HLT_Photon90_R9Id90_HE10_IsoM_ = tree->GetBranch("HLT_Photon90_R9Id90_HE10_IsoM");
    if (b_HLT_Photon90_R9Id90_HE10_IsoM_) { b_HLT_Photon90_R9Id90_HE10_IsoM_->SetAddress(&HLT_Photon90_R9Id90_HE10_IsoM_); }
    b_HLT_SinglePhoton10_Eta3p1ForPPRef_ = tree->GetBranch("HLT_SinglePhoton10_Eta3p1ForPPRef");
    if (b_HLT_SinglePhoton10_Eta3p1ForPPRef_) { b_HLT_SinglePhoton10_Eta3p1ForPPRef_->SetAddress(&HLT_SinglePhoton10_Eta3p1ForPPRef_); }
    b_HLT_SinglePhoton20_Eta3p1ForPPRef_ = tree->GetBranch("HLT_SinglePhoton20_Eta3p1ForPPRef");
    if (b_HLT_SinglePhoton20_Eta3p1ForPPRef_) { b_HLT_SinglePhoton20_Eta3p1ForPPRef_->SetAddress(&HLT_SinglePhoton20_Eta3p1ForPPRef_); }
    b_HLT_SinglePhoton30_Eta3p1ForPPRef_ = tree->GetBranch("HLT_SinglePhoton30_Eta3p1ForPPRef");
    if (b_HLT_SinglePhoton30_Eta3p1ForPPRef_) { b_HLT_SinglePhoton30_Eta3p1ForPPRef_->SetAddress(&HLT_SinglePhoton30_Eta3p1ForPPRef_); }
    b_HLT_TriplePhoton_20_20_20_CaloIdLV2_ = tree->GetBranch("HLT_TriplePhoton_20_20_20_CaloIdLV2");
    if (b_HLT_TriplePhoton_20_20_20_CaloIdLV2_) { b_HLT_TriplePhoton_20_20_20_CaloIdLV2_->SetAddress(&HLT_TriplePhoton_20_20_20_CaloIdLV2_); }
    b_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_ = tree->GetBranch("HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL");
    if (b_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_) { b_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_->SetAddress(&HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_); }
    b_HLT_TriplePhoton_30_30_10_CaloIdLV2_ = tree->GetBranch("HLT_TriplePhoton_30_30_10_CaloIdLV2");
    if (b_HLT_TriplePhoton_30_30_10_CaloIdLV2_) { b_HLT_TriplePhoton_30_30_10_CaloIdLV2_->SetAddress(&HLT_TriplePhoton_30_30_10_CaloIdLV2_); }
    b_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_ = tree->GetBranch("HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL");
    if (b_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_) { b_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_->SetAddress(&HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_); }
    b_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_ = tree->GetBranch("HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL");
    if (b_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_) { b_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_->SetAddress(&HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_); }
    b_HTXS_Higgs_pt_ = tree->GetBranch("HTXS_Higgs_pt");
    if (b_HTXS_Higgs_pt_) { b_HTXS_Higgs_pt_->SetAddress(&HTXS_Higgs_pt_); }
    b_HTXS_Higgs_y_ = tree->GetBranch("HTXS_Higgs_y");
    if (b_HTXS_Higgs_y_) { b_HTXS_Higgs_y_->SetAddress(&HTXS_Higgs_y_); }
    b_HTXS_njets25_ = tree->GetBranch("HTXS_njets25");
    if (b_HTXS_njets25_) { b_HTXS_njets25_->SetAddress(&HTXS_njets25_); }
    b_HTXS_njets30_ = tree->GetBranch("HTXS_njets30");
    if (b_HTXS_njets30_) { b_HTXS_njets30_->SetAddress(&HTXS_njets30_); }
    b_HTXS_stage1_1_cat_pTjet25GeV_ = tree->GetBranch("HTXS_stage1_1_cat_pTjet25GeV");
    if (b_HTXS_stage1_1_cat_pTjet25GeV_) { b_HTXS_stage1_1_cat_pTjet25GeV_->SetAddress(&HTXS_stage1_1_cat_pTjet25GeV_); }
    b_HTXS_stage1_1_cat_pTjet30GeV_ = tree->GetBranch("HTXS_stage1_1_cat_pTjet30GeV");
    if (b_HTXS_stage1_1_cat_pTjet30GeV_) { b_HTXS_stage1_1_cat_pTjet30GeV_->SetAddress(&HTXS_stage1_1_cat_pTjet30GeV_); }
    b_HTXS_stage1_1_fine_cat_pTjet25GeV_ = tree->GetBranch("HTXS_stage1_1_fine_cat_pTjet25GeV");
    if (b_HTXS_stage1_1_fine_cat_pTjet25GeV_) { b_HTXS_stage1_1_fine_cat_pTjet25GeV_->SetAddress(&HTXS_stage1_1_fine_cat_pTjet25GeV_); }
    b_HTXS_stage1_1_fine_cat_pTjet30GeV_ = tree->GetBranch("HTXS_stage1_1_fine_cat_pTjet30GeV");
    if (b_HTXS_stage1_1_fine_cat_pTjet30GeV_) { b_HTXS_stage1_1_fine_cat_pTjet30GeV_->SetAddress(&HTXS_stage1_1_fine_cat_pTjet30GeV_); }
    b_HTXS_stage1_2_cat_pTjet25GeV_ = tree->GetBranch("HTXS_stage1_2_cat_pTjet25GeV");
    if (b_HTXS_stage1_2_cat_pTjet25GeV_) { b_HTXS_stage1_2_cat_pTjet25GeV_->SetAddress(&HTXS_stage1_2_cat_pTjet25GeV_); }
    b_HTXS_stage1_2_cat_pTjet30GeV_ = tree->GetBranch("HTXS_stage1_2_cat_pTjet30GeV");
    if (b_HTXS_stage1_2_cat_pTjet30GeV_) { b_HTXS_stage1_2_cat_pTjet30GeV_->SetAddress(&HTXS_stage1_2_cat_pTjet30GeV_); }
    b_HTXS_stage1_2_fine_cat_pTjet25GeV_ = tree->GetBranch("HTXS_stage1_2_fine_cat_pTjet25GeV");
    if (b_HTXS_stage1_2_fine_cat_pTjet25GeV_) { b_HTXS_stage1_2_fine_cat_pTjet25GeV_->SetAddress(&HTXS_stage1_2_fine_cat_pTjet25GeV_); }
    b_HTXS_stage1_2_fine_cat_pTjet30GeV_ = tree->GetBranch("HTXS_stage1_2_fine_cat_pTjet30GeV");
    if (b_HTXS_stage1_2_fine_cat_pTjet30GeV_) { b_HTXS_stage1_2_fine_cat_pTjet30GeV_->SetAddress(&HTXS_stage1_2_fine_cat_pTjet30GeV_); }
    b_HTXS_stage_0_ = tree->GetBranch("HTXS_stage_0");
    if (b_HTXS_stage_0_) { b_HTXS_stage_0_->SetAddress(&HTXS_stage_0_); }
    b_HTXS_stage_1_pTjet25_ = tree->GetBranch("HTXS_stage_1_pTjet25");
    if (b_HTXS_stage_1_pTjet25_) { b_HTXS_stage_1_pTjet25_->SetAddress(&HTXS_stage_1_pTjet25_); }
    b_HTXS_stage_1_pTjet30_ = tree->GetBranch("HTXS_stage_1_pTjet30");
    if (b_HTXS_stage_1_pTjet30_) { b_HTXS_stage_1_pTjet30_->SetAddress(&HTXS_stage_1_pTjet30_); }
    b_IsoTrack_dxy_ = tree->GetBranch("IsoTrack_dxy");
    if (b_IsoTrack_dxy_) { b_IsoTrack_dxy_->SetAddress(&IsoTrack_dxy_); }
    b_IsoTrack_dz_ = tree->GetBranch("IsoTrack_dz");
    if (b_IsoTrack_dz_) { b_IsoTrack_dz_->SetAddress(&IsoTrack_dz_); }
    b_IsoTrack_eta_ = tree->GetBranch("IsoTrack_eta");
    if (b_IsoTrack_eta_) { b_IsoTrack_eta_->SetAddress(&IsoTrack_eta_); }
    b_IsoTrack_fromPV_ = tree->GetBranch("IsoTrack_fromPV");
    if (b_IsoTrack_fromPV_) { b_IsoTrack_fromPV_->SetAddress(&IsoTrack_fromPV_); }
    b_IsoTrack_isFromLostTrack_ = tree->GetBranch("IsoTrack_isFromLostTrack");
    if (b_IsoTrack_isFromLostTrack_) { b_IsoTrack_isFromLostTrack_->SetAddress(&IsoTrack_isFromLostTrack_); }
    b_IsoTrack_isHighPurityTrack_ = tree->GetBranch("IsoTrack_isHighPurityTrack");
    if (b_IsoTrack_isHighPurityTrack_) { b_IsoTrack_isHighPurityTrack_->SetAddress(&IsoTrack_isHighPurityTrack_); }
    b_IsoTrack_isPFcand_ = tree->GetBranch("IsoTrack_isPFcand");
    if (b_IsoTrack_isPFcand_) { b_IsoTrack_isPFcand_->SetAddress(&IsoTrack_isPFcand_); }
    b_IsoTrack_miniPFRelIso_all_ = tree->GetBranch("IsoTrack_miniPFRelIso_all");
    if (b_IsoTrack_miniPFRelIso_all_) { b_IsoTrack_miniPFRelIso_all_->SetAddress(&IsoTrack_miniPFRelIso_all_); }
    b_IsoTrack_miniPFRelIso_chg_ = tree->GetBranch("IsoTrack_miniPFRelIso_chg");
    if (b_IsoTrack_miniPFRelIso_chg_) { b_IsoTrack_miniPFRelIso_chg_->SetAddress(&IsoTrack_miniPFRelIso_chg_); }
    b_IsoTrack_pdgId_ = tree->GetBranch("IsoTrack_pdgId");
    if (b_IsoTrack_pdgId_) { b_IsoTrack_pdgId_->SetAddress(&IsoTrack_pdgId_); }
    b_IsoTrack_pfRelIso03_all_ = tree->GetBranch("IsoTrack_pfRelIso03_all");
    if (b_IsoTrack_pfRelIso03_all_) { b_IsoTrack_pfRelIso03_all_->SetAddress(&IsoTrack_pfRelIso03_all_); }
    b_IsoTrack_pfRelIso03_chg_ = tree->GetBranch("IsoTrack_pfRelIso03_chg");
    if (b_IsoTrack_pfRelIso03_chg_) { b_IsoTrack_pfRelIso03_chg_->SetAddress(&IsoTrack_pfRelIso03_chg_); }
    b_IsoTrack_phi_ = tree->GetBranch("IsoTrack_phi");
    if (b_IsoTrack_phi_) { b_IsoTrack_phi_->SetAddress(&IsoTrack_phi_); }
    b_IsoTrack_pt_ = tree->GetBranch("IsoTrack_pt");
    if (b_IsoTrack_pt_) { b_IsoTrack_pt_->SetAddress(&IsoTrack_pt_); }
    b_Jet_Filter_ = tree->GetBranch("Jet_Filter");
    if (b_Jet_Filter_) { b_Jet_Filter_->SetAddress(&Jet_Filter_); }
    b_Jet_FilterLoose_ = tree->GetBranch("Jet_FilterLoose");
    if (b_Jet_FilterLoose_) { b_Jet_FilterLoose_->SetAddress(&Jet_FilterLoose_); }
    b_Jet_area_ = tree->GetBranch("Jet_area");
    if (b_Jet_area_) { b_Jet_area_->SetAddress(&Jet_area_); }
    b_Jet_bRegCorr_ = tree->GetBranch("Jet_bRegCorr");
    if (b_Jet_bRegCorr_) { b_Jet_bRegCorr_->SetAddress(&Jet_bRegCorr_); }
    b_Jet_bRegRes_ = tree->GetBranch("Jet_bRegRes");
    if (b_Jet_bRegRes_) { b_Jet_bRegRes_->SetAddress(&Jet_bRegRes_); }
    b_Jet_btagCMVA_ = tree->GetBranch("Jet_btagCMVA");
    if (b_Jet_btagCMVA_) { b_Jet_btagCMVA_->SetAddress(&Jet_btagCMVA_); }
    b_Jet_btagCSVV2_ = tree->GetBranch("Jet_btagCSVV2");
    if (b_Jet_btagCSVV2_) { b_Jet_btagCSVV2_->SetAddress(&Jet_btagCSVV2_); }
    b_Jet_btagDeepB_ = tree->GetBranch("Jet_btagDeepB");
    if (b_Jet_btagDeepB_) { b_Jet_btagDeepB_->SetAddress(&Jet_btagDeepB_); }
    b_Jet_btagDeepC_ = tree->GetBranch("Jet_btagDeepC");
    if (b_Jet_btagDeepC_) { b_Jet_btagDeepC_->SetAddress(&Jet_btagDeepC_); }
    b_Jet_btagDeepFlavB_ = tree->GetBranch("Jet_btagDeepFlavB");
    if (b_Jet_btagDeepFlavB_) { b_Jet_btagDeepFlavB_->SetAddress(&Jet_btagDeepFlavB_); }
    b_Jet_btagDeepFlavC_ = tree->GetBranch("Jet_btagDeepFlavC");
    if (b_Jet_btagDeepFlavC_) { b_Jet_btagDeepFlavC_->SetAddress(&Jet_btagDeepFlavC_); }
    b_Jet_cRegCorr_ = tree->GetBranch("Jet_cRegCorr");
    if (b_Jet_cRegCorr_) { b_Jet_cRegCorr_->SetAddress(&Jet_cRegCorr_); }
    b_Jet_cRegRes_ = tree->GetBranch("Jet_cRegRes");
    if (b_Jet_cRegRes_) { b_Jet_cRegRes_->SetAddress(&Jet_cRegRes_); }
    b_Jet_chEmEF_ = tree->GetBranch("Jet_chEmEF");
    if (b_Jet_chEmEF_) { b_Jet_chEmEF_->SetAddress(&Jet_chEmEF_); }
    b_Jet_chFPV0EF_ = tree->GetBranch("Jet_chFPV0EF");
    if (b_Jet_chFPV0EF_) { b_Jet_chFPV0EF_->SetAddress(&Jet_chFPV0EF_); }
    b_Jet_chFPV1EF_ = tree->GetBranch("Jet_chFPV1EF");
    if (b_Jet_chFPV1EF_) { b_Jet_chFPV1EF_->SetAddress(&Jet_chFPV1EF_); }
    b_Jet_chFPV2EF_ = tree->GetBranch("Jet_chFPV2EF");
    if (b_Jet_chFPV2EF_) { b_Jet_chFPV2EF_->SetAddress(&Jet_chFPV2EF_); }
    b_Jet_chFPV3EF_ = tree->GetBranch("Jet_chFPV3EF");
    if (b_Jet_chFPV3EF_) { b_Jet_chFPV3EF_->SetAddress(&Jet_chFPV3EF_); }
    b_Jet_chHEF_ = tree->GetBranch("Jet_chHEF");
    if (b_Jet_chHEF_) { b_Jet_chHEF_->SetAddress(&Jet_chHEF_); }
    b_Jet_cleanmask_ = tree->GetBranch("Jet_cleanmask");
    if (b_Jet_cleanmask_) { b_Jet_cleanmask_->SetAddress(&Jet_cleanmask_); }
    b_Jet_corr_JEC_ = tree->GetBranch("Jet_corr_JEC");
    if (b_Jet_corr_JEC_) { b_Jet_corr_JEC_->SetAddress(&Jet_corr_JEC_); }
    b_Jet_corr_JER_ = tree->GetBranch("Jet_corr_JER");
    if (b_Jet_corr_JER_) { b_Jet_corr_JER_->SetAddress(&Jet_corr_JER_); }
    b_Jet_electronIdx1_ = tree->GetBranch("Jet_electronIdx1");
    if (b_Jet_electronIdx1_) { b_Jet_electronIdx1_->SetAddress(&Jet_electronIdx1_); }
    b_Jet_electronIdx2_ = tree->GetBranch("Jet_electronIdx2");
    if (b_Jet_electronIdx2_) { b_Jet_electronIdx2_->SetAddress(&Jet_electronIdx2_); }
    b_Jet_eta_ = tree->GetBranch("Jet_eta");
    if (b_Jet_eta_) { b_Jet_eta_->SetAddress(&Jet_eta_); }
    b_Jet_genJetIdx_ = tree->GetBranch("Jet_genJetIdx");
    if (b_Jet_genJetIdx_) { b_Jet_genJetIdx_->SetAddress(&Jet_genJetIdx_); }
    b_Jet_hadronFlavour_ = tree->GetBranch("Jet_hadronFlavour");
    if (b_Jet_hadronFlavour_) { b_Jet_hadronFlavour_->SetAddress(&Jet_hadronFlavour_); }
    b_Jet_jetId_ = tree->GetBranch("Jet_jetId");
    if (b_Jet_jetId_) { b_Jet_jetId_->SetAddress(&Jet_jetId_); }
    b_Jet_mass_ = tree->GetBranch("Jet_mass");
    if (b_Jet_mass_) { b_Jet_mass_->SetAddress(&Jet_mass_); }
    b_Jet_mass_jerDown_ = tree->GetBranch("Jet_mass_jerDown");
    if (b_Jet_mass_jerDown_) { b_Jet_mass_jerDown_->SetAddress(&Jet_mass_jerDown_); }
    b_Jet_mass_jerUp_ = tree->GetBranch("Jet_mass_jerUp");
    if (b_Jet_mass_jerUp_) { b_Jet_mass_jerUp_->SetAddress(&Jet_mass_jerUp_); }
    b_Jet_mass_jesTotalDown_ = tree->GetBranch("Jet_mass_jesTotalDown");
    if (b_Jet_mass_jesTotalDown_) { b_Jet_mass_jesTotalDown_->SetAddress(&Jet_mass_jesTotalDown_); }
    b_Jet_mass_jesTotalUp_ = tree->GetBranch("Jet_mass_jesTotalUp");
    if (b_Jet_mass_jesTotalUp_) { b_Jet_mass_jesTotalUp_->SetAddress(&Jet_mass_jesTotalUp_); }
    b_Jet_mass_nom_ = tree->GetBranch("Jet_mass_nom");
    if (b_Jet_mass_nom_) { b_Jet_mass_nom_->SetAddress(&Jet_mass_nom_); }
    b_Jet_mass_raw_ = tree->GetBranch("Jet_mass_raw");
    if (b_Jet_mass_raw_) { b_Jet_mass_raw_->SetAddress(&Jet_mass_raw_); }
    b_Jet_muEF_ = tree->GetBranch("Jet_muEF");
    if (b_Jet_muEF_) { b_Jet_muEF_->SetAddress(&Jet_muEF_); }
    b_Jet_muonIdx1_ = tree->GetBranch("Jet_muonIdx1");
    if (b_Jet_muonIdx1_) { b_Jet_muonIdx1_->SetAddress(&Jet_muonIdx1_); }
    b_Jet_muonIdx2_ = tree->GetBranch("Jet_muonIdx2");
    if (b_Jet_muonIdx2_) { b_Jet_muonIdx2_->SetAddress(&Jet_muonIdx2_); }
    b_Jet_muonSubtrFactor_ = tree->GetBranch("Jet_muonSubtrFactor");
    if (b_Jet_muonSubtrFactor_) { b_Jet_muonSubtrFactor_->SetAddress(&Jet_muonSubtrFactor_); }
    b_Jet_nConstituents_ = tree->GetBranch("Jet_nConstituents");
    if (b_Jet_nConstituents_) { b_Jet_nConstituents_->SetAddress(&Jet_nConstituents_); }
    b_Jet_nElectrons_ = tree->GetBranch("Jet_nElectrons");
    if (b_Jet_nElectrons_) { b_Jet_nElectrons_->SetAddress(&Jet_nElectrons_); }
    b_Jet_nMuons_ = tree->GetBranch("Jet_nMuons");
    if (b_Jet_nMuons_) { b_Jet_nMuons_->SetAddress(&Jet_nMuons_); }
    b_Jet_neEmEF_ = tree->GetBranch("Jet_neEmEF");
    if (b_Jet_neEmEF_) { b_Jet_neEmEF_->SetAddress(&Jet_neEmEF_); }
    b_Jet_neHEF_ = tree->GetBranch("Jet_neHEF");
    if (b_Jet_neHEF_) { b_Jet_neHEF_->SetAddress(&Jet_neHEF_); }
    b_Jet_partonFlavour_ = tree->GetBranch("Jet_partonFlavour");
    if (b_Jet_partonFlavour_) { b_Jet_partonFlavour_->SetAddress(&Jet_partonFlavour_); }
    b_Jet_phi_ = tree->GetBranch("Jet_phi");
    if (b_Jet_phi_) { b_Jet_phi_->SetAddress(&Jet_phi_); }
    b_Jet_pt_ = tree->GetBranch("Jet_pt");
    if (b_Jet_pt_) { b_Jet_pt_->SetAddress(&Jet_pt_); }
    b_Jet_pt_jerDown_ = tree->GetBranch("Jet_pt_jerDown");
    if (b_Jet_pt_jerDown_) { b_Jet_pt_jerDown_->SetAddress(&Jet_pt_jerDown_); }
    b_Jet_pt_jerUp_ = tree->GetBranch("Jet_pt_jerUp");
    if (b_Jet_pt_jerUp_) { b_Jet_pt_jerUp_->SetAddress(&Jet_pt_jerUp_); }
    b_Jet_pt_jesTotalDown_ = tree->GetBranch("Jet_pt_jesTotalDown");
    if (b_Jet_pt_jesTotalDown_) { b_Jet_pt_jesTotalDown_->SetAddress(&Jet_pt_jesTotalDown_); }
    b_Jet_pt_jesTotalUp_ = tree->GetBranch("Jet_pt_jesTotalUp");
    if (b_Jet_pt_jesTotalUp_) { b_Jet_pt_jesTotalUp_->SetAddress(&Jet_pt_jesTotalUp_); }
    b_Jet_pt_nom_ = tree->GetBranch("Jet_pt_nom");
    if (b_Jet_pt_nom_) { b_Jet_pt_nom_->SetAddress(&Jet_pt_nom_); }
    b_Jet_pt_raw_ = tree->GetBranch("Jet_pt_raw");
    if (b_Jet_pt_raw_) { b_Jet_pt_raw_->SetAddress(&Jet_pt_raw_); }
    b_Jet_puId_ = tree->GetBranch("Jet_puId");
    if (b_Jet_puId_) { b_Jet_puId_->SetAddress(&Jet_puId_); }
    b_Jet_puIdDisc_ = tree->GetBranch("Jet_puIdDisc");
    if (b_Jet_puIdDisc_) { b_Jet_puIdDisc_->SetAddress(&Jet_puIdDisc_); }
    b_Jet_qgl_ = tree->GetBranch("Jet_qgl");
    if (b_Jet_qgl_) { b_Jet_qgl_->SetAddress(&Jet_qgl_); }
    b_Jet_rawFactor_ = tree->GetBranch("Jet_rawFactor");
    if (b_Jet_rawFactor_) { b_Jet_rawFactor_->SetAddress(&Jet_rawFactor_); }
    b_LHEPart_eta_ = tree->GetBranch("LHEPart_eta");
    if (b_LHEPart_eta_) { b_LHEPart_eta_->SetAddress(&LHEPart_eta_); }
    b_LHEPart_incomingpz_ = tree->GetBranch("LHEPart_incomingpz");
    if (b_LHEPart_incomingpz_) { b_LHEPart_incomingpz_->SetAddress(&LHEPart_incomingpz_); }
    b_LHEPart_mass_ = tree->GetBranch("LHEPart_mass");
    if (b_LHEPart_mass_) { b_LHEPart_mass_->SetAddress(&LHEPart_mass_); }
    b_LHEPart_pdgId_ = tree->GetBranch("LHEPart_pdgId");
    if (b_LHEPart_pdgId_) { b_LHEPart_pdgId_->SetAddress(&LHEPart_pdgId_); }
    b_LHEPart_phi_ = tree->GetBranch("LHEPart_phi");
    if (b_LHEPart_phi_) { b_LHEPart_phi_->SetAddress(&LHEPart_phi_); }
    b_LHEPart_pt_ = tree->GetBranch("LHEPart_pt");
    if (b_LHEPart_pt_) { b_LHEPart_pt_->SetAddress(&LHEPart_pt_); }
    b_LHEPart_spin_ = tree->GetBranch("LHEPart_spin");
    if (b_LHEPart_spin_) { b_LHEPart_spin_->SetAddress(&LHEPart_spin_); }
    b_LHEPart_status_ = tree->GetBranch("LHEPart_status");
    if (b_LHEPart_status_) { b_LHEPart_status_->SetAddress(&LHEPart_status_); }
    b_LHEPdfWeight_ = tree->GetBranch("LHEPdfWeight");
    if (b_LHEPdfWeight_) { b_LHEPdfWeight_->SetAddress(&LHEPdfWeight_); }
    b_LHEReweightingWeight_ = tree->GetBranch("LHEReweightingWeight");
    if (b_LHEReweightingWeight_) { b_LHEReweightingWeight_->SetAddress(&LHEReweightingWeight_); }
    b_LHEScaleWeight_ = tree->GetBranch("LHEScaleWeight");
    if (b_LHEScaleWeight_) { b_LHEScaleWeight_->SetAddress(&LHEScaleWeight_); }
    b_LHEWeight_originalXWGTUP_ = tree->GetBranch("LHEWeight_originalXWGTUP");
    if (b_LHEWeight_originalXWGTUP_) { b_LHEWeight_originalXWGTUP_->SetAddress(&LHEWeight_originalXWGTUP_); }
    b_LHE_AlphaS_ = tree->GetBranch("LHE_AlphaS");
    if (b_LHE_AlphaS_) { b_LHE_AlphaS_->SetAddress(&LHE_AlphaS_); }
    b_LHE_HT_ = tree->GetBranch("LHE_HT");
    if (b_LHE_HT_) { b_LHE_HT_->SetAddress(&LHE_HT_); }
    b_LHE_HTIncoming_ = tree->GetBranch("LHE_HTIncoming");
    if (b_LHE_HTIncoming_) { b_LHE_HTIncoming_->SetAddress(&LHE_HTIncoming_); }
    b_LHE_Nb_ = tree->GetBranch("LHE_Nb");
    if (b_LHE_Nb_) { b_LHE_Nb_->SetAddress(&LHE_Nb_); }
    b_LHE_Nc_ = tree->GetBranch("LHE_Nc");
    if (b_LHE_Nc_) { b_LHE_Nc_->SetAddress(&LHE_Nc_); }
    b_LHE_Nglu_ = tree->GetBranch("LHE_Nglu");
    if (b_LHE_Nglu_) { b_LHE_Nglu_->SetAddress(&LHE_Nglu_); }
    b_LHE_Njets_ = tree->GetBranch("LHE_Njets");
    if (b_LHE_Njets_) { b_LHE_Njets_->SetAddress(&LHE_Njets_); }
    b_LHE_NpLO_ = tree->GetBranch("LHE_NpLO");
    if (b_LHE_NpLO_) { b_LHE_NpLO_->SetAddress(&LHE_NpLO_); }
    b_LHE_NpNLO_ = tree->GetBranch("LHE_NpNLO");
    if (b_LHE_NpNLO_) { b_LHE_NpNLO_->SetAddress(&LHE_NpNLO_); }
    b_LHE_Nuds_ = tree->GetBranch("LHE_Nuds");
    if (b_LHE_Nuds_) { b_LHE_Nuds_->SetAddress(&LHE_Nuds_); }
    b_LHE_Vpt_ = tree->GetBranch("LHE_Vpt");
    if (b_LHE_Vpt_) { b_LHE_Vpt_->SetAddress(&LHE_Vpt_); }
    b_METFixEE2017_MetUnclustEnUpDeltaX_ = tree->GetBranch("METFixEE2017_MetUnclustEnUpDeltaX");
    if (b_METFixEE2017_MetUnclustEnUpDeltaX_) { b_METFixEE2017_MetUnclustEnUpDeltaX_->SetAddress(&METFixEE2017_MetUnclustEnUpDeltaX_); }
    b_METFixEE2017_MetUnclustEnUpDeltaY_ = tree->GetBranch("METFixEE2017_MetUnclustEnUpDeltaY");
    if (b_METFixEE2017_MetUnclustEnUpDeltaY_) { b_METFixEE2017_MetUnclustEnUpDeltaY_->SetAddress(&METFixEE2017_MetUnclustEnUpDeltaY_); }
    b_METFixEE2017_covXX_ = tree->GetBranch("METFixEE2017_covXX");
    if (b_METFixEE2017_covXX_) { b_METFixEE2017_covXX_->SetAddress(&METFixEE2017_covXX_); }
    b_METFixEE2017_covXY_ = tree->GetBranch("METFixEE2017_covXY");
    if (b_METFixEE2017_covXY_) { b_METFixEE2017_covXY_->SetAddress(&METFixEE2017_covXY_); }
    b_METFixEE2017_covYY_ = tree->GetBranch("METFixEE2017_covYY");
    if (b_METFixEE2017_covYY_) { b_METFixEE2017_covYY_->SetAddress(&METFixEE2017_covYY_); }
    b_METFixEE2017_phi_ = tree->GetBranch("METFixEE2017_phi");
    if (b_METFixEE2017_phi_) { b_METFixEE2017_phi_->SetAddress(&METFixEE2017_phi_); }
    b_METFixEE2017_pt_ = tree->GetBranch("METFixEE2017_pt");
    if (b_METFixEE2017_pt_) { b_METFixEE2017_pt_->SetAddress(&METFixEE2017_pt_); }
    b_METFixEE2017_significance_ = tree->GetBranch("METFixEE2017_significance");
    if (b_METFixEE2017_significance_) { b_METFixEE2017_significance_->SetAddress(&METFixEE2017_significance_); }
    b_METFixEE2017_sumEt_ = tree->GetBranch("METFixEE2017_sumEt");
    if (b_METFixEE2017_sumEt_) { b_METFixEE2017_sumEt_->SetAddress(&METFixEE2017_sumEt_); }
    b_METFixEE2017_sumPtUnclustered_ = tree->GetBranch("METFixEE2017_sumPtUnclustered");
    if (b_METFixEE2017_sumPtUnclustered_) { b_METFixEE2017_sumPtUnclustered_->SetAddress(&METFixEE2017_sumPtUnclustered_); }
    b_MET_MetUnclustEnUpDeltaX_ = tree->GetBranch("MET_MetUnclustEnUpDeltaX");
    if (b_MET_MetUnclustEnUpDeltaX_) { b_MET_MetUnclustEnUpDeltaX_->SetAddress(&MET_MetUnclustEnUpDeltaX_); }
    b_MET_MetUnclustEnUpDeltaY_ = tree->GetBranch("MET_MetUnclustEnUpDeltaY");
    if (b_MET_MetUnclustEnUpDeltaY_) { b_MET_MetUnclustEnUpDeltaY_->SetAddress(&MET_MetUnclustEnUpDeltaY_); }
    b_MET_T1Smear_phi_ = tree->GetBranch("MET_T1Smear_phi");
    if (b_MET_T1Smear_phi_) { b_MET_T1Smear_phi_->SetAddress(&MET_T1Smear_phi_); }
    b_MET_T1Smear_phi_jerDown_ = tree->GetBranch("MET_T1Smear_phi_jerDown");
    if (b_MET_T1Smear_phi_jerDown_) { b_MET_T1Smear_phi_jerDown_->SetAddress(&MET_T1Smear_phi_jerDown_); }
    b_MET_T1Smear_phi_jerUp_ = tree->GetBranch("MET_T1Smear_phi_jerUp");
    if (b_MET_T1Smear_phi_jerUp_) { b_MET_T1Smear_phi_jerUp_->SetAddress(&MET_T1Smear_phi_jerUp_); }
    b_MET_T1Smear_phi_jesTotalDown_ = tree->GetBranch("MET_T1Smear_phi_jesTotalDown");
    if (b_MET_T1Smear_phi_jesTotalDown_) { b_MET_T1Smear_phi_jesTotalDown_->SetAddress(&MET_T1Smear_phi_jesTotalDown_); }
    b_MET_T1Smear_phi_jesTotalUp_ = tree->GetBranch("MET_T1Smear_phi_jesTotalUp");
    if (b_MET_T1Smear_phi_jesTotalUp_) { b_MET_T1Smear_phi_jesTotalUp_->SetAddress(&MET_T1Smear_phi_jesTotalUp_); }
    b_MET_T1Smear_pt_ = tree->GetBranch("MET_T1Smear_pt");
    if (b_MET_T1Smear_pt_) { b_MET_T1Smear_pt_->SetAddress(&MET_T1Smear_pt_); }
    b_MET_T1Smear_pt_jerDown_ = tree->GetBranch("MET_T1Smear_pt_jerDown");
    if (b_MET_T1Smear_pt_jerDown_) { b_MET_T1Smear_pt_jerDown_->SetAddress(&MET_T1Smear_pt_jerDown_); }
    b_MET_T1Smear_pt_jerUp_ = tree->GetBranch("MET_T1Smear_pt_jerUp");
    if (b_MET_T1Smear_pt_jerUp_) { b_MET_T1Smear_pt_jerUp_->SetAddress(&MET_T1Smear_pt_jerUp_); }
    b_MET_T1Smear_pt_jesTotalDown_ = tree->GetBranch("MET_T1Smear_pt_jesTotalDown");
    if (b_MET_T1Smear_pt_jesTotalDown_) { b_MET_T1Smear_pt_jesTotalDown_->SetAddress(&MET_T1Smear_pt_jesTotalDown_); }
    b_MET_T1Smear_pt_jesTotalUp_ = tree->GetBranch("MET_T1Smear_pt_jesTotalUp");
    if (b_MET_T1Smear_pt_jesTotalUp_) { b_MET_T1Smear_pt_jesTotalUp_->SetAddress(&MET_T1Smear_pt_jesTotalUp_); }
    b_MET_T1_phi_ = tree->GetBranch("MET_T1_phi");
    if (b_MET_T1_phi_) { b_MET_T1_phi_->SetAddress(&MET_T1_phi_); }
    b_MET_T1_phi_jerDown_ = tree->GetBranch("MET_T1_phi_jerDown");
    if (b_MET_T1_phi_jerDown_) { b_MET_T1_phi_jerDown_->SetAddress(&MET_T1_phi_jerDown_); }
    b_MET_T1_phi_jerUp_ = tree->GetBranch("MET_T1_phi_jerUp");
    if (b_MET_T1_phi_jerUp_) { b_MET_T1_phi_jerUp_->SetAddress(&MET_T1_phi_jerUp_); }
    b_MET_T1_phi_jesTotalDown_ = tree->GetBranch("MET_T1_phi_jesTotalDown");
    if (b_MET_T1_phi_jesTotalDown_) { b_MET_T1_phi_jesTotalDown_->SetAddress(&MET_T1_phi_jesTotalDown_); }
    b_MET_T1_phi_jesTotalUp_ = tree->GetBranch("MET_T1_phi_jesTotalUp");
    if (b_MET_T1_phi_jesTotalUp_) { b_MET_T1_phi_jesTotalUp_->SetAddress(&MET_T1_phi_jesTotalUp_); }
    b_MET_T1_pt_ = tree->GetBranch("MET_T1_pt");
    if (b_MET_T1_pt_) { b_MET_T1_pt_->SetAddress(&MET_T1_pt_); }
    b_MET_T1_pt_jerDown_ = tree->GetBranch("MET_T1_pt_jerDown");
    if (b_MET_T1_pt_jerDown_) { b_MET_T1_pt_jerDown_->SetAddress(&MET_T1_pt_jerDown_); }
    b_MET_T1_pt_jerUp_ = tree->GetBranch("MET_T1_pt_jerUp");
    if (b_MET_T1_pt_jerUp_) { b_MET_T1_pt_jerUp_->SetAddress(&MET_T1_pt_jerUp_); }
    b_MET_T1_pt_jesTotalDown_ = tree->GetBranch("MET_T1_pt_jesTotalDown");
    if (b_MET_T1_pt_jesTotalDown_) { b_MET_T1_pt_jesTotalDown_->SetAddress(&MET_T1_pt_jesTotalDown_); }
    b_MET_T1_pt_jesTotalUp_ = tree->GetBranch("MET_T1_pt_jesTotalUp");
    if (b_MET_T1_pt_jesTotalUp_) { b_MET_T1_pt_jesTotalUp_->SetAddress(&MET_T1_pt_jesTotalUp_); }
    b_MET_covXX_ = tree->GetBranch("MET_covXX");
    if (b_MET_covXX_) { b_MET_covXX_->SetAddress(&MET_covXX_); }
    b_MET_covXY_ = tree->GetBranch("MET_covXY");
    if (b_MET_covXY_) { b_MET_covXY_->SetAddress(&MET_covXY_); }
    b_MET_covYY_ = tree->GetBranch("MET_covYY");
    if (b_MET_covYY_) { b_MET_covYY_->SetAddress(&MET_covYY_); }
    b_MET_fiducialGenPhi_ = tree->GetBranch("MET_fiducialGenPhi");
    if (b_MET_fiducialGenPhi_) { b_MET_fiducialGenPhi_->SetAddress(&MET_fiducialGenPhi_); }
    b_MET_fiducialGenPt_ = tree->GetBranch("MET_fiducialGenPt");
    if (b_MET_fiducialGenPt_) { b_MET_fiducialGenPt_->SetAddress(&MET_fiducialGenPt_); }
    b_MET_phi_ = tree->GetBranch("MET_phi");
    if (b_MET_phi_) { b_MET_phi_->SetAddress(&MET_phi_); }
    b_MET_phi_unclustEnDown_ = tree->GetBranch("MET_phi_unclustEnDown");
    if (b_MET_phi_unclustEnDown_) { b_MET_phi_unclustEnDown_->SetAddress(&MET_phi_unclustEnDown_); }
    b_MET_phi_unclustEnUp_ = tree->GetBranch("MET_phi_unclustEnUp");
    if (b_MET_phi_unclustEnUp_) { b_MET_phi_unclustEnUp_->SetAddress(&MET_phi_unclustEnUp_); }
    b_MET_pt_ = tree->GetBranch("MET_pt");
    if (b_MET_pt_) { b_MET_pt_->SetAddress(&MET_pt_); }
    b_MET_pt_unclustEnDown_ = tree->GetBranch("MET_pt_unclustEnDown");
    if (b_MET_pt_unclustEnDown_) { b_MET_pt_unclustEnDown_->SetAddress(&MET_pt_unclustEnDown_); }
    b_MET_pt_unclustEnUp_ = tree->GetBranch("MET_pt_unclustEnUp");
    if (b_MET_pt_unclustEnUp_) { b_MET_pt_unclustEnUp_->SetAddress(&MET_pt_unclustEnUp_); }
    b_MET_significance_ = tree->GetBranch("MET_significance");
    if (b_MET_significance_) { b_MET_significance_->SetAddress(&MET_significance_); }
    b_MET_sumEt_ = tree->GetBranch("MET_sumEt");
    if (b_MET_sumEt_) { b_MET_sumEt_->SetAddress(&MET_sumEt_); }
    b_MET_sumPtUnclustered_ = tree->GetBranch("MET_sumPtUnclustered");
    if (b_MET_sumPtUnclustered_) { b_MET_sumPtUnclustered_->SetAddress(&MET_sumPtUnclustered_); }
    b_Muon_charge_ = tree->GetBranch("Muon_charge");
    if (b_Muon_charge_) { b_Muon_charge_->SetAddress(&Muon_charge_); }
    b_Muon_cleanmask_ = tree->GetBranch("Muon_cleanmask");
    if (b_Muon_cleanmask_) { b_Muon_cleanmask_->SetAddress(&Muon_cleanmask_); }
    b_Muon_correctedDown_pt_ = tree->GetBranch("Muon_correctedDown_pt");
    if (b_Muon_correctedDown_pt_) { b_Muon_correctedDown_pt_->SetAddress(&Muon_correctedDown_pt_); }
    b_Muon_correctedUp_pt_ = tree->GetBranch("Muon_correctedUp_pt");
    if (b_Muon_correctedUp_pt_) { b_Muon_correctedUp_pt_->SetAddress(&Muon_correctedUp_pt_); }
    b_Muon_corrected_pt_ = tree->GetBranch("Muon_corrected_pt");
    if (b_Muon_corrected_pt_) { b_Muon_corrected_pt_->SetAddress(&Muon_corrected_pt_); }
    b_Muon_dxy_ = tree->GetBranch("Muon_dxy");
    if (b_Muon_dxy_) { b_Muon_dxy_->SetAddress(&Muon_dxy_); }
    b_Muon_dxyErr_ = tree->GetBranch("Muon_dxyErr");
    if (b_Muon_dxyErr_) { b_Muon_dxyErr_->SetAddress(&Muon_dxyErr_); }
    b_Muon_dxybs_ = tree->GetBranch("Muon_dxybs");
    if (b_Muon_dxybs_) { b_Muon_dxybs_->SetAddress(&Muon_dxybs_); }
    b_Muon_dz_ = tree->GetBranch("Muon_dz");
    if (b_Muon_dz_) { b_Muon_dz_->SetAddress(&Muon_dz_); }
    b_Muon_dzErr_ = tree->GetBranch("Muon_dzErr");
    if (b_Muon_dzErr_) { b_Muon_dzErr_->SetAddress(&Muon_dzErr_); }
    b_Muon_eta_ = tree->GetBranch("Muon_eta");
    if (b_Muon_eta_) { b_Muon_eta_->SetAddress(&Muon_eta_); }
    b_Muon_fsrPhotonIdx_ = tree->GetBranch("Muon_fsrPhotonIdx");
    if (b_Muon_fsrPhotonIdx_) { b_Muon_fsrPhotonIdx_->SetAddress(&Muon_fsrPhotonIdx_); }
    b_Muon_genPartFlav_ = tree->GetBranch("Muon_genPartFlav");
    if (b_Muon_genPartFlav_) { b_Muon_genPartFlav_->SetAddress(&Muon_genPartFlav_); }
    b_Muon_genPartIdx_ = tree->GetBranch("Muon_genPartIdx");
    if (b_Muon_genPartIdx_) { b_Muon_genPartIdx_->SetAddress(&Muon_genPartIdx_); }
    b_Muon_highPtId_ = tree->GetBranch("Muon_highPtId");
    if (b_Muon_highPtId_) { b_Muon_highPtId_->SetAddress(&Muon_highPtId_); }
    b_Muon_highPurity_ = tree->GetBranch("Muon_highPurity");
    if (b_Muon_highPurity_) { b_Muon_highPurity_->SetAddress(&Muon_highPurity_); }
    b_Muon_inTimeMuon_ = tree->GetBranch("Muon_inTimeMuon");
    if (b_Muon_inTimeMuon_) { b_Muon_inTimeMuon_->SetAddress(&Muon_inTimeMuon_); }
    b_Muon_ip3d_ = tree->GetBranch("Muon_ip3d");
    if (b_Muon_ip3d_) { b_Muon_ip3d_->SetAddress(&Muon_ip3d_); }
    b_Muon_isGlobal_ = tree->GetBranch("Muon_isGlobal");
    if (b_Muon_isGlobal_) { b_Muon_isGlobal_->SetAddress(&Muon_isGlobal_); }
    b_Muon_isPFcand_ = tree->GetBranch("Muon_isPFcand");
    if (b_Muon_isPFcand_) { b_Muon_isPFcand_->SetAddress(&Muon_isPFcand_); }
    b_Muon_isTracker_ = tree->GetBranch("Muon_isTracker");
    if (b_Muon_isTracker_) { b_Muon_isTracker_->SetAddress(&Muon_isTracker_); }
    b_Muon_jetIdx_ = tree->GetBranch("Muon_jetIdx");
    if (b_Muon_jetIdx_) { b_Muon_jetIdx_->SetAddress(&Muon_jetIdx_); }
    b_Muon_jetPtRelv2_ = tree->GetBranch("Muon_jetPtRelv2");
    if (b_Muon_jetPtRelv2_) { b_Muon_jetPtRelv2_->SetAddress(&Muon_jetPtRelv2_); }
    b_Muon_jetRelIso_ = tree->GetBranch("Muon_jetRelIso");
    if (b_Muon_jetRelIso_) { b_Muon_jetRelIso_->SetAddress(&Muon_jetRelIso_); }
    b_Muon_looseId_ = tree->GetBranch("Muon_looseId");
    if (b_Muon_looseId_) { b_Muon_looseId_->SetAddress(&Muon_looseId_); }
    b_Muon_mass_ = tree->GetBranch("Muon_mass");
    if (b_Muon_mass_) { b_Muon_mass_->SetAddress(&Muon_mass_); }
    b_Muon_mediumId_ = tree->GetBranch("Muon_mediumId");
    if (b_Muon_mediumId_) { b_Muon_mediumId_->SetAddress(&Muon_mediumId_); }
    b_Muon_mediumPromptId_ = tree->GetBranch("Muon_mediumPromptId");
    if (b_Muon_mediumPromptId_) { b_Muon_mediumPromptId_->SetAddress(&Muon_mediumPromptId_); }
    b_Muon_miniIsoId_ = tree->GetBranch("Muon_miniIsoId");
    if (b_Muon_miniIsoId_) { b_Muon_miniIsoId_->SetAddress(&Muon_miniIsoId_); }
    b_Muon_miniPFRelIso_all_ = tree->GetBranch("Muon_miniPFRelIso_all");
    if (b_Muon_miniPFRelIso_all_) { b_Muon_miniPFRelIso_all_->SetAddress(&Muon_miniPFRelIso_all_); }
    b_Muon_miniPFRelIso_chg_ = tree->GetBranch("Muon_miniPFRelIso_chg");
    if (b_Muon_miniPFRelIso_chg_) { b_Muon_miniPFRelIso_chg_->SetAddress(&Muon_miniPFRelIso_chg_); }
    b_Muon_multiIsoId_ = tree->GetBranch("Muon_multiIsoId");
    if (b_Muon_multiIsoId_) { b_Muon_multiIsoId_->SetAddress(&Muon_multiIsoId_); }
    b_Muon_mvaId_ = tree->GetBranch("Muon_mvaId");
    if (b_Muon_mvaId_) { b_Muon_mvaId_->SetAddress(&Muon_mvaId_); }
    b_Muon_mvaLowPt_ = tree->GetBranch("Muon_mvaLowPt");
    if (b_Muon_mvaLowPt_) { b_Muon_mvaLowPt_->SetAddress(&Muon_mvaLowPt_); }
    b_Muon_mvaTTH_ = tree->GetBranch("Muon_mvaTTH");
    if (b_Muon_mvaTTH_) { b_Muon_mvaTTH_->SetAddress(&Muon_mvaTTH_); }
    b_Muon_nStations_ = tree->GetBranch("Muon_nStations");
    if (b_Muon_nStations_) { b_Muon_nStations_->SetAddress(&Muon_nStations_); }
    b_Muon_nTrackerLayers_ = tree->GetBranch("Muon_nTrackerLayers");
    if (b_Muon_nTrackerLayers_) { b_Muon_nTrackerLayers_->SetAddress(&Muon_nTrackerLayers_); }
    b_Muon_pdgId_ = tree->GetBranch("Muon_pdgId");
    if (b_Muon_pdgId_) { b_Muon_pdgId_->SetAddress(&Muon_pdgId_); }
    b_Muon_pfIsoId_ = tree->GetBranch("Muon_pfIsoId");
    if (b_Muon_pfIsoId_) { b_Muon_pfIsoId_->SetAddress(&Muon_pfIsoId_); }
    b_Muon_pfRelIso03_all_ = tree->GetBranch("Muon_pfRelIso03_all");
    if (b_Muon_pfRelIso03_all_) { b_Muon_pfRelIso03_all_->SetAddress(&Muon_pfRelIso03_all_); }
    b_Muon_pfRelIso03_chg_ = tree->GetBranch("Muon_pfRelIso03_chg");
    if (b_Muon_pfRelIso03_chg_) { b_Muon_pfRelIso03_chg_->SetAddress(&Muon_pfRelIso03_chg_); }
    b_Muon_pfRelIso04_all_ = tree->GetBranch("Muon_pfRelIso04_all");
    if (b_Muon_pfRelIso04_all_) { b_Muon_pfRelIso04_all_->SetAddress(&Muon_pfRelIso04_all_); }
    b_Muon_phi_ = tree->GetBranch("Muon_phi");
    if (b_Muon_phi_) { b_Muon_phi_->SetAddress(&Muon_phi_); }
    b_Muon_pt_ = tree->GetBranch("Muon_pt");
    if (b_Muon_pt_) { b_Muon_pt_->SetAddress(&Muon_pt_); }
    b_Muon_ptErr_ = tree->GetBranch("Muon_ptErr");
    if (b_Muon_ptErr_) { b_Muon_ptErr_->SetAddress(&Muon_ptErr_); }
    b_Muon_segmentComp_ = tree->GetBranch("Muon_segmentComp");
    if (b_Muon_segmentComp_) { b_Muon_segmentComp_->SetAddress(&Muon_segmentComp_); }
    b_Muon_sip3d_ = tree->GetBranch("Muon_sip3d");
    if (b_Muon_sip3d_) { b_Muon_sip3d_->SetAddress(&Muon_sip3d_); }
    b_Muon_softId_ = tree->GetBranch("Muon_softId");
    if (b_Muon_softId_) { b_Muon_softId_->SetAddress(&Muon_softId_); }
    b_Muon_softMva_ = tree->GetBranch("Muon_softMva");
    if (b_Muon_softMva_) { b_Muon_softMva_->SetAddress(&Muon_softMva_); }
    b_Muon_softMvaId_ = tree->GetBranch("Muon_softMvaId");
    if (b_Muon_softMvaId_) { b_Muon_softMvaId_->SetAddress(&Muon_softMvaId_); }
    b_Muon_tightCharge_ = tree->GetBranch("Muon_tightCharge");
    if (b_Muon_tightCharge_) { b_Muon_tightCharge_->SetAddress(&Muon_tightCharge_); }
    b_Muon_tightId_ = tree->GetBranch("Muon_tightId");
    if (b_Muon_tightId_) { b_Muon_tightId_->SetAddress(&Muon_tightId_); }
    b_Muon_tkIsoId_ = tree->GetBranch("Muon_tkIsoId");
    if (b_Muon_tkIsoId_) { b_Muon_tkIsoId_->SetAddress(&Muon_tkIsoId_); }
    b_Muon_tkRelIso_ = tree->GetBranch("Muon_tkRelIso");
    if (b_Muon_tkRelIso_) { b_Muon_tkRelIso_->SetAddress(&Muon_tkRelIso_); }
    b_Muon_triggerIdLoose_ = tree->GetBranch("Muon_triggerIdLoose");
    if (b_Muon_triggerIdLoose_) { b_Muon_triggerIdLoose_->SetAddress(&Muon_triggerIdLoose_); }
    b_Muon_tunepRelPt_ = tree->GetBranch("Muon_tunepRelPt");
    if (b_Muon_tunepRelPt_) { b_Muon_tunepRelPt_->SetAddress(&Muon_tunepRelPt_); }
    b_OtherPV_z_ = tree->GetBranch("OtherPV_z");
    if (b_OtherPV_z_) { b_OtherPV_z_->SetAddress(&OtherPV_z_); }
    b_PSWeight_ = tree->GetBranch("PSWeight");
    if (b_PSWeight_) { b_PSWeight_->SetAddress(&PSWeight_); }
    b_PV_chi2_ = tree->GetBranch("PV_chi2");
    if (b_PV_chi2_) { b_PV_chi2_->SetAddress(&PV_chi2_); }
    b_PV_ndof_ = tree->GetBranch("PV_ndof");
    if (b_PV_ndof_) { b_PV_ndof_->SetAddress(&PV_ndof_); }
    b_PV_npvs_ = tree->GetBranch("PV_npvs");
    if (b_PV_npvs_) { b_PV_npvs_->SetAddress(&PV_npvs_); }
    b_PV_npvsGood_ = tree->GetBranch("PV_npvsGood");
    if (b_PV_npvsGood_) { b_PV_npvsGood_->SetAddress(&PV_npvsGood_); }
    b_PV_score_ = tree->GetBranch("PV_score");
    if (b_PV_score_) { b_PV_score_->SetAddress(&PV_score_); }
    b_PV_x_ = tree->GetBranch("PV_x");
    if (b_PV_x_) { b_PV_x_->SetAddress(&PV_x_); }
    b_PV_y_ = tree->GetBranch("PV_y");
    if (b_PV_y_) { b_PV_y_->SetAddress(&PV_y_); }
    b_PV_z_ = tree->GetBranch("PV_z");
    if (b_PV_z_) { b_PV_z_->SetAddress(&PV_z_); }
    b_Photon_charge_ = tree->GetBranch("Photon_charge");
    if (b_Photon_charge_) { b_Photon_charge_->SetAddress(&Photon_charge_); }
    b_Photon_chargedHadronIso_ = tree->GetBranch("Photon_chargedHadronIso");
    if (b_Photon_chargedHadronIso_) { b_Photon_chargedHadronIso_->SetAddress(&Photon_chargedHadronIso_); }
    b_Photon_cleanmask_ = tree->GetBranch("Photon_cleanmask");
    if (b_Photon_cleanmask_) { b_Photon_cleanmask_->SetAddress(&Photon_cleanmask_); }
    b_Photon_cutBased_ = tree->GetBranch("Photon_cutBased");
    if (b_Photon_cutBased_) { b_Photon_cutBased_->SetAddress(&Photon_cutBased_); }
    b_Photon_cutBased_Fall17V1Bitmap_ = tree->GetBranch("Photon_cutBased_Fall17V1Bitmap");
    if (b_Photon_cutBased_Fall17V1Bitmap_) { b_Photon_cutBased_Fall17V1Bitmap_->SetAddress(&Photon_cutBased_Fall17V1Bitmap_); }
    b_Photon_cutBased_Spring16V2p2_ = tree->GetBranch("Photon_cutBased_Spring16V2p2");
    if (b_Photon_cutBased_Spring16V2p2_) { b_Photon_cutBased_Spring16V2p2_->SetAddress(&Photon_cutBased_Spring16V2p2_); }
    b_Photon_eCorr_ = tree->GetBranch("Photon_eCorr");
    if (b_Photon_eCorr_) { b_Photon_eCorr_->SetAddress(&Photon_eCorr_); }
    b_Photon_electronIdx_ = tree->GetBranch("Photon_electronIdx");
    if (b_Photon_electronIdx_) { b_Photon_electronIdx_->SetAddress(&Photon_electronIdx_); }
    b_Photon_electronVeto_ = tree->GetBranch("Photon_electronVeto");
    if (b_Photon_electronVeto_) { b_Photon_electronVeto_->SetAddress(&Photon_electronVeto_); }
    b_Photon_energyErr_ = tree->GetBranch("Photon_energyErr");
    if (b_Photon_energyErr_) { b_Photon_energyErr_->SetAddress(&Photon_energyErr_); }
    b_Photon_eta_ = tree->GetBranch("Photon_eta");
    if (b_Photon_eta_) { b_Photon_eta_->SetAddress(&Photon_eta_); }
    b_Photon_genPartFlav_ = tree->GetBranch("Photon_genPartFlav");
    if (b_Photon_genPartFlav_) { b_Photon_genPartFlav_->SetAddress(&Photon_genPartFlav_); }
    b_Photon_genPartIdx_ = tree->GetBranch("Photon_genPartIdx");
    if (b_Photon_genPartIdx_) { b_Photon_genPartIdx_->SetAddress(&Photon_genPartIdx_); }
    b_Photon_hoe_ = tree->GetBranch("Photon_hoe");
    if (b_Photon_hoe_) { b_Photon_hoe_->SetAddress(&Photon_hoe_); }
    b_Photon_isScEtaEB_ = tree->GetBranch("Photon_isScEtaEB");
    if (b_Photon_isScEtaEB_) { b_Photon_isScEtaEB_->SetAddress(&Photon_isScEtaEB_); }
    b_Photon_isScEtaEE_ = tree->GetBranch("Photon_isScEtaEE");
    if (b_Photon_isScEtaEE_) { b_Photon_isScEtaEE_->SetAddress(&Photon_isScEtaEE_); }
    b_Photon_jetIdx_ = tree->GetBranch("Photon_jetIdx");
    if (b_Photon_jetIdx_) { b_Photon_jetIdx_->SetAddress(&Photon_jetIdx_); }
    b_Photon_mass_ = tree->GetBranch("Photon_mass");
    if (b_Photon_mass_) { b_Photon_mass_->SetAddress(&Photon_mass_); }
    b_Photon_mvaID_ = tree->GetBranch("Photon_mvaID");
    if (b_Photon_mvaID_) { b_Photon_mvaID_->SetAddress(&Photon_mvaID_); }
    b_Photon_mvaID_Fall17V1p1_ = tree->GetBranch("Photon_mvaID_Fall17V1p1");
    if (b_Photon_mvaID_Fall17V1p1_) { b_Photon_mvaID_Fall17V1p1_->SetAddress(&Photon_mvaID_Fall17V1p1_); }
    b_Photon_mvaID_Spring16nonTrigV1_ = tree->GetBranch("Photon_mvaID_Spring16nonTrigV1");
    if (b_Photon_mvaID_Spring16nonTrigV1_) { b_Photon_mvaID_Spring16nonTrigV1_->SetAddress(&Photon_mvaID_Spring16nonTrigV1_); }
    b_Photon_mvaID_WP80_ = tree->GetBranch("Photon_mvaID_WP80");
    if (b_Photon_mvaID_WP80_) { b_Photon_mvaID_WP80_->SetAddress(&Photon_mvaID_WP80_); }
    b_Photon_mvaID_WP90_ = tree->GetBranch("Photon_mvaID_WP90");
    if (b_Photon_mvaID_WP90_) { b_Photon_mvaID_WP90_->SetAddress(&Photon_mvaID_WP90_); }
    b_Photon_pdgId_ = tree->GetBranch("Photon_pdgId");
    if (b_Photon_pdgId_) { b_Photon_pdgId_->SetAddress(&Photon_pdgId_); }
    b_Photon_pfRelIso03_all_ = tree->GetBranch("Photon_pfRelIso03_all");
    if (b_Photon_pfRelIso03_all_) { b_Photon_pfRelIso03_all_->SetAddress(&Photon_pfRelIso03_all_); }
    b_Photon_pfRelIso03_chg_ = tree->GetBranch("Photon_pfRelIso03_chg");
    if (b_Photon_pfRelIso03_chg_) { b_Photon_pfRelIso03_chg_->SetAddress(&Photon_pfRelIso03_chg_); }
    b_Photon_phi_ = tree->GetBranch("Photon_phi");
    if (b_Photon_phi_) { b_Photon_phi_->SetAddress(&Photon_phi_); }
    b_Photon_photonIso_ = tree->GetBranch("Photon_photonIso");
    if (b_Photon_photonIso_) { b_Photon_photonIso_->SetAddress(&Photon_photonIso_); }
    b_Photon_pixelSeed_ = tree->GetBranch("Photon_pixelSeed");
    if (b_Photon_pixelSeed_) { b_Photon_pixelSeed_->SetAddress(&Photon_pixelSeed_); }
    b_Photon_pt_ = tree->GetBranch("Photon_pt");
    if (b_Photon_pt_) { b_Photon_pt_->SetAddress(&Photon_pt_); }
    b_Photon_pt_FNUDown_ = tree->GetBranch("Photon_pt_FNUDown");
    if (b_Photon_pt_FNUDown_) { b_Photon_pt_FNUDown_->SetAddress(&Photon_pt_FNUDown_); }
    b_Photon_pt_FNUUp_ = tree->GetBranch("Photon_pt_FNUUp");
    if (b_Photon_pt_FNUUp_) { b_Photon_pt_FNUUp_->SetAddress(&Photon_pt_FNUUp_); }
    b_Photon_pt_MCScaleDown_ = tree->GetBranch("Photon_pt_MCScaleDown");
    if (b_Photon_pt_MCScaleDown_) { b_Photon_pt_MCScaleDown_->SetAddress(&Photon_pt_MCScaleDown_); }
    b_Photon_pt_MCScaleGainDown_ = tree->GetBranch("Photon_pt_MCScaleGainDown");
    if (b_Photon_pt_MCScaleGainDown_) { b_Photon_pt_MCScaleGainDown_->SetAddress(&Photon_pt_MCScaleGainDown_); }
    b_Photon_pt_MCScaleGainUp_ = tree->GetBranch("Photon_pt_MCScaleGainUp");
    if (b_Photon_pt_MCScaleGainUp_) { b_Photon_pt_MCScaleGainUp_->SetAddress(&Photon_pt_MCScaleGainUp_); }
    b_Photon_pt_MCScaleUp_ = tree->GetBranch("Photon_pt_MCScaleUp");
    if (b_Photon_pt_MCScaleUp_) { b_Photon_pt_MCScaleUp_->SetAddress(&Photon_pt_MCScaleUp_); }
    b_Photon_pt_MCSmearDown_ = tree->GetBranch("Photon_pt_MCSmearDown");
    if (b_Photon_pt_MCSmearDown_) { b_Photon_pt_MCSmearDown_->SetAddress(&Photon_pt_MCSmearDown_); }
    b_Photon_pt_MCSmearUp_ = tree->GetBranch("Photon_pt_MCSmearUp");
    if (b_Photon_pt_MCSmearUp_) { b_Photon_pt_MCSmearUp_->SetAddress(&Photon_pt_MCSmearUp_); }
    b_Photon_pt_MaterialDown_ = tree->GetBranch("Photon_pt_MaterialDown");
    if (b_Photon_pt_MaterialDown_) { b_Photon_pt_MaterialDown_->SetAddress(&Photon_pt_MaterialDown_); }
    b_Photon_pt_MaterialUp_ = tree->GetBranch("Photon_pt_MaterialUp");
    if (b_Photon_pt_MaterialUp_) { b_Photon_pt_MaterialUp_->SetAddress(&Photon_pt_MaterialUp_); }
    b_Photon_pt_ShowerShapeDown_ = tree->GetBranch("Photon_pt_ShowerShapeDown");
    if (b_Photon_pt_ShowerShapeDown_) { b_Photon_pt_ShowerShapeDown_->SetAddress(&Photon_pt_ShowerShapeDown_); }
    b_Photon_pt_ShowerShapeUp_ = tree->GetBranch("Photon_pt_ShowerShapeUp");
    if (b_Photon_pt_ShowerShapeUp_) { b_Photon_pt_ShowerShapeUp_->SetAddress(&Photon_pt_ShowerShapeUp_); }
    b_Photon_r9_ = tree->GetBranch("Photon_r9");
    if (b_Photon_r9_) { b_Photon_r9_->SetAddress(&Photon_r9_); }
    b_Photon_seedGain_ = tree->GetBranch("Photon_seedGain");
    if (b_Photon_seedGain_) { b_Photon_seedGain_->SetAddress(&Photon_seedGain_); }
    b_Photon_sieie_ = tree->GetBranch("Photon_sieie");
    if (b_Photon_sieie_) { b_Photon_sieie_->SetAddress(&Photon_sieie_); }
    b_Photon_trkSumPtHollowConeDR03_ = tree->GetBranch("Photon_trkSumPtHollowConeDR03");
    if (b_Photon_trkSumPtHollowConeDR03_) { b_Photon_trkSumPtHollowConeDR03_->SetAddress(&Photon_trkSumPtHollowConeDR03_); }
    b_Photon_vidNestedWPBitmap_ = tree->GetBranch("Photon_vidNestedWPBitmap");
    if (b_Photon_vidNestedWPBitmap_) { b_Photon_vidNestedWPBitmap_->SetAddress(&Photon_vidNestedWPBitmap_); }
    b_Photon_vidNestedWPBitmap_Spring16V2p2_ = tree->GetBranch("Photon_vidNestedWPBitmap_Spring16V2p2");
    if (b_Photon_vidNestedWPBitmap_Spring16V2p2_) { b_Photon_vidNestedWPBitmap_Spring16V2p2_->SetAddress(&Photon_vidNestedWPBitmap_Spring16V2p2_); }
    b_Pileup_gpudensity_ = tree->GetBranch("Pileup_gpudensity");
    if (b_Pileup_gpudensity_) { b_Pileup_gpudensity_->SetAddress(&Pileup_gpudensity_); }
    b_Pileup_nPU_ = tree->GetBranch("Pileup_nPU");
    if (b_Pileup_nPU_) { b_Pileup_nPU_->SetAddress(&Pileup_nPU_); }
    b_Pileup_nTrueInt_ = tree->GetBranch("Pileup_nTrueInt");
    if (b_Pileup_nTrueInt_) { b_Pileup_nTrueInt_->SetAddress(&Pileup_nTrueInt_); }
    b_Pileup_pudensity_ = tree->GetBranch("Pileup_pudensity");
    if (b_Pileup_pudensity_) { b_Pileup_pudensity_->SetAddress(&Pileup_pudensity_); }
    b_Pileup_sumEOOT_ = tree->GetBranch("Pileup_sumEOOT");
    if (b_Pileup_sumEOOT_) { b_Pileup_sumEOOT_->SetAddress(&Pileup_sumEOOT_); }
    b_Pileup_sumLOOT_ = tree->GetBranch("Pileup_sumLOOT");
    if (b_Pileup_sumLOOT_) { b_Pileup_sumLOOT_->SetAddress(&Pileup_sumLOOT_); }
    b_PrefireWeight_ = tree->GetBranch("PrefireWeight");
    if (b_PrefireWeight_) { b_PrefireWeight_->SetAddress(&PrefireWeight_); }
    b_PrefireWeight_Down_ = tree->GetBranch("PrefireWeight_Down");
    if (b_PrefireWeight_Down_) { b_PrefireWeight_Down_->SetAddress(&PrefireWeight_Down_); }
    b_PrefireWeight_Up_ = tree->GetBranch("PrefireWeight_Up");
    if (b_PrefireWeight_Up_) { b_PrefireWeight_Up_->SetAddress(&PrefireWeight_Up_); }
    b_PuppiMET_phi_ = tree->GetBranch("PuppiMET_phi");
    if (b_PuppiMET_phi_) { b_PuppiMET_phi_->SetAddress(&PuppiMET_phi_); }
    b_PuppiMET_phiJERUp_ = tree->GetBranch("PuppiMET_phiJERUp");
    if (b_PuppiMET_phiJERUp_) { b_PuppiMET_phiJERUp_->SetAddress(&PuppiMET_phiJERUp_); }
    b_PuppiMET_phiJESUp_ = tree->GetBranch("PuppiMET_phiJESUp");
    if (b_PuppiMET_phiJESUp_) { b_PuppiMET_phiJESUp_->SetAddress(&PuppiMET_phiJESUp_); }
    b_PuppiMET_pt_ = tree->GetBranch("PuppiMET_pt");
    if (b_PuppiMET_pt_) { b_PuppiMET_pt_->SetAddress(&PuppiMET_pt_); }
    b_PuppiMET_ptJERUp_ = tree->GetBranch("PuppiMET_ptJERUp");
    if (b_PuppiMET_ptJERUp_) { b_PuppiMET_ptJERUp_->SetAddress(&PuppiMET_ptJERUp_); }
    b_PuppiMET_ptJESUp_ = tree->GetBranch("PuppiMET_ptJESUp");
    if (b_PuppiMET_ptJESUp_) { b_PuppiMET_ptJESUp_->SetAddress(&PuppiMET_ptJESUp_); }
    b_PuppiMET_sumEt_ = tree->GetBranch("PuppiMET_sumEt");
    if (b_PuppiMET_sumEt_) { b_PuppiMET_sumEt_->SetAddress(&PuppiMET_sumEt_); }
    b_RawMET_phi_ = tree->GetBranch("RawMET_phi");
    if (b_RawMET_phi_) { b_RawMET_phi_->SetAddress(&RawMET_phi_); }
    b_RawMET_pt_ = tree->GetBranch("RawMET_pt");
    if (b_RawMET_pt_) { b_RawMET_pt_->SetAddress(&RawMET_pt_); }
    b_RawMET_sumEt_ = tree->GetBranch("RawMET_sumEt");
    if (b_RawMET_sumEt_) { b_RawMET_sumEt_->SetAddress(&RawMET_sumEt_); }
    b_RawPuppiMET_phi_ = tree->GetBranch("RawPuppiMET_phi");
    if (b_RawPuppiMET_phi_) { b_RawPuppiMET_phi_->SetAddress(&RawPuppiMET_phi_); }
    b_RawPuppiMET_pt_ = tree->GetBranch("RawPuppiMET_pt");
    if (b_RawPuppiMET_pt_) { b_RawPuppiMET_pt_->SetAddress(&RawPuppiMET_pt_); }
    b_RawPuppiMET_sumEt_ = tree->GetBranch("RawPuppiMET_sumEt");
    if (b_RawPuppiMET_sumEt_) { b_RawPuppiMET_sumEt_->SetAddress(&RawPuppiMET_sumEt_); }
    b_SV_chi2_ = tree->GetBranch("SV_chi2");
    if (b_SV_chi2_) { b_SV_chi2_->SetAddress(&SV_chi2_); }
    b_SV_dlen_ = tree->GetBranch("SV_dlen");
    if (b_SV_dlen_) { b_SV_dlen_->SetAddress(&SV_dlen_); }
    b_SV_dlenSig_ = tree->GetBranch("SV_dlenSig");
    if (b_SV_dlenSig_) { b_SV_dlenSig_->SetAddress(&SV_dlenSig_); }
    b_SV_dxy_ = tree->GetBranch("SV_dxy");
    if (b_SV_dxy_) { b_SV_dxy_->SetAddress(&SV_dxy_); }
    b_SV_dxySig_ = tree->GetBranch("SV_dxySig");
    if (b_SV_dxySig_) { b_SV_dxySig_->SetAddress(&SV_dxySig_); }
    b_SV_eta_ = tree->GetBranch("SV_eta");
    if (b_SV_eta_) { b_SV_eta_->SetAddress(&SV_eta_); }
    b_SV_mass_ = tree->GetBranch("SV_mass");
    if (b_SV_mass_) { b_SV_mass_->SetAddress(&SV_mass_); }
    b_SV_ndof_ = tree->GetBranch("SV_ndof");
    if (b_SV_ndof_) { b_SV_ndof_->SetAddress(&SV_ndof_); }
    b_SV_pAngle_ = tree->GetBranch("SV_pAngle");
    if (b_SV_pAngle_) { b_SV_pAngle_->SetAddress(&SV_pAngle_); }
    b_SV_phi_ = tree->GetBranch("SV_phi");
    if (b_SV_phi_) { b_SV_phi_->SetAddress(&SV_phi_); }
    b_SV_pt_ = tree->GetBranch("SV_pt");
    if (b_SV_pt_) { b_SV_pt_->SetAddress(&SV_pt_); }
    b_SV_x_ = tree->GetBranch("SV_x");
    if (b_SV_x_) { b_SV_x_->SetAddress(&SV_x_); }
    b_SV_y_ = tree->GetBranch("SV_y");
    if (b_SV_y_) { b_SV_y_->SetAddress(&SV_y_); }
    b_SV_z_ = tree->GetBranch("SV_z");
    if (b_SV_z_) { b_SV_z_->SetAddress(&SV_z_); }
    b_SoftActivityJetHT_ = tree->GetBranch("SoftActivityJetHT");
    if (b_SoftActivityJetHT_) { b_SoftActivityJetHT_->SetAddress(&SoftActivityJetHT_); }
    b_SoftActivityJetHT10_ = tree->GetBranch("SoftActivityJetHT10");
    if (b_SoftActivityJetHT10_) { b_SoftActivityJetHT10_->SetAddress(&SoftActivityJetHT10_); }
    b_SoftActivityJetHT2_ = tree->GetBranch("SoftActivityJetHT2");
    if (b_SoftActivityJetHT2_) { b_SoftActivityJetHT2_->SetAddress(&SoftActivityJetHT2_); }
    b_SoftActivityJetHT5_ = tree->GetBranch("SoftActivityJetHT5");
    if (b_SoftActivityJetHT5_) { b_SoftActivityJetHT5_->SetAddress(&SoftActivityJetHT5_); }
    b_SoftActivityJetNjets10_ = tree->GetBranch("SoftActivityJetNjets10");
    if (b_SoftActivityJetNjets10_) { b_SoftActivityJetNjets10_->SetAddress(&SoftActivityJetNjets10_); }
    b_SoftActivityJetNjets2_ = tree->GetBranch("SoftActivityJetNjets2");
    if (b_SoftActivityJetNjets2_) { b_SoftActivityJetNjets2_->SetAddress(&SoftActivityJetNjets2_); }
    b_SoftActivityJetNjets5_ = tree->GetBranch("SoftActivityJetNjets5");
    if (b_SoftActivityJetNjets5_) { b_SoftActivityJetNjets5_->SetAddress(&SoftActivityJetNjets5_); }
    b_SoftActivityJet_eta_ = tree->GetBranch("SoftActivityJet_eta");
    if (b_SoftActivityJet_eta_) { b_SoftActivityJet_eta_->SetAddress(&SoftActivityJet_eta_); }
    b_SoftActivityJet_phi_ = tree->GetBranch("SoftActivityJet_phi");
    if (b_SoftActivityJet_phi_) { b_SoftActivityJet_phi_->SetAddress(&SoftActivityJet_phi_); }
    b_SoftActivityJet_pt_ = tree->GetBranch("SoftActivityJet_pt");
    if (b_SoftActivityJet_pt_) { b_SoftActivityJet_pt_->SetAddress(&SoftActivityJet_pt_); }
    b_SubGenJetAK8_eta_ = tree->GetBranch("SubGenJetAK8_eta");
    if (b_SubGenJetAK8_eta_) { b_SubGenJetAK8_eta_->SetAddress(&SubGenJetAK8_eta_); }
    b_SubGenJetAK8_mass_ = tree->GetBranch("SubGenJetAK8_mass");
    if (b_SubGenJetAK8_mass_) { b_SubGenJetAK8_mass_->SetAddress(&SubGenJetAK8_mass_); }
    b_SubGenJetAK8_phi_ = tree->GetBranch("SubGenJetAK8_phi");
    if (b_SubGenJetAK8_phi_) { b_SubGenJetAK8_phi_->SetAddress(&SubGenJetAK8_phi_); }
    b_SubGenJetAK8_pt_ = tree->GetBranch("SubGenJetAK8_pt");
    if (b_SubGenJetAK8_pt_) { b_SubGenJetAK8_pt_->SetAddress(&SubGenJetAK8_pt_); }
    b_SubJet_btagCMVA_ = tree->GetBranch("SubJet_btagCMVA");
    if (b_SubJet_btagCMVA_) { b_SubJet_btagCMVA_->SetAddress(&SubJet_btagCMVA_); }
    b_SubJet_btagCSVV2_ = tree->GetBranch("SubJet_btagCSVV2");
    if (b_SubJet_btagCSVV2_) { b_SubJet_btagCSVV2_->SetAddress(&SubJet_btagCSVV2_); }
    b_SubJet_btagDeepB_ = tree->GetBranch("SubJet_btagDeepB");
    if (b_SubJet_btagDeepB_) { b_SubJet_btagDeepB_->SetAddress(&SubJet_btagDeepB_); }
    b_SubJet_eta_ = tree->GetBranch("SubJet_eta");
    if (b_SubJet_eta_) { b_SubJet_eta_->SetAddress(&SubJet_eta_); }
    b_SubJet_mass_ = tree->GetBranch("SubJet_mass");
    if (b_SubJet_mass_) { b_SubJet_mass_->SetAddress(&SubJet_mass_); }
    b_SubJet_n2b1_ = tree->GetBranch("SubJet_n2b1");
    if (b_SubJet_n2b1_) { b_SubJet_n2b1_->SetAddress(&SubJet_n2b1_); }
    b_SubJet_n3b1_ = tree->GetBranch("SubJet_n3b1");
    if (b_SubJet_n3b1_) { b_SubJet_n3b1_->SetAddress(&SubJet_n3b1_); }
    b_SubJet_nBHadrons_ = tree->GetBranch("SubJet_nBHadrons");
    if (b_SubJet_nBHadrons_) { b_SubJet_nBHadrons_->SetAddress(&SubJet_nBHadrons_); }
    b_SubJet_nCHadrons_ = tree->GetBranch("SubJet_nCHadrons");
    if (b_SubJet_nCHadrons_) { b_SubJet_nCHadrons_->SetAddress(&SubJet_nCHadrons_); }
    b_SubJet_phi_ = tree->GetBranch("SubJet_phi");
    if (b_SubJet_phi_) { b_SubJet_phi_->SetAddress(&SubJet_phi_); }
    b_SubJet_pt_ = tree->GetBranch("SubJet_pt");
    if (b_SubJet_pt_) { b_SubJet_pt_->SetAddress(&SubJet_pt_); }
    b_SubJet_rawFactor_ = tree->GetBranch("SubJet_rawFactor");
    if (b_SubJet_rawFactor_) { b_SubJet_rawFactor_->SetAddress(&SubJet_rawFactor_); }
    b_SubJet_tau1_ = tree->GetBranch("SubJet_tau1");
    if (b_SubJet_tau1_) { b_SubJet_tau1_->SetAddress(&SubJet_tau1_); }
    b_SubJet_tau2_ = tree->GetBranch("SubJet_tau2");
    if (b_SubJet_tau2_) { b_SubJet_tau2_->SetAddress(&SubJet_tau2_); }
    b_SubJet_tau3_ = tree->GetBranch("SubJet_tau3");
    if (b_SubJet_tau3_) { b_SubJet_tau3_->SetAddress(&SubJet_tau3_); }
    b_SubJet_tau4_ = tree->GetBranch("SubJet_tau4");
    if (b_SubJet_tau4_) { b_SubJet_tau4_->SetAddress(&SubJet_tau4_); }
    b_Tau_Filter_ = tree->GetBranch("Tau_Filter");
    if (b_Tau_Filter_) { b_Tau_Filter_->SetAddress(&Tau_Filter_); }
    b_Tau_charge_ = tree->GetBranch("Tau_charge");
    if (b_Tau_charge_) { b_Tau_charge_->SetAddress(&Tau_charge_); }
    b_Tau_chargedIso_ = tree->GetBranch("Tau_chargedIso");
    if (b_Tau_chargedIso_) { b_Tau_chargedIso_->SetAddress(&Tau_chargedIso_); }
    b_Tau_cleanmask_ = tree->GetBranch("Tau_cleanmask");
    if (b_Tau_cleanmask_) { b_Tau_cleanmask_->SetAddress(&Tau_cleanmask_); }
    b_Tau_decayMode_ = tree->GetBranch("Tau_decayMode");
    if (b_Tau_decayMode_) { b_Tau_decayMode_->SetAddress(&Tau_decayMode_); }
    b_Tau_dxy_ = tree->GetBranch("Tau_dxy");
    if (b_Tau_dxy_) { b_Tau_dxy_->SetAddress(&Tau_dxy_); }
    b_Tau_dz_ = tree->GetBranch("Tau_dz");
    if (b_Tau_dz_) { b_Tau_dz_->SetAddress(&Tau_dz_); }
    b_Tau_eta_ = tree->GetBranch("Tau_eta");
    if (b_Tau_eta_) { b_Tau_eta_->SetAddress(&Tau_eta_); }
    b_Tau_genPartFlav_ = tree->GetBranch("Tau_genPartFlav");
    if (b_Tau_genPartFlav_) { b_Tau_genPartFlav_->SetAddress(&Tau_genPartFlav_); }
    b_Tau_genPartIdx_ = tree->GetBranch("Tau_genPartIdx");
    if (b_Tau_genPartIdx_) { b_Tau_genPartIdx_->SetAddress(&Tau_genPartIdx_); }
    b_Tau_idAntiEle_ = tree->GetBranch("Tau_idAntiEle");
    if (b_Tau_idAntiEle_) { b_Tau_idAntiEle_->SetAddress(&Tau_idAntiEle_); }
    b_Tau_idAntiEle2018_ = tree->GetBranch("Tau_idAntiEle2018");
    if (b_Tau_idAntiEle2018_) { b_Tau_idAntiEle2018_->SetAddress(&Tau_idAntiEle2018_); }
    b_Tau_idAntiMu_ = tree->GetBranch("Tau_idAntiMu");
    if (b_Tau_idAntiMu_) { b_Tau_idAntiMu_->SetAddress(&Tau_idAntiMu_); }
    b_Tau_idDecayMode_ = tree->GetBranch("Tau_idDecayMode");
    if (b_Tau_idDecayMode_) { b_Tau_idDecayMode_->SetAddress(&Tau_idDecayMode_); }
    b_Tau_idDecayModeNewDMs_ = tree->GetBranch("Tau_idDecayModeNewDMs");
    if (b_Tau_idDecayModeNewDMs_) { b_Tau_idDecayModeNewDMs_->SetAddress(&Tau_idDecayModeNewDMs_); }
    b_Tau_idDeepTau2017v2p1VSe_ = tree->GetBranch("Tau_idDeepTau2017v2p1VSe");
    if (b_Tau_idDeepTau2017v2p1VSe_) { b_Tau_idDeepTau2017v2p1VSe_->SetAddress(&Tau_idDeepTau2017v2p1VSe_); }
    b_Tau_idDeepTau2017v2p1VSjet_ = tree->GetBranch("Tau_idDeepTau2017v2p1VSjet");
    if (b_Tau_idDeepTau2017v2p1VSjet_) { b_Tau_idDeepTau2017v2p1VSjet_->SetAddress(&Tau_idDeepTau2017v2p1VSjet_); }
    b_Tau_idDeepTau2017v2p1VSmu_ = tree->GetBranch("Tau_idDeepTau2017v2p1VSmu");
    if (b_Tau_idDeepTau2017v2p1VSmu_) { b_Tau_idDeepTau2017v2p1VSmu_->SetAddress(&Tau_idDeepTau2017v2p1VSmu_); }
    b_Tau_idMVAnewDM2017v2_ = tree->GetBranch("Tau_idMVAnewDM2017v2");
    if (b_Tau_idMVAnewDM2017v2_) { b_Tau_idMVAnewDM2017v2_->SetAddress(&Tau_idMVAnewDM2017v2_); }
    b_Tau_idMVAoldDM_ = tree->GetBranch("Tau_idMVAoldDM");
    if (b_Tau_idMVAoldDM_) { b_Tau_idMVAoldDM_->SetAddress(&Tau_idMVAoldDM_); }
    b_Tau_idMVAoldDM2017v1_ = tree->GetBranch("Tau_idMVAoldDM2017v1");
    if (b_Tau_idMVAoldDM2017v1_) { b_Tau_idMVAoldDM2017v1_->SetAddress(&Tau_idMVAoldDM2017v1_); }
    b_Tau_idMVAoldDM2017v2_ = tree->GetBranch("Tau_idMVAoldDM2017v2");
    if (b_Tau_idMVAoldDM2017v2_) { b_Tau_idMVAoldDM2017v2_->SetAddress(&Tau_idMVAoldDM2017v2_); }
    b_Tau_idMVAoldDMdR032017v2_ = tree->GetBranch("Tau_idMVAoldDMdR032017v2");
    if (b_Tau_idMVAoldDMdR032017v2_) { b_Tau_idMVAoldDMdR032017v2_->SetAddress(&Tau_idMVAoldDMdR032017v2_); }
    b_Tau_jetIdx_ = tree->GetBranch("Tau_jetIdx");
    if (b_Tau_jetIdx_) { b_Tau_jetIdx_->SetAddress(&Tau_jetIdx_); }
    b_Tau_leadTkDeltaEta_ = tree->GetBranch("Tau_leadTkDeltaEta");
    if (b_Tau_leadTkDeltaEta_) { b_Tau_leadTkDeltaEta_->SetAddress(&Tau_leadTkDeltaEta_); }
    b_Tau_leadTkDeltaPhi_ = tree->GetBranch("Tau_leadTkDeltaPhi");
    if (b_Tau_leadTkDeltaPhi_) { b_Tau_leadTkDeltaPhi_->SetAddress(&Tau_leadTkDeltaPhi_); }
    b_Tau_leadTkPtOverTauPt_ = tree->GetBranch("Tau_leadTkPtOverTauPt");
    if (b_Tau_leadTkPtOverTauPt_) { b_Tau_leadTkPtOverTauPt_->SetAddress(&Tau_leadTkPtOverTauPt_); }
    b_Tau_mass_ = tree->GetBranch("Tau_mass");
    if (b_Tau_mass_) { b_Tau_mass_->SetAddress(&Tau_mass_); }
    b_Tau_neutralIso_ = tree->GetBranch("Tau_neutralIso");
    if (b_Tau_neutralIso_) { b_Tau_neutralIso_->SetAddress(&Tau_neutralIso_); }
    b_Tau_phi_ = tree->GetBranch("Tau_phi");
    if (b_Tau_phi_) { b_Tau_phi_->SetAddress(&Tau_phi_); }
    b_Tau_photonsOutsideSignalCone_ = tree->GetBranch("Tau_photonsOutsideSignalCone");
    if (b_Tau_photonsOutsideSignalCone_) { b_Tau_photonsOutsideSignalCone_->SetAddress(&Tau_photonsOutsideSignalCone_); }
    b_Tau_pt_ = tree->GetBranch("Tau_pt");
    if (b_Tau_pt_) { b_Tau_pt_->SetAddress(&Tau_pt_); }
    b_Tau_puCorr_ = tree->GetBranch("Tau_puCorr");
    if (b_Tau_puCorr_) { b_Tau_puCorr_->SetAddress(&Tau_puCorr_); }
    b_Tau_rawAntiEle_ = tree->GetBranch("Tau_rawAntiEle");
    if (b_Tau_rawAntiEle_) { b_Tau_rawAntiEle_->SetAddress(&Tau_rawAntiEle_); }
    b_Tau_rawAntiEle2018_ = tree->GetBranch("Tau_rawAntiEle2018");
    if (b_Tau_rawAntiEle2018_) { b_Tau_rawAntiEle2018_->SetAddress(&Tau_rawAntiEle2018_); }
    b_Tau_rawAntiEleCat_ = tree->GetBranch("Tau_rawAntiEleCat");
    if (b_Tau_rawAntiEleCat_) { b_Tau_rawAntiEleCat_->SetAddress(&Tau_rawAntiEleCat_); }
    b_Tau_rawAntiEleCat2018_ = tree->GetBranch("Tau_rawAntiEleCat2018");
    if (b_Tau_rawAntiEleCat2018_) { b_Tau_rawAntiEleCat2018_->SetAddress(&Tau_rawAntiEleCat2018_); }
    b_Tau_rawDeepTau2017v2p1VSe_ = tree->GetBranch("Tau_rawDeepTau2017v2p1VSe");
    if (b_Tau_rawDeepTau2017v2p1VSe_) { b_Tau_rawDeepTau2017v2p1VSe_->SetAddress(&Tau_rawDeepTau2017v2p1VSe_); }
    b_Tau_rawDeepTau2017v2p1VSjet_ = tree->GetBranch("Tau_rawDeepTau2017v2p1VSjet");
    if (b_Tau_rawDeepTau2017v2p1VSjet_) { b_Tau_rawDeepTau2017v2p1VSjet_->SetAddress(&Tau_rawDeepTau2017v2p1VSjet_); }
    b_Tau_rawDeepTau2017v2p1VSmu_ = tree->GetBranch("Tau_rawDeepTau2017v2p1VSmu");
    if (b_Tau_rawDeepTau2017v2p1VSmu_) { b_Tau_rawDeepTau2017v2p1VSmu_->SetAddress(&Tau_rawDeepTau2017v2p1VSmu_); }
    b_Tau_rawIso_ = tree->GetBranch("Tau_rawIso");
    if (b_Tau_rawIso_) { b_Tau_rawIso_->SetAddress(&Tau_rawIso_); }
    b_Tau_rawIsodR03_ = tree->GetBranch("Tau_rawIsodR03");
    if (b_Tau_rawIsodR03_) { b_Tau_rawIsodR03_->SetAddress(&Tau_rawIsodR03_); }
    b_Tau_rawMVAnewDM2017v2_ = tree->GetBranch("Tau_rawMVAnewDM2017v2");
    if (b_Tau_rawMVAnewDM2017v2_) { b_Tau_rawMVAnewDM2017v2_->SetAddress(&Tau_rawMVAnewDM2017v2_); }
    b_Tau_rawMVAoldDM_ = tree->GetBranch("Tau_rawMVAoldDM");
    if (b_Tau_rawMVAoldDM_) { b_Tau_rawMVAoldDM_->SetAddress(&Tau_rawMVAoldDM_); }
    b_Tau_rawMVAoldDM2017v1_ = tree->GetBranch("Tau_rawMVAoldDM2017v1");
    if (b_Tau_rawMVAoldDM2017v1_) { b_Tau_rawMVAoldDM2017v1_->SetAddress(&Tau_rawMVAoldDM2017v1_); }
    b_Tau_rawMVAoldDM2017v2_ = tree->GetBranch("Tau_rawMVAoldDM2017v2");
    if (b_Tau_rawMVAoldDM2017v2_) { b_Tau_rawMVAoldDM2017v2_->SetAddress(&Tau_rawMVAoldDM2017v2_); }
    b_Tau_rawMVAoldDMdR032017v2_ = tree->GetBranch("Tau_rawMVAoldDMdR032017v2");
    if (b_Tau_rawMVAoldDMdR032017v2_) { b_Tau_rawMVAoldDMdR032017v2_->SetAddress(&Tau_rawMVAoldDMdR032017v2_); }
    b_TkMET_phi_ = tree->GetBranch("TkMET_phi");
    if (b_TkMET_phi_) { b_TkMET_phi_->SetAddress(&TkMET_phi_); }
    b_TkMET_pt_ = tree->GetBranch("TkMET_pt");
    if (b_TkMET_pt_) { b_TkMET_pt_->SetAddress(&TkMET_pt_); }
    b_TkMET_sumEt_ = tree->GetBranch("TkMET_sumEt");
    if (b_TkMET_sumEt_) { b_TkMET_sumEt_->SetAddress(&TkMET_sumEt_); }
    b_TrigObj_eta_ = tree->GetBranch("TrigObj_eta");
    if (b_TrigObj_eta_) { b_TrigObj_eta_->SetAddress(&TrigObj_eta_); }
    b_TrigObj_filterBits_ = tree->GetBranch("TrigObj_filterBits");
    if (b_TrigObj_filterBits_) { b_TrigObj_filterBits_->SetAddress(&TrigObj_filterBits_); }
    b_TrigObj_id_ = tree->GetBranch("TrigObj_id");
    if (b_TrigObj_id_) { b_TrigObj_id_->SetAddress(&TrigObj_id_); }
    b_TrigObj_l1charge_ = tree->GetBranch("TrigObj_l1charge");
    if (b_TrigObj_l1charge_) { b_TrigObj_l1charge_->SetAddress(&TrigObj_l1charge_); }
    b_TrigObj_l1iso_ = tree->GetBranch("TrigObj_l1iso");
    if (b_TrigObj_l1iso_) { b_TrigObj_l1iso_->SetAddress(&TrigObj_l1iso_); }
    b_TrigObj_l1pt_ = tree->GetBranch("TrigObj_l1pt");
    if (b_TrigObj_l1pt_) { b_TrigObj_l1pt_->SetAddress(&TrigObj_l1pt_); }
    b_TrigObj_l1pt_2_ = tree->GetBranch("TrigObj_l1pt_2");
    if (b_TrigObj_l1pt_2_) { b_TrigObj_l1pt_2_->SetAddress(&TrigObj_l1pt_2_); }
    b_TrigObj_l2pt_ = tree->GetBranch("TrigObj_l2pt");
    if (b_TrigObj_l2pt_) { b_TrigObj_l2pt_->SetAddress(&TrigObj_l2pt_); }
    b_TrigObj_phi_ = tree->GetBranch("TrigObj_phi");
    if (b_TrigObj_phi_) { b_TrigObj_phi_->SetAddress(&TrigObj_phi_); }
    b_TrigObj_pt_ = tree->GetBranch("TrigObj_pt");
    if (b_TrigObj_pt_) { b_TrigObj_pt_->SetAddress(&TrigObj_pt_); }
    b_btagWeight_CMVA_ = tree->GetBranch("btagWeight_CMVA");
    if (b_btagWeight_CMVA_) { b_btagWeight_CMVA_->SetAddress(&btagWeight_CMVA_); }
    b_btagWeight_CSVV2_ = tree->GetBranch("btagWeight_CSVV2");
    if (b_btagWeight_CSVV2_) { b_btagWeight_CSVV2_->SetAddress(&btagWeight_CSVV2_); }
    b_btagWeight_DeepCSVB_ = tree->GetBranch("btagWeight_DeepCSVB");
    if (b_btagWeight_DeepCSVB_) { b_btagWeight_DeepCSVB_->SetAddress(&btagWeight_DeepCSVB_); }
    b_dPhi_ggtautauLoose_ = tree->GetBranch("dPhi_ggtautauLoose");
    if (b_dPhi_ggtautauLoose_) { b_dPhi_ggtautauLoose_->SetAddress(&dPhi_ggtautauLoose_); }
    b_dPhi_ggtautauSVFitLoose_ = tree->GetBranch("dPhi_ggtautauSVFitLoose");
    if (b_dPhi_ggtautauSVFitLoose_) { b_dPhi_ggtautauSVFitLoose_->SetAddress(&dPhi_ggtautauSVFitLoose_); }
    b_dR_ggtautauLoose_ = tree->GetBranch("dR_ggtautauLoose");
    if (b_dR_ggtautauLoose_) { b_dR_ggtautauLoose_->SetAddress(&dR_ggtautauLoose_); }
    b_dR_ggtautauSVFitLoose_ = tree->GetBranch("dR_ggtautauSVFitLoose");
    if (b_dR_ggtautauSVFitLoose_) { b_dR_ggtautauSVFitLoose_->SetAddress(&dR_ggtautauSVFitLoose_); }
    b_dR_tautauLoose_ = tree->GetBranch("dR_tautauLoose");
    if (b_dR_tautauLoose_) { b_dR_tautauLoose_->SetAddress(&dR_tautauLoose_); }
    b_dR_tautauSVFitLoose_ = tree->GetBranch("dR_tautauSVFitLoose");
    if (b_dR_tautauSVFitLoose_) { b_dR_tautauSVFitLoose_->SetAddress(&dR_tautauSVFitLoose_); }
    b_eleHidx_ = tree->GetBranch("eleHidx");
    if (b_eleHidx_) { b_eleHidx_->SetAddress(&eleHidx_); }
    b_eta_tautauLoose_ = tree->GetBranch("eta_tautauLoose");
    if (b_eta_tautauLoose_) { b_eta_tautauLoose_->SetAddress(&eta_tautauLoose_); }
    b_eta_tautauSVFitLoose_ = tree->GetBranch("eta_tautauSVFitLoose");
    if (b_eta_tautauSVFitLoose_) { b_eta_tautauSVFitLoose_->SetAddress(&eta_tautauSVFitLoose_); }
    b_evWeight_electronVeto_ = tree->GetBranch("evWeight_electronVeto");
    if (b_evWeight_electronVeto_) { b_evWeight_electronVeto_->SetAddress(&evWeight_electronVeto_); }
    b_evWeight_electronVetoDown_ = tree->GetBranch("evWeight_electronVetoDown");
    if (b_evWeight_electronVetoDown_) { b_evWeight_electronVetoDown_->SetAddress(&evWeight_electronVetoDown_); }
    b_evWeight_electronVetoUp_ = tree->GetBranch("evWeight_electronVetoUp");
    if (b_evWeight_electronVetoUp_) { b_evWeight_electronVetoUp_->SetAddress(&evWeight_electronVetoUp_); }
    b_evWeight_looseMva_ = tree->GetBranch("evWeight_looseMva");
    if (b_evWeight_looseMva_) { b_evWeight_looseMva_->SetAddress(&evWeight_looseMva_); }
    b_evWeight_looseMvaDown_ = tree->GetBranch("evWeight_looseMvaDown");
    if (b_evWeight_looseMvaDown_) { b_evWeight_looseMvaDown_->SetAddress(&evWeight_looseMvaDown_); }
    b_evWeight_looseMvaUp_ = tree->GetBranch("evWeight_looseMvaUp");
    if (b_evWeight_looseMvaUp_) { b_evWeight_looseMvaUp_->SetAddress(&evWeight_looseMvaUp_); }
    b_evWeight_presel_ = tree->GetBranch("evWeight_presel");
    if (b_evWeight_presel_) { b_evWeight_presel_->SetAddress(&evWeight_presel_); }
    b_evWeight_preselDown_ = tree->GetBranch("evWeight_preselDown");
    if (b_evWeight_preselDown_) { b_evWeight_preselDown_->SetAddress(&evWeight_preselDown_); }
    b_evWeight_preselUp_ = tree->GetBranch("evWeight_preselUp");
    if (b_evWeight_preselUp_) { b_evWeight_preselUp_->SetAddress(&evWeight_preselUp_); }
    b_event_ = tree->GetBranch("event");
    if (b_event_) { b_event_->SetAddress(&event_); }
    b_fixedGridRhoAll_ = tree->GetBranch("fixedGridRhoAll");
    if (b_fixedGridRhoAll_) { b_fixedGridRhoAll_->SetAddress(&fixedGridRhoAll_); }
    b_fixedGridRhoFastjetAll_ = tree->GetBranch("fixedGridRhoFastjetAll");
    if (b_fixedGridRhoFastjetAll_) { b_fixedGridRhoFastjetAll_->SetAddress(&fixedGridRhoFastjetAll_); }
    b_fixedGridRhoFastjetCentral_ = tree->GetBranch("fixedGridRhoFastjetCentral");
    if (b_fixedGridRhoFastjetCentral_) { b_fixedGridRhoFastjetCentral_->SetAddress(&fixedGridRhoFastjetCentral_); }
    b_fixedGridRhoFastjetCentralCalo_ = tree->GetBranch("fixedGridRhoFastjetCentralCalo");
    if (b_fixedGridRhoFastjetCentralCalo_) { b_fixedGridRhoFastjetCentralCalo_->SetAddress(&fixedGridRhoFastjetCentralCalo_); }
    b_fixedGridRhoFastjetCentralChargedPileUp_ = tree->GetBranch("fixedGridRhoFastjetCentralChargedPileUp");
    if (b_fixedGridRhoFastjetCentralChargedPileUp_) { b_fixedGridRhoFastjetCentralChargedPileUp_->SetAddress(&fixedGridRhoFastjetCentralChargedPileUp_); }
    b_fixedGridRhoFastjetCentralNeutral_ = tree->GetBranch("fixedGridRhoFastjetCentralNeutral");
    if (b_fixedGridRhoFastjetCentralNeutral_) { b_fixedGridRhoFastjetCentralNeutral_->SetAddress(&fixedGridRhoFastjetCentralNeutral_); }
    b_gHidx_ = tree->GetBranch("gHidx");
    if (b_gHidx_) { b_gHidx_->SetAddress(&gHidx_); }
    b_genTtbarId_ = tree->GetBranch("genTtbarId");
    if (b_genTtbarId_) { b_genTtbarId_->SetAddress(&genTtbarId_); }
    b_genWeight_ = tree->GetBranch("genWeight");
    if (b_genWeight_) { b_genWeight_->SetAddress(&genWeight_); }
    b_gg_eta_ = tree->GetBranch("gg_eta");
    if (b_gg_eta_) { b_gg_eta_->SetAddress(&gg_eta_); }
    b_gg_mass_ = tree->GetBranch("gg_mass");
    if (b_gg_mass_) { b_gg_mass_->SetAddress(&gg_mass_); }
    b_gg_phi_ = tree->GetBranch("gg_phi");
    if (b_gg_phi_) { b_gg_phi_->SetAddress(&gg_phi_); }
    b_gg_pt_ = tree->GetBranch("gg_pt");
    if (b_gg_pt_) { b_gg_pt_->SetAddress(&gg_pt_); }
    b_luminosityBlock_ = tree->GetBranch("luminosityBlock");
    if (b_luminosityBlock_) { b_luminosityBlock_->SetAddress(&luminosityBlock_); }
    b_m_tautauLoose_ = tree->GetBranch("m_tautauLoose");
    if (b_m_tautauLoose_) { b_m_tautauLoose_->SetAddress(&m_tautauLoose_); }
    b_m_tautauSVFitLoose_ = tree->GetBranch("m_tautauSVFitLoose");
    if (b_m_tautauSVFitLoose_) { b_m_tautauSVFitLoose_->SetAddress(&m_tautauSVFitLoose_); }
    b_muHidx_ = tree->GetBranch("muHidx");
    if (b_muHidx_) { b_muHidx_->SetAddress(&muHidx_); }
    b_nCorrT1METJet_ = tree->GetBranch("nCorrT1METJet");
    if (b_nCorrT1METJet_) { b_nCorrT1METJet_->SetAddress(&nCorrT1METJet_); }
    b_nElectron_ = tree->GetBranch("nElectron");
    if (b_nElectron_) { b_nElectron_->SetAddress(&nElectron_); }
    b_nFsrPhoton_ = tree->GetBranch("nFsrPhoton");
    if (b_nFsrPhoton_) { b_nFsrPhoton_->SetAddress(&nFsrPhoton_); }
    b_nGenDressedLepton_ = tree->GetBranch("nGenDressedLepton");
    if (b_nGenDressedLepton_) { b_nGenDressedLepton_->SetAddress(&nGenDressedLepton_); }
    b_nGenIsolatedPhoton_ = tree->GetBranch("nGenIsolatedPhoton");
    if (b_nGenIsolatedPhoton_) { b_nGenIsolatedPhoton_->SetAddress(&nGenIsolatedPhoton_); }
    b_nGenJet_ = tree->GetBranch("nGenJet");
    if (b_nGenJet_) { b_nGenJet_->SetAddress(&nGenJet_); }
    b_nGenJetAK8_ = tree->GetBranch("nGenJetAK8");
    if (b_nGenJetAK8_) { b_nGenJetAK8_->SetAddress(&nGenJetAK8_); }
    b_nGenPart_ = tree->GetBranch("nGenPart");
    if (b_nGenPart_) { b_nGenPart_->SetAddress(&nGenPart_); }
    b_nGenVisTau_ = tree->GetBranch("nGenVisTau");
    if (b_nGenVisTau_) { b_nGenVisTau_->SetAddress(&nGenVisTau_); }
    b_nIsoTrack_ = tree->GetBranch("nIsoTrack");
    if (b_nIsoTrack_) { b_nIsoTrack_->SetAddress(&nIsoTrack_); }
    b_nJet_ = tree->GetBranch("nJet");
    if (b_nJet_) { b_nJet_->SetAddress(&nJet_); }
    b_nLHEPart_ = tree->GetBranch("nLHEPart");
    if (b_nLHEPart_) { b_nLHEPart_->SetAddress(&nLHEPart_); }
    b_nLHEPdfWeight_ = tree->GetBranch("nLHEPdfWeight");
    if (b_nLHEPdfWeight_) { b_nLHEPdfWeight_->SetAddress(&nLHEPdfWeight_); }
    b_nLHEReweightingWeight_ = tree->GetBranch("nLHEReweightingWeight");
    if (b_nLHEReweightingWeight_) { b_nLHEReweightingWeight_->SetAddress(&nLHEReweightingWeight_); }
    b_nLHEScaleWeight_ = tree->GetBranch("nLHEScaleWeight");
    if (b_nLHEScaleWeight_) { b_nLHEScaleWeight_->SetAddress(&nLHEScaleWeight_); }
    b_nMuon_ = tree->GetBranch("nMuon");
    if (b_nMuon_) { b_nMuon_->SetAddress(&nMuon_); }
    b_nOtherPV_ = tree->GetBranch("nOtherPV");
    if (b_nOtherPV_) { b_nOtherPV_->SetAddress(&nOtherPV_); }
    b_nPSWeight_ = tree->GetBranch("nPSWeight");
    if (b_nPSWeight_) { b_nPSWeight_->SetAddress(&nPSWeight_); }
    b_nPhoton_ = tree->GetBranch("nPhoton");
    if (b_nPhoton_) { b_nPhoton_->SetAddress(&nPhoton_); }
    b_nSV_ = tree->GetBranch("nSV");
    if (b_nSV_) { b_nSV_->SetAddress(&nSV_); }
    b_nSoftActivityJet_ = tree->GetBranch("nSoftActivityJet");
    if (b_nSoftActivityJet_) { b_nSoftActivityJet_->SetAddress(&nSoftActivityJet_); }
    b_nSubGenJetAK8_ = tree->GetBranch("nSubGenJetAK8");
    if (b_nSubGenJetAK8_) { b_nSubGenJetAK8_->SetAddress(&nSubGenJetAK8_); }
    b_nSubJet_ = tree->GetBranch("nSubJet");
    if (b_nSubJet_) { b_nSubJet_->SetAddress(&nSubJet_); }
    b_nTau_ = tree->GetBranch("nTau");
    if (b_nTau_) { b_nTau_->SetAddress(&nTau_); }
    b_nTrigObj_ = tree->GetBranch("nTrigObj");
    if (b_nTrigObj_) { b_nTrigObj_->SetAddress(&nTrigObj_); }
    b_nselectedElectron_ = tree->GetBranch("nselectedElectron");
    if (b_nselectedElectron_) { b_nselectedElectron_->SetAddress(&nselectedElectron_); }
    b_nselectedMuon_ = tree->GetBranch("nselectedMuon");
    if (b_nselectedMuon_) { b_nselectedMuon_->SetAddress(&nselectedMuon_); }
    b_nselectedTauLoose_ = tree->GetBranch("nselectedTauLoose");
    if (b_nselectedTauLoose_) { b_nselectedTauLoose_->SetAddress(&nselectedTauLoose_); }
    b_passedDigammaPair_ = tree->GetBranch("passedDigammaPair");
    if (b_passedDigammaPair_) { b_passedDigammaPair_->SetAddress(&passedDigammaPair_); }
    b_passedGoodPhotons_ = tree->GetBranch("passedGoodPhotons");
    if (b_passedGoodPhotons_) { b_passedGoodPhotons_->SetAddress(&passedGoodPhotons_); }
    b_passedHPhotons_ = tree->GetBranch("passedHPhotons");
    if (b_passedHPhotons_) { b_passedHPhotons_->SetAddress(&passedHPhotons_); }
    b_phi_tautauLoose_ = tree->GetBranch("phi_tautauLoose");
    if (b_phi_tautauLoose_) { b_phi_tautauLoose_->SetAddress(&phi_tautauLoose_); }
    b_phi_tautauSVFitLoose_ = tree->GetBranch("phi_tautauSVFitLoose");
    if (b_phi_tautauSVFitLoose_) { b_phi_tautauSVFitLoose_->SetAddress(&phi_tautauSVFitLoose_); }
    b_pt_tautauLoose_ = tree->GetBranch("pt_tautauLoose");
    if (b_pt_tautauLoose_) { b_pt_tautauLoose_->SetAddress(&pt_tautauLoose_); }
    b_pt_tautauSVFitLoose_ = tree->GetBranch("pt_tautauSVFitLoose");
    if (b_pt_tautauSVFitLoose_) { b_pt_tautauSVFitLoose_->SetAddress(&pt_tautauSVFitLoose_); }
    b_puWeight_ = tree->GetBranch("puWeight");
    if (b_puWeight_) { b_puWeight_->SetAddress(&puWeight_); }
    b_puWeightDown_ = tree->GetBranch("puWeightDown");
    if (b_puWeightDown_) { b_puWeightDown_->SetAddress(&puWeightDown_); }
    b_puWeightUp_ = tree->GetBranch("puWeightUp");
    if (b_puWeightUp_) { b_puWeightUp_->SetAddress(&puWeightUp_); }
    b_run_ = tree->GetBranch("run");
    if (b_run_) { b_run_->SetAddress(&run_); }
    b_selectedElectron_charge_ = tree->GetBranch("selectedElectron_charge");
    if (b_selectedElectron_charge_) { b_selectedElectron_charge_->SetAddress(&selectedElectron_charge_); }
    b_selectedElectron_cleanmask_ = tree->GetBranch("selectedElectron_cleanmask");
    if (b_selectedElectron_cleanmask_) { b_selectedElectron_cleanmask_->SetAddress(&selectedElectron_cleanmask_); }
    b_selectedElectron_convVeto_ = tree->GetBranch("selectedElectron_convVeto");
    if (b_selectedElectron_convVeto_) { b_selectedElectron_convVeto_->SetAddress(&selectedElectron_convVeto_); }
    b_selectedElectron_cutBased_ = tree->GetBranch("selectedElectron_cutBased");
    if (b_selectedElectron_cutBased_) { b_selectedElectron_cutBased_->SetAddress(&selectedElectron_cutBased_); }
    b_selectedElectron_cutBased_Fall17_V1_ = tree->GetBranch("selectedElectron_cutBased_Fall17_V1");
    if (b_selectedElectron_cutBased_Fall17_V1_) { b_selectedElectron_cutBased_Fall17_V1_->SetAddress(&selectedElectron_cutBased_Fall17_V1_); }
    b_selectedElectron_cutBased_HEEP_ = tree->GetBranch("selectedElectron_cutBased_HEEP");
    if (b_selectedElectron_cutBased_HEEP_) { b_selectedElectron_cutBased_HEEP_->SetAddress(&selectedElectron_cutBased_HEEP_); }
    b_selectedElectron_cutBased_HLTPreSel_ = tree->GetBranch("selectedElectron_cutBased_HLTPreSel");
    if (b_selectedElectron_cutBased_HLTPreSel_) { b_selectedElectron_cutBased_HLTPreSel_->SetAddress(&selectedElectron_cutBased_HLTPreSel_); }
    b_selectedElectron_cutBased_Spring15_ = tree->GetBranch("selectedElectron_cutBased_Spring15");
    if (b_selectedElectron_cutBased_Spring15_) { b_selectedElectron_cutBased_Spring15_->SetAddress(&selectedElectron_cutBased_Spring15_); }
    b_selectedElectron_cutBased_Sum16_ = tree->GetBranch("selectedElectron_cutBased_Sum16");
    if (b_selectedElectron_cutBased_Sum16_) { b_selectedElectron_cutBased_Sum16_->SetAddress(&selectedElectron_cutBased_Sum16_); }
    b_selectedElectron_deltaEtaSC_ = tree->GetBranch("selectedElectron_deltaEtaSC");
    if (b_selectedElectron_deltaEtaSC_) { b_selectedElectron_deltaEtaSC_->SetAddress(&selectedElectron_deltaEtaSC_); }
    b_selectedElectron_dr03EcalRecHitSumEt_ = tree->GetBranch("selectedElectron_dr03EcalRecHitSumEt");
    if (b_selectedElectron_dr03EcalRecHitSumEt_) { b_selectedElectron_dr03EcalRecHitSumEt_->SetAddress(&selectedElectron_dr03EcalRecHitSumEt_); }
    b_selectedElectron_dr03HcalDepth1TowerSumEt_ = tree->GetBranch("selectedElectron_dr03HcalDepth1TowerSumEt");
    if (b_selectedElectron_dr03HcalDepth1TowerSumEt_) { b_selectedElectron_dr03HcalDepth1TowerSumEt_->SetAddress(&selectedElectron_dr03HcalDepth1TowerSumEt_); }
    b_selectedElectron_dr03TkSumPt_ = tree->GetBranch("selectedElectron_dr03TkSumPt");
    if (b_selectedElectron_dr03TkSumPt_) { b_selectedElectron_dr03TkSumPt_->SetAddress(&selectedElectron_dr03TkSumPt_); }
    b_selectedElectron_dr03TkSumPtHEEP_ = tree->GetBranch("selectedElectron_dr03TkSumPtHEEP");
    if (b_selectedElectron_dr03TkSumPtHEEP_) { b_selectedElectron_dr03TkSumPtHEEP_->SetAddress(&selectedElectron_dr03TkSumPtHEEP_); }
    b_selectedElectron_dxy_ = tree->GetBranch("selectedElectron_dxy");
    if (b_selectedElectron_dxy_) { b_selectedElectron_dxy_->SetAddress(&selectedElectron_dxy_); }
    b_selectedElectron_dxyErr_ = tree->GetBranch("selectedElectron_dxyErr");
    if (b_selectedElectron_dxyErr_) { b_selectedElectron_dxyErr_->SetAddress(&selectedElectron_dxyErr_); }
    b_selectedElectron_dz_ = tree->GetBranch("selectedElectron_dz");
    if (b_selectedElectron_dz_) { b_selectedElectron_dz_->SetAddress(&selectedElectron_dz_); }
    b_selectedElectron_dzErr_ = tree->GetBranch("selectedElectron_dzErr");
    if (b_selectedElectron_dzErr_) { b_selectedElectron_dzErr_->SetAddress(&selectedElectron_dzErr_); }
    b_selectedElectron_eCorr_ = tree->GetBranch("selectedElectron_eCorr");
    if (b_selectedElectron_eCorr_) { b_selectedElectron_eCorr_->SetAddress(&selectedElectron_eCorr_); }
    b_selectedElectron_eInvMinusPInv_ = tree->GetBranch("selectedElectron_eInvMinusPInv");
    if (b_selectedElectron_eInvMinusPInv_) { b_selectedElectron_eInvMinusPInv_->SetAddress(&selectedElectron_eInvMinusPInv_); }
    b_selectedElectron_energyErr_ = tree->GetBranch("selectedElectron_energyErr");
    if (b_selectedElectron_energyErr_) { b_selectedElectron_energyErr_->SetAddress(&selectedElectron_energyErr_); }
    b_selectedElectron_eta_ = tree->GetBranch("selectedElectron_eta");
    if (b_selectedElectron_eta_) { b_selectedElectron_eta_->SetAddress(&selectedElectron_eta_); }
    b_selectedElectron_etaSVFit_ = tree->GetBranch("selectedElectron_etaSVFit");
    if (b_selectedElectron_etaSVFit_) { b_selectedElectron_etaSVFit_->SetAddress(&selectedElectron_etaSVFit_); }
    b_selectedElectron_genPartFlav_ = tree->GetBranch("selectedElectron_genPartFlav");
    if (b_selectedElectron_genPartFlav_) { b_selectedElectron_genPartFlav_->SetAddress(&selectedElectron_genPartFlav_); }
    b_selectedElectron_genPartIdx_ = tree->GetBranch("selectedElectron_genPartIdx");
    if (b_selectedElectron_genPartIdx_) { b_selectedElectron_genPartIdx_->SetAddress(&selectedElectron_genPartIdx_); }
    b_selectedElectron_hoe_ = tree->GetBranch("selectedElectron_hoe");
    if (b_selectedElectron_hoe_) { b_selectedElectron_hoe_->SetAddress(&selectedElectron_hoe_); }
    b_selectedElectron_ip3d_ = tree->GetBranch("selectedElectron_ip3d");
    if (b_selectedElectron_ip3d_) { b_selectedElectron_ip3d_->SetAddress(&selectedElectron_ip3d_); }
    b_selectedElectron_isPFcand_ = tree->GetBranch("selectedElectron_isPFcand");
    if (b_selectedElectron_isPFcand_) { b_selectedElectron_isPFcand_->SetAddress(&selectedElectron_isPFcand_); }
    b_selectedElectron_jetIdx_ = tree->GetBranch("selectedElectron_jetIdx");
    if (b_selectedElectron_jetIdx_) { b_selectedElectron_jetIdx_->SetAddress(&selectedElectron_jetIdx_); }
    b_selectedElectron_jetPtRelv2_ = tree->GetBranch("selectedElectron_jetPtRelv2");
    if (b_selectedElectron_jetPtRelv2_) { b_selectedElectron_jetPtRelv2_->SetAddress(&selectedElectron_jetPtRelv2_); }
    b_selectedElectron_jetRelIso_ = tree->GetBranch("selectedElectron_jetRelIso");
    if (b_selectedElectron_jetRelIso_) { b_selectedElectron_jetRelIso_->SetAddress(&selectedElectron_jetRelIso_); }
    b_selectedElectron_lostHits_ = tree->GetBranch("selectedElectron_lostHits");
    if (b_selectedElectron_lostHits_) { b_selectedElectron_lostHits_->SetAddress(&selectedElectron_lostHits_); }
    b_selectedElectron_mSVFit_ = tree->GetBranch("selectedElectron_mSVFit");
    if (b_selectedElectron_mSVFit_) { b_selectedElectron_mSVFit_->SetAddress(&selectedElectron_mSVFit_); }
    b_selectedElectron_mass_ = tree->GetBranch("selectedElectron_mass");
    if (b_selectedElectron_mass_) { b_selectedElectron_mass_->SetAddress(&selectedElectron_mass_); }
    b_selectedElectron_miniPFRelIso_all_ = tree->GetBranch("selectedElectron_miniPFRelIso_all");
    if (b_selectedElectron_miniPFRelIso_all_) { b_selectedElectron_miniPFRelIso_all_->SetAddress(&selectedElectron_miniPFRelIso_all_); }
    b_selectedElectron_miniPFRelIso_chg_ = tree->GetBranch("selectedElectron_miniPFRelIso_chg");
    if (b_selectedElectron_miniPFRelIso_chg_) { b_selectedElectron_miniPFRelIso_chg_->SetAddress(&selectedElectron_miniPFRelIso_chg_); }
    b_selectedElectron_mvaFall17V1Iso_ = tree->GetBranch("selectedElectron_mvaFall17V1Iso");
    if (b_selectedElectron_mvaFall17V1Iso_) { b_selectedElectron_mvaFall17V1Iso_->SetAddress(&selectedElectron_mvaFall17V1Iso_); }
    b_selectedElectron_mvaFall17V1Iso_WP80_ = tree->GetBranch("selectedElectron_mvaFall17V1Iso_WP80");
    if (b_selectedElectron_mvaFall17V1Iso_WP80_) { b_selectedElectron_mvaFall17V1Iso_WP80_->SetAddress(&selectedElectron_mvaFall17V1Iso_WP80_); }
    b_selectedElectron_mvaFall17V1Iso_WP90_ = tree->GetBranch("selectedElectron_mvaFall17V1Iso_WP90");
    if (b_selectedElectron_mvaFall17V1Iso_WP90_) { b_selectedElectron_mvaFall17V1Iso_WP90_->SetAddress(&selectedElectron_mvaFall17V1Iso_WP90_); }
    b_selectedElectron_mvaFall17V1Iso_WPL_ = tree->GetBranch("selectedElectron_mvaFall17V1Iso_WPL");
    if (b_selectedElectron_mvaFall17V1Iso_WPL_) { b_selectedElectron_mvaFall17V1Iso_WPL_->SetAddress(&selectedElectron_mvaFall17V1Iso_WPL_); }
    b_selectedElectron_mvaFall17V1noIso_ = tree->GetBranch("selectedElectron_mvaFall17V1noIso");
    if (b_selectedElectron_mvaFall17V1noIso_) { b_selectedElectron_mvaFall17V1noIso_->SetAddress(&selectedElectron_mvaFall17V1noIso_); }
    b_selectedElectron_mvaFall17V1noIso_WP80_ = tree->GetBranch("selectedElectron_mvaFall17V1noIso_WP80");
    if (b_selectedElectron_mvaFall17V1noIso_WP80_) { b_selectedElectron_mvaFall17V1noIso_WP80_->SetAddress(&selectedElectron_mvaFall17V1noIso_WP80_); }
    b_selectedElectron_mvaFall17V1noIso_WP90_ = tree->GetBranch("selectedElectron_mvaFall17V1noIso_WP90");
    if (b_selectedElectron_mvaFall17V1noIso_WP90_) { b_selectedElectron_mvaFall17V1noIso_WP90_->SetAddress(&selectedElectron_mvaFall17V1noIso_WP90_); }
    b_selectedElectron_mvaFall17V1noIso_WPL_ = tree->GetBranch("selectedElectron_mvaFall17V1noIso_WPL");
    if (b_selectedElectron_mvaFall17V1noIso_WPL_) { b_selectedElectron_mvaFall17V1noIso_WPL_->SetAddress(&selectedElectron_mvaFall17V1noIso_WPL_); }
    b_selectedElectron_mvaFall17V2Iso_ = tree->GetBranch("selectedElectron_mvaFall17V2Iso");
    if (b_selectedElectron_mvaFall17V2Iso_) { b_selectedElectron_mvaFall17V2Iso_->SetAddress(&selectedElectron_mvaFall17V2Iso_); }
    b_selectedElectron_mvaFall17V2Iso_WP80_ = tree->GetBranch("selectedElectron_mvaFall17V2Iso_WP80");
    if (b_selectedElectron_mvaFall17V2Iso_WP80_) { b_selectedElectron_mvaFall17V2Iso_WP80_->SetAddress(&selectedElectron_mvaFall17V2Iso_WP80_); }
    b_selectedElectron_mvaFall17V2Iso_WP90_ = tree->GetBranch("selectedElectron_mvaFall17V2Iso_WP90");
    if (b_selectedElectron_mvaFall17V2Iso_WP90_) { b_selectedElectron_mvaFall17V2Iso_WP90_->SetAddress(&selectedElectron_mvaFall17V2Iso_WP90_); }
    b_selectedElectron_mvaFall17V2Iso_WPL_ = tree->GetBranch("selectedElectron_mvaFall17V2Iso_WPL");
    if (b_selectedElectron_mvaFall17V2Iso_WPL_) { b_selectedElectron_mvaFall17V2Iso_WPL_->SetAddress(&selectedElectron_mvaFall17V2Iso_WPL_); }
    b_selectedElectron_mvaFall17V2noIso_ = tree->GetBranch("selectedElectron_mvaFall17V2noIso");
    if (b_selectedElectron_mvaFall17V2noIso_) { b_selectedElectron_mvaFall17V2noIso_->SetAddress(&selectedElectron_mvaFall17V2noIso_); }
    b_selectedElectron_mvaFall17V2noIso_WP80_ = tree->GetBranch("selectedElectron_mvaFall17V2noIso_WP80");
    if (b_selectedElectron_mvaFall17V2noIso_WP80_) { b_selectedElectron_mvaFall17V2noIso_WP80_->SetAddress(&selectedElectron_mvaFall17V2noIso_WP80_); }
    b_selectedElectron_mvaFall17V2noIso_WP90_ = tree->GetBranch("selectedElectron_mvaFall17V2noIso_WP90");
    if (b_selectedElectron_mvaFall17V2noIso_WP90_) { b_selectedElectron_mvaFall17V2noIso_WP90_->SetAddress(&selectedElectron_mvaFall17V2noIso_WP90_); }
    b_selectedElectron_mvaFall17V2noIso_WPL_ = tree->GetBranch("selectedElectron_mvaFall17V2noIso_WPL");
    if (b_selectedElectron_mvaFall17V2noIso_WPL_) { b_selectedElectron_mvaFall17V2noIso_WPL_->SetAddress(&selectedElectron_mvaFall17V2noIso_WPL_); }
    b_selectedElectron_mvaSpring16GP_ = tree->GetBranch("selectedElectron_mvaSpring16GP");
    if (b_selectedElectron_mvaSpring16GP_) { b_selectedElectron_mvaSpring16GP_->SetAddress(&selectedElectron_mvaSpring16GP_); }
    b_selectedElectron_mvaSpring16GP_WP80_ = tree->GetBranch("selectedElectron_mvaSpring16GP_WP80");
    if (b_selectedElectron_mvaSpring16GP_WP80_) { b_selectedElectron_mvaSpring16GP_WP80_->SetAddress(&selectedElectron_mvaSpring16GP_WP80_); }
    b_selectedElectron_mvaSpring16GP_WP90_ = tree->GetBranch("selectedElectron_mvaSpring16GP_WP90");
    if (b_selectedElectron_mvaSpring16GP_WP90_) { b_selectedElectron_mvaSpring16GP_WP90_->SetAddress(&selectedElectron_mvaSpring16GP_WP90_); }
    b_selectedElectron_mvaSpring16HZZ_ = tree->GetBranch("selectedElectron_mvaSpring16HZZ");
    if (b_selectedElectron_mvaSpring16HZZ_) { b_selectedElectron_mvaSpring16HZZ_->SetAddress(&selectedElectron_mvaSpring16HZZ_); }
    b_selectedElectron_mvaSpring16HZZ_WPL_ = tree->GetBranch("selectedElectron_mvaSpring16HZZ_WPL");
    if (b_selectedElectron_mvaSpring16HZZ_WPL_) { b_selectedElectron_mvaSpring16HZZ_WPL_->SetAddress(&selectedElectron_mvaSpring16HZZ_WPL_); }
    b_selectedElectron_mvaTTH_ = tree->GetBranch("selectedElectron_mvaTTH");
    if (b_selectedElectron_mvaTTH_) { b_selectedElectron_mvaTTH_->SetAddress(&selectedElectron_mvaTTH_); }
    b_selectedElectron_pdgId_ = tree->GetBranch("selectedElectron_pdgId");
    if (b_selectedElectron_pdgId_) { b_selectedElectron_pdgId_->SetAddress(&selectedElectron_pdgId_); }
    b_selectedElectron_pfRelIso03_all_ = tree->GetBranch("selectedElectron_pfRelIso03_all");
    if (b_selectedElectron_pfRelIso03_all_) { b_selectedElectron_pfRelIso03_all_->SetAddress(&selectedElectron_pfRelIso03_all_); }
    b_selectedElectron_pfRelIso03_chg_ = tree->GetBranch("selectedElectron_pfRelIso03_chg");
    if (b_selectedElectron_pfRelIso03_chg_) { b_selectedElectron_pfRelIso03_chg_->SetAddress(&selectedElectron_pfRelIso03_chg_); }
    b_selectedElectron_phi_ = tree->GetBranch("selectedElectron_phi");
    if (b_selectedElectron_phi_) { b_selectedElectron_phi_->SetAddress(&selectedElectron_phi_); }
    b_selectedElectron_phiSVFit_ = tree->GetBranch("selectedElectron_phiSVFit");
    if (b_selectedElectron_phiSVFit_) { b_selectedElectron_phiSVFit_->SetAddress(&selectedElectron_phiSVFit_); }
    b_selectedElectron_photonIdx_ = tree->GetBranch("selectedElectron_photonIdx");
    if (b_selectedElectron_photonIdx_) { b_selectedElectron_photonIdx_->SetAddress(&selectedElectron_photonIdx_); }
    b_selectedElectron_pt_ = tree->GetBranch("selectedElectron_pt");
    if (b_selectedElectron_pt_) { b_selectedElectron_pt_->SetAddress(&selectedElectron_pt_); }
    b_selectedElectron_ptSVFit_ = tree->GetBranch("selectedElectron_ptSVFit");
    if (b_selectedElectron_ptSVFit_) { b_selectedElectron_ptSVFit_->SetAddress(&selectedElectron_ptSVFit_); }
    b_selectedElectron_r9_ = tree->GetBranch("selectedElectron_r9");
    if (b_selectedElectron_r9_) { b_selectedElectron_r9_->SetAddress(&selectedElectron_r9_); }
    b_selectedElectron_scEtOverPt_ = tree->GetBranch("selectedElectron_scEtOverPt");
    if (b_selectedElectron_scEtOverPt_) { b_selectedElectron_scEtOverPt_->SetAddress(&selectedElectron_scEtOverPt_); }
    b_selectedElectron_seedGain_ = tree->GetBranch("selectedElectron_seedGain");
    if (b_selectedElectron_seedGain_) { b_selectedElectron_seedGain_->SetAddress(&selectedElectron_seedGain_); }
    b_selectedElectron_sieie_ = tree->GetBranch("selectedElectron_sieie");
    if (b_selectedElectron_sieie_) { b_selectedElectron_sieie_->SetAddress(&selectedElectron_sieie_); }
    b_selectedElectron_sip3d_ = tree->GetBranch("selectedElectron_sip3d");
    if (b_selectedElectron_sip3d_) { b_selectedElectron_sip3d_->SetAddress(&selectedElectron_sip3d_); }
    b_selectedElectron_tightCharge_ = tree->GetBranch("selectedElectron_tightCharge");
    if (b_selectedElectron_tightCharge_) { b_selectedElectron_tightCharge_->SetAddress(&selectedElectron_tightCharge_); }
    b_selectedElectron_vidNestedWPBitmap_ = tree->GetBranch("selectedElectron_vidNestedWPBitmap");
    if (b_selectedElectron_vidNestedWPBitmap_) { b_selectedElectron_vidNestedWPBitmap_->SetAddress(&selectedElectron_vidNestedWPBitmap_); }
    b_selectedElectron_vidNestedWPBitmapHEEP_ = tree->GetBranch("selectedElectron_vidNestedWPBitmapHEEP");
    if (b_selectedElectron_vidNestedWPBitmapHEEP_) { b_selectedElectron_vidNestedWPBitmapHEEP_->SetAddress(&selectedElectron_vidNestedWPBitmapHEEP_); }
    b_selectedElectron_vidNestedWPBitmapSpring15_ = tree->GetBranch("selectedElectron_vidNestedWPBitmapSpring15");
    if (b_selectedElectron_vidNestedWPBitmapSpring15_) { b_selectedElectron_vidNestedWPBitmapSpring15_->SetAddress(&selectedElectron_vidNestedWPBitmapSpring15_); }
    b_selectedElectron_vidNestedWPBitmapSum16_ = tree->GetBranch("selectedElectron_vidNestedWPBitmapSum16");
    if (b_selectedElectron_vidNestedWPBitmapSum16_) { b_selectedElectron_vidNestedWPBitmapSum16_->SetAddress(&selectedElectron_vidNestedWPBitmapSum16_); }
    b_selectedMuon_charge_ = tree->GetBranch("selectedMuon_charge");
    if (b_selectedMuon_charge_) { b_selectedMuon_charge_->SetAddress(&selectedMuon_charge_); }
    b_selectedMuon_cleanmask_ = tree->GetBranch("selectedMuon_cleanmask");
    if (b_selectedMuon_cleanmask_) { b_selectedMuon_cleanmask_->SetAddress(&selectedMuon_cleanmask_); }
    b_selectedMuon_dxy_ = tree->GetBranch("selectedMuon_dxy");
    if (b_selectedMuon_dxy_) { b_selectedMuon_dxy_->SetAddress(&selectedMuon_dxy_); }
    b_selectedMuon_dxyErr_ = tree->GetBranch("selectedMuon_dxyErr");
    if (b_selectedMuon_dxyErr_) { b_selectedMuon_dxyErr_->SetAddress(&selectedMuon_dxyErr_); }
    b_selectedMuon_dxybs_ = tree->GetBranch("selectedMuon_dxybs");
    if (b_selectedMuon_dxybs_) { b_selectedMuon_dxybs_->SetAddress(&selectedMuon_dxybs_); }
    b_selectedMuon_dz_ = tree->GetBranch("selectedMuon_dz");
    if (b_selectedMuon_dz_) { b_selectedMuon_dz_->SetAddress(&selectedMuon_dz_); }
    b_selectedMuon_dzErr_ = tree->GetBranch("selectedMuon_dzErr");
    if (b_selectedMuon_dzErr_) { b_selectedMuon_dzErr_->SetAddress(&selectedMuon_dzErr_); }
    b_selectedMuon_eta_ = tree->GetBranch("selectedMuon_eta");
    if (b_selectedMuon_eta_) { b_selectedMuon_eta_->SetAddress(&selectedMuon_eta_); }
    b_selectedMuon_etaSVFit_ = tree->GetBranch("selectedMuon_etaSVFit");
    if (b_selectedMuon_etaSVFit_) { b_selectedMuon_etaSVFit_->SetAddress(&selectedMuon_etaSVFit_); }
    b_selectedMuon_fsrPhotonIdx_ = tree->GetBranch("selectedMuon_fsrPhotonIdx");
    if (b_selectedMuon_fsrPhotonIdx_) { b_selectedMuon_fsrPhotonIdx_->SetAddress(&selectedMuon_fsrPhotonIdx_); }
    b_selectedMuon_genPartFlav_ = tree->GetBranch("selectedMuon_genPartFlav");
    if (b_selectedMuon_genPartFlav_) { b_selectedMuon_genPartFlav_->SetAddress(&selectedMuon_genPartFlav_); }
    b_selectedMuon_genPartIdx_ = tree->GetBranch("selectedMuon_genPartIdx");
    if (b_selectedMuon_genPartIdx_) { b_selectedMuon_genPartIdx_->SetAddress(&selectedMuon_genPartIdx_); }
    b_selectedMuon_highPtId_ = tree->GetBranch("selectedMuon_highPtId");
    if (b_selectedMuon_highPtId_) { b_selectedMuon_highPtId_->SetAddress(&selectedMuon_highPtId_); }
    b_selectedMuon_highPurity_ = tree->GetBranch("selectedMuon_highPurity");
    if (b_selectedMuon_highPurity_) { b_selectedMuon_highPurity_->SetAddress(&selectedMuon_highPurity_); }
    b_selectedMuon_inTimeselectedMuon_ = tree->GetBranch("selectedMuon_inTimeselectedMuon");
    if (b_selectedMuon_inTimeselectedMuon_) { b_selectedMuon_inTimeselectedMuon_->SetAddress(&selectedMuon_inTimeselectedMuon_); }
    b_selectedMuon_ip3d_ = tree->GetBranch("selectedMuon_ip3d");
    if (b_selectedMuon_ip3d_) { b_selectedMuon_ip3d_->SetAddress(&selectedMuon_ip3d_); }
    b_selectedMuon_isGlobal_ = tree->GetBranch("selectedMuon_isGlobal");
    if (b_selectedMuon_isGlobal_) { b_selectedMuon_isGlobal_->SetAddress(&selectedMuon_isGlobal_); }
    b_selectedMuon_isPFcand_ = tree->GetBranch("selectedMuon_isPFcand");
    if (b_selectedMuon_isPFcand_) { b_selectedMuon_isPFcand_->SetAddress(&selectedMuon_isPFcand_); }
    b_selectedMuon_isTracker_ = tree->GetBranch("selectedMuon_isTracker");
    if (b_selectedMuon_isTracker_) { b_selectedMuon_isTracker_->SetAddress(&selectedMuon_isTracker_); }
    b_selectedMuon_jetIdx_ = tree->GetBranch("selectedMuon_jetIdx");
    if (b_selectedMuon_jetIdx_) { b_selectedMuon_jetIdx_->SetAddress(&selectedMuon_jetIdx_); }
    b_selectedMuon_jetPtRelv2_ = tree->GetBranch("selectedMuon_jetPtRelv2");
    if (b_selectedMuon_jetPtRelv2_) { b_selectedMuon_jetPtRelv2_->SetAddress(&selectedMuon_jetPtRelv2_); }
    b_selectedMuon_jetRelIso_ = tree->GetBranch("selectedMuon_jetRelIso");
    if (b_selectedMuon_jetRelIso_) { b_selectedMuon_jetRelIso_->SetAddress(&selectedMuon_jetRelIso_); }
    b_selectedMuon_looseId_ = tree->GetBranch("selectedMuon_looseId");
    if (b_selectedMuon_looseId_) { b_selectedMuon_looseId_->SetAddress(&selectedMuon_looseId_); }
    b_selectedMuon_mSVFit_ = tree->GetBranch("selectedMuon_mSVFit");
    if (b_selectedMuon_mSVFit_) { b_selectedMuon_mSVFit_->SetAddress(&selectedMuon_mSVFit_); }
    b_selectedMuon_mass_ = tree->GetBranch("selectedMuon_mass");
    if (b_selectedMuon_mass_) { b_selectedMuon_mass_->SetAddress(&selectedMuon_mass_); }
    b_selectedMuon_mediumId_ = tree->GetBranch("selectedMuon_mediumId");
    if (b_selectedMuon_mediumId_) { b_selectedMuon_mediumId_->SetAddress(&selectedMuon_mediumId_); }
    b_selectedMuon_mediumPromptId_ = tree->GetBranch("selectedMuon_mediumPromptId");
    if (b_selectedMuon_mediumPromptId_) { b_selectedMuon_mediumPromptId_->SetAddress(&selectedMuon_mediumPromptId_); }
    b_selectedMuon_miniIsoId_ = tree->GetBranch("selectedMuon_miniIsoId");
    if (b_selectedMuon_miniIsoId_) { b_selectedMuon_miniIsoId_->SetAddress(&selectedMuon_miniIsoId_); }
    b_selectedMuon_miniPFRelIso_all_ = tree->GetBranch("selectedMuon_miniPFRelIso_all");
    if (b_selectedMuon_miniPFRelIso_all_) { b_selectedMuon_miniPFRelIso_all_->SetAddress(&selectedMuon_miniPFRelIso_all_); }
    b_selectedMuon_miniPFRelIso_chg_ = tree->GetBranch("selectedMuon_miniPFRelIso_chg");
    if (b_selectedMuon_miniPFRelIso_chg_) { b_selectedMuon_miniPFRelIso_chg_->SetAddress(&selectedMuon_miniPFRelIso_chg_); }
    b_selectedMuon_multiIsoId_ = tree->GetBranch("selectedMuon_multiIsoId");
    if (b_selectedMuon_multiIsoId_) { b_selectedMuon_multiIsoId_->SetAddress(&selectedMuon_multiIsoId_); }
    b_selectedMuon_mvaId_ = tree->GetBranch("selectedMuon_mvaId");
    if (b_selectedMuon_mvaId_) { b_selectedMuon_mvaId_->SetAddress(&selectedMuon_mvaId_); }
    b_selectedMuon_mvaLowPt_ = tree->GetBranch("selectedMuon_mvaLowPt");
    if (b_selectedMuon_mvaLowPt_) { b_selectedMuon_mvaLowPt_->SetAddress(&selectedMuon_mvaLowPt_); }
    b_selectedMuon_mvaTTH_ = tree->GetBranch("selectedMuon_mvaTTH");
    if (b_selectedMuon_mvaTTH_) { b_selectedMuon_mvaTTH_->SetAddress(&selectedMuon_mvaTTH_); }
    b_selectedMuon_nStations_ = tree->GetBranch("selectedMuon_nStations");
    if (b_selectedMuon_nStations_) { b_selectedMuon_nStations_->SetAddress(&selectedMuon_nStations_); }
    b_selectedMuon_nTrackerLayers_ = tree->GetBranch("selectedMuon_nTrackerLayers");
    if (b_selectedMuon_nTrackerLayers_) { b_selectedMuon_nTrackerLayers_->SetAddress(&selectedMuon_nTrackerLayers_); }
    b_selectedMuon_pdgId_ = tree->GetBranch("selectedMuon_pdgId");
    if (b_selectedMuon_pdgId_) { b_selectedMuon_pdgId_->SetAddress(&selectedMuon_pdgId_); }
    b_selectedMuon_pfIsoId_ = tree->GetBranch("selectedMuon_pfIsoId");
    if (b_selectedMuon_pfIsoId_) { b_selectedMuon_pfIsoId_->SetAddress(&selectedMuon_pfIsoId_); }
    b_selectedMuon_pfRelIso03_all_ = tree->GetBranch("selectedMuon_pfRelIso03_all");
    if (b_selectedMuon_pfRelIso03_all_) { b_selectedMuon_pfRelIso03_all_->SetAddress(&selectedMuon_pfRelIso03_all_); }
    b_selectedMuon_pfRelIso03_chg_ = tree->GetBranch("selectedMuon_pfRelIso03_chg");
    if (b_selectedMuon_pfRelIso03_chg_) { b_selectedMuon_pfRelIso03_chg_->SetAddress(&selectedMuon_pfRelIso03_chg_); }
    b_selectedMuon_pfRelIso04_all_ = tree->GetBranch("selectedMuon_pfRelIso04_all");
    if (b_selectedMuon_pfRelIso04_all_) { b_selectedMuon_pfRelIso04_all_->SetAddress(&selectedMuon_pfRelIso04_all_); }
    b_selectedMuon_phi_ = tree->GetBranch("selectedMuon_phi");
    if (b_selectedMuon_phi_) { b_selectedMuon_phi_->SetAddress(&selectedMuon_phi_); }
    b_selectedMuon_phiSVFit_ = tree->GetBranch("selectedMuon_phiSVFit");
    if (b_selectedMuon_phiSVFit_) { b_selectedMuon_phiSVFit_->SetAddress(&selectedMuon_phiSVFit_); }
    b_selectedMuon_pt_ = tree->GetBranch("selectedMuon_pt");
    if (b_selectedMuon_pt_) { b_selectedMuon_pt_->SetAddress(&selectedMuon_pt_); }
    b_selectedMuon_ptErr_ = tree->GetBranch("selectedMuon_ptErr");
    if (b_selectedMuon_ptErr_) { b_selectedMuon_ptErr_->SetAddress(&selectedMuon_ptErr_); }
    b_selectedMuon_ptSVFit_ = tree->GetBranch("selectedMuon_ptSVFit");
    if (b_selectedMuon_ptSVFit_) { b_selectedMuon_ptSVFit_->SetAddress(&selectedMuon_ptSVFit_); }
    b_selectedMuon_segmentComp_ = tree->GetBranch("selectedMuon_segmentComp");
    if (b_selectedMuon_segmentComp_) { b_selectedMuon_segmentComp_->SetAddress(&selectedMuon_segmentComp_); }
    b_selectedMuon_sip3d_ = tree->GetBranch("selectedMuon_sip3d");
    if (b_selectedMuon_sip3d_) { b_selectedMuon_sip3d_->SetAddress(&selectedMuon_sip3d_); }
    b_selectedMuon_softId_ = tree->GetBranch("selectedMuon_softId");
    if (b_selectedMuon_softId_) { b_selectedMuon_softId_->SetAddress(&selectedMuon_softId_); }
    b_selectedMuon_softMva_ = tree->GetBranch("selectedMuon_softMva");
    if (b_selectedMuon_softMva_) { b_selectedMuon_softMva_->SetAddress(&selectedMuon_softMva_); }
    b_selectedMuon_softMvaId_ = tree->GetBranch("selectedMuon_softMvaId");
    if (b_selectedMuon_softMvaId_) { b_selectedMuon_softMvaId_->SetAddress(&selectedMuon_softMvaId_); }
    b_selectedMuon_tightCharge_ = tree->GetBranch("selectedMuon_tightCharge");
    if (b_selectedMuon_tightCharge_) { b_selectedMuon_tightCharge_->SetAddress(&selectedMuon_tightCharge_); }
    b_selectedMuon_tightId_ = tree->GetBranch("selectedMuon_tightId");
    if (b_selectedMuon_tightId_) { b_selectedMuon_tightId_->SetAddress(&selectedMuon_tightId_); }
    b_selectedMuon_tkIsoId_ = tree->GetBranch("selectedMuon_tkIsoId");
    if (b_selectedMuon_tkIsoId_) { b_selectedMuon_tkIsoId_->SetAddress(&selectedMuon_tkIsoId_); }
    b_selectedMuon_tkRelIso_ = tree->GetBranch("selectedMuon_tkRelIso");
    if (b_selectedMuon_tkRelIso_) { b_selectedMuon_tkRelIso_->SetAddress(&selectedMuon_tkRelIso_); }
    b_selectedMuon_triggerIdLoose_ = tree->GetBranch("selectedMuon_triggerIdLoose");
    if (b_selectedMuon_triggerIdLoose_) { b_selectedMuon_triggerIdLoose_->SetAddress(&selectedMuon_triggerIdLoose_); }
    b_selectedMuon_tunepRelPt_ = tree->GetBranch("selectedMuon_tunepRelPt");
    if (b_selectedMuon_tunepRelPt_) { b_selectedMuon_tunepRelPt_->SetAddress(&selectedMuon_tunepRelPt_); }
    b_selectedPhoton_charge_ = tree->GetBranch("selectedPhoton_charge");
    if (b_selectedPhoton_charge_) { b_selectedPhoton_charge_->SetAddress(&selectedPhoton_charge_); }
    b_selectedPhoton_chargedHadronIso_ = tree->GetBranch("selectedPhoton_chargedHadronIso");
    if (b_selectedPhoton_chargedHadronIso_) { b_selectedPhoton_chargedHadronIso_->SetAddress(&selectedPhoton_chargedHadronIso_); }
    b_selectedPhoton_cleanmask_ = tree->GetBranch("selectedPhoton_cleanmask");
    if (b_selectedPhoton_cleanmask_) { b_selectedPhoton_cleanmask_->SetAddress(&selectedPhoton_cleanmask_); }
    b_selectedPhoton_cutBased_ = tree->GetBranch("selectedPhoton_cutBased");
    if (b_selectedPhoton_cutBased_) { b_selectedPhoton_cutBased_->SetAddress(&selectedPhoton_cutBased_); }
    b_selectedPhoton_cutBased_Fall17V1Bitmap_ = tree->GetBranch("selectedPhoton_cutBased_Fall17V1Bitmap");
    if (b_selectedPhoton_cutBased_Fall17V1Bitmap_) { b_selectedPhoton_cutBased_Fall17V1Bitmap_->SetAddress(&selectedPhoton_cutBased_Fall17V1Bitmap_); }
    b_selectedPhoton_cutBased_Spring16V2p2_ = tree->GetBranch("selectedPhoton_cutBased_Spring16V2p2");
    if (b_selectedPhoton_cutBased_Spring16V2p2_) { b_selectedPhoton_cutBased_Spring16V2p2_->SetAddress(&selectedPhoton_cutBased_Spring16V2p2_); }
    b_selectedPhoton_eCorr_ = tree->GetBranch("selectedPhoton_eCorr");
    if (b_selectedPhoton_eCorr_) { b_selectedPhoton_eCorr_->SetAddress(&selectedPhoton_eCorr_); }
    b_selectedPhoton_electronIdx_ = tree->GetBranch("selectedPhoton_electronIdx");
    if (b_selectedPhoton_electronIdx_) { b_selectedPhoton_electronIdx_->SetAddress(&selectedPhoton_electronIdx_); }
    b_selectedPhoton_electronVeto_ = tree->GetBranch("selectedPhoton_electronVeto");
    if (b_selectedPhoton_electronVeto_) { b_selectedPhoton_electronVeto_->SetAddress(&selectedPhoton_electronVeto_); }
    b_selectedPhoton_energyErr_ = tree->GetBranch("selectedPhoton_energyErr");
    if (b_selectedPhoton_energyErr_) { b_selectedPhoton_energyErr_->SetAddress(&selectedPhoton_energyErr_); }
    b_selectedPhoton_eta_ = tree->GetBranch("selectedPhoton_eta");
    if (b_selectedPhoton_eta_) { b_selectedPhoton_eta_->SetAddress(&selectedPhoton_eta_); }
    b_selectedPhoton_genPartFlav_ = tree->GetBranch("selectedPhoton_genPartFlav");
    if (b_selectedPhoton_genPartFlav_) { b_selectedPhoton_genPartFlav_->SetAddress(&selectedPhoton_genPartFlav_); }
    b_selectedPhoton_genPartIdx_ = tree->GetBranch("selectedPhoton_genPartIdx");
    if (b_selectedPhoton_genPartIdx_) { b_selectedPhoton_genPartIdx_->SetAddress(&selectedPhoton_genPartIdx_); }
    b_selectedPhoton_hoe_ = tree->GetBranch("selectedPhoton_hoe");
    if (b_selectedPhoton_hoe_) { b_selectedPhoton_hoe_->SetAddress(&selectedPhoton_hoe_); }
    b_selectedPhoton_isScEtaEB_ = tree->GetBranch("selectedPhoton_isScEtaEB");
    if (b_selectedPhoton_isScEtaEB_) { b_selectedPhoton_isScEtaEB_->SetAddress(&selectedPhoton_isScEtaEB_); }
    b_selectedPhoton_isScEtaEE_ = tree->GetBranch("selectedPhoton_isScEtaEE");
    if (b_selectedPhoton_isScEtaEE_) { b_selectedPhoton_isScEtaEE_->SetAddress(&selectedPhoton_isScEtaEE_); }
    b_selectedPhoton_jetIdx_ = tree->GetBranch("selectedPhoton_jetIdx");
    if (b_selectedPhoton_jetIdx_) { b_selectedPhoton_jetIdx_->SetAddress(&selectedPhoton_jetIdx_); }
    b_selectedPhoton_mass_ = tree->GetBranch("selectedPhoton_mass");
    if (b_selectedPhoton_mass_) { b_selectedPhoton_mass_->SetAddress(&selectedPhoton_mass_); }
    b_selectedPhoton_mvaID_ = tree->GetBranch("selectedPhoton_mvaID");
    if (b_selectedPhoton_mvaID_) { b_selectedPhoton_mvaID_->SetAddress(&selectedPhoton_mvaID_); }
    b_selectedPhoton_mvaID_Fall17V1p1_ = tree->GetBranch("selectedPhoton_mvaID_Fall17V1p1");
    if (b_selectedPhoton_mvaID_Fall17V1p1_) { b_selectedPhoton_mvaID_Fall17V1p1_->SetAddress(&selectedPhoton_mvaID_Fall17V1p1_); }
    b_selectedPhoton_mvaID_Spring16nonTrigV1_ = tree->GetBranch("selectedPhoton_mvaID_Spring16nonTrigV1");
    if (b_selectedPhoton_mvaID_Spring16nonTrigV1_) { b_selectedPhoton_mvaID_Spring16nonTrigV1_->SetAddress(&selectedPhoton_mvaID_Spring16nonTrigV1_); }
    b_selectedPhoton_mvaID_WP80_ = tree->GetBranch("selectedPhoton_mvaID_WP80");
    if (b_selectedPhoton_mvaID_WP80_) { b_selectedPhoton_mvaID_WP80_->SetAddress(&selectedPhoton_mvaID_WP80_); }
    b_selectedPhoton_mvaID_WP90_ = tree->GetBranch("selectedPhoton_mvaID_WP90");
    if (b_selectedPhoton_mvaID_WP90_) { b_selectedPhoton_mvaID_WP90_->SetAddress(&selectedPhoton_mvaID_WP90_); }
    b_selectedPhoton_pdgId_ = tree->GetBranch("selectedPhoton_pdgId");
    if (b_selectedPhoton_pdgId_) { b_selectedPhoton_pdgId_->SetAddress(&selectedPhoton_pdgId_); }
    b_selectedPhoton_pfRelIso03_all_ = tree->GetBranch("selectedPhoton_pfRelIso03_all");
    if (b_selectedPhoton_pfRelIso03_all_) { b_selectedPhoton_pfRelIso03_all_->SetAddress(&selectedPhoton_pfRelIso03_all_); }
    b_selectedPhoton_pfRelIso03_chg_ = tree->GetBranch("selectedPhoton_pfRelIso03_chg");
    if (b_selectedPhoton_pfRelIso03_chg_) { b_selectedPhoton_pfRelIso03_chg_->SetAddress(&selectedPhoton_pfRelIso03_chg_); }
    b_selectedPhoton_phi_ = tree->GetBranch("selectedPhoton_phi");
    if (b_selectedPhoton_phi_) { b_selectedPhoton_phi_->SetAddress(&selectedPhoton_phi_); }
    b_selectedPhoton_photonIso_ = tree->GetBranch("selectedPhoton_photonIso");
    if (b_selectedPhoton_photonIso_) { b_selectedPhoton_photonIso_->SetAddress(&selectedPhoton_photonIso_); }
    b_selectedPhoton_pixelSeed_ = tree->GetBranch("selectedPhoton_pixelSeed");
    if (b_selectedPhoton_pixelSeed_) { b_selectedPhoton_pixelSeed_->SetAddress(&selectedPhoton_pixelSeed_); }
    b_selectedPhoton_pt_ = tree->GetBranch("selectedPhoton_pt");
    if (b_selectedPhoton_pt_) { b_selectedPhoton_pt_->SetAddress(&selectedPhoton_pt_); }
    b_selectedPhoton_r9_ = tree->GetBranch("selectedPhoton_r9");
    if (b_selectedPhoton_r9_) { b_selectedPhoton_r9_->SetAddress(&selectedPhoton_r9_); }
    b_selectedPhoton_seedGain_ = tree->GetBranch("selectedPhoton_seedGain");
    if (b_selectedPhoton_seedGain_) { b_selectedPhoton_seedGain_->SetAddress(&selectedPhoton_seedGain_); }
    b_selectedPhoton_sieie_ = tree->GetBranch("selectedPhoton_sieie");
    if (b_selectedPhoton_sieie_) { b_selectedPhoton_sieie_->SetAddress(&selectedPhoton_sieie_); }
    b_selectedPhoton_trkSumPtHollowConeDR03_ = tree->GetBranch("selectedPhoton_trkSumPtHollowConeDR03");
    if (b_selectedPhoton_trkSumPtHollowConeDR03_) { b_selectedPhoton_trkSumPtHollowConeDR03_->SetAddress(&selectedPhoton_trkSumPtHollowConeDR03_); }
    b_selectedPhoton_vidNestedWPBitmap_ = tree->GetBranch("selectedPhoton_vidNestedWPBitmap");
    if (b_selectedPhoton_vidNestedWPBitmap_) { b_selectedPhoton_vidNestedWPBitmap_->SetAddress(&selectedPhoton_vidNestedWPBitmap_); }
    b_selectedPhoton_vidNestedWPBitmap_Spring16V2p2_ = tree->GetBranch("selectedPhoton_vidNestedWPBitmap_Spring16V2p2");
    if (b_selectedPhoton_vidNestedWPBitmap_Spring16V2p2_) { b_selectedPhoton_vidNestedWPBitmap_Spring16V2p2_->SetAddress(&selectedPhoton_vidNestedWPBitmap_Spring16V2p2_); }
    b_selectedTauLoose_charge_ = tree->GetBranch("selectedTauLoose_charge");
    if (b_selectedTauLoose_charge_) { b_selectedTauLoose_charge_->SetAddress(&selectedTauLoose_charge_); }
    b_selectedTauLoose_chargedIso_ = tree->GetBranch("selectedTauLoose_chargedIso");
    if (b_selectedTauLoose_chargedIso_) { b_selectedTauLoose_chargedIso_->SetAddress(&selectedTauLoose_chargedIso_); }
    b_selectedTauLoose_cleanmask_ = tree->GetBranch("selectedTauLoose_cleanmask");
    if (b_selectedTauLoose_cleanmask_) { b_selectedTauLoose_cleanmask_->SetAddress(&selectedTauLoose_cleanmask_); }
    b_selectedTauLoose_decayMode_ = tree->GetBranch("selectedTauLoose_decayMode");
    if (b_selectedTauLoose_decayMode_) { b_selectedTauLoose_decayMode_->SetAddress(&selectedTauLoose_decayMode_); }
    b_selectedTauLoose_dxy_ = tree->GetBranch("selectedTauLoose_dxy");
    if (b_selectedTauLoose_dxy_) { b_selectedTauLoose_dxy_->SetAddress(&selectedTauLoose_dxy_); }
    b_selectedTauLoose_dz_ = tree->GetBranch("selectedTauLoose_dz");
    if (b_selectedTauLoose_dz_) { b_selectedTauLoose_dz_->SetAddress(&selectedTauLoose_dz_); }
    b_selectedTauLoose_eta_ = tree->GetBranch("selectedTauLoose_eta");
    if (b_selectedTauLoose_eta_) { b_selectedTauLoose_eta_->SetAddress(&selectedTauLoose_eta_); }
    b_selectedTauLoose_etaSVFit_ = tree->GetBranch("selectedTauLoose_etaSVFit");
    if (b_selectedTauLoose_etaSVFit_) { b_selectedTauLoose_etaSVFit_->SetAddress(&selectedTauLoose_etaSVFit_); }
    b_selectedTauLoose_genPartFlav_ = tree->GetBranch("selectedTauLoose_genPartFlav");
    if (b_selectedTauLoose_genPartFlav_) { b_selectedTauLoose_genPartFlav_->SetAddress(&selectedTauLoose_genPartFlav_); }
    b_selectedTauLoose_genPartIdx_ = tree->GetBranch("selectedTauLoose_genPartIdx");
    if (b_selectedTauLoose_genPartIdx_) { b_selectedTauLoose_genPartIdx_->SetAddress(&selectedTauLoose_genPartIdx_); }
    b_selectedTauLoose_idAntiEle_ = tree->GetBranch("selectedTauLoose_idAntiEle");
    if (b_selectedTauLoose_idAntiEle_) { b_selectedTauLoose_idAntiEle_->SetAddress(&selectedTauLoose_idAntiEle_); }
    b_selectedTauLoose_idAntiEle2018_ = tree->GetBranch("selectedTauLoose_idAntiEle2018");
    if (b_selectedTauLoose_idAntiEle2018_) { b_selectedTauLoose_idAntiEle2018_->SetAddress(&selectedTauLoose_idAntiEle2018_); }
    b_selectedTauLoose_idAntiMu_ = tree->GetBranch("selectedTauLoose_idAntiMu");
    if (b_selectedTauLoose_idAntiMu_) { b_selectedTauLoose_idAntiMu_->SetAddress(&selectedTauLoose_idAntiMu_); }
    b_selectedTauLoose_idDecayMode_ = tree->GetBranch("selectedTauLoose_idDecayMode");
    if (b_selectedTauLoose_idDecayMode_) { b_selectedTauLoose_idDecayMode_->SetAddress(&selectedTauLoose_idDecayMode_); }
    b_selectedTauLoose_idDecayModeNewDMs_ = tree->GetBranch("selectedTauLoose_idDecayModeNewDMs");
    if (b_selectedTauLoose_idDecayModeNewDMs_) { b_selectedTauLoose_idDecayModeNewDMs_->SetAddress(&selectedTauLoose_idDecayModeNewDMs_); }
    b_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe_ = tree->GetBranch("selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe");
    if (b_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe_) { b_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe_->SetAddress(&selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe_); }
    b_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet_ = tree->GetBranch("selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet");
    if (b_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet_) { b_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet_->SetAddress(&selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet_); }
    b_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu_ = tree->GetBranch("selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu");
    if (b_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu_) { b_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu_->SetAddress(&selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu_); }
    b_selectedTauLoose_idMVAnewDM2017v2_ = tree->GetBranch("selectedTauLoose_idMVAnewDM2017v2");
    if (b_selectedTauLoose_idMVAnewDM2017v2_) { b_selectedTauLoose_idMVAnewDM2017v2_->SetAddress(&selectedTauLoose_idMVAnewDM2017v2_); }
    b_selectedTauLoose_idMVAoldDM_ = tree->GetBranch("selectedTauLoose_idMVAoldDM");
    if (b_selectedTauLoose_idMVAoldDM_) { b_selectedTauLoose_idMVAoldDM_->SetAddress(&selectedTauLoose_idMVAoldDM_); }
    b_selectedTauLoose_idMVAoldDM2017v1_ = tree->GetBranch("selectedTauLoose_idMVAoldDM2017v1");
    if (b_selectedTauLoose_idMVAoldDM2017v1_) { b_selectedTauLoose_idMVAoldDM2017v1_->SetAddress(&selectedTauLoose_idMVAoldDM2017v1_); }
    b_selectedTauLoose_idMVAoldDM2017v2_ = tree->GetBranch("selectedTauLoose_idMVAoldDM2017v2");
    if (b_selectedTauLoose_idMVAoldDM2017v2_) { b_selectedTauLoose_idMVAoldDM2017v2_->SetAddress(&selectedTauLoose_idMVAoldDM2017v2_); }
    b_selectedTauLoose_idMVAoldDMdR032017v2_ = tree->GetBranch("selectedTauLoose_idMVAoldDMdR032017v2");
    if (b_selectedTauLoose_idMVAoldDMdR032017v2_) { b_selectedTauLoose_idMVAoldDMdR032017v2_->SetAddress(&selectedTauLoose_idMVAoldDMdR032017v2_); }
    b_selectedTauLoose_jetIdx_ = tree->GetBranch("selectedTauLoose_jetIdx");
    if (b_selectedTauLoose_jetIdx_) { b_selectedTauLoose_jetIdx_->SetAddress(&selectedTauLoose_jetIdx_); }
    b_selectedTauLoose_leadTkDeltaEta_ = tree->GetBranch("selectedTauLoose_leadTkDeltaEta");
    if (b_selectedTauLoose_leadTkDeltaEta_) { b_selectedTauLoose_leadTkDeltaEta_->SetAddress(&selectedTauLoose_leadTkDeltaEta_); }
    b_selectedTauLoose_leadTkDeltaPhi_ = tree->GetBranch("selectedTauLoose_leadTkDeltaPhi");
    if (b_selectedTauLoose_leadTkDeltaPhi_) { b_selectedTauLoose_leadTkDeltaPhi_->SetAddress(&selectedTauLoose_leadTkDeltaPhi_); }
    b_selectedTauLoose_leadTkPtOverselectedTauLoosePt_ = tree->GetBranch("selectedTauLoose_leadTkPtOverselectedTauLoosePt");
    if (b_selectedTauLoose_leadTkPtOverselectedTauLoosePt_) { b_selectedTauLoose_leadTkPtOverselectedTauLoosePt_->SetAddress(&selectedTauLoose_leadTkPtOverselectedTauLoosePt_); }
    b_selectedTauLoose_mSVFit_ = tree->GetBranch("selectedTauLoose_mSVFit");
    if (b_selectedTauLoose_mSVFit_) { b_selectedTauLoose_mSVFit_->SetAddress(&selectedTauLoose_mSVFit_); }
    b_selectedTauLoose_mass_ = tree->GetBranch("selectedTauLoose_mass");
    if (b_selectedTauLoose_mass_) { b_selectedTauLoose_mass_->SetAddress(&selectedTauLoose_mass_); }
    b_selectedTauLoose_neutralIso_ = tree->GetBranch("selectedTauLoose_neutralIso");
    if (b_selectedTauLoose_neutralIso_) { b_selectedTauLoose_neutralIso_->SetAddress(&selectedTauLoose_neutralIso_); }
    b_selectedTauLoose_phi_ = tree->GetBranch("selectedTauLoose_phi");
    if (b_selectedTauLoose_phi_) { b_selectedTauLoose_phi_->SetAddress(&selectedTauLoose_phi_); }
    b_selectedTauLoose_phiSVFit_ = tree->GetBranch("selectedTauLoose_phiSVFit");
    if (b_selectedTauLoose_phiSVFit_) { b_selectedTauLoose_phiSVFit_->SetAddress(&selectedTauLoose_phiSVFit_); }
    b_selectedTauLoose_photonsOutsideSignalCone_ = tree->GetBranch("selectedTauLoose_photonsOutsideSignalCone");
    if (b_selectedTauLoose_photonsOutsideSignalCone_) { b_selectedTauLoose_photonsOutsideSignalCone_->SetAddress(&selectedTauLoose_photonsOutsideSignalCone_); }
    b_selectedTauLoose_pt_ = tree->GetBranch("selectedTauLoose_pt");
    if (b_selectedTauLoose_pt_) { b_selectedTauLoose_pt_->SetAddress(&selectedTauLoose_pt_); }
    b_selectedTauLoose_ptSVFit_ = tree->GetBranch("selectedTauLoose_ptSVFit");
    if (b_selectedTauLoose_ptSVFit_) { b_selectedTauLoose_ptSVFit_->SetAddress(&selectedTauLoose_ptSVFit_); }
    b_selectedTauLoose_puCorr_ = tree->GetBranch("selectedTauLoose_puCorr");
    if (b_selectedTauLoose_puCorr_) { b_selectedTauLoose_puCorr_->SetAddress(&selectedTauLoose_puCorr_); }
    b_selectedTauLoose_rawAntiEle_ = tree->GetBranch("selectedTauLoose_rawAntiEle");
    if (b_selectedTauLoose_rawAntiEle_) { b_selectedTauLoose_rawAntiEle_->SetAddress(&selectedTauLoose_rawAntiEle_); }
    b_selectedTauLoose_rawAntiEle2018_ = tree->GetBranch("selectedTauLoose_rawAntiEle2018");
    if (b_selectedTauLoose_rawAntiEle2018_) { b_selectedTauLoose_rawAntiEle2018_->SetAddress(&selectedTauLoose_rawAntiEle2018_); }
    b_selectedTauLoose_rawAntiEleCat_ = tree->GetBranch("selectedTauLoose_rawAntiEleCat");
    if (b_selectedTauLoose_rawAntiEleCat_) { b_selectedTauLoose_rawAntiEleCat_->SetAddress(&selectedTauLoose_rawAntiEleCat_); }
    b_selectedTauLoose_rawAntiEleCat2018_ = tree->GetBranch("selectedTauLoose_rawAntiEleCat2018");
    if (b_selectedTauLoose_rawAntiEleCat2018_) { b_selectedTauLoose_rawAntiEleCat2018_->SetAddress(&selectedTauLoose_rawAntiEleCat2018_); }
    b_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe_ = tree->GetBranch("selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe");
    if (b_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe_) { b_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe_->SetAddress(&selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe_); }
    b_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet_ = tree->GetBranch("selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet");
    if (b_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet_) { b_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet_->SetAddress(&selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet_); }
    b_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu_ = tree->GetBranch("selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu");
    if (b_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu_) { b_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu_->SetAddress(&selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu_); }
    b_selectedTauLoose_rawIso_ = tree->GetBranch("selectedTauLoose_rawIso");
    if (b_selectedTauLoose_rawIso_) { b_selectedTauLoose_rawIso_->SetAddress(&selectedTauLoose_rawIso_); }
    b_selectedTauLoose_rawIsodR03_ = tree->GetBranch("selectedTauLoose_rawIsodR03");
    if (b_selectedTauLoose_rawIsodR03_) { b_selectedTauLoose_rawIsodR03_->SetAddress(&selectedTauLoose_rawIsodR03_); }
    b_selectedTauLoose_rawMVAnewDM2017v2_ = tree->GetBranch("selectedTauLoose_rawMVAnewDM2017v2");
    if (b_selectedTauLoose_rawMVAnewDM2017v2_) { b_selectedTauLoose_rawMVAnewDM2017v2_->SetAddress(&selectedTauLoose_rawMVAnewDM2017v2_); }
    b_selectedTauLoose_rawMVAoldDM_ = tree->GetBranch("selectedTauLoose_rawMVAoldDM");
    if (b_selectedTauLoose_rawMVAoldDM_) { b_selectedTauLoose_rawMVAoldDM_->SetAddress(&selectedTauLoose_rawMVAoldDM_); }
    b_selectedTauLoose_rawMVAoldDM2017v1_ = tree->GetBranch("selectedTauLoose_rawMVAoldDM2017v1");
    if (b_selectedTauLoose_rawMVAoldDM2017v1_) { b_selectedTauLoose_rawMVAoldDM2017v1_->SetAddress(&selectedTauLoose_rawMVAoldDM2017v1_); }
    b_selectedTauLoose_rawMVAoldDM2017v2_ = tree->GetBranch("selectedTauLoose_rawMVAoldDM2017v2");
    if (b_selectedTauLoose_rawMVAoldDM2017v2_) { b_selectedTauLoose_rawMVAoldDM2017v2_->SetAddress(&selectedTauLoose_rawMVAoldDM2017v2_); }
    b_selectedTauLoose_rawMVAoldDMdR032017v2_ = tree->GetBranch("selectedTauLoose_rawMVAoldDMdR032017v2");
    if (b_selectedTauLoose_rawMVAoldDMdR032017v2_) { b_selectedTauLoose_rawMVAoldDMdR032017v2_->SetAddress(&selectedTauLoose_rawMVAoldDMdR032017v2_); }
    b_tauHidxLoose_ = tree->GetBranch("tauHidxLoose");
    if (b_tauHidxLoose_) { b_tauHidxLoose_->SetAddress(&tauHidxLoose_); }
    ParseYear(tree);
}
void Nano::SetYear(int year) {
    year_ = year;
}

void Nano::ParseYear(TTree* tree) {
    if (year_ != 0) return;
    year_ = -999;
    TString full_file_path = TString(((TFile*) tree->GetCurrentFile())->GetName());
    if (full_file_path.Contains("RunIIAutumn18NanoAOD")) year_ = 2018;
    else if (full_file_path.Contains("RunIIFall17NanoAOD")) year_ = 2017;
    else if (full_file_path.Contains("RunIISummer16NanoAOD")) year_ = 2016;
    else if (full_file_path.Contains("Run2018")) year_ = 2018;
    else if (full_file_path.Contains("Run2017")) year_ = 2017;
    else if (full_file_path.Contains("Run2016")) year_ = 2016;
    else throw std::runtime_error("Nano::parseYear():: ERROR - Failed to recognize which year this NanoAOD is !\nPlease make sure the path has one of the following keywords:\n  2016: 'Run2016' or 'RunIISummer16NanoAOD'\n  2017: 'Run2017' or 'RunIIFall17NanoAOD'\n  2018: 'Run2018' or 'RunIIAutumn18NanoAOD'\nOR, use Nano::SetYear(int year) before Nano::Init()");
}

const Int_t &Nano::year() {
    return year_;
}

Bool_t Nano::isData() {
    return !((bool)b_GenPart_pt_);
}



void Nano::GetEntry(unsigned int idx) {
    index = idx;
    loaded_CaloMET_phi_ = false;
    loaded_CaloMET_pt_ = false;
    loaded_CaloMET_sumEt_ = false;
    loaded_Category_ = false;
    loaded_Category_lveto_ = false;
    loaded_Category_pairsLoose_ = false;
    loaded_Category_tauselLoose_ = false;
    loaded_ChsMET_phi_ = false;
    loaded_ChsMET_pt_ = false;
    loaded_ChsMET_sumEt_ = false;
    loaded_CorrT1METJet_area_ = false;
    loaded_CorrT1METJet_eta_ = false;
    loaded_CorrT1METJet_muonSubtrFactor_ = false;
    loaded_CorrT1METJet_phi_ = false;
    loaded_CorrT1METJet_rawPt_ = false;
    loaded_Electron_charge_ = false;
    loaded_Electron_cleanmask_ = false;
    loaded_Electron_convVeto_ = false;
    loaded_Electron_cutBased_ = false;
    loaded_Electron_cutBased_Fall17_V1_ = false;
    loaded_Electron_cutBased_HEEP_ = false;
    loaded_Electron_cutBased_HLTPreSel_ = false;
    loaded_Electron_cutBased_Spring15_ = false;
    loaded_Electron_cutBased_Sum16_ = false;
    loaded_Electron_deltaEtaSC_ = false;
    loaded_Electron_dr03EcalRecHitSumEt_ = false;
    loaded_Electron_dr03HcalDepth1TowerSumEt_ = false;
    loaded_Electron_dr03TkSumPt_ = false;
    loaded_Electron_dr03TkSumPtHEEP_ = false;
    loaded_Electron_dxy_ = false;
    loaded_Electron_dxyErr_ = false;
    loaded_Electron_dz_ = false;
    loaded_Electron_dzErr_ = false;
    loaded_Electron_eCorr_ = false;
    loaded_Electron_eInvMinusPInv_ = false;
    loaded_Electron_energyErr_ = false;
    loaded_Electron_eta_ = false;
    loaded_Electron_genPartFlav_ = false;
    loaded_Electron_genPartIdx_ = false;
    loaded_Electron_hoe_ = false;
    loaded_Electron_ip3d_ = false;
    loaded_Electron_isPFcand_ = false;
    loaded_Electron_jetIdx_ = false;
    loaded_Electron_jetPtRelv2_ = false;
    loaded_Electron_jetRelIso_ = false;
    loaded_Electron_lostHits_ = false;
    loaded_Electron_mass_ = false;
    loaded_Electron_miniPFRelIso_all_ = false;
    loaded_Electron_miniPFRelIso_chg_ = false;
    loaded_Electron_mvaFall17V1Iso_ = false;
    loaded_Electron_mvaFall17V1Iso_WP80_ = false;
    loaded_Electron_mvaFall17V1Iso_WP90_ = false;
    loaded_Electron_mvaFall17V1Iso_WPL_ = false;
    loaded_Electron_mvaFall17V1noIso_ = false;
    loaded_Electron_mvaFall17V1noIso_WP80_ = false;
    loaded_Electron_mvaFall17V1noIso_WP90_ = false;
    loaded_Electron_mvaFall17V1noIso_WPL_ = false;
    loaded_Electron_mvaFall17V2Iso_ = false;
    loaded_Electron_mvaFall17V2Iso_WP80_ = false;
    loaded_Electron_mvaFall17V2Iso_WP90_ = false;
    loaded_Electron_mvaFall17V2Iso_WPL_ = false;
    loaded_Electron_mvaFall17V2noIso_ = false;
    loaded_Electron_mvaFall17V2noIso_WP80_ = false;
    loaded_Electron_mvaFall17V2noIso_WP90_ = false;
    loaded_Electron_mvaFall17V2noIso_WPL_ = false;
    loaded_Electron_mvaSpring16GP_ = false;
    loaded_Electron_mvaSpring16GP_WP80_ = false;
    loaded_Electron_mvaSpring16GP_WP90_ = false;
    loaded_Electron_mvaSpring16HZZ_ = false;
    loaded_Electron_mvaSpring16HZZ_WPL_ = false;
    loaded_Electron_mvaTTH_ = false;
    loaded_Electron_p4_ = false;
    loaded_Electron_pdgId_ = false;
    loaded_Electron_pfRelIso03_all_ = false;
    loaded_Electron_pfRelIso03_chg_ = false;
    loaded_Electron_phi_ = false;
    loaded_Electron_photonIdx_ = false;
    loaded_Electron_pt_ = false;
    loaded_Electron_r9_ = false;
    loaded_Electron_scEtOverPt_ = false;
    loaded_Electron_seedGain_ = false;
    loaded_Electron_sieie_ = false;
    loaded_Electron_sip3d_ = false;
    loaded_Electron_tightCharge_ = false;
    loaded_Electron_vidNestedWPBitmap_ = false;
    loaded_Electron_vidNestedWPBitmapHEEP_ = false;
    loaded_Electron_vidNestedWPBitmapSpring15_ = false;
    loaded_Electron_vidNestedWPBitmapSum16_ = false;
    loaded_Flag_BadChargedCandidateFilter_ = false;
    loaded_Flag_BadChargedCandidateSummer16Filter_ = false;
    loaded_Flag_BadPFMuonFilter_ = false;
    loaded_Flag_BadPFMuonSummer16Filter_ = false;
    loaded_Flag_CSCTightHalo2015Filter_ = false;
    loaded_Flag_CSCTightHaloFilter_ = false;
    loaded_Flag_CSCTightHaloTrkMuUnvetoFilter_ = false;
    loaded_Flag_EcalDeadCellBoundaryEnergyFilter_ = false;
    loaded_Flag_EcalDeadCellTriggerPrimitiveFilter_ = false;
    loaded_Flag_HBHENoiseFilter_ = false;
    loaded_Flag_HBHENoiseIsoFilter_ = false;
    loaded_Flag_HcalStripHaloFilter_ = false;
    loaded_Flag_METFilters_ = false;
    loaded_Flag_chargedHadronTrackResolutionFilter_ = false;
    loaded_Flag_ecalBadCalibFilter_ = false;
    loaded_Flag_ecalBadCalibFilterV2_ = false;
    loaded_Flag_ecalLaserCorrFilter_ = false;
    loaded_Flag_eeBadScFilter_ = false;
    loaded_Flag_globalSuperTightHalo2016Filter_ = false;
    loaded_Flag_globalTightHalo2016Filter_ = false;
    loaded_Flag_goodVertices_ = false;
    loaded_Flag_hcalLaserEventFilter_ = false;
    loaded_Flag_muonBadTrackFilter_ = false;
    loaded_Flag_trkPOGFilters_ = false;
    loaded_Flag_trkPOG_logErrorTooManyClusters_ = false;
    loaded_Flag_trkPOG_manystripclus53X_ = false;
    loaded_Flag_trkPOG_toomanystripclus53X_ = false;
    loaded_FsrPhoton_dROverEt2_ = false;
    loaded_FsrPhoton_eta_ = false;
    loaded_FsrPhoton_muonIdx_ = false;
    loaded_FsrPhoton_phi_ = false;
    loaded_FsrPhoton_pt_ = false;
    loaded_FsrPhoton_relIso03_ = false;
    loaded_GenDressedLepton_eta_ = false;
    loaded_GenDressedLepton_hasTauAnc_ = false;
    loaded_GenDressedLepton_mass_ = false;
    loaded_GenDressedLepton_p4_ = false;
    loaded_GenDressedLepton_pdgId_ = false;
    loaded_GenDressedLepton_phi_ = false;
    loaded_GenDressedLepton_pt_ = false;
    loaded_GenIsolatedPhoton_eta_ = false;
    loaded_GenIsolatedPhoton_mass_ = false;
    loaded_GenIsolatedPhoton_p4_ = false;
    loaded_GenIsolatedPhoton_phi_ = false;
    loaded_GenIsolatedPhoton_pt_ = false;
    loaded_GenJetAK8_eta_ = false;
    loaded_GenJetAK8_hadronFlavour_ = false;
    loaded_GenJetAK8_mass_ = false;
    loaded_GenJetAK8_p4_ = false;
    loaded_GenJetAK8_partonFlavour_ = false;
    loaded_GenJetAK8_phi_ = false;
    loaded_GenJetAK8_pt_ = false;
    loaded_GenJet_eta_ = false;
    loaded_GenJet_hadronFlavour_ = false;
    loaded_GenJet_mass_ = false;
    loaded_GenJet_p4_ = false;
    loaded_GenJet_partonFlavour_ = false;
    loaded_GenJet_phi_ = false;
    loaded_GenJet_pt_ = false;
    loaded_GenMET_phi_ = false;
    loaded_GenMET_pt_ = false;
    loaded_GenPart_eta_ = false;
    loaded_GenPart_genPartIdxMother_ = false;
    loaded_GenPart_mass_ = false;
    loaded_GenPart_p4_ = false;
    loaded_GenPart_pdgId_ = false;
    loaded_GenPart_phi_ = false;
    loaded_GenPart_pt_ = false;
    loaded_GenPart_status_ = false;
    loaded_GenPart_statusFlags_ = false;
    loaded_GenVisTau_charge_ = false;
    loaded_GenVisTau_eta_ = false;
    loaded_GenVisTau_genPartIdxMother_ = false;
    loaded_GenVisTau_mass_ = false;
    loaded_GenVisTau_p4_ = false;
    loaded_GenVisTau_phi_ = false;
    loaded_GenVisTau_pt_ = false;
    loaded_GenVisTau_status_ = false;
    loaded_Generator_binvar_ = false;
    loaded_Generator_id1_ = false;
    loaded_Generator_id2_ = false;
    loaded_Generator_scalePDF_ = false;
    loaded_Generator_weight_ = false;
    loaded_Generator_x1_ = false;
    loaded_Generator_x2_ = false;
    loaded_Generator_xpdf1_ = false;
    loaded_Generator_xpdf2_ = false;
    loaded_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_ = false;
    loaded_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_ = false;
    loaded_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_ = false;
    loaded_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_ = false;
    loaded_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_ = false;
    loaded_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_ = false;
    loaded_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_ = false;
    loaded_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_ = false;
    loaded_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_ = false;
    loaded_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55_ = false;
    loaded_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70_ = false;
    loaded_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_ = false;
    loaded_HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55_ = false;
    loaded_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_ = false;
    loaded_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_ = false;
    loaded_HLT_DoubleMu20_7_Mass0to30_Photon23_ = false;
    loaded_HLT_DoublePhoton33_CaloIdL_ = false;
    loaded_HLT_DoublePhoton60_ = false;
    loaded_HLT_DoublePhoton70_ = false;
    loaded_HLT_DoublePhoton85_ = false;
    loaded_HLT_HISinglePhoton10_ = false;
    loaded_HLT_HISinglePhoton10_Eta3p1ForPPRef_ = false;
    loaded_HLT_HISinglePhoton15_ = false;
    loaded_HLT_HISinglePhoton20_ = false;
    loaded_HLT_HISinglePhoton20_Eta3p1ForPPRef_ = false;
    loaded_HLT_HISinglePhoton30_Eta3p1ForPPRef_ = false;
    loaded_HLT_HISinglePhoton40_ = false;
    loaded_HLT_HISinglePhoton40_Eta3p1ForPPRef_ = false;
    loaded_HLT_HISinglePhoton50_Eta3p1ForPPRef_ = false;
    loaded_HLT_HISinglePhoton60_ = false;
    loaded_HLT_HISinglePhoton60_Eta3p1ForPPRef_ = false;
    loaded_HLT_Mu12_DoublePhoton20_ = false;
    loaded_HLT_Mu12_Photon25_CaloIdL_ = false;
    loaded_HLT_Mu12_Photon25_CaloIdL_L1ISO_ = false;
    loaded_HLT_Mu12_Photon25_CaloIdL_L1OR_ = false;
    loaded_HLT_Mu17_Photon22_CaloIdL_L1ISO_ = false;
    loaded_HLT_Mu17_Photon30_CaloIdL_L1ISO_ = false;
    loaded_HLT_Mu17_Photon30_IsoCaloId_ = false;
    loaded_HLT_Mu17_Photon35_CaloIdL_L1ISO_ = false;
    loaded_HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL_ = false;
    loaded_HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL_ = false;
    loaded_HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL_ = false;
    loaded_HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL_ = false;
    loaded_HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL_ = false;
    loaded_HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL_ = false;
    loaded_HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL_ = false;
    loaded_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_ = false;
    loaded_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_ = false;
    loaded_HLT_Photon100EBHE10_ = false;
    loaded_HLT_Photon100EB_TightID_TightIso_ = false;
    loaded_HLT_Photon100EEHE10_ = false;
    loaded_HLT_Photon100EE_TightID_TightIso_ = false;
    loaded_HLT_Photon110EB_TightID_TightIso_ = false;
    loaded_HLT_Photon120_ = false;
    loaded_HLT_Photon120EB_TightID_TightIso_ = false;
    loaded_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40_ = false;
    loaded_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF_ = false;
    loaded_HLT_Photon120_R9Id90_HE10_IsoM_ = false;
    loaded_HLT_Photon125_ = false;
    loaded_HLT_Photon135_PFMET100_ = false;
    loaded_HLT_Photon150_ = false;
    loaded_HLT_Photon165_HE10_ = false;
    loaded_HLT_Photon165_R9Id90_HE10_IsoM_ = false;
    loaded_HLT_Photon175_ = false;
    loaded_HLT_Photon20_ = false;
    loaded_HLT_Photon200_ = false;
    loaded_HLT_Photon20_CaloIdVL_IsoL_ = false;
    loaded_HLT_Photon20_HoverELoose_ = false;
    loaded_HLT_Photon22_ = false;
    loaded_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40_ = false;
    loaded_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF_ = false;
    loaded_HLT_Photon22_R9Id90_HE10_IsoM_ = false;
    loaded_HLT_Photon25_ = false;
    loaded_HLT_Photon250_NoHE_ = false;
    loaded_HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60_ = false;
    loaded_HLT_Photon30_ = false;
    loaded_HLT_Photon300_NoHE_ = false;
    loaded_HLT_Photon30_HoverELoose_ = false;
    loaded_HLT_Photon30_R9Id90_HE10_IsoM_ = false;
    loaded_HLT_Photon33_ = false;
    loaded_HLT_Photon35_TwoProngs35_ = false;
    loaded_HLT_Photon36_ = false;
    loaded_HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15_ = false;
    loaded_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40_ = false;
    loaded_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF_ = false;
    loaded_HLT_Photon36_R9Id90_HE10_IsoM_ = false;
    loaded_HLT_Photon40_HoverELoose_ = false;
    loaded_HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15_ = false;
    loaded_HLT_Photon50_ = false;
    loaded_HLT_Photon500_ = false;
    loaded_HLT_Photon50_HoverELoose_ = false;
    loaded_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40_ = false;
    loaded_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF_ = false;
    loaded_HLT_Photon50_R9Id90_HE10_IsoM_ = false;
    loaded_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_ = false;
    loaded_HLT_Photon600_ = false;
    loaded_HLT_Photon60_HoverELoose_ = false;
    loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_ = false;
    loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_ = false;
    loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_ = false;
    loaded_HLT_Photon75_ = false;
    loaded_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40_ = false;
    loaded_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF_ = false;
    loaded_HLT_Photon75_R9Id90_HE10_IsoM_ = false;
    loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3_ = false;
    loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3_ = false;
    loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_ = false;
    loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_ = false;
    loaded_HLT_Photon90_ = false;
    loaded_HLT_Photon90_CaloIdL_HT300_ = false;
    loaded_HLT_Photon90_CaloIdL_PFHT500_ = false;
    loaded_HLT_Photon90_CaloIdL_PFHT600_ = false;
    loaded_HLT_Photon90_CaloIdL_PFHT700_ = false;
    loaded_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40_ = false;
    loaded_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF_ = false;
    loaded_HLT_Photon90_R9Id90_HE10_IsoM_ = false;
    loaded_HLT_SinglePhoton10_Eta3p1ForPPRef_ = false;
    loaded_HLT_SinglePhoton20_Eta3p1ForPPRef_ = false;
    loaded_HLT_SinglePhoton30_Eta3p1ForPPRef_ = false;
    loaded_HLT_TriplePhoton_20_20_20_CaloIdLV2_ = false;
    loaded_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_ = false;
    loaded_HLT_TriplePhoton_30_30_10_CaloIdLV2_ = false;
    loaded_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_ = false;
    loaded_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_ = false;
    loaded_HTXS_Higgs_pt_ = false;
    loaded_HTXS_Higgs_y_ = false;
    loaded_HTXS_njets25_ = false;
    loaded_HTXS_njets30_ = false;
    loaded_HTXS_stage1_1_cat_pTjet25GeV_ = false;
    loaded_HTXS_stage1_1_cat_pTjet30GeV_ = false;
    loaded_HTXS_stage1_1_fine_cat_pTjet25GeV_ = false;
    loaded_HTXS_stage1_1_fine_cat_pTjet30GeV_ = false;
    loaded_HTXS_stage1_2_cat_pTjet25GeV_ = false;
    loaded_HTXS_stage1_2_cat_pTjet30GeV_ = false;
    loaded_HTXS_stage1_2_fine_cat_pTjet25GeV_ = false;
    loaded_HTXS_stage1_2_fine_cat_pTjet30GeV_ = false;
    loaded_HTXS_stage_0_ = false;
    loaded_HTXS_stage_1_pTjet25_ = false;
    loaded_HTXS_stage_1_pTjet30_ = false;
    loaded_IsoTrack_dxy_ = false;
    loaded_IsoTrack_dz_ = false;
    loaded_IsoTrack_eta_ = false;
    loaded_IsoTrack_fromPV_ = false;
    loaded_IsoTrack_isFromLostTrack_ = false;
    loaded_IsoTrack_isHighPurityTrack_ = false;
    loaded_IsoTrack_isPFcand_ = false;
    loaded_IsoTrack_miniPFRelIso_all_ = false;
    loaded_IsoTrack_miniPFRelIso_chg_ = false;
    loaded_IsoTrack_pdgId_ = false;
    loaded_IsoTrack_pfRelIso03_all_ = false;
    loaded_IsoTrack_pfRelIso03_chg_ = false;
    loaded_IsoTrack_phi_ = false;
    loaded_IsoTrack_pt_ = false;
    loaded_Jet_Filter_ = false;
    loaded_Jet_FilterLoose_ = false;
    loaded_Jet_area_ = false;
    loaded_Jet_bRegCorr_ = false;
    loaded_Jet_bRegRes_ = false;
    loaded_Jet_btagCMVA_ = false;
    loaded_Jet_btagCSVV2_ = false;
    loaded_Jet_btagDeepB_ = false;
    loaded_Jet_btagDeepC_ = false;
    loaded_Jet_btagDeepFlavB_ = false;
    loaded_Jet_btagDeepFlavC_ = false;
    loaded_Jet_cRegCorr_ = false;
    loaded_Jet_cRegRes_ = false;
    loaded_Jet_chEmEF_ = false;
    loaded_Jet_chFPV0EF_ = false;
    loaded_Jet_chFPV1EF_ = false;
    loaded_Jet_chFPV2EF_ = false;
    loaded_Jet_chFPV3EF_ = false;
    loaded_Jet_chHEF_ = false;
    loaded_Jet_cleanmask_ = false;
    loaded_Jet_corr_JEC_ = false;
    loaded_Jet_corr_JER_ = false;
    loaded_Jet_electronIdx1_ = false;
    loaded_Jet_electronIdx2_ = false;
    loaded_Jet_eta_ = false;
    loaded_Jet_genJetIdx_ = false;
    loaded_Jet_hadronFlavour_ = false;
    loaded_Jet_jetId_ = false;
    loaded_Jet_mass_ = false;
    loaded_Jet_mass_jerDown_ = false;
    loaded_Jet_mass_jerUp_ = false;
    loaded_Jet_mass_jesTotalDown_ = false;
    loaded_Jet_mass_jesTotalUp_ = false;
    loaded_Jet_mass_nom_ = false;
    loaded_Jet_mass_raw_ = false;
    loaded_Jet_muEF_ = false;
    loaded_Jet_muonIdx1_ = false;
    loaded_Jet_muonIdx2_ = false;
    loaded_Jet_muonSubtrFactor_ = false;
    loaded_Jet_nConstituents_ = false;
    loaded_Jet_nElectrons_ = false;
    loaded_Jet_nMuons_ = false;
    loaded_Jet_neEmEF_ = false;
    loaded_Jet_neHEF_ = false;
    loaded_Jet_p4_ = false;
    loaded_Jet_partonFlavour_ = false;
    loaded_Jet_phi_ = false;
    loaded_Jet_pt_ = false;
    loaded_Jet_pt_jerDown_ = false;
    loaded_Jet_pt_jerUp_ = false;
    loaded_Jet_pt_jesTotalDown_ = false;
    loaded_Jet_pt_jesTotalUp_ = false;
    loaded_Jet_pt_nom_ = false;
    loaded_Jet_pt_raw_ = false;
    loaded_Jet_puId_ = false;
    loaded_Jet_puIdDisc_ = false;
    loaded_Jet_qgl_ = false;
    loaded_Jet_rawFactor_ = false;
    loaded_LHEPart_eta_ = false;
    loaded_LHEPart_incomingpz_ = false;
    loaded_LHEPart_mass_ = false;
    loaded_LHEPart_p4_ = false;
    loaded_LHEPart_pdgId_ = false;
    loaded_LHEPart_phi_ = false;
    loaded_LHEPart_pt_ = false;
    loaded_LHEPart_spin_ = false;
    loaded_LHEPart_status_ = false;
    loaded_LHEPdfWeight_ = false;
    loaded_LHEReweightingWeight_ = false;
    loaded_LHEScaleWeight_ = false;
    loaded_LHEWeight_originalXWGTUP_ = false;
    loaded_LHE_AlphaS_ = false;
    loaded_LHE_HT_ = false;
    loaded_LHE_HTIncoming_ = false;
    loaded_LHE_Nb_ = false;
    loaded_LHE_Nc_ = false;
    loaded_LHE_Nglu_ = false;
    loaded_LHE_Njets_ = false;
    loaded_LHE_NpLO_ = false;
    loaded_LHE_NpNLO_ = false;
    loaded_LHE_Nuds_ = false;
    loaded_LHE_Vpt_ = false;
    loaded_METFixEE2017_MetUnclustEnUpDeltaX_ = false;
    loaded_METFixEE2017_MetUnclustEnUpDeltaY_ = false;
    loaded_METFixEE2017_covXX_ = false;
    loaded_METFixEE2017_covXY_ = false;
    loaded_METFixEE2017_covYY_ = false;
    loaded_METFixEE2017_phi_ = false;
    loaded_METFixEE2017_pt_ = false;
    loaded_METFixEE2017_significance_ = false;
    loaded_METFixEE2017_sumEt_ = false;
    loaded_METFixEE2017_sumPtUnclustered_ = false;
    loaded_MET_MetUnclustEnUpDeltaX_ = false;
    loaded_MET_MetUnclustEnUpDeltaY_ = false;
    loaded_MET_T1Smear_phi_ = false;
    loaded_MET_T1Smear_phi_jerDown_ = false;
    loaded_MET_T1Smear_phi_jerUp_ = false;
    loaded_MET_T1Smear_phi_jesTotalDown_ = false;
    loaded_MET_T1Smear_phi_jesTotalUp_ = false;
    loaded_MET_T1Smear_pt_ = false;
    loaded_MET_T1Smear_pt_jerDown_ = false;
    loaded_MET_T1Smear_pt_jerUp_ = false;
    loaded_MET_T1Smear_pt_jesTotalDown_ = false;
    loaded_MET_T1Smear_pt_jesTotalUp_ = false;
    loaded_MET_T1_phi_ = false;
    loaded_MET_T1_phi_jerDown_ = false;
    loaded_MET_T1_phi_jerUp_ = false;
    loaded_MET_T1_phi_jesTotalDown_ = false;
    loaded_MET_T1_phi_jesTotalUp_ = false;
    loaded_MET_T1_pt_ = false;
    loaded_MET_T1_pt_jerDown_ = false;
    loaded_MET_T1_pt_jerUp_ = false;
    loaded_MET_T1_pt_jesTotalDown_ = false;
    loaded_MET_T1_pt_jesTotalUp_ = false;
    loaded_MET_covXX_ = false;
    loaded_MET_covXY_ = false;
    loaded_MET_covYY_ = false;
    loaded_MET_fiducialGenPhi_ = false;
    loaded_MET_fiducialGenPt_ = false;
    loaded_MET_phi_ = false;
    loaded_MET_phi_unclustEnDown_ = false;
    loaded_MET_phi_unclustEnUp_ = false;
    loaded_MET_pt_ = false;
    loaded_MET_pt_unclustEnDown_ = false;
    loaded_MET_pt_unclustEnUp_ = false;
    loaded_MET_significance_ = false;
    loaded_MET_sumEt_ = false;
    loaded_MET_sumPtUnclustered_ = false;
    loaded_Muon_charge_ = false;
    loaded_Muon_cleanmask_ = false;
    loaded_Muon_correctedDown_pt_ = false;
    loaded_Muon_correctedUp_pt_ = false;
    loaded_Muon_corrected_pt_ = false;
    loaded_Muon_dxy_ = false;
    loaded_Muon_dxyErr_ = false;
    loaded_Muon_dxybs_ = false;
    loaded_Muon_dz_ = false;
    loaded_Muon_dzErr_ = false;
    loaded_Muon_eta_ = false;
    loaded_Muon_fsrPhotonIdx_ = false;
    loaded_Muon_genPartFlav_ = false;
    loaded_Muon_genPartIdx_ = false;
    loaded_Muon_highPtId_ = false;
    loaded_Muon_highPurity_ = false;
    loaded_Muon_inTimeMuon_ = false;
    loaded_Muon_ip3d_ = false;
    loaded_Muon_isGlobal_ = false;
    loaded_Muon_isPFcand_ = false;
    loaded_Muon_isTracker_ = false;
    loaded_Muon_jetIdx_ = false;
    loaded_Muon_jetPtRelv2_ = false;
    loaded_Muon_jetRelIso_ = false;
    loaded_Muon_looseId_ = false;
    loaded_Muon_mass_ = false;
    loaded_Muon_mediumId_ = false;
    loaded_Muon_mediumPromptId_ = false;
    loaded_Muon_miniIsoId_ = false;
    loaded_Muon_miniPFRelIso_all_ = false;
    loaded_Muon_miniPFRelIso_chg_ = false;
    loaded_Muon_multiIsoId_ = false;
    loaded_Muon_mvaId_ = false;
    loaded_Muon_mvaLowPt_ = false;
    loaded_Muon_mvaTTH_ = false;
    loaded_Muon_nStations_ = false;
    loaded_Muon_nTrackerLayers_ = false;
    loaded_Muon_p4_ = false;
    loaded_Muon_pdgId_ = false;
    loaded_Muon_pfIsoId_ = false;
    loaded_Muon_pfRelIso03_all_ = false;
    loaded_Muon_pfRelIso03_chg_ = false;
    loaded_Muon_pfRelIso04_all_ = false;
    loaded_Muon_phi_ = false;
    loaded_Muon_pt_ = false;
    loaded_Muon_ptErr_ = false;
    loaded_Muon_segmentComp_ = false;
    loaded_Muon_sip3d_ = false;
    loaded_Muon_softId_ = false;
    loaded_Muon_softMva_ = false;
    loaded_Muon_softMvaId_ = false;
    loaded_Muon_tightCharge_ = false;
    loaded_Muon_tightId_ = false;
    loaded_Muon_tkIsoId_ = false;
    loaded_Muon_tkRelIso_ = false;
    loaded_Muon_triggerIdLoose_ = false;
    loaded_Muon_tunepRelPt_ = false;
    loaded_OtherPV_z_ = false;
    loaded_PSWeight_ = false;
    loaded_PV_chi2_ = false;
    loaded_PV_ndof_ = false;
    loaded_PV_npvs_ = false;
    loaded_PV_npvsGood_ = false;
    loaded_PV_score_ = false;
    loaded_PV_x_ = false;
    loaded_PV_y_ = false;
    loaded_PV_z_ = false;
    loaded_Photon_charge_ = false;
    loaded_Photon_chargedHadronIso_ = false;
    loaded_Photon_cleanmask_ = false;
    loaded_Photon_cutBased_ = false;
    loaded_Photon_cutBased_Fall17V1Bitmap_ = false;
    loaded_Photon_cutBased_Spring16V2p2_ = false;
    loaded_Photon_eCorr_ = false;
    loaded_Photon_electronIdx_ = false;
    loaded_Photon_electronVeto_ = false;
    loaded_Photon_energyErr_ = false;
    loaded_Photon_eta_ = false;
    loaded_Photon_genPartFlav_ = false;
    loaded_Photon_genPartIdx_ = false;
    loaded_Photon_hoe_ = false;
    loaded_Photon_isScEtaEB_ = false;
    loaded_Photon_isScEtaEE_ = false;
    loaded_Photon_jetIdx_ = false;
    loaded_Photon_mass_ = false;
    loaded_Photon_mvaID_ = false;
    loaded_Photon_mvaID_Fall17V1p1_ = false;
    loaded_Photon_mvaID_Spring16nonTrigV1_ = false;
    loaded_Photon_mvaID_WP80_ = false;
    loaded_Photon_mvaID_WP90_ = false;
    loaded_Photon_p4_ = false;
    loaded_Photon_pdgId_ = false;
    loaded_Photon_pfRelIso03_all_ = false;
    loaded_Photon_pfRelIso03_chg_ = false;
    loaded_Photon_phi_ = false;
    loaded_Photon_photonIso_ = false;
    loaded_Photon_pixelSeed_ = false;
    loaded_Photon_pt_ = false;
    loaded_Photon_pt_FNUDown_ = false;
    loaded_Photon_pt_FNUUp_ = false;
    loaded_Photon_pt_MCScaleDown_ = false;
    loaded_Photon_pt_MCScaleGainDown_ = false;
    loaded_Photon_pt_MCScaleGainUp_ = false;
    loaded_Photon_pt_MCScaleUp_ = false;
    loaded_Photon_pt_MCSmearDown_ = false;
    loaded_Photon_pt_MCSmearUp_ = false;
    loaded_Photon_pt_MaterialDown_ = false;
    loaded_Photon_pt_MaterialUp_ = false;
    loaded_Photon_pt_ShowerShapeDown_ = false;
    loaded_Photon_pt_ShowerShapeUp_ = false;
    loaded_Photon_r9_ = false;
    loaded_Photon_seedGain_ = false;
    loaded_Photon_sieie_ = false;
    loaded_Photon_trkSumPtHollowConeDR03_ = false;
    loaded_Photon_vidNestedWPBitmap_ = false;
    loaded_Photon_vidNestedWPBitmap_Spring16V2p2_ = false;
    loaded_Pileup_gpudensity_ = false;
    loaded_Pileup_nPU_ = false;
    loaded_Pileup_nTrueInt_ = false;
    loaded_Pileup_pudensity_ = false;
    loaded_Pileup_sumEOOT_ = false;
    loaded_Pileup_sumLOOT_ = false;
    loaded_PrefireWeight_ = false;
    loaded_PrefireWeight_Down_ = false;
    loaded_PrefireWeight_Up_ = false;
    loaded_PuppiMET_phi_ = false;
    loaded_PuppiMET_phiJERUp_ = false;
    loaded_PuppiMET_phiJESUp_ = false;
    loaded_PuppiMET_pt_ = false;
    loaded_PuppiMET_ptJERUp_ = false;
    loaded_PuppiMET_ptJESUp_ = false;
    loaded_PuppiMET_sumEt_ = false;
    loaded_RawMET_phi_ = false;
    loaded_RawMET_pt_ = false;
    loaded_RawMET_sumEt_ = false;
    loaded_RawPuppiMET_phi_ = false;
    loaded_RawPuppiMET_pt_ = false;
    loaded_RawPuppiMET_sumEt_ = false;
    loaded_SV_chi2_ = false;
    loaded_SV_dlen_ = false;
    loaded_SV_dlenSig_ = false;
    loaded_SV_dxy_ = false;
    loaded_SV_dxySig_ = false;
    loaded_SV_eta_ = false;
    loaded_SV_mass_ = false;
    loaded_SV_ndof_ = false;
    loaded_SV_p4_ = false;
    loaded_SV_pAngle_ = false;
    loaded_SV_phi_ = false;
    loaded_SV_pt_ = false;
    loaded_SV_x_ = false;
    loaded_SV_y_ = false;
    loaded_SV_z_ = false;
    loaded_SoftActivityJetHT_ = false;
    loaded_SoftActivityJetHT10_ = false;
    loaded_SoftActivityJetHT2_ = false;
    loaded_SoftActivityJetHT5_ = false;
    loaded_SoftActivityJetNjets10_ = false;
    loaded_SoftActivityJetNjets2_ = false;
    loaded_SoftActivityJetNjets5_ = false;
    loaded_SoftActivityJet_eta_ = false;
    loaded_SoftActivityJet_phi_ = false;
    loaded_SoftActivityJet_pt_ = false;
    loaded_SubGenJetAK8_eta_ = false;
    loaded_SubGenJetAK8_mass_ = false;
    loaded_SubGenJetAK8_p4_ = false;
    loaded_SubGenJetAK8_phi_ = false;
    loaded_SubGenJetAK8_pt_ = false;
    loaded_SubJet_btagCMVA_ = false;
    loaded_SubJet_btagCSVV2_ = false;
    loaded_SubJet_btagDeepB_ = false;
    loaded_SubJet_eta_ = false;
    loaded_SubJet_mass_ = false;
    loaded_SubJet_n2b1_ = false;
    loaded_SubJet_n3b1_ = false;
    loaded_SubJet_nBHadrons_ = false;
    loaded_SubJet_nCHadrons_ = false;
    loaded_SubJet_p4_ = false;
    loaded_SubJet_phi_ = false;
    loaded_SubJet_pt_ = false;
    loaded_SubJet_rawFactor_ = false;
    loaded_SubJet_tau1_ = false;
    loaded_SubJet_tau2_ = false;
    loaded_SubJet_tau3_ = false;
    loaded_SubJet_tau4_ = false;
    loaded_Tau_Filter_ = false;
    loaded_Tau_charge_ = false;
    loaded_Tau_chargedIso_ = false;
    loaded_Tau_cleanmask_ = false;
    loaded_Tau_decayMode_ = false;
    loaded_Tau_dxy_ = false;
    loaded_Tau_dz_ = false;
    loaded_Tau_eta_ = false;
    loaded_Tau_genPartFlav_ = false;
    loaded_Tau_genPartIdx_ = false;
    loaded_Tau_idAntiEle_ = false;
    loaded_Tau_idAntiEle2018_ = false;
    loaded_Tau_idAntiMu_ = false;
    loaded_Tau_idDecayMode_ = false;
    loaded_Tau_idDecayModeNewDMs_ = false;
    loaded_Tau_idDeepTau2017v2p1VSe_ = false;
    loaded_Tau_idDeepTau2017v2p1VSjet_ = false;
    loaded_Tau_idDeepTau2017v2p1VSmu_ = false;
    loaded_Tau_idMVAnewDM2017v2_ = false;
    loaded_Tau_idMVAoldDM_ = false;
    loaded_Tau_idMVAoldDM2017v1_ = false;
    loaded_Tau_idMVAoldDM2017v2_ = false;
    loaded_Tau_idMVAoldDMdR032017v2_ = false;
    loaded_Tau_jetIdx_ = false;
    loaded_Tau_leadTkDeltaEta_ = false;
    loaded_Tau_leadTkDeltaPhi_ = false;
    loaded_Tau_leadTkPtOverTauPt_ = false;
    loaded_Tau_mass_ = false;
    loaded_Tau_neutralIso_ = false;
    loaded_Tau_p4_ = false;
    loaded_Tau_phi_ = false;
    loaded_Tau_photonsOutsideSignalCone_ = false;
    loaded_Tau_pt_ = false;
    loaded_Tau_puCorr_ = false;
    loaded_Tau_rawAntiEle_ = false;
    loaded_Tau_rawAntiEle2018_ = false;
    loaded_Tau_rawAntiEleCat_ = false;
    loaded_Tau_rawAntiEleCat2018_ = false;
    loaded_Tau_rawDeepTau2017v2p1VSe_ = false;
    loaded_Tau_rawDeepTau2017v2p1VSjet_ = false;
    loaded_Tau_rawDeepTau2017v2p1VSmu_ = false;
    loaded_Tau_rawIso_ = false;
    loaded_Tau_rawIsodR03_ = false;
    loaded_Tau_rawMVAnewDM2017v2_ = false;
    loaded_Tau_rawMVAoldDM_ = false;
    loaded_Tau_rawMVAoldDM2017v1_ = false;
    loaded_Tau_rawMVAoldDM2017v2_ = false;
    loaded_Tau_rawMVAoldDMdR032017v2_ = false;
    loaded_TkMET_phi_ = false;
    loaded_TkMET_pt_ = false;
    loaded_TkMET_sumEt_ = false;
    loaded_TrigObj_eta_ = false;
    loaded_TrigObj_filterBits_ = false;
    loaded_TrigObj_id_ = false;
    loaded_TrigObj_l1charge_ = false;
    loaded_TrigObj_l1iso_ = false;
    loaded_TrigObj_l1pt_ = false;
    loaded_TrigObj_l1pt_2_ = false;
    loaded_TrigObj_l2pt_ = false;
    loaded_TrigObj_phi_ = false;
    loaded_TrigObj_pt_ = false;
    loaded_btagWeight_CMVA_ = false;
    loaded_btagWeight_CSVV2_ = false;
    loaded_btagWeight_DeepCSVB_ = false;
    loaded_dPhi_ggtautauLoose_ = false;
    loaded_dPhi_ggtautauSVFitLoose_ = false;
    loaded_dR_ggtautauLoose_ = false;
    loaded_dR_ggtautauSVFitLoose_ = false;
    loaded_dR_tautauLoose_ = false;
    loaded_dR_tautauSVFitLoose_ = false;
    loaded_eleHidx_ = false;
    loaded_eta_tautauLoose_ = false;
    loaded_eta_tautauSVFitLoose_ = false;
    loaded_evWeight_electronVeto_ = false;
    loaded_evWeight_electronVetoDown_ = false;
    loaded_evWeight_electronVetoUp_ = false;
    loaded_evWeight_looseMva_ = false;
    loaded_evWeight_looseMvaDown_ = false;
    loaded_evWeight_looseMvaUp_ = false;
    loaded_evWeight_presel_ = false;
    loaded_evWeight_preselDown_ = false;
    loaded_evWeight_preselUp_ = false;
    loaded_event_ = false;
    loaded_fixedGridRhoAll_ = false;
    loaded_fixedGridRhoFastjetAll_ = false;
    loaded_fixedGridRhoFastjetCentral_ = false;
    loaded_fixedGridRhoFastjetCentralCalo_ = false;
    loaded_fixedGridRhoFastjetCentralChargedPileUp_ = false;
    loaded_fixedGridRhoFastjetCentralNeutral_ = false;
    loaded_gHidx_ = false;
    loaded_genTtbarId_ = false;
    loaded_genWeight_ = false;
    loaded_gg_eta_ = false;
    loaded_gg_mass_ = false;
    loaded_gg_p4_ = false;
    loaded_gg_phi_ = false;
    loaded_gg_pt_ = false;
    loaded_luminosityBlock_ = false;
    loaded_m_tautauLoose_ = false;
    loaded_m_tautauSVFitLoose_ = false;
    loaded_muHidx_ = false;
    loaded_nCorrT1METJet_ = false;
    loaded_nElectron_ = false;
    loaded_nFsrPhoton_ = false;
    loaded_nGenDressedLepton_ = false;
    loaded_nGenIsolatedPhoton_ = false;
    loaded_nGenJet_ = false;
    loaded_nGenJetAK8_ = false;
    loaded_nGenPart_ = false;
    loaded_nGenVisTau_ = false;
    loaded_nIsoTrack_ = false;
    loaded_nJet_ = false;
    loaded_nLHEPart_ = false;
    loaded_nLHEPdfWeight_ = false;
    loaded_nLHEReweightingWeight_ = false;
    loaded_nLHEScaleWeight_ = false;
    loaded_nMuon_ = false;
    loaded_nOtherPV_ = false;
    loaded_nPSWeight_ = false;
    loaded_nPhoton_ = false;
    loaded_nSV_ = false;
    loaded_nSoftActivityJet_ = false;
    loaded_nSubGenJetAK8_ = false;
    loaded_nSubJet_ = false;
    loaded_nTau_ = false;
    loaded_nTrigObj_ = false;
    loaded_nselectedElectron_ = false;
    loaded_nselectedMuon_ = false;
    loaded_nselectedTauLoose_ = false;
    loaded_passedDigammaPair_ = false;
    loaded_passedGoodPhotons_ = false;
    loaded_passedHPhotons_ = false;
    loaded_phi_tautauLoose_ = false;
    loaded_phi_tautauSVFitLoose_ = false;
    loaded_pt_tautauLoose_ = false;
    loaded_pt_tautauSVFitLoose_ = false;
    loaded_puWeight_ = false;
    loaded_puWeightDown_ = false;
    loaded_puWeightUp_ = false;
    loaded_run_ = false;
    loaded_selectedElectron_charge_ = false;
    loaded_selectedElectron_cleanmask_ = false;
    loaded_selectedElectron_convVeto_ = false;
    loaded_selectedElectron_cutBased_ = false;
    loaded_selectedElectron_cutBased_Fall17_V1_ = false;
    loaded_selectedElectron_cutBased_HEEP_ = false;
    loaded_selectedElectron_cutBased_HLTPreSel_ = false;
    loaded_selectedElectron_cutBased_Spring15_ = false;
    loaded_selectedElectron_cutBased_Sum16_ = false;
    loaded_selectedElectron_deltaEtaSC_ = false;
    loaded_selectedElectron_dr03EcalRecHitSumEt_ = false;
    loaded_selectedElectron_dr03HcalDepth1TowerSumEt_ = false;
    loaded_selectedElectron_dr03TkSumPt_ = false;
    loaded_selectedElectron_dr03TkSumPtHEEP_ = false;
    loaded_selectedElectron_dxy_ = false;
    loaded_selectedElectron_dxyErr_ = false;
    loaded_selectedElectron_dz_ = false;
    loaded_selectedElectron_dzErr_ = false;
    loaded_selectedElectron_eCorr_ = false;
    loaded_selectedElectron_eInvMinusPInv_ = false;
    loaded_selectedElectron_energyErr_ = false;
    loaded_selectedElectron_eta_ = false;
    loaded_selectedElectron_etaSVFit_ = false;
    loaded_selectedElectron_genPartFlav_ = false;
    loaded_selectedElectron_genPartIdx_ = false;
    loaded_selectedElectron_hoe_ = false;
    loaded_selectedElectron_ip3d_ = false;
    loaded_selectedElectron_isPFcand_ = false;
    loaded_selectedElectron_jetIdx_ = false;
    loaded_selectedElectron_jetPtRelv2_ = false;
    loaded_selectedElectron_jetRelIso_ = false;
    loaded_selectedElectron_lostHits_ = false;
    loaded_selectedElectron_mSVFit_ = false;
    loaded_selectedElectron_mass_ = false;
    loaded_selectedElectron_miniPFRelIso_all_ = false;
    loaded_selectedElectron_miniPFRelIso_chg_ = false;
    loaded_selectedElectron_mvaFall17V1Iso_ = false;
    loaded_selectedElectron_mvaFall17V1Iso_WP80_ = false;
    loaded_selectedElectron_mvaFall17V1Iso_WP90_ = false;
    loaded_selectedElectron_mvaFall17V1Iso_WPL_ = false;
    loaded_selectedElectron_mvaFall17V1noIso_ = false;
    loaded_selectedElectron_mvaFall17V1noIso_WP80_ = false;
    loaded_selectedElectron_mvaFall17V1noIso_WP90_ = false;
    loaded_selectedElectron_mvaFall17V1noIso_WPL_ = false;
    loaded_selectedElectron_mvaFall17V2Iso_ = false;
    loaded_selectedElectron_mvaFall17V2Iso_WP80_ = false;
    loaded_selectedElectron_mvaFall17V2Iso_WP90_ = false;
    loaded_selectedElectron_mvaFall17V2Iso_WPL_ = false;
    loaded_selectedElectron_mvaFall17V2noIso_ = false;
    loaded_selectedElectron_mvaFall17V2noIso_WP80_ = false;
    loaded_selectedElectron_mvaFall17V2noIso_WP90_ = false;
    loaded_selectedElectron_mvaFall17V2noIso_WPL_ = false;
    loaded_selectedElectron_mvaSpring16GP_ = false;
    loaded_selectedElectron_mvaSpring16GP_WP80_ = false;
    loaded_selectedElectron_mvaSpring16GP_WP90_ = false;
    loaded_selectedElectron_mvaSpring16HZZ_ = false;
    loaded_selectedElectron_mvaSpring16HZZ_WPL_ = false;
    loaded_selectedElectron_mvaTTH_ = false;
    loaded_selectedElectron_p4_ = false;
    loaded_selectedElectron_pdgId_ = false;
    loaded_selectedElectron_pfRelIso03_all_ = false;
    loaded_selectedElectron_pfRelIso03_chg_ = false;
    loaded_selectedElectron_phi_ = false;
    loaded_selectedElectron_phiSVFit_ = false;
    loaded_selectedElectron_photonIdx_ = false;
    loaded_selectedElectron_pt_ = false;
    loaded_selectedElectron_ptSVFit_ = false;
    loaded_selectedElectron_r9_ = false;
    loaded_selectedElectron_scEtOverPt_ = false;
    loaded_selectedElectron_seedGain_ = false;
    loaded_selectedElectron_sieie_ = false;
    loaded_selectedElectron_sip3d_ = false;
    loaded_selectedElectron_tightCharge_ = false;
    loaded_selectedElectron_vidNestedWPBitmap_ = false;
    loaded_selectedElectron_vidNestedWPBitmapHEEP_ = false;
    loaded_selectedElectron_vidNestedWPBitmapSpring15_ = false;
    loaded_selectedElectron_vidNestedWPBitmapSum16_ = false;
    loaded_selectedMuon_charge_ = false;
    loaded_selectedMuon_cleanmask_ = false;
    loaded_selectedMuon_dxy_ = false;
    loaded_selectedMuon_dxyErr_ = false;
    loaded_selectedMuon_dxybs_ = false;
    loaded_selectedMuon_dz_ = false;
    loaded_selectedMuon_dzErr_ = false;
    loaded_selectedMuon_eta_ = false;
    loaded_selectedMuon_etaSVFit_ = false;
    loaded_selectedMuon_fsrPhotonIdx_ = false;
    loaded_selectedMuon_genPartFlav_ = false;
    loaded_selectedMuon_genPartIdx_ = false;
    loaded_selectedMuon_highPtId_ = false;
    loaded_selectedMuon_highPurity_ = false;
    loaded_selectedMuon_inTimeselectedMuon_ = false;
    loaded_selectedMuon_ip3d_ = false;
    loaded_selectedMuon_isGlobal_ = false;
    loaded_selectedMuon_isPFcand_ = false;
    loaded_selectedMuon_isTracker_ = false;
    loaded_selectedMuon_jetIdx_ = false;
    loaded_selectedMuon_jetPtRelv2_ = false;
    loaded_selectedMuon_jetRelIso_ = false;
    loaded_selectedMuon_looseId_ = false;
    loaded_selectedMuon_mSVFit_ = false;
    loaded_selectedMuon_mass_ = false;
    loaded_selectedMuon_mediumId_ = false;
    loaded_selectedMuon_mediumPromptId_ = false;
    loaded_selectedMuon_miniIsoId_ = false;
    loaded_selectedMuon_miniPFRelIso_all_ = false;
    loaded_selectedMuon_miniPFRelIso_chg_ = false;
    loaded_selectedMuon_multiIsoId_ = false;
    loaded_selectedMuon_mvaId_ = false;
    loaded_selectedMuon_mvaLowPt_ = false;
    loaded_selectedMuon_mvaTTH_ = false;
    loaded_selectedMuon_nStations_ = false;
    loaded_selectedMuon_nTrackerLayers_ = false;
    loaded_selectedMuon_p4_ = false;
    loaded_selectedMuon_pdgId_ = false;
    loaded_selectedMuon_pfIsoId_ = false;
    loaded_selectedMuon_pfRelIso03_all_ = false;
    loaded_selectedMuon_pfRelIso03_chg_ = false;
    loaded_selectedMuon_pfRelIso04_all_ = false;
    loaded_selectedMuon_phi_ = false;
    loaded_selectedMuon_phiSVFit_ = false;
    loaded_selectedMuon_pt_ = false;
    loaded_selectedMuon_ptErr_ = false;
    loaded_selectedMuon_ptSVFit_ = false;
    loaded_selectedMuon_segmentComp_ = false;
    loaded_selectedMuon_sip3d_ = false;
    loaded_selectedMuon_softId_ = false;
    loaded_selectedMuon_softMva_ = false;
    loaded_selectedMuon_softMvaId_ = false;
    loaded_selectedMuon_tightCharge_ = false;
    loaded_selectedMuon_tightId_ = false;
    loaded_selectedMuon_tkIsoId_ = false;
    loaded_selectedMuon_tkRelIso_ = false;
    loaded_selectedMuon_triggerIdLoose_ = false;
    loaded_selectedMuon_tunepRelPt_ = false;
    loaded_selectedPhoton_charge_ = false;
    loaded_selectedPhoton_chargedHadronIso_ = false;
    loaded_selectedPhoton_cleanmask_ = false;
    loaded_selectedPhoton_cutBased_ = false;
    loaded_selectedPhoton_cutBased_Fall17V1Bitmap_ = false;
    loaded_selectedPhoton_cutBased_Spring16V2p2_ = false;
    loaded_selectedPhoton_eCorr_ = false;
    loaded_selectedPhoton_electronIdx_ = false;
    loaded_selectedPhoton_electronVeto_ = false;
    loaded_selectedPhoton_energyErr_ = false;
    loaded_selectedPhoton_eta_ = false;
    loaded_selectedPhoton_genPartFlav_ = false;
    loaded_selectedPhoton_genPartIdx_ = false;
    loaded_selectedPhoton_hoe_ = false;
    loaded_selectedPhoton_isScEtaEB_ = false;
    loaded_selectedPhoton_isScEtaEE_ = false;
    loaded_selectedPhoton_jetIdx_ = false;
    loaded_selectedPhoton_mass_ = false;
    loaded_selectedPhoton_mvaID_ = false;
    loaded_selectedPhoton_mvaID_Fall17V1p1_ = false;
    loaded_selectedPhoton_mvaID_Spring16nonTrigV1_ = false;
    loaded_selectedPhoton_mvaID_WP80_ = false;
    loaded_selectedPhoton_mvaID_WP90_ = false;
    loaded_selectedPhoton_p4_ = false;
    loaded_selectedPhoton_pdgId_ = false;
    loaded_selectedPhoton_pfRelIso03_all_ = false;
    loaded_selectedPhoton_pfRelIso03_chg_ = false;
    loaded_selectedPhoton_phi_ = false;
    loaded_selectedPhoton_photonIso_ = false;
    loaded_selectedPhoton_pixelSeed_ = false;
    loaded_selectedPhoton_pt_ = false;
    loaded_selectedPhoton_r9_ = false;
    loaded_selectedPhoton_seedGain_ = false;
    loaded_selectedPhoton_sieie_ = false;
    loaded_selectedPhoton_trkSumPtHollowConeDR03_ = false;
    loaded_selectedPhoton_vidNestedWPBitmap_ = false;
    loaded_selectedPhoton_vidNestedWPBitmap_Spring16V2p2_ = false;
    loaded_selectedTauLoose_charge_ = false;
    loaded_selectedTauLoose_chargedIso_ = false;
    loaded_selectedTauLoose_cleanmask_ = false;
    loaded_selectedTauLoose_decayMode_ = false;
    loaded_selectedTauLoose_dxy_ = false;
    loaded_selectedTauLoose_dz_ = false;
    loaded_selectedTauLoose_eta_ = false;
    loaded_selectedTauLoose_etaSVFit_ = false;
    loaded_selectedTauLoose_genPartFlav_ = false;
    loaded_selectedTauLoose_genPartIdx_ = false;
    loaded_selectedTauLoose_idAntiEle_ = false;
    loaded_selectedTauLoose_idAntiEle2018_ = false;
    loaded_selectedTauLoose_idAntiMu_ = false;
    loaded_selectedTauLoose_idDecayMode_ = false;
    loaded_selectedTauLoose_idDecayModeNewDMs_ = false;
    loaded_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe_ = false;
    loaded_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet_ = false;
    loaded_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu_ = false;
    loaded_selectedTauLoose_idMVAnewDM2017v2_ = false;
    loaded_selectedTauLoose_idMVAoldDM_ = false;
    loaded_selectedTauLoose_idMVAoldDM2017v1_ = false;
    loaded_selectedTauLoose_idMVAoldDM2017v2_ = false;
    loaded_selectedTauLoose_idMVAoldDMdR032017v2_ = false;
    loaded_selectedTauLoose_jetIdx_ = false;
    loaded_selectedTauLoose_leadTkDeltaEta_ = false;
    loaded_selectedTauLoose_leadTkDeltaPhi_ = false;
    loaded_selectedTauLoose_leadTkPtOverselectedTauLoosePt_ = false;
    loaded_selectedTauLoose_mSVFit_ = false;
    loaded_selectedTauLoose_mass_ = false;
    loaded_selectedTauLoose_neutralIso_ = false;
    loaded_selectedTauLoose_p4_ = false;
    loaded_selectedTauLoose_phi_ = false;
    loaded_selectedTauLoose_phiSVFit_ = false;
    loaded_selectedTauLoose_photonsOutsideSignalCone_ = false;
    loaded_selectedTauLoose_pt_ = false;
    loaded_selectedTauLoose_ptSVFit_ = false;
    loaded_selectedTauLoose_puCorr_ = false;
    loaded_selectedTauLoose_rawAntiEle_ = false;
    loaded_selectedTauLoose_rawAntiEle2018_ = false;
    loaded_selectedTauLoose_rawAntiEleCat_ = false;
    loaded_selectedTauLoose_rawAntiEleCat2018_ = false;
    loaded_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe_ = false;
    loaded_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet_ = false;
    loaded_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu_ = false;
    loaded_selectedTauLoose_rawIso_ = false;
    loaded_selectedTauLoose_rawIsodR03_ = false;
    loaded_selectedTauLoose_rawMVAnewDM2017v2_ = false;
    loaded_selectedTauLoose_rawMVAoldDM_ = false;
    loaded_selectedTauLoose_rawMVAoldDM2017v1_ = false;
    loaded_selectedTauLoose_rawMVAoldDM2017v2_ = false;
    loaded_selectedTauLoose_rawMVAoldDMdR032017v2_ = false;
    loaded_tauHidxLoose_ = false;
}

const float &Nano::CaloMET_phi() {
    if (!loaded_CaloMET_phi_) {
        if (!b_CaloMET_phi_) throw std::runtime_error("CaloMET_phi branch doesn't exist");
        b_CaloMET_phi_->GetEntry(index);
        loaded_CaloMET_phi_ = true;
    }
    return CaloMET_phi_;
}
const float &Nano::CaloMET_pt() {
    if (!loaded_CaloMET_pt_) {
        if (!b_CaloMET_pt_) throw std::runtime_error("CaloMET_pt branch doesn't exist");
        b_CaloMET_pt_->GetEntry(index);
        loaded_CaloMET_pt_ = true;
    }
    return CaloMET_pt_;
}
const float &Nano::CaloMET_sumEt() {
    if (!loaded_CaloMET_sumEt_) {
        if (!b_CaloMET_sumEt_) throw std::runtime_error("CaloMET_sumEt branch doesn't exist");
        b_CaloMET_sumEt_->GetEntry(index);
        loaded_CaloMET_sumEt_ = true;
    }
    return CaloMET_sumEt_;
}
const int &Nano::Category() {
    if (!loaded_Category_) {
        if (!b_Category_) throw std::runtime_error("Category branch doesn't exist");
        b_Category_->GetEntry(index);
        loaded_Category_ = true;
    }
    return Category_;
}
const int &Nano::Category_lveto() {
    if (!loaded_Category_lveto_) {
        if (!b_Category_lveto_) throw std::runtime_error("Category_lveto branch doesn't exist");
        b_Category_lveto_->GetEntry(index);
        loaded_Category_lveto_ = true;
    }
    return Category_lveto_;
}
const int &Nano::Category_pairsLoose() {
    if (!loaded_Category_pairsLoose_) {
        if (!b_Category_pairsLoose_) throw std::runtime_error("Category_pairsLoose branch doesn't exist");
        b_Category_pairsLoose_->GetEntry(index);
        loaded_Category_pairsLoose_ = true;
    }
    return Category_pairsLoose_;
}
const int &Nano::Category_tauselLoose() {
    if (!loaded_Category_tauselLoose_) {
        if (!b_Category_tauselLoose_) throw std::runtime_error("Category_tauselLoose branch doesn't exist");
        b_Category_tauselLoose_->GetEntry(index);
        loaded_Category_tauselLoose_ = true;
    }
    return Category_tauselLoose_;
}
const float &Nano::ChsMET_phi() {
    if (!loaded_ChsMET_phi_) {
        if (!b_ChsMET_phi_) throw std::runtime_error("ChsMET_phi branch doesn't exist");
        b_ChsMET_phi_->GetEntry(index);
        loaded_ChsMET_phi_ = true;
    }
    return ChsMET_phi_;
}
const float &Nano::ChsMET_pt() {
    if (!loaded_ChsMET_pt_) {
        if (!b_ChsMET_pt_) throw std::runtime_error("ChsMET_pt branch doesn't exist");
        b_ChsMET_pt_->GetEntry(index);
        loaded_ChsMET_pt_ = true;
    }
    return ChsMET_pt_;
}
const float &Nano::ChsMET_sumEt() {
    if (!loaded_ChsMET_sumEt_) {
        if (!b_ChsMET_sumEt_) throw std::runtime_error("ChsMET_sumEt branch doesn't exist");
        b_ChsMET_sumEt_->GetEntry(index);
        loaded_ChsMET_sumEt_ = true;
    }
    return ChsMET_sumEt_;
}
const vector<float> &Nano::CorrT1METJet_area() {
    if (!loaded_CorrT1METJet_area_) {
        if (!b_CorrT1METJet_area_) throw std::runtime_error("CorrT1METJet_area branch doesn't exist");
        int bytes = b_CorrT1METJet_area_->GetEntry(index);
        v_CorrT1METJet_area_ = vector<float>(CorrT1METJet_area_,CorrT1METJet_area_+bytes/sizeof(CorrT1METJet_area_[0]));
        loaded_CorrT1METJet_area_ = true;
    }
    return v_CorrT1METJet_area_;
}
const vector<float> &Nano::CorrT1METJet_eta() {
    if (!loaded_CorrT1METJet_eta_) {
        if (!b_CorrT1METJet_eta_) throw std::runtime_error("CorrT1METJet_eta branch doesn't exist");
        int bytes = b_CorrT1METJet_eta_->GetEntry(index);
        v_CorrT1METJet_eta_ = vector<float>(CorrT1METJet_eta_,CorrT1METJet_eta_+bytes/sizeof(CorrT1METJet_eta_[0]));
        loaded_CorrT1METJet_eta_ = true;
    }
    return v_CorrT1METJet_eta_;
}
const vector<float> &Nano::CorrT1METJet_muonSubtrFactor() {
    if (!loaded_CorrT1METJet_muonSubtrFactor_) {
        if (!b_CorrT1METJet_muonSubtrFactor_) throw std::runtime_error("CorrT1METJet_muonSubtrFactor branch doesn't exist");
        int bytes = b_CorrT1METJet_muonSubtrFactor_->GetEntry(index);
        v_CorrT1METJet_muonSubtrFactor_ = vector<float>(CorrT1METJet_muonSubtrFactor_,CorrT1METJet_muonSubtrFactor_+bytes/sizeof(CorrT1METJet_muonSubtrFactor_[0]));
        loaded_CorrT1METJet_muonSubtrFactor_ = true;
    }
    return v_CorrT1METJet_muonSubtrFactor_;
}
const vector<float> &Nano::CorrT1METJet_phi() {
    if (!loaded_CorrT1METJet_phi_) {
        if (!b_CorrT1METJet_phi_) throw std::runtime_error("CorrT1METJet_phi branch doesn't exist");
        int bytes = b_CorrT1METJet_phi_->GetEntry(index);
        v_CorrT1METJet_phi_ = vector<float>(CorrT1METJet_phi_,CorrT1METJet_phi_+bytes/sizeof(CorrT1METJet_phi_[0]));
        loaded_CorrT1METJet_phi_ = true;
    }
    return v_CorrT1METJet_phi_;
}
const vector<float> &Nano::CorrT1METJet_rawPt() {
    if (!loaded_CorrT1METJet_rawPt_) {
        if (!b_CorrT1METJet_rawPt_) throw std::runtime_error("CorrT1METJet_rawPt branch doesn't exist");
        int bytes = b_CorrT1METJet_rawPt_->GetEntry(index);
        v_CorrT1METJet_rawPt_ = vector<float>(CorrT1METJet_rawPt_,CorrT1METJet_rawPt_+bytes/sizeof(CorrT1METJet_rawPt_[0]));
        loaded_CorrT1METJet_rawPt_ = true;
    }
    return v_CorrT1METJet_rawPt_;
}
const vector<int> &Nano::Electron_charge() {
    if (!loaded_Electron_charge_) {
        if (!b_Electron_charge_) throw std::runtime_error("Electron_charge branch doesn't exist");
        int bytes = b_Electron_charge_->GetEntry(index);
        v_Electron_charge_ = vector<int>(Electron_charge_,Electron_charge_+bytes/sizeof(Electron_charge_[0]));
        loaded_Electron_charge_ = true;
    }
    return v_Electron_charge_;
}
const vector<UChar_t> &Nano::Electron_cleanmask() {
    if (!loaded_Electron_cleanmask_) {
        if (!b_Electron_cleanmask_) throw std::runtime_error("Electron_cleanmask branch doesn't exist");
        int bytes = b_Electron_cleanmask_->GetEntry(index);
        v_Electron_cleanmask_ = vector<UChar_t>(Electron_cleanmask_,Electron_cleanmask_+bytes/sizeof(Electron_cleanmask_[0]));
        loaded_Electron_cleanmask_ = true;
    }
    return v_Electron_cleanmask_;
}
const vector<bool> &Nano::Electron_convVeto() {
    if (!loaded_Electron_convVeto_) {
        if (!b_Electron_convVeto_) throw std::runtime_error("Electron_convVeto branch doesn't exist");
        int bytes = b_Electron_convVeto_->GetEntry(index);
        v_Electron_convVeto_ = vector<bool>(Electron_convVeto_,Electron_convVeto_+bytes/sizeof(Electron_convVeto_[0]));
        loaded_Electron_convVeto_ = true;
    }
    return v_Electron_convVeto_;
}
const vector<int> &Nano::Electron_cutBased() {
    if (!loaded_Electron_cutBased_) {
        if (!b_Electron_cutBased_) throw std::runtime_error("Electron_cutBased branch doesn't exist");
        int bytes = b_Electron_cutBased_->GetEntry(index);
        v_Electron_cutBased_ = vector<int>(Electron_cutBased_,Electron_cutBased_+bytes/sizeof(Electron_cutBased_[0]));
        loaded_Electron_cutBased_ = true;
    }
    return v_Electron_cutBased_;
}
const vector<int> &Nano::Electron_cutBased_Fall17_V1() {
    if (!loaded_Electron_cutBased_Fall17_V1_) {
        if (!b_Electron_cutBased_Fall17_V1_) throw std::runtime_error("Electron_cutBased_Fall17_V1 branch doesn't exist");
        int bytes = b_Electron_cutBased_Fall17_V1_->GetEntry(index);
        v_Electron_cutBased_Fall17_V1_ = vector<int>(Electron_cutBased_Fall17_V1_,Electron_cutBased_Fall17_V1_+bytes/sizeof(Electron_cutBased_Fall17_V1_[0]));
        loaded_Electron_cutBased_Fall17_V1_ = true;
    }
    return v_Electron_cutBased_Fall17_V1_;
}
const vector<bool> &Nano::Electron_cutBased_HEEP() {
    if (!loaded_Electron_cutBased_HEEP_) {
        if (!b_Electron_cutBased_HEEP_) throw std::runtime_error("Electron_cutBased_HEEP branch doesn't exist");
        int bytes = b_Electron_cutBased_HEEP_->GetEntry(index);
        v_Electron_cutBased_HEEP_ = vector<bool>(Electron_cutBased_HEEP_,Electron_cutBased_HEEP_+bytes/sizeof(Electron_cutBased_HEEP_[0]));
        loaded_Electron_cutBased_HEEP_ = true;
    }
    return v_Electron_cutBased_HEEP_;
}
const vector<int> &Nano::Electron_cutBased_HLTPreSel() {
    if (!loaded_Electron_cutBased_HLTPreSel_) {
        if (!b_Electron_cutBased_HLTPreSel_) throw std::runtime_error("Electron_cutBased_HLTPreSel branch doesn't exist");
        int bytes = b_Electron_cutBased_HLTPreSel_->GetEntry(index);
        v_Electron_cutBased_HLTPreSel_ = vector<int>(Electron_cutBased_HLTPreSel_,Electron_cutBased_HLTPreSel_+bytes/sizeof(Electron_cutBased_HLTPreSel_[0]));
        loaded_Electron_cutBased_HLTPreSel_ = true;
    }
    return v_Electron_cutBased_HLTPreSel_;
}
const vector<int> &Nano::Electron_cutBased_Spring15() {
    if (!loaded_Electron_cutBased_Spring15_) {
        if (!b_Electron_cutBased_Spring15_) throw std::runtime_error("Electron_cutBased_Spring15 branch doesn't exist");
        int bytes = b_Electron_cutBased_Spring15_->GetEntry(index);
        v_Electron_cutBased_Spring15_ = vector<int>(Electron_cutBased_Spring15_,Electron_cutBased_Spring15_+bytes/sizeof(Electron_cutBased_Spring15_[0]));
        loaded_Electron_cutBased_Spring15_ = true;
    }
    return v_Electron_cutBased_Spring15_;
}
const vector<int> &Nano::Electron_cutBased_Sum16() {
    if (!loaded_Electron_cutBased_Sum16_) {
        if (!b_Electron_cutBased_Sum16_) throw std::runtime_error("Electron_cutBased_Sum16 branch doesn't exist");
        int bytes = b_Electron_cutBased_Sum16_->GetEntry(index);
        v_Electron_cutBased_Sum16_ = vector<int>(Electron_cutBased_Sum16_,Electron_cutBased_Sum16_+bytes/sizeof(Electron_cutBased_Sum16_[0]));
        loaded_Electron_cutBased_Sum16_ = true;
    }
    return v_Electron_cutBased_Sum16_;
}
const vector<float> &Nano::Electron_deltaEtaSC() {
    if (!loaded_Electron_deltaEtaSC_) {
        if (!b_Electron_deltaEtaSC_) throw std::runtime_error("Electron_deltaEtaSC branch doesn't exist");
        int bytes = b_Electron_deltaEtaSC_->GetEntry(index);
        v_Electron_deltaEtaSC_ = vector<float>(Electron_deltaEtaSC_,Electron_deltaEtaSC_+bytes/sizeof(Electron_deltaEtaSC_[0]));
        loaded_Electron_deltaEtaSC_ = true;
    }
    return v_Electron_deltaEtaSC_;
}
const vector<float> &Nano::Electron_dr03EcalRecHitSumEt() {
    if (!loaded_Electron_dr03EcalRecHitSumEt_) {
        if (!b_Electron_dr03EcalRecHitSumEt_) throw std::runtime_error("Electron_dr03EcalRecHitSumEt branch doesn't exist");
        int bytes = b_Electron_dr03EcalRecHitSumEt_->GetEntry(index);
        v_Electron_dr03EcalRecHitSumEt_ = vector<float>(Electron_dr03EcalRecHitSumEt_,Electron_dr03EcalRecHitSumEt_+bytes/sizeof(Electron_dr03EcalRecHitSumEt_[0]));
        loaded_Electron_dr03EcalRecHitSumEt_ = true;
    }
    return v_Electron_dr03EcalRecHitSumEt_;
}
const vector<float> &Nano::Electron_dr03HcalDepth1TowerSumEt() {
    if (!loaded_Electron_dr03HcalDepth1TowerSumEt_) {
        if (!b_Electron_dr03HcalDepth1TowerSumEt_) throw std::runtime_error("Electron_dr03HcalDepth1TowerSumEt branch doesn't exist");
        int bytes = b_Electron_dr03HcalDepth1TowerSumEt_->GetEntry(index);
        v_Electron_dr03HcalDepth1TowerSumEt_ = vector<float>(Electron_dr03HcalDepth1TowerSumEt_,Electron_dr03HcalDepth1TowerSumEt_+bytes/sizeof(Electron_dr03HcalDepth1TowerSumEt_[0]));
        loaded_Electron_dr03HcalDepth1TowerSumEt_ = true;
    }
    return v_Electron_dr03HcalDepth1TowerSumEt_;
}
const vector<float> &Nano::Electron_dr03TkSumPt() {
    if (!loaded_Electron_dr03TkSumPt_) {
        if (!b_Electron_dr03TkSumPt_) throw std::runtime_error("Electron_dr03TkSumPt branch doesn't exist");
        int bytes = b_Electron_dr03TkSumPt_->GetEntry(index);
        v_Electron_dr03TkSumPt_ = vector<float>(Electron_dr03TkSumPt_,Electron_dr03TkSumPt_+bytes/sizeof(Electron_dr03TkSumPt_[0]));
        loaded_Electron_dr03TkSumPt_ = true;
    }
    return v_Electron_dr03TkSumPt_;
}
const vector<float> &Nano::Electron_dr03TkSumPtHEEP() {
    if (!loaded_Electron_dr03TkSumPtHEEP_) {
        if (!b_Electron_dr03TkSumPtHEEP_) throw std::runtime_error("Electron_dr03TkSumPtHEEP branch doesn't exist");
        int bytes = b_Electron_dr03TkSumPtHEEP_->GetEntry(index);
        v_Electron_dr03TkSumPtHEEP_ = vector<float>(Electron_dr03TkSumPtHEEP_,Electron_dr03TkSumPtHEEP_+bytes/sizeof(Electron_dr03TkSumPtHEEP_[0]));
        loaded_Electron_dr03TkSumPtHEEP_ = true;
    }
    return v_Electron_dr03TkSumPtHEEP_;
}
const vector<float> &Nano::Electron_dxy() {
    if (!loaded_Electron_dxy_) {
        if (!b_Electron_dxy_) throw std::runtime_error("Electron_dxy branch doesn't exist");
        int bytes = b_Electron_dxy_->GetEntry(index);
        v_Electron_dxy_ = vector<float>(Electron_dxy_,Electron_dxy_+bytes/sizeof(Electron_dxy_[0]));
        loaded_Electron_dxy_ = true;
    }
    return v_Electron_dxy_;
}
const vector<float> &Nano::Electron_dxyErr() {
    if (!loaded_Electron_dxyErr_) {
        if (!b_Electron_dxyErr_) throw std::runtime_error("Electron_dxyErr branch doesn't exist");
        int bytes = b_Electron_dxyErr_->GetEntry(index);
        v_Electron_dxyErr_ = vector<float>(Electron_dxyErr_,Electron_dxyErr_+bytes/sizeof(Electron_dxyErr_[0]));
        loaded_Electron_dxyErr_ = true;
    }
    return v_Electron_dxyErr_;
}
const vector<float> &Nano::Electron_dz() {
    if (!loaded_Electron_dz_) {
        if (!b_Electron_dz_) throw std::runtime_error("Electron_dz branch doesn't exist");
        int bytes = b_Electron_dz_->GetEntry(index);
        v_Electron_dz_ = vector<float>(Electron_dz_,Electron_dz_+bytes/sizeof(Electron_dz_[0]));
        loaded_Electron_dz_ = true;
    }
    return v_Electron_dz_;
}
const vector<float> &Nano::Electron_dzErr() {
    if (!loaded_Electron_dzErr_) {
        if (!b_Electron_dzErr_) throw std::runtime_error("Electron_dzErr branch doesn't exist");
        int bytes = b_Electron_dzErr_->GetEntry(index);
        v_Electron_dzErr_ = vector<float>(Electron_dzErr_,Electron_dzErr_+bytes/sizeof(Electron_dzErr_[0]));
        loaded_Electron_dzErr_ = true;
    }
    return v_Electron_dzErr_;
}
const vector<float> &Nano::Electron_eCorr() {
    if (!loaded_Electron_eCorr_) {
        if (!b_Electron_eCorr_) throw std::runtime_error("Electron_eCorr branch doesn't exist");
        int bytes = b_Electron_eCorr_->GetEntry(index);
        v_Electron_eCorr_ = vector<float>(Electron_eCorr_,Electron_eCorr_+bytes/sizeof(Electron_eCorr_[0]));
        loaded_Electron_eCorr_ = true;
    }
    return v_Electron_eCorr_;
}
const vector<float> &Nano::Electron_eInvMinusPInv() {
    if (!loaded_Electron_eInvMinusPInv_) {
        if (!b_Electron_eInvMinusPInv_) throw std::runtime_error("Electron_eInvMinusPInv branch doesn't exist");
        int bytes = b_Electron_eInvMinusPInv_->GetEntry(index);
        v_Electron_eInvMinusPInv_ = vector<float>(Electron_eInvMinusPInv_,Electron_eInvMinusPInv_+bytes/sizeof(Electron_eInvMinusPInv_[0]));
        loaded_Electron_eInvMinusPInv_ = true;
    }
    return v_Electron_eInvMinusPInv_;
}
const vector<float> &Nano::Electron_energyErr() {
    if (!loaded_Electron_energyErr_) {
        if (!b_Electron_energyErr_) throw std::runtime_error("Electron_energyErr branch doesn't exist");
        int bytes = b_Electron_energyErr_->GetEntry(index);
        v_Electron_energyErr_ = vector<float>(Electron_energyErr_,Electron_energyErr_+bytes/sizeof(Electron_energyErr_[0]));
        loaded_Electron_energyErr_ = true;
    }
    return v_Electron_energyErr_;
}
const vector<float> &Nano::Electron_eta() {
    if (!loaded_Electron_eta_) {
        if (!b_Electron_eta_) throw std::runtime_error("Electron_eta branch doesn't exist");
        int bytes = b_Electron_eta_->GetEntry(index);
        v_Electron_eta_ = vector<float>(Electron_eta_,Electron_eta_+bytes/sizeof(Electron_eta_[0]));
        loaded_Electron_eta_ = true;
    }
    return v_Electron_eta_;
}
const vector<UChar_t> &Nano::Electron_genPartFlav() {
    if (!loaded_Electron_genPartFlav_) {
        if (!b_Electron_genPartFlav_) throw std::runtime_error("Electron_genPartFlav branch doesn't exist");
        int bytes = b_Electron_genPartFlav_->GetEntry(index);
        v_Electron_genPartFlav_ = vector<UChar_t>(Electron_genPartFlav_,Electron_genPartFlav_+bytes/sizeof(Electron_genPartFlav_[0]));
        loaded_Electron_genPartFlav_ = true;
    }
    return v_Electron_genPartFlav_;
}
const vector<int> &Nano::Electron_genPartIdx() {
    if (!loaded_Electron_genPartIdx_) {
        if (!b_Electron_genPartIdx_) throw std::runtime_error("Electron_genPartIdx branch doesn't exist");
        int bytes = b_Electron_genPartIdx_->GetEntry(index);
        v_Electron_genPartIdx_ = vector<int>(Electron_genPartIdx_,Electron_genPartIdx_+bytes/sizeof(Electron_genPartIdx_[0]));
        loaded_Electron_genPartIdx_ = true;
    }
    return v_Electron_genPartIdx_;
}
const vector<float> &Nano::Electron_hoe() {
    if (!loaded_Electron_hoe_) {
        if (!b_Electron_hoe_) throw std::runtime_error("Electron_hoe branch doesn't exist");
        int bytes = b_Electron_hoe_->GetEntry(index);
        v_Electron_hoe_ = vector<float>(Electron_hoe_,Electron_hoe_+bytes/sizeof(Electron_hoe_[0]));
        loaded_Electron_hoe_ = true;
    }
    return v_Electron_hoe_;
}
const vector<float> &Nano::Electron_ip3d() {
    if (!loaded_Electron_ip3d_) {
        if (!b_Electron_ip3d_) throw std::runtime_error("Electron_ip3d branch doesn't exist");
        int bytes = b_Electron_ip3d_->GetEntry(index);
        v_Electron_ip3d_ = vector<float>(Electron_ip3d_,Electron_ip3d_+bytes/sizeof(Electron_ip3d_[0]));
        loaded_Electron_ip3d_ = true;
    }
    return v_Electron_ip3d_;
}
const vector<bool> &Nano::Electron_isPFcand() {
    if (!loaded_Electron_isPFcand_) {
        if (!b_Electron_isPFcand_) throw std::runtime_error("Electron_isPFcand branch doesn't exist");
        int bytes = b_Electron_isPFcand_->GetEntry(index);
        v_Electron_isPFcand_ = vector<bool>(Electron_isPFcand_,Electron_isPFcand_+bytes/sizeof(Electron_isPFcand_[0]));
        loaded_Electron_isPFcand_ = true;
    }
    return v_Electron_isPFcand_;
}
const vector<int> &Nano::Electron_jetIdx() {
    if (!loaded_Electron_jetIdx_) {
        if (!b_Electron_jetIdx_) throw std::runtime_error("Electron_jetIdx branch doesn't exist");
        int bytes = b_Electron_jetIdx_->GetEntry(index);
        v_Electron_jetIdx_ = vector<int>(Electron_jetIdx_,Electron_jetIdx_+bytes/sizeof(Electron_jetIdx_[0]));
        loaded_Electron_jetIdx_ = true;
    }
    return v_Electron_jetIdx_;
}
const vector<float> &Nano::Electron_jetPtRelv2() {
    if (!loaded_Electron_jetPtRelv2_) {
        if (!b_Electron_jetPtRelv2_) throw std::runtime_error("Electron_jetPtRelv2 branch doesn't exist");
        int bytes = b_Electron_jetPtRelv2_->GetEntry(index);
        v_Electron_jetPtRelv2_ = vector<float>(Electron_jetPtRelv2_,Electron_jetPtRelv2_+bytes/sizeof(Electron_jetPtRelv2_[0]));
        loaded_Electron_jetPtRelv2_ = true;
    }
    return v_Electron_jetPtRelv2_;
}
const vector<float> &Nano::Electron_jetRelIso() {
    if (!loaded_Electron_jetRelIso_) {
        if (!b_Electron_jetRelIso_) throw std::runtime_error("Electron_jetRelIso branch doesn't exist");
        int bytes = b_Electron_jetRelIso_->GetEntry(index);
        v_Electron_jetRelIso_ = vector<float>(Electron_jetRelIso_,Electron_jetRelIso_+bytes/sizeof(Electron_jetRelIso_[0]));
        loaded_Electron_jetRelIso_ = true;
    }
    return v_Electron_jetRelIso_;
}
const vector<UChar_t> &Nano::Electron_lostHits() {
    if (!loaded_Electron_lostHits_) {
        if (!b_Electron_lostHits_) throw std::runtime_error("Electron_lostHits branch doesn't exist");
        int bytes = b_Electron_lostHits_->GetEntry(index);
        v_Electron_lostHits_ = vector<UChar_t>(Electron_lostHits_,Electron_lostHits_+bytes/sizeof(Electron_lostHits_[0]));
        loaded_Electron_lostHits_ = true;
    }
    return v_Electron_lostHits_;
}
const vector<float> &Nano::Electron_mass() {
    if (!loaded_Electron_mass_) {
        if (!b_Electron_mass_) throw std::runtime_error("Electron_mass branch doesn't exist");
        int bytes = b_Electron_mass_->GetEntry(index);
        v_Electron_mass_ = vector<float>(Electron_mass_,Electron_mass_+bytes/sizeof(Electron_mass_[0]));
        loaded_Electron_mass_ = true;
    }
    return v_Electron_mass_;
}
const vector<float> &Nano::Electron_miniPFRelIso_all() {
    if (!loaded_Electron_miniPFRelIso_all_) {
        if (!b_Electron_miniPFRelIso_all_) throw std::runtime_error("Electron_miniPFRelIso_all branch doesn't exist");
        int bytes = b_Electron_miniPFRelIso_all_->GetEntry(index);
        v_Electron_miniPFRelIso_all_ = vector<float>(Electron_miniPFRelIso_all_,Electron_miniPFRelIso_all_+bytes/sizeof(Electron_miniPFRelIso_all_[0]));
        loaded_Electron_miniPFRelIso_all_ = true;
    }
    return v_Electron_miniPFRelIso_all_;
}
const vector<float> &Nano::Electron_miniPFRelIso_chg() {
    if (!loaded_Electron_miniPFRelIso_chg_) {
        if (!b_Electron_miniPFRelIso_chg_) throw std::runtime_error("Electron_miniPFRelIso_chg branch doesn't exist");
        int bytes = b_Electron_miniPFRelIso_chg_->GetEntry(index);
        v_Electron_miniPFRelIso_chg_ = vector<float>(Electron_miniPFRelIso_chg_,Electron_miniPFRelIso_chg_+bytes/sizeof(Electron_miniPFRelIso_chg_[0]));
        loaded_Electron_miniPFRelIso_chg_ = true;
    }
    return v_Electron_miniPFRelIso_chg_;
}
const vector<float> &Nano::Electron_mvaFall17V1Iso() {
    if (!loaded_Electron_mvaFall17V1Iso_) {
        if (!b_Electron_mvaFall17V1Iso_) throw std::runtime_error("Electron_mvaFall17V1Iso branch doesn't exist");
        int bytes = b_Electron_mvaFall17V1Iso_->GetEntry(index);
        v_Electron_mvaFall17V1Iso_ = vector<float>(Electron_mvaFall17V1Iso_,Electron_mvaFall17V1Iso_+bytes/sizeof(Electron_mvaFall17V1Iso_[0]));
        loaded_Electron_mvaFall17V1Iso_ = true;
    }
    return v_Electron_mvaFall17V1Iso_;
}
const vector<bool> &Nano::Electron_mvaFall17V1Iso_WP80() {
    if (!loaded_Electron_mvaFall17V1Iso_WP80_) {
        if (!b_Electron_mvaFall17V1Iso_WP80_) throw std::runtime_error("Electron_mvaFall17V1Iso_WP80 branch doesn't exist");
        int bytes = b_Electron_mvaFall17V1Iso_WP80_->GetEntry(index);
        v_Electron_mvaFall17V1Iso_WP80_ = vector<bool>(Electron_mvaFall17V1Iso_WP80_,Electron_mvaFall17V1Iso_WP80_+bytes/sizeof(Electron_mvaFall17V1Iso_WP80_[0]));
        loaded_Electron_mvaFall17V1Iso_WP80_ = true;
    }
    return v_Electron_mvaFall17V1Iso_WP80_;
}
const vector<bool> &Nano::Electron_mvaFall17V1Iso_WP90() {
    if (!loaded_Electron_mvaFall17V1Iso_WP90_) {
        if (!b_Electron_mvaFall17V1Iso_WP90_) throw std::runtime_error("Electron_mvaFall17V1Iso_WP90 branch doesn't exist");
        int bytes = b_Electron_mvaFall17V1Iso_WP90_->GetEntry(index);
        v_Electron_mvaFall17V1Iso_WP90_ = vector<bool>(Electron_mvaFall17V1Iso_WP90_,Electron_mvaFall17V1Iso_WP90_+bytes/sizeof(Electron_mvaFall17V1Iso_WP90_[0]));
        loaded_Electron_mvaFall17V1Iso_WP90_ = true;
    }
    return v_Electron_mvaFall17V1Iso_WP90_;
}
const vector<bool> &Nano::Electron_mvaFall17V1Iso_WPL() {
    if (!loaded_Electron_mvaFall17V1Iso_WPL_) {
        if (!b_Electron_mvaFall17V1Iso_WPL_) throw std::runtime_error("Electron_mvaFall17V1Iso_WPL branch doesn't exist");
        int bytes = b_Electron_mvaFall17V1Iso_WPL_->GetEntry(index);
        v_Electron_mvaFall17V1Iso_WPL_ = vector<bool>(Electron_mvaFall17V1Iso_WPL_,Electron_mvaFall17V1Iso_WPL_+bytes/sizeof(Electron_mvaFall17V1Iso_WPL_[0]));
        loaded_Electron_mvaFall17V1Iso_WPL_ = true;
    }
    return v_Electron_mvaFall17V1Iso_WPL_;
}
const vector<float> &Nano::Electron_mvaFall17V1noIso() {
    if (!loaded_Electron_mvaFall17V1noIso_) {
        if (!b_Electron_mvaFall17V1noIso_) throw std::runtime_error("Electron_mvaFall17V1noIso branch doesn't exist");
        int bytes = b_Electron_mvaFall17V1noIso_->GetEntry(index);
        v_Electron_mvaFall17V1noIso_ = vector<float>(Electron_mvaFall17V1noIso_,Electron_mvaFall17V1noIso_+bytes/sizeof(Electron_mvaFall17V1noIso_[0]));
        loaded_Electron_mvaFall17V1noIso_ = true;
    }
    return v_Electron_mvaFall17V1noIso_;
}
const vector<bool> &Nano::Electron_mvaFall17V1noIso_WP80() {
    if (!loaded_Electron_mvaFall17V1noIso_WP80_) {
        if (!b_Electron_mvaFall17V1noIso_WP80_) throw std::runtime_error("Electron_mvaFall17V1noIso_WP80 branch doesn't exist");
        int bytes = b_Electron_mvaFall17V1noIso_WP80_->GetEntry(index);
        v_Electron_mvaFall17V1noIso_WP80_ = vector<bool>(Electron_mvaFall17V1noIso_WP80_,Electron_mvaFall17V1noIso_WP80_+bytes/sizeof(Electron_mvaFall17V1noIso_WP80_[0]));
        loaded_Electron_mvaFall17V1noIso_WP80_ = true;
    }
    return v_Electron_mvaFall17V1noIso_WP80_;
}
const vector<bool> &Nano::Electron_mvaFall17V1noIso_WP90() {
    if (!loaded_Electron_mvaFall17V1noIso_WP90_) {
        if (!b_Electron_mvaFall17V1noIso_WP90_) throw std::runtime_error("Electron_mvaFall17V1noIso_WP90 branch doesn't exist");
        int bytes = b_Electron_mvaFall17V1noIso_WP90_->GetEntry(index);
        v_Electron_mvaFall17V1noIso_WP90_ = vector<bool>(Electron_mvaFall17V1noIso_WP90_,Electron_mvaFall17V1noIso_WP90_+bytes/sizeof(Electron_mvaFall17V1noIso_WP90_[0]));
        loaded_Electron_mvaFall17V1noIso_WP90_ = true;
    }
    return v_Electron_mvaFall17V1noIso_WP90_;
}
const vector<bool> &Nano::Electron_mvaFall17V1noIso_WPL() {
    if (!loaded_Electron_mvaFall17V1noIso_WPL_) {
        if (!b_Electron_mvaFall17V1noIso_WPL_) throw std::runtime_error("Electron_mvaFall17V1noIso_WPL branch doesn't exist");
        int bytes = b_Electron_mvaFall17V1noIso_WPL_->GetEntry(index);
        v_Electron_mvaFall17V1noIso_WPL_ = vector<bool>(Electron_mvaFall17V1noIso_WPL_,Electron_mvaFall17V1noIso_WPL_+bytes/sizeof(Electron_mvaFall17V1noIso_WPL_[0]));
        loaded_Electron_mvaFall17V1noIso_WPL_ = true;
    }
    return v_Electron_mvaFall17V1noIso_WPL_;
}
const vector<float> &Nano::Electron_mvaFall17V2Iso() {
    if (!loaded_Electron_mvaFall17V2Iso_) {
        if (!b_Electron_mvaFall17V2Iso_) throw std::runtime_error("Electron_mvaFall17V2Iso branch doesn't exist");
        int bytes = b_Electron_mvaFall17V2Iso_->GetEntry(index);
        v_Electron_mvaFall17V2Iso_ = vector<float>(Electron_mvaFall17V2Iso_,Electron_mvaFall17V2Iso_+bytes/sizeof(Electron_mvaFall17V2Iso_[0]));
        loaded_Electron_mvaFall17V2Iso_ = true;
    }
    return v_Electron_mvaFall17V2Iso_;
}
const vector<bool> &Nano::Electron_mvaFall17V2Iso_WP80() {
    if (!loaded_Electron_mvaFall17V2Iso_WP80_) {
        if (!b_Electron_mvaFall17V2Iso_WP80_) throw std::runtime_error("Electron_mvaFall17V2Iso_WP80 branch doesn't exist");
        int bytes = b_Electron_mvaFall17V2Iso_WP80_->GetEntry(index);
        v_Electron_mvaFall17V2Iso_WP80_ = vector<bool>(Electron_mvaFall17V2Iso_WP80_,Electron_mvaFall17V2Iso_WP80_+bytes/sizeof(Electron_mvaFall17V2Iso_WP80_[0]));
        loaded_Electron_mvaFall17V2Iso_WP80_ = true;
    }
    return v_Electron_mvaFall17V2Iso_WP80_;
}
const vector<bool> &Nano::Electron_mvaFall17V2Iso_WP90() {
    if (!loaded_Electron_mvaFall17V2Iso_WP90_) {
        if (!b_Electron_mvaFall17V2Iso_WP90_) throw std::runtime_error("Electron_mvaFall17V2Iso_WP90 branch doesn't exist");
        int bytes = b_Electron_mvaFall17V2Iso_WP90_->GetEntry(index);
        v_Electron_mvaFall17V2Iso_WP90_ = vector<bool>(Electron_mvaFall17V2Iso_WP90_,Electron_mvaFall17V2Iso_WP90_+bytes/sizeof(Electron_mvaFall17V2Iso_WP90_[0]));
        loaded_Electron_mvaFall17V2Iso_WP90_ = true;
    }
    return v_Electron_mvaFall17V2Iso_WP90_;
}
const vector<bool> &Nano::Electron_mvaFall17V2Iso_WPL() {
    if (!loaded_Electron_mvaFall17V2Iso_WPL_) {
        if (!b_Electron_mvaFall17V2Iso_WPL_) throw std::runtime_error("Electron_mvaFall17V2Iso_WPL branch doesn't exist");
        int bytes = b_Electron_mvaFall17V2Iso_WPL_->GetEntry(index);
        v_Electron_mvaFall17V2Iso_WPL_ = vector<bool>(Electron_mvaFall17V2Iso_WPL_,Electron_mvaFall17V2Iso_WPL_+bytes/sizeof(Electron_mvaFall17V2Iso_WPL_[0]));
        loaded_Electron_mvaFall17V2Iso_WPL_ = true;
    }
    return v_Electron_mvaFall17V2Iso_WPL_;
}
const vector<float> &Nano::Electron_mvaFall17V2noIso() {
    if (!loaded_Electron_mvaFall17V2noIso_) {
        if (!b_Electron_mvaFall17V2noIso_) throw std::runtime_error("Electron_mvaFall17V2noIso branch doesn't exist");
        int bytes = b_Electron_mvaFall17V2noIso_->GetEntry(index);
        v_Electron_mvaFall17V2noIso_ = vector<float>(Electron_mvaFall17V2noIso_,Electron_mvaFall17V2noIso_+bytes/sizeof(Electron_mvaFall17V2noIso_[0]));
        loaded_Electron_mvaFall17V2noIso_ = true;
    }
    return v_Electron_mvaFall17V2noIso_;
}
const vector<bool> &Nano::Electron_mvaFall17V2noIso_WP80() {
    if (!loaded_Electron_mvaFall17V2noIso_WP80_) {
        if (!b_Electron_mvaFall17V2noIso_WP80_) throw std::runtime_error("Electron_mvaFall17V2noIso_WP80 branch doesn't exist");
        int bytes = b_Electron_mvaFall17V2noIso_WP80_->GetEntry(index);
        v_Electron_mvaFall17V2noIso_WP80_ = vector<bool>(Electron_mvaFall17V2noIso_WP80_,Electron_mvaFall17V2noIso_WP80_+bytes/sizeof(Electron_mvaFall17V2noIso_WP80_[0]));
        loaded_Electron_mvaFall17V2noIso_WP80_ = true;
    }
    return v_Electron_mvaFall17V2noIso_WP80_;
}
const vector<bool> &Nano::Electron_mvaFall17V2noIso_WP90() {
    if (!loaded_Electron_mvaFall17V2noIso_WP90_) {
        if (!b_Electron_mvaFall17V2noIso_WP90_) throw std::runtime_error("Electron_mvaFall17V2noIso_WP90 branch doesn't exist");
        int bytes = b_Electron_mvaFall17V2noIso_WP90_->GetEntry(index);
        v_Electron_mvaFall17V2noIso_WP90_ = vector<bool>(Electron_mvaFall17V2noIso_WP90_,Electron_mvaFall17V2noIso_WP90_+bytes/sizeof(Electron_mvaFall17V2noIso_WP90_[0]));
        loaded_Electron_mvaFall17V2noIso_WP90_ = true;
    }
    return v_Electron_mvaFall17V2noIso_WP90_;
}
const vector<bool> &Nano::Electron_mvaFall17V2noIso_WPL() {
    if (!loaded_Electron_mvaFall17V2noIso_WPL_) {
        if (!b_Electron_mvaFall17V2noIso_WPL_) throw std::runtime_error("Electron_mvaFall17V2noIso_WPL branch doesn't exist");
        int bytes = b_Electron_mvaFall17V2noIso_WPL_->GetEntry(index);
        v_Electron_mvaFall17V2noIso_WPL_ = vector<bool>(Electron_mvaFall17V2noIso_WPL_,Electron_mvaFall17V2noIso_WPL_+bytes/sizeof(Electron_mvaFall17V2noIso_WPL_[0]));
        loaded_Electron_mvaFall17V2noIso_WPL_ = true;
    }
    return v_Electron_mvaFall17V2noIso_WPL_;
}
const vector<float> &Nano::Electron_mvaSpring16GP() {
    if (!loaded_Electron_mvaSpring16GP_) {
        if (!b_Electron_mvaSpring16GP_) throw std::runtime_error("Electron_mvaSpring16GP branch doesn't exist");
        int bytes = b_Electron_mvaSpring16GP_->GetEntry(index);
        v_Electron_mvaSpring16GP_ = vector<float>(Electron_mvaSpring16GP_,Electron_mvaSpring16GP_+bytes/sizeof(Electron_mvaSpring16GP_[0]));
        loaded_Electron_mvaSpring16GP_ = true;
    }
    return v_Electron_mvaSpring16GP_;
}
const vector<bool> &Nano::Electron_mvaSpring16GP_WP80() {
    if (!loaded_Electron_mvaSpring16GP_WP80_) {
        if (!b_Electron_mvaSpring16GP_WP80_) throw std::runtime_error("Electron_mvaSpring16GP_WP80 branch doesn't exist");
        int bytes = b_Electron_mvaSpring16GP_WP80_->GetEntry(index);
        v_Electron_mvaSpring16GP_WP80_ = vector<bool>(Electron_mvaSpring16GP_WP80_,Electron_mvaSpring16GP_WP80_+bytes/sizeof(Electron_mvaSpring16GP_WP80_[0]));
        loaded_Electron_mvaSpring16GP_WP80_ = true;
    }
    return v_Electron_mvaSpring16GP_WP80_;
}
const vector<bool> &Nano::Electron_mvaSpring16GP_WP90() {
    if (!loaded_Electron_mvaSpring16GP_WP90_) {
        if (!b_Electron_mvaSpring16GP_WP90_) throw std::runtime_error("Electron_mvaSpring16GP_WP90 branch doesn't exist");
        int bytes = b_Electron_mvaSpring16GP_WP90_->GetEntry(index);
        v_Electron_mvaSpring16GP_WP90_ = vector<bool>(Electron_mvaSpring16GP_WP90_,Electron_mvaSpring16GP_WP90_+bytes/sizeof(Electron_mvaSpring16GP_WP90_[0]));
        loaded_Electron_mvaSpring16GP_WP90_ = true;
    }
    return v_Electron_mvaSpring16GP_WP90_;
}
const vector<float> &Nano::Electron_mvaSpring16HZZ() {
    if (!loaded_Electron_mvaSpring16HZZ_) {
        if (!b_Electron_mvaSpring16HZZ_) throw std::runtime_error("Electron_mvaSpring16HZZ branch doesn't exist");
        int bytes = b_Electron_mvaSpring16HZZ_->GetEntry(index);
        v_Electron_mvaSpring16HZZ_ = vector<float>(Electron_mvaSpring16HZZ_,Electron_mvaSpring16HZZ_+bytes/sizeof(Electron_mvaSpring16HZZ_[0]));
        loaded_Electron_mvaSpring16HZZ_ = true;
    }
    return v_Electron_mvaSpring16HZZ_;
}
const vector<bool> &Nano::Electron_mvaSpring16HZZ_WPL() {
    if (!loaded_Electron_mvaSpring16HZZ_WPL_) {
        if (!b_Electron_mvaSpring16HZZ_WPL_) throw std::runtime_error("Electron_mvaSpring16HZZ_WPL branch doesn't exist");
        int bytes = b_Electron_mvaSpring16HZZ_WPL_->GetEntry(index);
        v_Electron_mvaSpring16HZZ_WPL_ = vector<bool>(Electron_mvaSpring16HZZ_WPL_,Electron_mvaSpring16HZZ_WPL_+bytes/sizeof(Electron_mvaSpring16HZZ_WPL_[0]));
        loaded_Electron_mvaSpring16HZZ_WPL_ = true;
    }
    return v_Electron_mvaSpring16HZZ_WPL_;
}
const vector<float> &Nano::Electron_mvaTTH() {
    if (!loaded_Electron_mvaTTH_) {
        if (!b_Electron_mvaTTH_) throw std::runtime_error("Electron_mvaTTH branch doesn't exist");
        int bytes = b_Electron_mvaTTH_->GetEntry(index);
        v_Electron_mvaTTH_ = vector<float>(Electron_mvaTTH_,Electron_mvaTTH_+bytes/sizeof(Electron_mvaTTH_[0]));
        loaded_Electron_mvaTTH_ = true;
    }
    return v_Electron_mvaTTH_;
}
const vector<LorentzVector> &Nano::Electron_p4() {
    if (!loaded_Electron_p4_) {
        v_Electron_p4_.clear();
        vector<float> pts = Nano::Electron_pt();
        vector<float> etas = Nano::Electron_eta();
        vector<float> phis = Nano::Electron_phi();
        vector<float> masses = Nano::Electron_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_Electron_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_Electron_p4_ = true;
    }
    return v_Electron_p4_;
}
const vector<int> &Nano::Electron_pdgId() {
    if (!loaded_Electron_pdgId_) {
        if (!b_Electron_pdgId_) throw std::runtime_error("Electron_pdgId branch doesn't exist");
        int bytes = b_Electron_pdgId_->GetEntry(index);
        v_Electron_pdgId_ = vector<int>(Electron_pdgId_,Electron_pdgId_+bytes/sizeof(Electron_pdgId_[0]));
        loaded_Electron_pdgId_ = true;
    }
    return v_Electron_pdgId_;
}
const vector<float> &Nano::Electron_pfRelIso03_all() {
    if (!loaded_Electron_pfRelIso03_all_) {
        if (!b_Electron_pfRelIso03_all_) throw std::runtime_error("Electron_pfRelIso03_all branch doesn't exist");
        int bytes = b_Electron_pfRelIso03_all_->GetEntry(index);
        v_Electron_pfRelIso03_all_ = vector<float>(Electron_pfRelIso03_all_,Electron_pfRelIso03_all_+bytes/sizeof(Electron_pfRelIso03_all_[0]));
        loaded_Electron_pfRelIso03_all_ = true;
    }
    return v_Electron_pfRelIso03_all_;
}
const vector<float> &Nano::Electron_pfRelIso03_chg() {
    if (!loaded_Electron_pfRelIso03_chg_) {
        if (!b_Electron_pfRelIso03_chg_) throw std::runtime_error("Electron_pfRelIso03_chg branch doesn't exist");
        int bytes = b_Electron_pfRelIso03_chg_->GetEntry(index);
        v_Electron_pfRelIso03_chg_ = vector<float>(Electron_pfRelIso03_chg_,Electron_pfRelIso03_chg_+bytes/sizeof(Electron_pfRelIso03_chg_[0]));
        loaded_Electron_pfRelIso03_chg_ = true;
    }
    return v_Electron_pfRelIso03_chg_;
}
const vector<float> &Nano::Electron_phi() {
    if (!loaded_Electron_phi_) {
        if (!b_Electron_phi_) throw std::runtime_error("Electron_phi branch doesn't exist");
        int bytes = b_Electron_phi_->GetEntry(index);
        v_Electron_phi_ = vector<float>(Electron_phi_,Electron_phi_+bytes/sizeof(Electron_phi_[0]));
        loaded_Electron_phi_ = true;
    }
    return v_Electron_phi_;
}
const vector<int> &Nano::Electron_photonIdx() {
    if (!loaded_Electron_photonIdx_) {
        if (!b_Electron_photonIdx_) throw std::runtime_error("Electron_photonIdx branch doesn't exist");
        int bytes = b_Electron_photonIdx_->GetEntry(index);
        v_Electron_photonIdx_ = vector<int>(Electron_photonIdx_,Electron_photonIdx_+bytes/sizeof(Electron_photonIdx_[0]));
        loaded_Electron_photonIdx_ = true;
    }
    return v_Electron_photonIdx_;
}
const vector<float> &Nano::Electron_pt() {
    if (!loaded_Electron_pt_) {
        if (!b_Electron_pt_) throw std::runtime_error("Electron_pt branch doesn't exist");
        int bytes = b_Electron_pt_->GetEntry(index);
        v_Electron_pt_ = vector<float>(Electron_pt_,Electron_pt_+bytes/sizeof(Electron_pt_[0]));
        loaded_Electron_pt_ = true;
    }
    return v_Electron_pt_;
}
const vector<float> &Nano::Electron_r9() {
    if (!loaded_Electron_r9_) {
        if (!b_Electron_r9_) throw std::runtime_error("Electron_r9 branch doesn't exist");
        int bytes = b_Electron_r9_->GetEntry(index);
        v_Electron_r9_ = vector<float>(Electron_r9_,Electron_r9_+bytes/sizeof(Electron_r9_[0]));
        loaded_Electron_r9_ = true;
    }
    return v_Electron_r9_;
}
const vector<float> &Nano::Electron_scEtOverPt() {
    if (!loaded_Electron_scEtOverPt_) {
        if (!b_Electron_scEtOverPt_) throw std::runtime_error("Electron_scEtOverPt branch doesn't exist");
        int bytes = b_Electron_scEtOverPt_->GetEntry(index);
        v_Electron_scEtOverPt_ = vector<float>(Electron_scEtOverPt_,Electron_scEtOverPt_+bytes/sizeof(Electron_scEtOverPt_[0]));
        loaded_Electron_scEtOverPt_ = true;
    }
    return v_Electron_scEtOverPt_;
}
const vector<UChar_t> &Nano::Electron_seedGain() {
    if (!loaded_Electron_seedGain_) {
        if (!b_Electron_seedGain_) throw std::runtime_error("Electron_seedGain branch doesn't exist");
        int bytes = b_Electron_seedGain_->GetEntry(index);
        v_Electron_seedGain_ = vector<UChar_t>(Electron_seedGain_,Electron_seedGain_+bytes/sizeof(Electron_seedGain_[0]));
        loaded_Electron_seedGain_ = true;
    }
    return v_Electron_seedGain_;
}
const vector<float> &Nano::Electron_sieie() {
    if (!loaded_Electron_sieie_) {
        if (!b_Electron_sieie_) throw std::runtime_error("Electron_sieie branch doesn't exist");
        int bytes = b_Electron_sieie_->GetEntry(index);
        v_Electron_sieie_ = vector<float>(Electron_sieie_,Electron_sieie_+bytes/sizeof(Electron_sieie_[0]));
        loaded_Electron_sieie_ = true;
    }
    return v_Electron_sieie_;
}
const vector<float> &Nano::Electron_sip3d() {
    if (!loaded_Electron_sip3d_) {
        if (!b_Electron_sip3d_) throw std::runtime_error("Electron_sip3d branch doesn't exist");
        int bytes = b_Electron_sip3d_->GetEntry(index);
        v_Electron_sip3d_ = vector<float>(Electron_sip3d_,Electron_sip3d_+bytes/sizeof(Electron_sip3d_[0]));
        loaded_Electron_sip3d_ = true;
    }
    return v_Electron_sip3d_;
}
const vector<int> &Nano::Electron_tightCharge() {
    if (!loaded_Electron_tightCharge_) {
        if (!b_Electron_tightCharge_) throw std::runtime_error("Electron_tightCharge branch doesn't exist");
        int bytes = b_Electron_tightCharge_->GetEntry(index);
        v_Electron_tightCharge_ = vector<int>(Electron_tightCharge_,Electron_tightCharge_+bytes/sizeof(Electron_tightCharge_[0]));
        loaded_Electron_tightCharge_ = true;
    }
    return v_Electron_tightCharge_;
}
const vector<int> &Nano::Electron_vidNestedWPBitmap() {
    if (!loaded_Electron_vidNestedWPBitmap_) {
        if (!b_Electron_vidNestedWPBitmap_) throw std::runtime_error("Electron_vidNestedWPBitmap branch doesn't exist");
        int bytes = b_Electron_vidNestedWPBitmap_->GetEntry(index);
        v_Electron_vidNestedWPBitmap_ = vector<int>(Electron_vidNestedWPBitmap_,Electron_vidNestedWPBitmap_+bytes/sizeof(Electron_vidNestedWPBitmap_[0]));
        loaded_Electron_vidNestedWPBitmap_ = true;
    }
    return v_Electron_vidNestedWPBitmap_;
}
const vector<int> &Nano::Electron_vidNestedWPBitmapHEEP() {
    if (!loaded_Electron_vidNestedWPBitmapHEEP_) {
        if (!b_Electron_vidNestedWPBitmapHEEP_) throw std::runtime_error("Electron_vidNestedWPBitmapHEEP branch doesn't exist");
        int bytes = b_Electron_vidNestedWPBitmapHEEP_->GetEntry(index);
        v_Electron_vidNestedWPBitmapHEEP_ = vector<int>(Electron_vidNestedWPBitmapHEEP_,Electron_vidNestedWPBitmapHEEP_+bytes/sizeof(Electron_vidNestedWPBitmapHEEP_[0]));
        loaded_Electron_vidNestedWPBitmapHEEP_ = true;
    }
    return v_Electron_vidNestedWPBitmapHEEP_;
}
const vector<int> &Nano::Electron_vidNestedWPBitmapSpring15() {
    if (!loaded_Electron_vidNestedWPBitmapSpring15_) {
        if (!b_Electron_vidNestedWPBitmapSpring15_) throw std::runtime_error("Electron_vidNestedWPBitmapSpring15 branch doesn't exist");
        int bytes = b_Electron_vidNestedWPBitmapSpring15_->GetEntry(index);
        v_Electron_vidNestedWPBitmapSpring15_ = vector<int>(Electron_vidNestedWPBitmapSpring15_,Electron_vidNestedWPBitmapSpring15_+bytes/sizeof(Electron_vidNestedWPBitmapSpring15_[0]));
        loaded_Electron_vidNestedWPBitmapSpring15_ = true;
    }
    return v_Electron_vidNestedWPBitmapSpring15_;
}
const vector<int> &Nano::Electron_vidNestedWPBitmapSum16() {
    if (!loaded_Electron_vidNestedWPBitmapSum16_) {
        if (!b_Electron_vidNestedWPBitmapSum16_) throw std::runtime_error("Electron_vidNestedWPBitmapSum16 branch doesn't exist");
        int bytes = b_Electron_vidNestedWPBitmapSum16_->GetEntry(index);
        v_Electron_vidNestedWPBitmapSum16_ = vector<int>(Electron_vidNestedWPBitmapSum16_,Electron_vidNestedWPBitmapSum16_+bytes/sizeof(Electron_vidNestedWPBitmapSum16_[0]));
        loaded_Electron_vidNestedWPBitmapSum16_ = true;
    }
    return v_Electron_vidNestedWPBitmapSum16_;
}
const bool &Nano::Flag_BadChargedCandidateFilter() {
    if (!loaded_Flag_BadChargedCandidateFilter_) {
        if (!b_Flag_BadChargedCandidateFilter_) throw std::runtime_error("Flag_BadChargedCandidateFilter branch doesn't exist");
        b_Flag_BadChargedCandidateFilter_->GetEntry(index);
        loaded_Flag_BadChargedCandidateFilter_ = true;
    }
    return Flag_BadChargedCandidateFilter_;
}
const bool &Nano::Flag_BadChargedCandidateSummer16Filter() {
    if (!loaded_Flag_BadChargedCandidateSummer16Filter_) {
        if (!b_Flag_BadChargedCandidateSummer16Filter_) throw std::runtime_error("Flag_BadChargedCandidateSummer16Filter branch doesn't exist");
        b_Flag_BadChargedCandidateSummer16Filter_->GetEntry(index);
        loaded_Flag_BadChargedCandidateSummer16Filter_ = true;
    }
    return Flag_BadChargedCandidateSummer16Filter_;
}
const bool &Nano::Flag_BadPFMuonFilter() {
    if (!loaded_Flag_BadPFMuonFilter_) {
        if (!b_Flag_BadPFMuonFilter_) throw std::runtime_error("Flag_BadPFMuonFilter branch doesn't exist");
        b_Flag_BadPFMuonFilter_->GetEntry(index);
        loaded_Flag_BadPFMuonFilter_ = true;
    }
    return Flag_BadPFMuonFilter_;
}
const bool &Nano::Flag_BadPFMuonSummer16Filter() {
    if (!loaded_Flag_BadPFMuonSummer16Filter_) {
        if (!b_Flag_BadPFMuonSummer16Filter_) throw std::runtime_error("Flag_BadPFMuonSummer16Filter branch doesn't exist");
        b_Flag_BadPFMuonSummer16Filter_->GetEntry(index);
        loaded_Flag_BadPFMuonSummer16Filter_ = true;
    }
    return Flag_BadPFMuonSummer16Filter_;
}
const bool &Nano::Flag_CSCTightHalo2015Filter() {
    if (!loaded_Flag_CSCTightHalo2015Filter_) {
        if (!b_Flag_CSCTightHalo2015Filter_) throw std::runtime_error("Flag_CSCTightHalo2015Filter branch doesn't exist");
        b_Flag_CSCTightHalo2015Filter_->GetEntry(index);
        loaded_Flag_CSCTightHalo2015Filter_ = true;
    }
    return Flag_CSCTightHalo2015Filter_;
}
const bool &Nano::Flag_CSCTightHaloFilter() {
    if (!loaded_Flag_CSCTightHaloFilter_) {
        if (!b_Flag_CSCTightHaloFilter_) throw std::runtime_error("Flag_CSCTightHaloFilter branch doesn't exist");
        b_Flag_CSCTightHaloFilter_->GetEntry(index);
        loaded_Flag_CSCTightHaloFilter_ = true;
    }
    return Flag_CSCTightHaloFilter_;
}
const bool &Nano::Flag_CSCTightHaloTrkMuUnvetoFilter() {
    if (!loaded_Flag_CSCTightHaloTrkMuUnvetoFilter_) {
        if (!b_Flag_CSCTightHaloTrkMuUnvetoFilter_) throw std::runtime_error("Flag_CSCTightHaloTrkMuUnvetoFilter branch doesn't exist");
        b_Flag_CSCTightHaloTrkMuUnvetoFilter_->GetEntry(index);
        loaded_Flag_CSCTightHaloTrkMuUnvetoFilter_ = true;
    }
    return Flag_CSCTightHaloTrkMuUnvetoFilter_;
}
const bool &Nano::Flag_EcalDeadCellBoundaryEnergyFilter() {
    if (!loaded_Flag_EcalDeadCellBoundaryEnergyFilter_) {
        if (!b_Flag_EcalDeadCellBoundaryEnergyFilter_) throw std::runtime_error("Flag_EcalDeadCellBoundaryEnergyFilter branch doesn't exist");
        b_Flag_EcalDeadCellBoundaryEnergyFilter_->GetEntry(index);
        loaded_Flag_EcalDeadCellBoundaryEnergyFilter_ = true;
    }
    return Flag_EcalDeadCellBoundaryEnergyFilter_;
}
const bool &Nano::Flag_EcalDeadCellTriggerPrimitiveFilter() {
    if (!loaded_Flag_EcalDeadCellTriggerPrimitiveFilter_) {
        if (!b_Flag_EcalDeadCellTriggerPrimitiveFilter_) throw std::runtime_error("Flag_EcalDeadCellTriggerPrimitiveFilter branch doesn't exist");
        b_Flag_EcalDeadCellTriggerPrimitiveFilter_->GetEntry(index);
        loaded_Flag_EcalDeadCellTriggerPrimitiveFilter_ = true;
    }
    return Flag_EcalDeadCellTriggerPrimitiveFilter_;
}
const bool &Nano::Flag_HBHENoiseFilter() {
    if (!loaded_Flag_HBHENoiseFilter_) {
        if (!b_Flag_HBHENoiseFilter_) throw std::runtime_error("Flag_HBHENoiseFilter branch doesn't exist");
        b_Flag_HBHENoiseFilter_->GetEntry(index);
        loaded_Flag_HBHENoiseFilter_ = true;
    }
    return Flag_HBHENoiseFilter_;
}
const bool &Nano::Flag_HBHENoiseIsoFilter() {
    if (!loaded_Flag_HBHENoiseIsoFilter_) {
        if (!b_Flag_HBHENoiseIsoFilter_) throw std::runtime_error("Flag_HBHENoiseIsoFilter branch doesn't exist");
        b_Flag_HBHENoiseIsoFilter_->GetEntry(index);
        loaded_Flag_HBHENoiseIsoFilter_ = true;
    }
    return Flag_HBHENoiseIsoFilter_;
}
const bool &Nano::Flag_HcalStripHaloFilter() {
    if (!loaded_Flag_HcalStripHaloFilter_) {
        if (!b_Flag_HcalStripHaloFilter_) throw std::runtime_error("Flag_HcalStripHaloFilter branch doesn't exist");
        b_Flag_HcalStripHaloFilter_->GetEntry(index);
        loaded_Flag_HcalStripHaloFilter_ = true;
    }
    return Flag_HcalStripHaloFilter_;
}
const bool &Nano::Flag_METFilters() {
    if (!loaded_Flag_METFilters_) {
        if (!b_Flag_METFilters_) throw std::runtime_error("Flag_METFilters branch doesn't exist");
        b_Flag_METFilters_->GetEntry(index);
        loaded_Flag_METFilters_ = true;
    }
    return Flag_METFilters_;
}
const bool &Nano::Flag_chargedHadronTrackResolutionFilter() {
    if (!loaded_Flag_chargedHadronTrackResolutionFilter_) {
        if (!b_Flag_chargedHadronTrackResolutionFilter_) throw std::runtime_error("Flag_chargedHadronTrackResolutionFilter branch doesn't exist");
        b_Flag_chargedHadronTrackResolutionFilter_->GetEntry(index);
        loaded_Flag_chargedHadronTrackResolutionFilter_ = true;
    }
    return Flag_chargedHadronTrackResolutionFilter_;
}
const bool &Nano::Flag_ecalBadCalibFilter() {
    if (!loaded_Flag_ecalBadCalibFilter_) {
        if (!b_Flag_ecalBadCalibFilter_) throw std::runtime_error("Flag_ecalBadCalibFilter branch doesn't exist");
        b_Flag_ecalBadCalibFilter_->GetEntry(index);
        loaded_Flag_ecalBadCalibFilter_ = true;
    }
    return Flag_ecalBadCalibFilter_;
}
const bool &Nano::Flag_ecalBadCalibFilterV2() {
    if (!loaded_Flag_ecalBadCalibFilterV2_) {
        if (!b_Flag_ecalBadCalibFilterV2_) throw std::runtime_error("Flag_ecalBadCalibFilterV2 branch doesn't exist");
        b_Flag_ecalBadCalibFilterV2_->GetEntry(index);
        loaded_Flag_ecalBadCalibFilterV2_ = true;
    }
    return Flag_ecalBadCalibFilterV2_;
}
const bool &Nano::Flag_ecalLaserCorrFilter() {
    if (!loaded_Flag_ecalLaserCorrFilter_) {
        if (!b_Flag_ecalLaserCorrFilter_) throw std::runtime_error("Flag_ecalLaserCorrFilter branch doesn't exist");
        b_Flag_ecalLaserCorrFilter_->GetEntry(index);
        loaded_Flag_ecalLaserCorrFilter_ = true;
    }
    return Flag_ecalLaserCorrFilter_;
}
const bool &Nano::Flag_eeBadScFilter() {
    if (!loaded_Flag_eeBadScFilter_) {
        if (!b_Flag_eeBadScFilter_) throw std::runtime_error("Flag_eeBadScFilter branch doesn't exist");
        b_Flag_eeBadScFilter_->GetEntry(index);
        loaded_Flag_eeBadScFilter_ = true;
    }
    return Flag_eeBadScFilter_;
}
const bool &Nano::Flag_globalSuperTightHalo2016Filter() {
    if (!loaded_Flag_globalSuperTightHalo2016Filter_) {
        if (!b_Flag_globalSuperTightHalo2016Filter_) throw std::runtime_error("Flag_globalSuperTightHalo2016Filter branch doesn't exist");
        b_Flag_globalSuperTightHalo2016Filter_->GetEntry(index);
        loaded_Flag_globalSuperTightHalo2016Filter_ = true;
    }
    return Flag_globalSuperTightHalo2016Filter_;
}
const bool &Nano::Flag_globalTightHalo2016Filter() {
    if (!loaded_Flag_globalTightHalo2016Filter_) {
        if (!b_Flag_globalTightHalo2016Filter_) throw std::runtime_error("Flag_globalTightHalo2016Filter branch doesn't exist");
        b_Flag_globalTightHalo2016Filter_->GetEntry(index);
        loaded_Flag_globalTightHalo2016Filter_ = true;
    }
    return Flag_globalTightHalo2016Filter_;
}
const bool &Nano::Flag_goodVertices() {
    if (!loaded_Flag_goodVertices_) {
        if (!b_Flag_goodVertices_) throw std::runtime_error("Flag_goodVertices branch doesn't exist");
        b_Flag_goodVertices_->GetEntry(index);
        loaded_Flag_goodVertices_ = true;
    }
    return Flag_goodVertices_;
}
const bool &Nano::Flag_hcalLaserEventFilter() {
    if (!loaded_Flag_hcalLaserEventFilter_) {
        if (!b_Flag_hcalLaserEventFilter_) throw std::runtime_error("Flag_hcalLaserEventFilter branch doesn't exist");
        b_Flag_hcalLaserEventFilter_->GetEntry(index);
        loaded_Flag_hcalLaserEventFilter_ = true;
    }
    return Flag_hcalLaserEventFilter_;
}
const bool &Nano::Flag_muonBadTrackFilter() {
    if (!loaded_Flag_muonBadTrackFilter_) {
        if (!b_Flag_muonBadTrackFilter_) throw std::runtime_error("Flag_muonBadTrackFilter branch doesn't exist");
        b_Flag_muonBadTrackFilter_->GetEntry(index);
        loaded_Flag_muonBadTrackFilter_ = true;
    }
    return Flag_muonBadTrackFilter_;
}
const bool &Nano::Flag_trkPOGFilters() {
    if (!loaded_Flag_trkPOGFilters_) {
        if (!b_Flag_trkPOGFilters_) throw std::runtime_error("Flag_trkPOGFilters branch doesn't exist");
        b_Flag_trkPOGFilters_->GetEntry(index);
        loaded_Flag_trkPOGFilters_ = true;
    }
    return Flag_trkPOGFilters_;
}
const bool &Nano::Flag_trkPOG_logErrorTooManyClusters() {
    if (!loaded_Flag_trkPOG_logErrorTooManyClusters_) {
        if (!b_Flag_trkPOG_logErrorTooManyClusters_) throw std::runtime_error("Flag_trkPOG_logErrorTooManyClusters branch doesn't exist");
        b_Flag_trkPOG_logErrorTooManyClusters_->GetEntry(index);
        loaded_Flag_trkPOG_logErrorTooManyClusters_ = true;
    }
    return Flag_trkPOG_logErrorTooManyClusters_;
}
const bool &Nano::Flag_trkPOG_manystripclus53X() {
    if (!loaded_Flag_trkPOG_manystripclus53X_) {
        if (!b_Flag_trkPOG_manystripclus53X_) throw std::runtime_error("Flag_trkPOG_manystripclus53X branch doesn't exist");
        b_Flag_trkPOG_manystripclus53X_->GetEntry(index);
        loaded_Flag_trkPOG_manystripclus53X_ = true;
    }
    return Flag_trkPOG_manystripclus53X_;
}
const bool &Nano::Flag_trkPOG_toomanystripclus53X() {
    if (!loaded_Flag_trkPOG_toomanystripclus53X_) {
        if (!b_Flag_trkPOG_toomanystripclus53X_) throw std::runtime_error("Flag_trkPOG_toomanystripclus53X branch doesn't exist");
        b_Flag_trkPOG_toomanystripclus53X_->GetEntry(index);
        loaded_Flag_trkPOG_toomanystripclus53X_ = true;
    }
    return Flag_trkPOG_toomanystripclus53X_;
}
const vector<float> &Nano::FsrPhoton_dROverEt2() {
    if (!loaded_FsrPhoton_dROverEt2_) {
        if (!b_FsrPhoton_dROverEt2_) throw std::runtime_error("FsrPhoton_dROverEt2 branch doesn't exist");
        int bytes = b_FsrPhoton_dROverEt2_->GetEntry(index);
        v_FsrPhoton_dROverEt2_ = vector<float>(FsrPhoton_dROverEt2_,FsrPhoton_dROverEt2_+bytes/sizeof(FsrPhoton_dROverEt2_[0]));
        loaded_FsrPhoton_dROverEt2_ = true;
    }
    return v_FsrPhoton_dROverEt2_;
}
const vector<float> &Nano::FsrPhoton_eta() {
    if (!loaded_FsrPhoton_eta_) {
        if (!b_FsrPhoton_eta_) throw std::runtime_error("FsrPhoton_eta branch doesn't exist");
        int bytes = b_FsrPhoton_eta_->GetEntry(index);
        v_FsrPhoton_eta_ = vector<float>(FsrPhoton_eta_,FsrPhoton_eta_+bytes/sizeof(FsrPhoton_eta_[0]));
        loaded_FsrPhoton_eta_ = true;
    }
    return v_FsrPhoton_eta_;
}
const vector<int> &Nano::FsrPhoton_muonIdx() {
    if (!loaded_FsrPhoton_muonIdx_) {
        if (!b_FsrPhoton_muonIdx_) throw std::runtime_error("FsrPhoton_muonIdx branch doesn't exist");
        int bytes = b_FsrPhoton_muonIdx_->GetEntry(index);
        v_FsrPhoton_muonIdx_ = vector<int>(FsrPhoton_muonIdx_,FsrPhoton_muonIdx_+bytes/sizeof(FsrPhoton_muonIdx_[0]));
        loaded_FsrPhoton_muonIdx_ = true;
    }
    return v_FsrPhoton_muonIdx_;
}
const vector<float> &Nano::FsrPhoton_phi() {
    if (!loaded_FsrPhoton_phi_) {
        if (!b_FsrPhoton_phi_) throw std::runtime_error("FsrPhoton_phi branch doesn't exist");
        int bytes = b_FsrPhoton_phi_->GetEntry(index);
        v_FsrPhoton_phi_ = vector<float>(FsrPhoton_phi_,FsrPhoton_phi_+bytes/sizeof(FsrPhoton_phi_[0]));
        loaded_FsrPhoton_phi_ = true;
    }
    return v_FsrPhoton_phi_;
}
const vector<float> &Nano::FsrPhoton_pt() {
    if (!loaded_FsrPhoton_pt_) {
        if (!b_FsrPhoton_pt_) throw std::runtime_error("FsrPhoton_pt branch doesn't exist");
        int bytes = b_FsrPhoton_pt_->GetEntry(index);
        v_FsrPhoton_pt_ = vector<float>(FsrPhoton_pt_,FsrPhoton_pt_+bytes/sizeof(FsrPhoton_pt_[0]));
        loaded_FsrPhoton_pt_ = true;
    }
    return v_FsrPhoton_pt_;
}
const vector<float> &Nano::FsrPhoton_relIso03() {
    if (!loaded_FsrPhoton_relIso03_) {
        if (!b_FsrPhoton_relIso03_) throw std::runtime_error("FsrPhoton_relIso03 branch doesn't exist");
        int bytes = b_FsrPhoton_relIso03_->GetEntry(index);
        v_FsrPhoton_relIso03_ = vector<float>(FsrPhoton_relIso03_,FsrPhoton_relIso03_+bytes/sizeof(FsrPhoton_relIso03_[0]));
        loaded_FsrPhoton_relIso03_ = true;
    }
    return v_FsrPhoton_relIso03_;
}
const vector<float> &Nano::GenDressedLepton_eta() {
    if (!loaded_GenDressedLepton_eta_) {
        if (!b_GenDressedLepton_eta_) throw std::runtime_error("GenDressedLepton_eta branch doesn't exist");
        int bytes = b_GenDressedLepton_eta_->GetEntry(index);
        v_GenDressedLepton_eta_ = vector<float>(GenDressedLepton_eta_,GenDressedLepton_eta_+bytes/sizeof(GenDressedLepton_eta_[0]));
        loaded_GenDressedLepton_eta_ = true;
    }
    return v_GenDressedLepton_eta_;
}
const vector<bool> &Nano::GenDressedLepton_hasTauAnc() {
    if (!loaded_GenDressedLepton_hasTauAnc_) {
        if (!b_GenDressedLepton_hasTauAnc_) throw std::runtime_error("GenDressedLepton_hasTauAnc branch doesn't exist");
        int bytes = b_GenDressedLepton_hasTauAnc_->GetEntry(index);
        v_GenDressedLepton_hasTauAnc_ = vector<bool>(GenDressedLepton_hasTauAnc_,GenDressedLepton_hasTauAnc_+bytes/sizeof(GenDressedLepton_hasTauAnc_[0]));
        loaded_GenDressedLepton_hasTauAnc_ = true;
    }
    return v_GenDressedLepton_hasTauAnc_;
}
const vector<float> &Nano::GenDressedLepton_mass() {
    if (!loaded_GenDressedLepton_mass_) {
        if (!b_GenDressedLepton_mass_) throw std::runtime_error("GenDressedLepton_mass branch doesn't exist");
        int bytes = b_GenDressedLepton_mass_->GetEntry(index);
        v_GenDressedLepton_mass_ = vector<float>(GenDressedLepton_mass_,GenDressedLepton_mass_+bytes/sizeof(GenDressedLepton_mass_[0]));
        loaded_GenDressedLepton_mass_ = true;
    }
    return v_GenDressedLepton_mass_;
}
const vector<LorentzVector> &Nano::GenDressedLepton_p4() {
    if (!loaded_GenDressedLepton_p4_) {
        v_GenDressedLepton_p4_.clear();
        vector<float> pts = Nano::GenDressedLepton_pt();
        vector<float> etas = Nano::GenDressedLepton_eta();
        vector<float> phis = Nano::GenDressedLepton_phi();
        vector<float> masses = Nano::GenDressedLepton_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_GenDressedLepton_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_GenDressedLepton_p4_ = true;
    }
    return v_GenDressedLepton_p4_;
}
const vector<int> &Nano::GenDressedLepton_pdgId() {
    if (!loaded_GenDressedLepton_pdgId_) {
        if (!b_GenDressedLepton_pdgId_) throw std::runtime_error("GenDressedLepton_pdgId branch doesn't exist");
        int bytes = b_GenDressedLepton_pdgId_->GetEntry(index);
        v_GenDressedLepton_pdgId_ = vector<int>(GenDressedLepton_pdgId_,GenDressedLepton_pdgId_+bytes/sizeof(GenDressedLepton_pdgId_[0]));
        loaded_GenDressedLepton_pdgId_ = true;
    }
    return v_GenDressedLepton_pdgId_;
}
const vector<float> &Nano::GenDressedLepton_phi() {
    if (!loaded_GenDressedLepton_phi_) {
        if (!b_GenDressedLepton_phi_) throw std::runtime_error("GenDressedLepton_phi branch doesn't exist");
        int bytes = b_GenDressedLepton_phi_->GetEntry(index);
        v_GenDressedLepton_phi_ = vector<float>(GenDressedLepton_phi_,GenDressedLepton_phi_+bytes/sizeof(GenDressedLepton_phi_[0]));
        loaded_GenDressedLepton_phi_ = true;
    }
    return v_GenDressedLepton_phi_;
}
const vector<float> &Nano::GenDressedLepton_pt() {
    if (!loaded_GenDressedLepton_pt_) {
        if (!b_GenDressedLepton_pt_) throw std::runtime_error("GenDressedLepton_pt branch doesn't exist");
        int bytes = b_GenDressedLepton_pt_->GetEntry(index);
        v_GenDressedLepton_pt_ = vector<float>(GenDressedLepton_pt_,GenDressedLepton_pt_+bytes/sizeof(GenDressedLepton_pt_[0]));
        loaded_GenDressedLepton_pt_ = true;
    }
    return v_GenDressedLepton_pt_;
}
const vector<float> &Nano::GenIsolatedPhoton_eta() {
    if (!loaded_GenIsolatedPhoton_eta_) {
        if (!b_GenIsolatedPhoton_eta_) throw std::runtime_error("GenIsolatedPhoton_eta branch doesn't exist");
        int bytes = b_GenIsolatedPhoton_eta_->GetEntry(index);
        v_GenIsolatedPhoton_eta_ = vector<float>(GenIsolatedPhoton_eta_,GenIsolatedPhoton_eta_+bytes/sizeof(GenIsolatedPhoton_eta_[0]));
        loaded_GenIsolatedPhoton_eta_ = true;
    }
    return v_GenIsolatedPhoton_eta_;
}
const vector<float> &Nano::GenIsolatedPhoton_mass() {
    if (!loaded_GenIsolatedPhoton_mass_) {
        if (!b_GenIsolatedPhoton_mass_) throw std::runtime_error("GenIsolatedPhoton_mass branch doesn't exist");
        int bytes = b_GenIsolatedPhoton_mass_->GetEntry(index);
        v_GenIsolatedPhoton_mass_ = vector<float>(GenIsolatedPhoton_mass_,GenIsolatedPhoton_mass_+bytes/sizeof(GenIsolatedPhoton_mass_[0]));
        loaded_GenIsolatedPhoton_mass_ = true;
    }
    return v_GenIsolatedPhoton_mass_;
}
const vector<LorentzVector> &Nano::GenIsolatedPhoton_p4() {
    if (!loaded_GenIsolatedPhoton_p4_) {
        v_GenIsolatedPhoton_p4_.clear();
        vector<float> pts = Nano::GenIsolatedPhoton_pt();
        vector<float> etas = Nano::GenIsolatedPhoton_eta();
        vector<float> phis = Nano::GenIsolatedPhoton_phi();
        vector<float> masses = Nano::GenIsolatedPhoton_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_GenIsolatedPhoton_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_GenIsolatedPhoton_p4_ = true;
    }
    return v_GenIsolatedPhoton_p4_;
}
const vector<float> &Nano::GenIsolatedPhoton_phi() {
    if (!loaded_GenIsolatedPhoton_phi_) {
        if (!b_GenIsolatedPhoton_phi_) throw std::runtime_error("GenIsolatedPhoton_phi branch doesn't exist");
        int bytes = b_GenIsolatedPhoton_phi_->GetEntry(index);
        v_GenIsolatedPhoton_phi_ = vector<float>(GenIsolatedPhoton_phi_,GenIsolatedPhoton_phi_+bytes/sizeof(GenIsolatedPhoton_phi_[0]));
        loaded_GenIsolatedPhoton_phi_ = true;
    }
    return v_GenIsolatedPhoton_phi_;
}
const vector<float> &Nano::GenIsolatedPhoton_pt() {
    if (!loaded_GenIsolatedPhoton_pt_) {
        if (!b_GenIsolatedPhoton_pt_) throw std::runtime_error("GenIsolatedPhoton_pt branch doesn't exist");
        int bytes = b_GenIsolatedPhoton_pt_->GetEntry(index);
        v_GenIsolatedPhoton_pt_ = vector<float>(GenIsolatedPhoton_pt_,GenIsolatedPhoton_pt_+bytes/sizeof(GenIsolatedPhoton_pt_[0]));
        loaded_GenIsolatedPhoton_pt_ = true;
    }
    return v_GenIsolatedPhoton_pt_;
}
const vector<float> &Nano::GenJetAK8_eta() {
    if (!loaded_GenJetAK8_eta_) {
        if (!b_GenJetAK8_eta_) throw std::runtime_error("GenJetAK8_eta branch doesn't exist");
        int bytes = b_GenJetAK8_eta_->GetEntry(index);
        v_GenJetAK8_eta_ = vector<float>(GenJetAK8_eta_,GenJetAK8_eta_+bytes/sizeof(GenJetAK8_eta_[0]));
        loaded_GenJetAK8_eta_ = true;
    }
    return v_GenJetAK8_eta_;
}
const vector<UChar_t> &Nano::GenJetAK8_hadronFlavour() {
    if (!loaded_GenJetAK8_hadronFlavour_) {
        if (!b_GenJetAK8_hadronFlavour_) throw std::runtime_error("GenJetAK8_hadronFlavour branch doesn't exist");
        int bytes = b_GenJetAK8_hadronFlavour_->GetEntry(index);
        v_GenJetAK8_hadronFlavour_ = vector<UChar_t>(GenJetAK8_hadronFlavour_,GenJetAK8_hadronFlavour_+bytes/sizeof(GenJetAK8_hadronFlavour_[0]));
        loaded_GenJetAK8_hadronFlavour_ = true;
    }
    return v_GenJetAK8_hadronFlavour_;
}
const vector<float> &Nano::GenJetAK8_mass() {
    if (!loaded_GenJetAK8_mass_) {
        if (!b_GenJetAK8_mass_) throw std::runtime_error("GenJetAK8_mass branch doesn't exist");
        int bytes = b_GenJetAK8_mass_->GetEntry(index);
        v_GenJetAK8_mass_ = vector<float>(GenJetAK8_mass_,GenJetAK8_mass_+bytes/sizeof(GenJetAK8_mass_[0]));
        loaded_GenJetAK8_mass_ = true;
    }
    return v_GenJetAK8_mass_;
}
const vector<LorentzVector> &Nano::GenJetAK8_p4() {
    if (!loaded_GenJetAK8_p4_) {
        v_GenJetAK8_p4_.clear();
        vector<float> pts = Nano::GenJetAK8_pt();
        vector<float> etas = Nano::GenJetAK8_eta();
        vector<float> phis = Nano::GenJetAK8_phi();
        vector<float> masses = Nano::GenJetAK8_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_GenJetAK8_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_GenJetAK8_p4_ = true;
    }
    return v_GenJetAK8_p4_;
}
const vector<int> &Nano::GenJetAK8_partonFlavour() {
    if (!loaded_GenJetAK8_partonFlavour_) {
        if (!b_GenJetAK8_partonFlavour_) throw std::runtime_error("GenJetAK8_partonFlavour branch doesn't exist");
        int bytes = b_GenJetAK8_partonFlavour_->GetEntry(index);
        v_GenJetAK8_partonFlavour_ = vector<int>(GenJetAK8_partonFlavour_,GenJetAK8_partonFlavour_+bytes/sizeof(GenJetAK8_partonFlavour_[0]));
        loaded_GenJetAK8_partonFlavour_ = true;
    }
    return v_GenJetAK8_partonFlavour_;
}
const vector<float> &Nano::GenJetAK8_phi() {
    if (!loaded_GenJetAK8_phi_) {
        if (!b_GenJetAK8_phi_) throw std::runtime_error("GenJetAK8_phi branch doesn't exist");
        int bytes = b_GenJetAK8_phi_->GetEntry(index);
        v_GenJetAK8_phi_ = vector<float>(GenJetAK8_phi_,GenJetAK8_phi_+bytes/sizeof(GenJetAK8_phi_[0]));
        loaded_GenJetAK8_phi_ = true;
    }
    return v_GenJetAK8_phi_;
}
const vector<float> &Nano::GenJetAK8_pt() {
    if (!loaded_GenJetAK8_pt_) {
        if (!b_GenJetAK8_pt_) throw std::runtime_error("GenJetAK8_pt branch doesn't exist");
        int bytes = b_GenJetAK8_pt_->GetEntry(index);
        v_GenJetAK8_pt_ = vector<float>(GenJetAK8_pt_,GenJetAK8_pt_+bytes/sizeof(GenJetAK8_pt_[0]));
        loaded_GenJetAK8_pt_ = true;
    }
    return v_GenJetAK8_pt_;
}
const vector<float> &Nano::GenJet_eta() {
    if (!loaded_GenJet_eta_) {
        if (!b_GenJet_eta_) throw std::runtime_error("GenJet_eta branch doesn't exist");
        int bytes = b_GenJet_eta_->GetEntry(index);
        v_GenJet_eta_ = vector<float>(GenJet_eta_,GenJet_eta_+bytes/sizeof(GenJet_eta_[0]));
        loaded_GenJet_eta_ = true;
    }
    return v_GenJet_eta_;
}
const vector<UChar_t> &Nano::GenJet_hadronFlavour() {
    if (!loaded_GenJet_hadronFlavour_) {
        if (!b_GenJet_hadronFlavour_) throw std::runtime_error("GenJet_hadronFlavour branch doesn't exist");
        int bytes = b_GenJet_hadronFlavour_->GetEntry(index);
        v_GenJet_hadronFlavour_ = vector<UChar_t>(GenJet_hadronFlavour_,GenJet_hadronFlavour_+bytes/sizeof(GenJet_hadronFlavour_[0]));
        loaded_GenJet_hadronFlavour_ = true;
    }
    return v_GenJet_hadronFlavour_;
}
const vector<float> &Nano::GenJet_mass() {
    if (!loaded_GenJet_mass_) {
        if (!b_GenJet_mass_) throw std::runtime_error("GenJet_mass branch doesn't exist");
        int bytes = b_GenJet_mass_->GetEntry(index);
        v_GenJet_mass_ = vector<float>(GenJet_mass_,GenJet_mass_+bytes/sizeof(GenJet_mass_[0]));
        loaded_GenJet_mass_ = true;
    }
    return v_GenJet_mass_;
}
const vector<LorentzVector> &Nano::GenJet_p4() {
    if (!loaded_GenJet_p4_) {
        v_GenJet_p4_.clear();
        vector<float> pts = Nano::GenJet_pt();
        vector<float> etas = Nano::GenJet_eta();
        vector<float> phis = Nano::GenJet_phi();
        vector<float> masses = Nano::GenJet_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_GenJet_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_GenJet_p4_ = true;
    }
    return v_GenJet_p4_;
}
const vector<int> &Nano::GenJet_partonFlavour() {
    if (!loaded_GenJet_partonFlavour_) {
        if (!b_GenJet_partonFlavour_) throw std::runtime_error("GenJet_partonFlavour branch doesn't exist");
        int bytes = b_GenJet_partonFlavour_->GetEntry(index);
        v_GenJet_partonFlavour_ = vector<int>(GenJet_partonFlavour_,GenJet_partonFlavour_+bytes/sizeof(GenJet_partonFlavour_[0]));
        loaded_GenJet_partonFlavour_ = true;
    }
    return v_GenJet_partonFlavour_;
}
const vector<float> &Nano::GenJet_phi() {
    if (!loaded_GenJet_phi_) {
        if (!b_GenJet_phi_) throw std::runtime_error("GenJet_phi branch doesn't exist");
        int bytes = b_GenJet_phi_->GetEntry(index);
        v_GenJet_phi_ = vector<float>(GenJet_phi_,GenJet_phi_+bytes/sizeof(GenJet_phi_[0]));
        loaded_GenJet_phi_ = true;
    }
    return v_GenJet_phi_;
}
const vector<float> &Nano::GenJet_pt() {
    if (!loaded_GenJet_pt_) {
        if (!b_GenJet_pt_) throw std::runtime_error("GenJet_pt branch doesn't exist");
        int bytes = b_GenJet_pt_->GetEntry(index);
        v_GenJet_pt_ = vector<float>(GenJet_pt_,GenJet_pt_+bytes/sizeof(GenJet_pt_[0]));
        loaded_GenJet_pt_ = true;
    }
    return v_GenJet_pt_;
}
const float &Nano::GenMET_phi() {
    if (!loaded_GenMET_phi_) {
        if (!b_GenMET_phi_) throw std::runtime_error("GenMET_phi branch doesn't exist");
        b_GenMET_phi_->GetEntry(index);
        loaded_GenMET_phi_ = true;
    }
    return GenMET_phi_;
}
const float &Nano::GenMET_pt() {
    if (!loaded_GenMET_pt_) {
        if (!b_GenMET_pt_) throw std::runtime_error("GenMET_pt branch doesn't exist");
        b_GenMET_pt_->GetEntry(index);
        loaded_GenMET_pt_ = true;
    }
    return GenMET_pt_;
}
const vector<float> &Nano::GenPart_eta() {
    if (!loaded_GenPart_eta_) {
        if (!b_GenPart_eta_) throw std::runtime_error("GenPart_eta branch doesn't exist");
        int bytes = b_GenPart_eta_->GetEntry(index);
        v_GenPart_eta_ = vector<float>(GenPart_eta_,GenPart_eta_+bytes/sizeof(GenPart_eta_[0]));
        loaded_GenPart_eta_ = true;
    }
    return v_GenPart_eta_;
}
const vector<int> &Nano::GenPart_genPartIdxMother() {
    if (!loaded_GenPart_genPartIdxMother_) {
        if (!b_GenPart_genPartIdxMother_) throw std::runtime_error("GenPart_genPartIdxMother branch doesn't exist");
        int bytes = b_GenPart_genPartIdxMother_->GetEntry(index);
        v_GenPart_genPartIdxMother_ = vector<int>(GenPart_genPartIdxMother_,GenPart_genPartIdxMother_+bytes/sizeof(GenPart_genPartIdxMother_[0]));
        loaded_GenPart_genPartIdxMother_ = true;
    }
    return v_GenPart_genPartIdxMother_;
}
const vector<float> &Nano::GenPart_mass() {
    if (!loaded_GenPart_mass_) {
        if (!b_GenPart_mass_) throw std::runtime_error("GenPart_mass branch doesn't exist");
        int bytes = b_GenPart_mass_->GetEntry(index);
        v_GenPart_mass_ = vector<float>(GenPart_mass_,GenPart_mass_+bytes/sizeof(GenPart_mass_[0]));
        loaded_GenPart_mass_ = true;
    }
    return v_GenPart_mass_;
}
const vector<LorentzVector> &Nano::GenPart_p4() {
    if (!loaded_GenPart_p4_) {
        v_GenPart_p4_.clear();
        vector<float> pts = Nano::GenPart_pt();
        vector<float> etas = Nano::GenPart_eta();
        vector<float> phis = Nano::GenPart_phi();
        vector<float> masses = Nano::GenPart_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_GenPart_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_GenPart_p4_ = true;
    }
    return v_GenPart_p4_;
}
const vector<int> &Nano::GenPart_pdgId() {
    if (!loaded_GenPart_pdgId_) {
        if (!b_GenPart_pdgId_) throw std::runtime_error("GenPart_pdgId branch doesn't exist");
        int bytes = b_GenPart_pdgId_->GetEntry(index);
        v_GenPart_pdgId_ = vector<int>(GenPart_pdgId_,GenPart_pdgId_+bytes/sizeof(GenPart_pdgId_[0]));
        loaded_GenPart_pdgId_ = true;
    }
    return v_GenPart_pdgId_;
}
const vector<float> &Nano::GenPart_phi() {
    if (!loaded_GenPart_phi_) {
        if (!b_GenPart_phi_) throw std::runtime_error("GenPart_phi branch doesn't exist");
        int bytes = b_GenPart_phi_->GetEntry(index);
        v_GenPart_phi_ = vector<float>(GenPart_phi_,GenPart_phi_+bytes/sizeof(GenPart_phi_[0]));
        loaded_GenPart_phi_ = true;
    }
    return v_GenPart_phi_;
}
const vector<float> &Nano::GenPart_pt() {
    if (!loaded_GenPart_pt_) {
        if (!b_GenPart_pt_) throw std::runtime_error("GenPart_pt branch doesn't exist");
        int bytes = b_GenPart_pt_->GetEntry(index);
        v_GenPart_pt_ = vector<float>(GenPart_pt_,GenPart_pt_+bytes/sizeof(GenPart_pt_[0]));
        loaded_GenPart_pt_ = true;
    }
    return v_GenPart_pt_;
}
const vector<int> &Nano::GenPart_status() {
    if (!loaded_GenPart_status_) {
        if (!b_GenPart_status_) throw std::runtime_error("GenPart_status branch doesn't exist");
        int bytes = b_GenPart_status_->GetEntry(index);
        v_GenPart_status_ = vector<int>(GenPart_status_,GenPart_status_+bytes/sizeof(GenPart_status_[0]));
        loaded_GenPart_status_ = true;
    }
    return v_GenPart_status_;
}
const vector<int> &Nano::GenPart_statusFlags() {
    if (!loaded_GenPart_statusFlags_) {
        if (!b_GenPart_statusFlags_) throw std::runtime_error("GenPart_statusFlags branch doesn't exist");
        int bytes = b_GenPart_statusFlags_->GetEntry(index);
        v_GenPart_statusFlags_ = vector<int>(GenPart_statusFlags_,GenPart_statusFlags_+bytes/sizeof(GenPart_statusFlags_[0]));
        loaded_GenPart_statusFlags_ = true;
    }
    return v_GenPart_statusFlags_;
}
const vector<int> &Nano::GenVisTau_charge() {
    if (!loaded_GenVisTau_charge_) {
        if (!b_GenVisTau_charge_) throw std::runtime_error("GenVisTau_charge branch doesn't exist");
        int bytes = b_GenVisTau_charge_->GetEntry(index);
        v_GenVisTau_charge_ = vector<int>(GenVisTau_charge_,GenVisTau_charge_+bytes/sizeof(GenVisTau_charge_[0]));
        loaded_GenVisTau_charge_ = true;
    }
    return v_GenVisTau_charge_;
}
const vector<float> &Nano::GenVisTau_eta() {
    if (!loaded_GenVisTau_eta_) {
        if (!b_GenVisTau_eta_) throw std::runtime_error("GenVisTau_eta branch doesn't exist");
        int bytes = b_GenVisTau_eta_->GetEntry(index);
        v_GenVisTau_eta_ = vector<float>(GenVisTau_eta_,GenVisTau_eta_+bytes/sizeof(GenVisTau_eta_[0]));
        loaded_GenVisTau_eta_ = true;
    }
    return v_GenVisTau_eta_;
}
const vector<int> &Nano::GenVisTau_genPartIdxMother() {
    if (!loaded_GenVisTau_genPartIdxMother_) {
        if (!b_GenVisTau_genPartIdxMother_) throw std::runtime_error("GenVisTau_genPartIdxMother branch doesn't exist");
        int bytes = b_GenVisTau_genPartIdxMother_->GetEntry(index);
        v_GenVisTau_genPartIdxMother_ = vector<int>(GenVisTau_genPartIdxMother_,GenVisTau_genPartIdxMother_+bytes/sizeof(GenVisTau_genPartIdxMother_[0]));
        loaded_GenVisTau_genPartIdxMother_ = true;
    }
    return v_GenVisTau_genPartIdxMother_;
}
const vector<float> &Nano::GenVisTau_mass() {
    if (!loaded_GenVisTau_mass_) {
        if (!b_GenVisTau_mass_) throw std::runtime_error("GenVisTau_mass branch doesn't exist");
        int bytes = b_GenVisTau_mass_->GetEntry(index);
        v_GenVisTau_mass_ = vector<float>(GenVisTau_mass_,GenVisTau_mass_+bytes/sizeof(GenVisTau_mass_[0]));
        loaded_GenVisTau_mass_ = true;
    }
    return v_GenVisTau_mass_;
}
const vector<LorentzVector> &Nano::GenVisTau_p4() {
    if (!loaded_GenVisTau_p4_) {
        v_GenVisTau_p4_.clear();
        vector<float> pts = Nano::GenVisTau_pt();
        vector<float> etas = Nano::GenVisTau_eta();
        vector<float> phis = Nano::GenVisTau_phi();
        vector<float> masses = Nano::GenVisTau_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_GenVisTau_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_GenVisTau_p4_ = true;
    }
    return v_GenVisTau_p4_;
}
const vector<float> &Nano::GenVisTau_phi() {
    if (!loaded_GenVisTau_phi_) {
        if (!b_GenVisTau_phi_) throw std::runtime_error("GenVisTau_phi branch doesn't exist");
        int bytes = b_GenVisTau_phi_->GetEntry(index);
        v_GenVisTau_phi_ = vector<float>(GenVisTau_phi_,GenVisTau_phi_+bytes/sizeof(GenVisTau_phi_[0]));
        loaded_GenVisTau_phi_ = true;
    }
    return v_GenVisTau_phi_;
}
const vector<float> &Nano::GenVisTau_pt() {
    if (!loaded_GenVisTau_pt_) {
        if (!b_GenVisTau_pt_) throw std::runtime_error("GenVisTau_pt branch doesn't exist");
        int bytes = b_GenVisTau_pt_->GetEntry(index);
        v_GenVisTau_pt_ = vector<float>(GenVisTau_pt_,GenVisTau_pt_+bytes/sizeof(GenVisTau_pt_[0]));
        loaded_GenVisTau_pt_ = true;
    }
    return v_GenVisTau_pt_;
}
const vector<int> &Nano::GenVisTau_status() {
    if (!loaded_GenVisTau_status_) {
        if (!b_GenVisTau_status_) throw std::runtime_error("GenVisTau_status branch doesn't exist");
        int bytes = b_GenVisTau_status_->GetEntry(index);
        v_GenVisTau_status_ = vector<int>(GenVisTau_status_,GenVisTau_status_+bytes/sizeof(GenVisTau_status_[0]));
        loaded_GenVisTau_status_ = true;
    }
    return v_GenVisTau_status_;
}
const float &Nano::Generator_binvar() {
    if (!loaded_Generator_binvar_) {
        if (!b_Generator_binvar_) throw std::runtime_error("Generator_binvar branch doesn't exist");
        b_Generator_binvar_->GetEntry(index);
        loaded_Generator_binvar_ = true;
    }
    return Generator_binvar_;
}
const int &Nano::Generator_id1() {
    if (!loaded_Generator_id1_) {
        if (!b_Generator_id1_) throw std::runtime_error("Generator_id1 branch doesn't exist");
        b_Generator_id1_->GetEntry(index);
        loaded_Generator_id1_ = true;
    }
    return Generator_id1_;
}
const int &Nano::Generator_id2() {
    if (!loaded_Generator_id2_) {
        if (!b_Generator_id2_) throw std::runtime_error("Generator_id2 branch doesn't exist");
        b_Generator_id2_->GetEntry(index);
        loaded_Generator_id2_ = true;
    }
    return Generator_id2_;
}
const float &Nano::Generator_scalePDF() {
    if (!loaded_Generator_scalePDF_) {
        if (!b_Generator_scalePDF_) throw std::runtime_error("Generator_scalePDF branch doesn't exist");
        b_Generator_scalePDF_->GetEntry(index);
        loaded_Generator_scalePDF_ = true;
    }
    return Generator_scalePDF_;
}
const float &Nano::Generator_weight() {
    if (!loaded_Generator_weight_) {
        if (!b_Generator_weight_) throw std::runtime_error("Generator_weight branch doesn't exist");
        b_Generator_weight_->GetEntry(index);
        loaded_Generator_weight_ = true;
    }
    return Generator_weight_;
}
const float &Nano::Generator_x1() {
    if (!loaded_Generator_x1_) {
        if (!b_Generator_x1_) throw std::runtime_error("Generator_x1 branch doesn't exist");
        b_Generator_x1_->GetEntry(index);
        loaded_Generator_x1_ = true;
    }
    return Generator_x1_;
}
const float &Nano::Generator_x2() {
    if (!loaded_Generator_x2_) {
        if (!b_Generator_x2_) throw std::runtime_error("Generator_x2 branch doesn't exist");
        b_Generator_x2_->GetEntry(index);
        loaded_Generator_x2_ = true;
    }
    return Generator_x2_;
}
const float &Nano::Generator_xpdf1() {
    if (!loaded_Generator_xpdf1_) {
        if (!b_Generator_xpdf1_) throw std::runtime_error("Generator_xpdf1 branch doesn't exist");
        b_Generator_xpdf1_->GetEntry(index);
        loaded_Generator_xpdf1_ = true;
    }
    return Generator_xpdf1_;
}
const float &Nano::Generator_xpdf2() {
    if (!loaded_Generator_xpdf2_) {
        if (!b_Generator_xpdf2_) throw std::runtime_error("Generator_xpdf2 branch doesn't exist");
        b_Generator_xpdf2_->GetEntry(index);
        loaded_Generator_xpdf2_ = true;
    }
    return Generator_xpdf2_;
}
const bool &Nano::HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55() {
    if (!loaded_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_) {
        if (!b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_) throw std::runtime_error("HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55 branch doesn't exist");
        b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_->GetEntry(index);
        loaded_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_ = true;
    }
    return HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_;
}
const bool &Nano::HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55() {
    if (!loaded_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_) {
        if (!b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_) throw std::runtime_error("HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55 branch doesn't exist");
        b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_->GetEntry(index);
        loaded_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_ = true;
    }
    return HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
}
const bool &Nano::HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55() {
    if (!loaded_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_) {
        if (!b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_) throw std::runtime_error("HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55 branch doesn't exist");
        b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_->GetEntry(index);
        loaded_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_ = true;
    }
    return HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
}
const bool &Nano::HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55() {
    if (!loaded_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_) {
        if (!b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_) throw std::runtime_error("HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55 branch doesn't exist");
        b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_->GetEntry(index);
        loaded_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_ = true;
    }
    return HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55_;
}
const bool &Nano::HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55() {
    if (!loaded_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_) {
        if (!b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_) throw std::runtime_error("HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55 branch doesn't exist");
        b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_->GetEntry(index);
        loaded_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_ = true;
    }
    return HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
}
const bool &Nano::HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55() {
    if (!loaded_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_) {
        if (!b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_) throw std::runtime_error("HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55 branch doesn't exist");
        b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_->GetEntry(index);
        loaded_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_ = true;
    }
    return HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
}
const bool &Nano::HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55() {
    if (!loaded_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_) {
        if (!b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_) throw std::runtime_error("HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55 branch doesn't exist");
        b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_->GetEntry(index);
        loaded_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_ = true;
    }
    return HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
}
const bool &Nano::HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55() {
    if (!loaded_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_) {
        if (!b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_) throw std::runtime_error("HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55 branch doesn't exist");
        b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_->GetEntry(index);
        loaded_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_ = true;
    }
    return HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
}
const bool &Nano::HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto() {
    if (!loaded_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_) {
        if (!b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_) throw std::runtime_error("HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto branch doesn't exist");
        b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_->GetEntry(index);
        loaded_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_ = true;
    }
    return HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_;
}
const bool &Nano::HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55() {
    if (!loaded_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55_) {
        if (!b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55_) throw std::runtime_error("HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55 branch doesn't exist");
        b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55_->GetEntry(index);
        loaded_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55_ = true;
    }
    return HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55_;
}
const bool &Nano::HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70() {
    if (!loaded_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70_) {
        if (!b_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70_) throw std::runtime_error("HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70 branch doesn't exist");
        b_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70_->GetEntry(index);
        loaded_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70_ = true;
    }
    return HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70_;
}
const bool &Nano::HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90() {
    if (!loaded_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_) {
        if (!b_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_) throw std::runtime_error("HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90 branch doesn't exist");
        b_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_->GetEntry(index);
        loaded_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_ = true;
    }
    return HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_;
}
const bool &Nano::HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55() {
    if (!loaded_HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55_) {
        if (!b_HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55_) throw std::runtime_error("HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55 branch doesn't exist");
        b_HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55_->GetEntry(index);
        loaded_HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55_ = true;
    }
    return HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55_;
}
const bool &Nano::HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90() {
    if (!loaded_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_) {
        if (!b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_) throw std::runtime_error("HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90 branch doesn't exist");
        b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_->GetEntry(index);
        loaded_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_ = true;
    }
    return HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_;
}
const bool &Nano::HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95() {
    if (!loaded_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_) {
        if (!b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_) throw std::runtime_error("HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95 branch doesn't exist");
        b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_->GetEntry(index);
        loaded_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_ = true;
    }
    return HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_;
}
const bool &Nano::HLT_DoubleMu20_7_Mass0to30_Photon23() {
    if (!loaded_HLT_DoubleMu20_7_Mass0to30_Photon23_) {
        if (!b_HLT_DoubleMu20_7_Mass0to30_Photon23_) throw std::runtime_error("HLT_DoubleMu20_7_Mass0to30_Photon23 branch doesn't exist");
        b_HLT_DoubleMu20_7_Mass0to30_Photon23_->GetEntry(index);
        loaded_HLT_DoubleMu20_7_Mass0to30_Photon23_ = true;
    }
    return HLT_DoubleMu20_7_Mass0to30_Photon23_;
}
const bool &Nano::HLT_DoublePhoton33_CaloIdL() {
    if (!loaded_HLT_DoublePhoton33_CaloIdL_) {
        if (!b_HLT_DoublePhoton33_CaloIdL_) throw std::runtime_error("HLT_DoublePhoton33_CaloIdL branch doesn't exist");
        b_HLT_DoublePhoton33_CaloIdL_->GetEntry(index);
        loaded_HLT_DoublePhoton33_CaloIdL_ = true;
    }
    return HLT_DoublePhoton33_CaloIdL_;
}
const bool &Nano::HLT_DoublePhoton60() {
    if (!loaded_HLT_DoublePhoton60_) {
        if (!b_HLT_DoublePhoton60_) throw std::runtime_error("HLT_DoublePhoton60 branch doesn't exist");
        b_HLT_DoublePhoton60_->GetEntry(index);
        loaded_HLT_DoublePhoton60_ = true;
    }
    return HLT_DoublePhoton60_;
}
const bool &Nano::HLT_DoublePhoton70() {
    if (!loaded_HLT_DoublePhoton70_) {
        if (!b_HLT_DoublePhoton70_) throw std::runtime_error("HLT_DoublePhoton70 branch doesn't exist");
        b_HLT_DoublePhoton70_->GetEntry(index);
        loaded_HLT_DoublePhoton70_ = true;
    }
    return HLT_DoublePhoton70_;
}
const bool &Nano::HLT_DoublePhoton85() {
    if (!loaded_HLT_DoublePhoton85_) {
        if (!b_HLT_DoublePhoton85_) throw std::runtime_error("HLT_DoublePhoton85 branch doesn't exist");
        b_HLT_DoublePhoton85_->GetEntry(index);
        loaded_HLT_DoublePhoton85_ = true;
    }
    return HLT_DoublePhoton85_;
}
const bool &Nano::HLT_HISinglePhoton10() {
    if (!loaded_HLT_HISinglePhoton10_) {
        if (!b_HLT_HISinglePhoton10_) throw std::runtime_error("HLT_HISinglePhoton10 branch doesn't exist");
        b_HLT_HISinglePhoton10_->GetEntry(index);
        loaded_HLT_HISinglePhoton10_ = true;
    }
    return HLT_HISinglePhoton10_;
}
const bool &Nano::HLT_HISinglePhoton10_Eta3p1ForPPRef() {
    if (!loaded_HLT_HISinglePhoton10_Eta3p1ForPPRef_) {
        if (!b_HLT_HISinglePhoton10_Eta3p1ForPPRef_) throw std::runtime_error("HLT_HISinglePhoton10_Eta3p1ForPPRef branch doesn't exist");
        b_HLT_HISinglePhoton10_Eta3p1ForPPRef_->GetEntry(index);
        loaded_HLT_HISinglePhoton10_Eta3p1ForPPRef_ = true;
    }
    return HLT_HISinglePhoton10_Eta3p1ForPPRef_;
}
const bool &Nano::HLT_HISinglePhoton15() {
    if (!loaded_HLT_HISinglePhoton15_) {
        if (!b_HLT_HISinglePhoton15_) throw std::runtime_error("HLT_HISinglePhoton15 branch doesn't exist");
        b_HLT_HISinglePhoton15_->GetEntry(index);
        loaded_HLT_HISinglePhoton15_ = true;
    }
    return HLT_HISinglePhoton15_;
}
const bool &Nano::HLT_HISinglePhoton20() {
    if (!loaded_HLT_HISinglePhoton20_) {
        if (!b_HLT_HISinglePhoton20_) throw std::runtime_error("HLT_HISinglePhoton20 branch doesn't exist");
        b_HLT_HISinglePhoton20_->GetEntry(index);
        loaded_HLT_HISinglePhoton20_ = true;
    }
    return HLT_HISinglePhoton20_;
}
const bool &Nano::HLT_HISinglePhoton20_Eta3p1ForPPRef() {
    if (!loaded_HLT_HISinglePhoton20_Eta3p1ForPPRef_) {
        if (!b_HLT_HISinglePhoton20_Eta3p1ForPPRef_) throw std::runtime_error("HLT_HISinglePhoton20_Eta3p1ForPPRef branch doesn't exist");
        b_HLT_HISinglePhoton20_Eta3p1ForPPRef_->GetEntry(index);
        loaded_HLT_HISinglePhoton20_Eta3p1ForPPRef_ = true;
    }
    return HLT_HISinglePhoton20_Eta3p1ForPPRef_;
}
const bool &Nano::HLT_HISinglePhoton30_Eta3p1ForPPRef() {
    if (!loaded_HLT_HISinglePhoton30_Eta3p1ForPPRef_) {
        if (!b_HLT_HISinglePhoton30_Eta3p1ForPPRef_) throw std::runtime_error("HLT_HISinglePhoton30_Eta3p1ForPPRef branch doesn't exist");
        b_HLT_HISinglePhoton30_Eta3p1ForPPRef_->GetEntry(index);
        loaded_HLT_HISinglePhoton30_Eta3p1ForPPRef_ = true;
    }
    return HLT_HISinglePhoton30_Eta3p1ForPPRef_;
}
const bool &Nano::HLT_HISinglePhoton40() {
    if (!loaded_HLT_HISinglePhoton40_) {
        if (!b_HLT_HISinglePhoton40_) throw std::runtime_error("HLT_HISinglePhoton40 branch doesn't exist");
        b_HLT_HISinglePhoton40_->GetEntry(index);
        loaded_HLT_HISinglePhoton40_ = true;
    }
    return HLT_HISinglePhoton40_;
}
const bool &Nano::HLT_HISinglePhoton40_Eta3p1ForPPRef() {
    if (!loaded_HLT_HISinglePhoton40_Eta3p1ForPPRef_) {
        if (!b_HLT_HISinglePhoton40_Eta3p1ForPPRef_) throw std::runtime_error("HLT_HISinglePhoton40_Eta3p1ForPPRef branch doesn't exist");
        b_HLT_HISinglePhoton40_Eta3p1ForPPRef_->GetEntry(index);
        loaded_HLT_HISinglePhoton40_Eta3p1ForPPRef_ = true;
    }
    return HLT_HISinglePhoton40_Eta3p1ForPPRef_;
}
const bool &Nano::HLT_HISinglePhoton50_Eta3p1ForPPRef() {
    if (!loaded_HLT_HISinglePhoton50_Eta3p1ForPPRef_) {
        if (!b_HLT_HISinglePhoton50_Eta3p1ForPPRef_) throw std::runtime_error("HLT_HISinglePhoton50_Eta3p1ForPPRef branch doesn't exist");
        b_HLT_HISinglePhoton50_Eta3p1ForPPRef_->GetEntry(index);
        loaded_HLT_HISinglePhoton50_Eta3p1ForPPRef_ = true;
    }
    return HLT_HISinglePhoton50_Eta3p1ForPPRef_;
}
const bool &Nano::HLT_HISinglePhoton60() {
    if (!loaded_HLT_HISinglePhoton60_) {
        if (!b_HLT_HISinglePhoton60_) throw std::runtime_error("HLT_HISinglePhoton60 branch doesn't exist");
        b_HLT_HISinglePhoton60_->GetEntry(index);
        loaded_HLT_HISinglePhoton60_ = true;
    }
    return HLT_HISinglePhoton60_;
}
const bool &Nano::HLT_HISinglePhoton60_Eta3p1ForPPRef() {
    if (!loaded_HLT_HISinglePhoton60_Eta3p1ForPPRef_) {
        if (!b_HLT_HISinglePhoton60_Eta3p1ForPPRef_) throw std::runtime_error("HLT_HISinglePhoton60_Eta3p1ForPPRef branch doesn't exist");
        b_HLT_HISinglePhoton60_Eta3p1ForPPRef_->GetEntry(index);
        loaded_HLT_HISinglePhoton60_Eta3p1ForPPRef_ = true;
    }
    return HLT_HISinglePhoton60_Eta3p1ForPPRef_;
}
const bool &Nano::HLT_Mu12_DoublePhoton20() {
    if (!loaded_HLT_Mu12_DoublePhoton20_) {
        if (!b_HLT_Mu12_DoublePhoton20_) throw std::runtime_error("HLT_Mu12_DoublePhoton20 branch doesn't exist");
        b_HLT_Mu12_DoublePhoton20_->GetEntry(index);
        loaded_HLT_Mu12_DoublePhoton20_ = true;
    }
    return HLT_Mu12_DoublePhoton20_;
}
const bool &Nano::HLT_Mu12_Photon25_CaloIdL() {
    if (!loaded_HLT_Mu12_Photon25_CaloIdL_) {
        if (!b_HLT_Mu12_Photon25_CaloIdL_) throw std::runtime_error("HLT_Mu12_Photon25_CaloIdL branch doesn't exist");
        b_HLT_Mu12_Photon25_CaloIdL_->GetEntry(index);
        loaded_HLT_Mu12_Photon25_CaloIdL_ = true;
    }
    return HLT_Mu12_Photon25_CaloIdL_;
}
const bool &Nano::HLT_Mu12_Photon25_CaloIdL_L1ISO() {
    if (!loaded_HLT_Mu12_Photon25_CaloIdL_L1ISO_) {
        if (!b_HLT_Mu12_Photon25_CaloIdL_L1ISO_) throw std::runtime_error("HLT_Mu12_Photon25_CaloIdL_L1ISO branch doesn't exist");
        b_HLT_Mu12_Photon25_CaloIdL_L1ISO_->GetEntry(index);
        loaded_HLT_Mu12_Photon25_CaloIdL_L1ISO_ = true;
    }
    return HLT_Mu12_Photon25_CaloIdL_L1ISO_;
}
const bool &Nano::HLT_Mu12_Photon25_CaloIdL_L1OR() {
    if (!loaded_HLT_Mu12_Photon25_CaloIdL_L1OR_) {
        if (!b_HLT_Mu12_Photon25_CaloIdL_L1OR_) throw std::runtime_error("HLT_Mu12_Photon25_CaloIdL_L1OR branch doesn't exist");
        b_HLT_Mu12_Photon25_CaloIdL_L1OR_->GetEntry(index);
        loaded_HLT_Mu12_Photon25_CaloIdL_L1OR_ = true;
    }
    return HLT_Mu12_Photon25_CaloIdL_L1OR_;
}
const bool &Nano::HLT_Mu17_Photon22_CaloIdL_L1ISO() {
    if (!loaded_HLT_Mu17_Photon22_CaloIdL_L1ISO_) {
        if (!b_HLT_Mu17_Photon22_CaloIdL_L1ISO_) throw std::runtime_error("HLT_Mu17_Photon22_CaloIdL_L1ISO branch doesn't exist");
        b_HLT_Mu17_Photon22_CaloIdL_L1ISO_->GetEntry(index);
        loaded_HLT_Mu17_Photon22_CaloIdL_L1ISO_ = true;
    }
    return HLT_Mu17_Photon22_CaloIdL_L1ISO_;
}
const bool &Nano::HLT_Mu17_Photon30_CaloIdL_L1ISO() {
    if (!loaded_HLT_Mu17_Photon30_CaloIdL_L1ISO_) {
        if (!b_HLT_Mu17_Photon30_CaloIdL_L1ISO_) throw std::runtime_error("HLT_Mu17_Photon30_CaloIdL_L1ISO branch doesn't exist");
        b_HLT_Mu17_Photon30_CaloIdL_L1ISO_->GetEntry(index);
        loaded_HLT_Mu17_Photon30_CaloIdL_L1ISO_ = true;
    }
    return HLT_Mu17_Photon30_CaloIdL_L1ISO_;
}
const bool &Nano::HLT_Mu17_Photon30_IsoCaloId() {
    if (!loaded_HLT_Mu17_Photon30_IsoCaloId_) {
        if (!b_HLT_Mu17_Photon30_IsoCaloId_) throw std::runtime_error("HLT_Mu17_Photon30_IsoCaloId branch doesn't exist");
        b_HLT_Mu17_Photon30_IsoCaloId_->GetEntry(index);
        loaded_HLT_Mu17_Photon30_IsoCaloId_ = true;
    }
    return HLT_Mu17_Photon30_IsoCaloId_;
}
const bool &Nano::HLT_Mu17_Photon35_CaloIdL_L1ISO() {
    if (!loaded_HLT_Mu17_Photon35_CaloIdL_L1ISO_) {
        if (!b_HLT_Mu17_Photon35_CaloIdL_L1ISO_) throw std::runtime_error("HLT_Mu17_Photon35_CaloIdL_L1ISO branch doesn't exist");
        b_HLT_Mu17_Photon35_CaloIdL_L1ISO_->GetEntry(index);
        loaded_HLT_Mu17_Photon35_CaloIdL_L1ISO_ = true;
    }
    return HLT_Mu17_Photon35_CaloIdL_L1ISO_;
}
const bool &Nano::HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL() {
    if (!loaded_HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL_) {
        if (!b_HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL_) throw std::runtime_error("HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL branch doesn't exist");
        b_HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL_->GetEntry(index);
        loaded_HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL_ = true;
    }
    return HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL_;
}
const bool &Nano::HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL() {
    if (!loaded_HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL_) {
        if (!b_HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL_) throw std::runtime_error("HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL branch doesn't exist");
        b_HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL_->GetEntry(index);
        loaded_HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL_ = true;
    }
    return HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL_;
}
const bool &Nano::HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL() {
    if (!loaded_HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL_) {
        if (!b_HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL_) throw std::runtime_error("HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL branch doesn't exist");
        b_HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL_->GetEntry(index);
        loaded_HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL_ = true;
    }
    return HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL_;
}
const bool &Nano::HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL() {
    if (!loaded_HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL_) {
        if (!b_HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL_) throw std::runtime_error("HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL branch doesn't exist");
        b_HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL_->GetEntry(index);
        loaded_HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL_ = true;
    }
    return HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL_;
}
const bool &Nano::HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL() {
    if (!loaded_HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL_) {
        if (!b_HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL_) throw std::runtime_error("HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL branch doesn't exist");
        b_HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL_->GetEntry(index);
        loaded_HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL_ = true;
    }
    return HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL_;
}
const bool &Nano::HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL() {
    if (!loaded_HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL_) {
        if (!b_HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL_) throw std::runtime_error("HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL branch doesn't exist");
        b_HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL_->GetEntry(index);
        loaded_HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL_ = true;
    }
    return HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL_;
}
const bool &Nano::HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL() {
    if (!loaded_HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL_) {
        if (!b_HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL_) throw std::runtime_error("HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL branch doesn't exist");
        b_HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL_->GetEntry(index);
        loaded_HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL_ = true;
    }
    return HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL_;
}
const bool &Nano::HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL() {
    if (!loaded_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_) {
        if (!b_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_) throw std::runtime_error("HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL branch doesn't exist");
        b_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_->GetEntry(index);
        loaded_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_ = true;
    }
    return HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_;
}
const bool &Nano::HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL() {
    if (!loaded_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_) {
        if (!b_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_) throw std::runtime_error("HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL branch doesn't exist");
        b_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_->GetEntry(index);
        loaded_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_ = true;
    }
    return HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_;
}
const bool &Nano::HLT_Photon100EBHE10() {
    if (!loaded_HLT_Photon100EBHE10_) {
        if (!b_HLT_Photon100EBHE10_) throw std::runtime_error("HLT_Photon100EBHE10 branch doesn't exist");
        b_HLT_Photon100EBHE10_->GetEntry(index);
        loaded_HLT_Photon100EBHE10_ = true;
    }
    return HLT_Photon100EBHE10_;
}
const bool &Nano::HLT_Photon100EB_TightID_TightIso() {
    if (!loaded_HLT_Photon100EB_TightID_TightIso_) {
        if (!b_HLT_Photon100EB_TightID_TightIso_) throw std::runtime_error("HLT_Photon100EB_TightID_TightIso branch doesn't exist");
        b_HLT_Photon100EB_TightID_TightIso_->GetEntry(index);
        loaded_HLT_Photon100EB_TightID_TightIso_ = true;
    }
    return HLT_Photon100EB_TightID_TightIso_;
}
const bool &Nano::HLT_Photon100EEHE10() {
    if (!loaded_HLT_Photon100EEHE10_) {
        if (!b_HLT_Photon100EEHE10_) throw std::runtime_error("HLT_Photon100EEHE10 branch doesn't exist");
        b_HLT_Photon100EEHE10_->GetEntry(index);
        loaded_HLT_Photon100EEHE10_ = true;
    }
    return HLT_Photon100EEHE10_;
}
const bool &Nano::HLT_Photon100EE_TightID_TightIso() {
    if (!loaded_HLT_Photon100EE_TightID_TightIso_) {
        if (!b_HLT_Photon100EE_TightID_TightIso_) throw std::runtime_error("HLT_Photon100EE_TightID_TightIso branch doesn't exist");
        b_HLT_Photon100EE_TightID_TightIso_->GetEntry(index);
        loaded_HLT_Photon100EE_TightID_TightIso_ = true;
    }
    return HLT_Photon100EE_TightID_TightIso_;
}
const bool &Nano::HLT_Photon110EB_TightID_TightIso() {
    if (!loaded_HLT_Photon110EB_TightID_TightIso_) {
        if (!b_HLT_Photon110EB_TightID_TightIso_) throw std::runtime_error("HLT_Photon110EB_TightID_TightIso branch doesn't exist");
        b_HLT_Photon110EB_TightID_TightIso_->GetEntry(index);
        loaded_HLT_Photon110EB_TightID_TightIso_ = true;
    }
    return HLT_Photon110EB_TightID_TightIso_;
}
const bool &Nano::HLT_Photon120() {
    if (!loaded_HLT_Photon120_) {
        if (!b_HLT_Photon120_) throw std::runtime_error("HLT_Photon120 branch doesn't exist");
        b_HLT_Photon120_->GetEntry(index);
        loaded_HLT_Photon120_ = true;
    }
    return HLT_Photon120_;
}
const bool &Nano::HLT_Photon120EB_TightID_TightIso() {
    if (!loaded_HLT_Photon120EB_TightID_TightIso_) {
        if (!b_HLT_Photon120EB_TightID_TightIso_) throw std::runtime_error("HLT_Photon120EB_TightID_TightIso branch doesn't exist");
        b_HLT_Photon120EB_TightID_TightIso_->GetEntry(index);
        loaded_HLT_Photon120EB_TightID_TightIso_ = true;
    }
    return HLT_Photon120EB_TightID_TightIso_;
}
const bool &Nano::HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40() {
    if (!loaded_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40_) {
        if (!b_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40_) throw std::runtime_error("HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40 branch doesn't exist");
        b_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40_->GetEntry(index);
        loaded_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40_ = true;
    }
    return HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
}
const bool &Nano::HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF() {
    if (!loaded_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF_) {
        if (!b_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF_) throw std::runtime_error("HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF branch doesn't exist");
        b_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF_->GetEntry(index);
        loaded_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF_ = true;
    }
    return HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF_;
}
const bool &Nano::HLT_Photon120_R9Id90_HE10_IsoM() {
    if (!loaded_HLT_Photon120_R9Id90_HE10_IsoM_) {
        if (!b_HLT_Photon120_R9Id90_HE10_IsoM_) throw std::runtime_error("HLT_Photon120_R9Id90_HE10_IsoM branch doesn't exist");
        b_HLT_Photon120_R9Id90_HE10_IsoM_->GetEntry(index);
        loaded_HLT_Photon120_R9Id90_HE10_IsoM_ = true;
    }
    return HLT_Photon120_R9Id90_HE10_IsoM_;
}
const bool &Nano::HLT_Photon125() {
    if (!loaded_HLT_Photon125_) {
        if (!b_HLT_Photon125_) throw std::runtime_error("HLT_Photon125 branch doesn't exist");
        b_HLT_Photon125_->GetEntry(index);
        loaded_HLT_Photon125_ = true;
    }
    return HLT_Photon125_;
}
const bool &Nano::HLT_Photon135_PFMET100() {
    if (!loaded_HLT_Photon135_PFMET100_) {
        if (!b_HLT_Photon135_PFMET100_) throw std::runtime_error("HLT_Photon135_PFMET100 branch doesn't exist");
        b_HLT_Photon135_PFMET100_->GetEntry(index);
        loaded_HLT_Photon135_PFMET100_ = true;
    }
    return HLT_Photon135_PFMET100_;
}
const bool &Nano::HLT_Photon150() {
    if (!loaded_HLT_Photon150_) {
        if (!b_HLT_Photon150_) throw std::runtime_error("HLT_Photon150 branch doesn't exist");
        b_HLT_Photon150_->GetEntry(index);
        loaded_HLT_Photon150_ = true;
    }
    return HLT_Photon150_;
}
const bool &Nano::HLT_Photon165_HE10() {
    if (!loaded_HLT_Photon165_HE10_) {
        if (!b_HLT_Photon165_HE10_) throw std::runtime_error("HLT_Photon165_HE10 branch doesn't exist");
        b_HLT_Photon165_HE10_->GetEntry(index);
        loaded_HLT_Photon165_HE10_ = true;
    }
    return HLT_Photon165_HE10_;
}
const bool &Nano::HLT_Photon165_R9Id90_HE10_IsoM() {
    if (!loaded_HLT_Photon165_R9Id90_HE10_IsoM_) {
        if (!b_HLT_Photon165_R9Id90_HE10_IsoM_) throw std::runtime_error("HLT_Photon165_R9Id90_HE10_IsoM branch doesn't exist");
        b_HLT_Photon165_R9Id90_HE10_IsoM_->GetEntry(index);
        loaded_HLT_Photon165_R9Id90_HE10_IsoM_ = true;
    }
    return HLT_Photon165_R9Id90_HE10_IsoM_;
}
const bool &Nano::HLT_Photon175() {
    if (!loaded_HLT_Photon175_) {
        if (!b_HLT_Photon175_) throw std::runtime_error("HLT_Photon175 branch doesn't exist");
        b_HLT_Photon175_->GetEntry(index);
        loaded_HLT_Photon175_ = true;
    }
    return HLT_Photon175_;
}
const bool &Nano::HLT_Photon20() {
    if (!loaded_HLT_Photon20_) {
        if (!b_HLT_Photon20_) throw std::runtime_error("HLT_Photon20 branch doesn't exist");
        b_HLT_Photon20_->GetEntry(index);
        loaded_HLT_Photon20_ = true;
    }
    return HLT_Photon20_;
}
const bool &Nano::HLT_Photon200() {
    if (!loaded_HLT_Photon200_) {
        if (!b_HLT_Photon200_) throw std::runtime_error("HLT_Photon200 branch doesn't exist");
        b_HLT_Photon200_->GetEntry(index);
        loaded_HLT_Photon200_ = true;
    }
    return HLT_Photon200_;
}
const bool &Nano::HLT_Photon20_CaloIdVL_IsoL() {
    if (!loaded_HLT_Photon20_CaloIdVL_IsoL_) {
        if (!b_HLT_Photon20_CaloIdVL_IsoL_) throw std::runtime_error("HLT_Photon20_CaloIdVL_IsoL branch doesn't exist");
        b_HLT_Photon20_CaloIdVL_IsoL_->GetEntry(index);
        loaded_HLT_Photon20_CaloIdVL_IsoL_ = true;
    }
    return HLT_Photon20_CaloIdVL_IsoL_;
}
const bool &Nano::HLT_Photon20_HoverELoose() {
    if (!loaded_HLT_Photon20_HoverELoose_) {
        if (!b_HLT_Photon20_HoverELoose_) throw std::runtime_error("HLT_Photon20_HoverELoose branch doesn't exist");
        b_HLT_Photon20_HoverELoose_->GetEntry(index);
        loaded_HLT_Photon20_HoverELoose_ = true;
    }
    return HLT_Photon20_HoverELoose_;
}
const bool &Nano::HLT_Photon22() {
    if (!loaded_HLT_Photon22_) {
        if (!b_HLT_Photon22_) throw std::runtime_error("HLT_Photon22 branch doesn't exist");
        b_HLT_Photon22_->GetEntry(index);
        loaded_HLT_Photon22_ = true;
    }
    return HLT_Photon22_;
}
const bool &Nano::HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40() {
    if (!loaded_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40_) {
        if (!b_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40_) throw std::runtime_error("HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40 branch doesn't exist");
        b_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40_->GetEntry(index);
        loaded_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40_ = true;
    }
    return HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
}
const bool &Nano::HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF() {
    if (!loaded_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF_) {
        if (!b_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF_) throw std::runtime_error("HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF branch doesn't exist");
        b_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF_->GetEntry(index);
        loaded_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF_ = true;
    }
    return HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF_;
}
const bool &Nano::HLT_Photon22_R9Id90_HE10_IsoM() {
    if (!loaded_HLT_Photon22_R9Id90_HE10_IsoM_) {
        if (!b_HLT_Photon22_R9Id90_HE10_IsoM_) throw std::runtime_error("HLT_Photon22_R9Id90_HE10_IsoM branch doesn't exist");
        b_HLT_Photon22_R9Id90_HE10_IsoM_->GetEntry(index);
        loaded_HLT_Photon22_R9Id90_HE10_IsoM_ = true;
    }
    return HLT_Photon22_R9Id90_HE10_IsoM_;
}
const bool &Nano::HLT_Photon25() {
    if (!loaded_HLT_Photon25_) {
        if (!b_HLT_Photon25_) throw std::runtime_error("HLT_Photon25 branch doesn't exist");
        b_HLT_Photon25_->GetEntry(index);
        loaded_HLT_Photon25_ = true;
    }
    return HLT_Photon25_;
}
const bool &Nano::HLT_Photon250_NoHE() {
    if (!loaded_HLT_Photon250_NoHE_) {
        if (!b_HLT_Photon250_NoHE_) throw std::runtime_error("HLT_Photon250_NoHE branch doesn't exist");
        b_HLT_Photon250_NoHE_->GetEntry(index);
        loaded_HLT_Photon250_NoHE_ = true;
    }
    return HLT_Photon250_NoHE_;
}
const bool &Nano::HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60() {
    if (!loaded_HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60_) {
        if (!b_HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60_) throw std::runtime_error("HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60 branch doesn't exist");
        b_HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60_->GetEntry(index);
        loaded_HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60_ = true;
    }
    return HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60_;
}
const bool &Nano::HLT_Photon30() {
    if (!loaded_HLT_Photon30_) {
        if (!b_HLT_Photon30_) throw std::runtime_error("HLT_Photon30 branch doesn't exist");
        b_HLT_Photon30_->GetEntry(index);
        loaded_HLT_Photon30_ = true;
    }
    return HLT_Photon30_;
}
const bool &Nano::HLT_Photon300_NoHE() {
    if (!loaded_HLT_Photon300_NoHE_) {
        if (!b_HLT_Photon300_NoHE_) throw std::runtime_error("HLT_Photon300_NoHE branch doesn't exist");
        b_HLT_Photon300_NoHE_->GetEntry(index);
        loaded_HLT_Photon300_NoHE_ = true;
    }
    return HLT_Photon300_NoHE_;
}
const bool &Nano::HLT_Photon30_HoverELoose() {
    if (!loaded_HLT_Photon30_HoverELoose_) {
        if (!b_HLT_Photon30_HoverELoose_) throw std::runtime_error("HLT_Photon30_HoverELoose branch doesn't exist");
        b_HLT_Photon30_HoverELoose_->GetEntry(index);
        loaded_HLT_Photon30_HoverELoose_ = true;
    }
    return HLT_Photon30_HoverELoose_;
}
const bool &Nano::HLT_Photon30_R9Id90_HE10_IsoM() {
    if (!loaded_HLT_Photon30_R9Id90_HE10_IsoM_) {
        if (!b_HLT_Photon30_R9Id90_HE10_IsoM_) throw std::runtime_error("HLT_Photon30_R9Id90_HE10_IsoM branch doesn't exist");
        b_HLT_Photon30_R9Id90_HE10_IsoM_->GetEntry(index);
        loaded_HLT_Photon30_R9Id90_HE10_IsoM_ = true;
    }
    return HLT_Photon30_R9Id90_HE10_IsoM_;
}
const bool &Nano::HLT_Photon33() {
    if (!loaded_HLT_Photon33_) {
        if (!b_HLT_Photon33_) throw std::runtime_error("HLT_Photon33 branch doesn't exist");
        b_HLT_Photon33_->GetEntry(index);
        loaded_HLT_Photon33_ = true;
    }
    return HLT_Photon33_;
}
const bool &Nano::HLT_Photon35_TwoProngs35() {
    if (!loaded_HLT_Photon35_TwoProngs35_) {
        if (!b_HLT_Photon35_TwoProngs35_) throw std::runtime_error("HLT_Photon35_TwoProngs35 branch doesn't exist");
        b_HLT_Photon35_TwoProngs35_->GetEntry(index);
        loaded_HLT_Photon35_TwoProngs35_ = true;
    }
    return HLT_Photon35_TwoProngs35_;
}
const bool &Nano::HLT_Photon36() {
    if (!loaded_HLT_Photon36_) {
        if (!b_HLT_Photon36_) throw std::runtime_error("HLT_Photon36 branch doesn't exist");
        b_HLT_Photon36_->GetEntry(index);
        loaded_HLT_Photon36_ = true;
    }
    return HLT_Photon36_;
}
const bool &Nano::HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15() {
    if (!loaded_HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15_) {
        if (!b_HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15_) throw std::runtime_error("HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15 branch doesn't exist");
        b_HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15_->GetEntry(index);
        loaded_HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15_ = true;
    }
    return HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15_;
}
const bool &Nano::HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40() {
    if (!loaded_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40_) {
        if (!b_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40_) throw std::runtime_error("HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40 branch doesn't exist");
        b_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40_->GetEntry(index);
        loaded_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40_ = true;
    }
    return HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
}
const bool &Nano::HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF() {
    if (!loaded_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF_) {
        if (!b_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF_) throw std::runtime_error("HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF branch doesn't exist");
        b_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF_->GetEntry(index);
        loaded_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF_ = true;
    }
    return HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF_;
}
const bool &Nano::HLT_Photon36_R9Id90_HE10_IsoM() {
    if (!loaded_HLT_Photon36_R9Id90_HE10_IsoM_) {
        if (!b_HLT_Photon36_R9Id90_HE10_IsoM_) throw std::runtime_error("HLT_Photon36_R9Id90_HE10_IsoM branch doesn't exist");
        b_HLT_Photon36_R9Id90_HE10_IsoM_->GetEntry(index);
        loaded_HLT_Photon36_R9Id90_HE10_IsoM_ = true;
    }
    return HLT_Photon36_R9Id90_HE10_IsoM_;
}
const bool &Nano::HLT_Photon40_HoverELoose() {
    if (!loaded_HLT_Photon40_HoverELoose_) {
        if (!b_HLT_Photon40_HoverELoose_) throw std::runtime_error("HLT_Photon40_HoverELoose branch doesn't exist");
        b_HLT_Photon40_HoverELoose_->GetEntry(index);
        loaded_HLT_Photon40_HoverELoose_ = true;
    }
    return HLT_Photon40_HoverELoose_;
}
const bool &Nano::HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15() {
    if (!loaded_HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15_) {
        if (!b_HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15_) throw std::runtime_error("HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15 branch doesn't exist");
        b_HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15_->GetEntry(index);
        loaded_HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15_ = true;
    }
    return HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15_;
}
const bool &Nano::HLT_Photon50() {
    if (!loaded_HLT_Photon50_) {
        if (!b_HLT_Photon50_) throw std::runtime_error("HLT_Photon50 branch doesn't exist");
        b_HLT_Photon50_->GetEntry(index);
        loaded_HLT_Photon50_ = true;
    }
    return HLT_Photon50_;
}
const bool &Nano::HLT_Photon500() {
    if (!loaded_HLT_Photon500_) {
        if (!b_HLT_Photon500_) throw std::runtime_error("HLT_Photon500 branch doesn't exist");
        b_HLT_Photon500_->GetEntry(index);
        loaded_HLT_Photon500_ = true;
    }
    return HLT_Photon500_;
}
const bool &Nano::HLT_Photon50_HoverELoose() {
    if (!loaded_HLT_Photon50_HoverELoose_) {
        if (!b_HLT_Photon50_HoverELoose_) throw std::runtime_error("HLT_Photon50_HoverELoose branch doesn't exist");
        b_HLT_Photon50_HoverELoose_->GetEntry(index);
        loaded_HLT_Photon50_HoverELoose_ = true;
    }
    return HLT_Photon50_HoverELoose_;
}
const bool &Nano::HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40() {
    if (!loaded_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40_) {
        if (!b_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40_) throw std::runtime_error("HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40 branch doesn't exist");
        b_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40_->GetEntry(index);
        loaded_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40_ = true;
    }
    return HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
}
const bool &Nano::HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF() {
    if (!loaded_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF_) {
        if (!b_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF_) throw std::runtime_error("HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF branch doesn't exist");
        b_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF_->GetEntry(index);
        loaded_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF_ = true;
    }
    return HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF_;
}
const bool &Nano::HLT_Photon50_R9Id90_HE10_IsoM() {
    if (!loaded_HLT_Photon50_R9Id90_HE10_IsoM_) {
        if (!b_HLT_Photon50_R9Id90_HE10_IsoM_) throw std::runtime_error("HLT_Photon50_R9Id90_HE10_IsoM branch doesn't exist");
        b_HLT_Photon50_R9Id90_HE10_IsoM_->GetEntry(index);
        loaded_HLT_Photon50_R9Id90_HE10_IsoM_ = true;
    }
    return HLT_Photon50_R9Id90_HE10_IsoM_;
}
const bool &Nano::HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50() {
    if (!loaded_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_) {
        if (!b_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_) throw std::runtime_error("HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50 branch doesn't exist");
        b_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_->GetEntry(index);
        loaded_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_ = true;
    }
    return HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_;
}
const bool &Nano::HLT_Photon600() {
    if (!loaded_HLT_Photon600_) {
        if (!b_HLT_Photon600_) throw std::runtime_error("HLT_Photon600 branch doesn't exist");
        b_HLT_Photon600_->GetEntry(index);
        loaded_HLT_Photon600_ = true;
    }
    return HLT_Photon600_;
}
const bool &Nano::HLT_Photon60_HoverELoose() {
    if (!loaded_HLT_Photon60_HoverELoose_) {
        if (!b_HLT_Photon60_HoverELoose_) throw std::runtime_error("HLT_Photon60_HoverELoose branch doesn't exist");
        b_HLT_Photon60_HoverELoose_->GetEntry(index);
        loaded_HLT_Photon60_HoverELoose_ = true;
    }
    return HLT_Photon60_HoverELoose_;
}
const bool &Nano::HLT_Photon60_R9Id90_CaloIdL_IsoL() {
    if (!loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_) {
        if (!b_HLT_Photon60_R9Id90_CaloIdL_IsoL_) throw std::runtime_error("HLT_Photon60_R9Id90_CaloIdL_IsoL branch doesn't exist");
        b_HLT_Photon60_R9Id90_CaloIdL_IsoL_->GetEntry(index);
        loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_ = true;
    }
    return HLT_Photon60_R9Id90_CaloIdL_IsoL_;
}
const bool &Nano::HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL() {
    if (!loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_) {
        if (!b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_) throw std::runtime_error("HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL branch doesn't exist");
        b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_->GetEntry(index);
        loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_ = true;
    }
    return HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_;
}
const bool &Nano::HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15() {
    if (!loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_) {
        if (!b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_) throw std::runtime_error("HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15 branch doesn't exist");
        b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_->GetEntry(index);
        loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_ = true;
    }
    return HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_;
}
const bool &Nano::HLT_Photon75() {
    if (!loaded_HLT_Photon75_) {
        if (!b_HLT_Photon75_) throw std::runtime_error("HLT_Photon75 branch doesn't exist");
        b_HLT_Photon75_->GetEntry(index);
        loaded_HLT_Photon75_ = true;
    }
    return HLT_Photon75_;
}
const bool &Nano::HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40() {
    if (!loaded_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40_) {
        if (!b_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40_) throw std::runtime_error("HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40 branch doesn't exist");
        b_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40_->GetEntry(index);
        loaded_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40_ = true;
    }
    return HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
}
const bool &Nano::HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF() {
    if (!loaded_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF_) {
        if (!b_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF_) throw std::runtime_error("HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF branch doesn't exist");
        b_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF_->GetEntry(index);
        loaded_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF_ = true;
    }
    return HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF_;
}
const bool &Nano::HLT_Photon75_R9Id90_HE10_IsoM() {
    if (!loaded_HLT_Photon75_R9Id90_HE10_IsoM_) {
        if (!b_HLT_Photon75_R9Id90_HE10_IsoM_) throw std::runtime_error("HLT_Photon75_R9Id90_HE10_IsoM branch doesn't exist");
        b_HLT_Photon75_R9Id90_HE10_IsoM_->GetEntry(index);
        loaded_HLT_Photon75_R9Id90_HE10_IsoM_ = true;
    }
    return HLT_Photon75_R9Id90_HE10_IsoM_;
}
const bool &Nano::HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3() {
    if (!loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3_) {
        if (!b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3_) throw std::runtime_error("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3 branch doesn't exist");
        b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3_->GetEntry(index);
        loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3_ = true;
    }
    return HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3_;
}
const bool &Nano::HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3() {
    if (!loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3_) {
        if (!b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3_) throw std::runtime_error("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3 branch doesn't exist");
        b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3_->GetEntry(index);
        loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3_ = true;
    }
    return HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3_;
}
const bool &Nano::HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3() {
    if (!loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_) {
        if (!b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_) throw std::runtime_error("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3 branch doesn't exist");
        b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_->GetEntry(index);
        loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_ = true;
    }
    return HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_;
}
const bool &Nano::HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3() {
    if (!loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_) {
        if (!b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_) throw std::runtime_error("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3 branch doesn't exist");
        b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_->GetEntry(index);
        loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_ = true;
    }
    return HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_;
}
const bool &Nano::HLT_Photon90() {
    if (!loaded_HLT_Photon90_) {
        if (!b_HLT_Photon90_) throw std::runtime_error("HLT_Photon90 branch doesn't exist");
        b_HLT_Photon90_->GetEntry(index);
        loaded_HLT_Photon90_ = true;
    }
    return HLT_Photon90_;
}
const bool &Nano::HLT_Photon90_CaloIdL_HT300() {
    if (!loaded_HLT_Photon90_CaloIdL_HT300_) {
        if (!b_HLT_Photon90_CaloIdL_HT300_) throw std::runtime_error("HLT_Photon90_CaloIdL_HT300 branch doesn't exist");
        b_HLT_Photon90_CaloIdL_HT300_->GetEntry(index);
        loaded_HLT_Photon90_CaloIdL_HT300_ = true;
    }
    return HLT_Photon90_CaloIdL_HT300_;
}
const bool &Nano::HLT_Photon90_CaloIdL_PFHT500() {
    if (!loaded_HLT_Photon90_CaloIdL_PFHT500_) {
        if (!b_HLT_Photon90_CaloIdL_PFHT500_) throw std::runtime_error("HLT_Photon90_CaloIdL_PFHT500 branch doesn't exist");
        b_HLT_Photon90_CaloIdL_PFHT500_->GetEntry(index);
        loaded_HLT_Photon90_CaloIdL_PFHT500_ = true;
    }
    return HLT_Photon90_CaloIdL_PFHT500_;
}
const bool &Nano::HLT_Photon90_CaloIdL_PFHT600() {
    if (!loaded_HLT_Photon90_CaloIdL_PFHT600_) {
        if (!b_HLT_Photon90_CaloIdL_PFHT600_) throw std::runtime_error("HLT_Photon90_CaloIdL_PFHT600 branch doesn't exist");
        b_HLT_Photon90_CaloIdL_PFHT600_->GetEntry(index);
        loaded_HLT_Photon90_CaloIdL_PFHT600_ = true;
    }
    return HLT_Photon90_CaloIdL_PFHT600_;
}
const bool &Nano::HLT_Photon90_CaloIdL_PFHT700() {
    if (!loaded_HLT_Photon90_CaloIdL_PFHT700_) {
        if (!b_HLT_Photon90_CaloIdL_PFHT700_) throw std::runtime_error("HLT_Photon90_CaloIdL_PFHT700 branch doesn't exist");
        b_HLT_Photon90_CaloIdL_PFHT700_->GetEntry(index);
        loaded_HLT_Photon90_CaloIdL_PFHT700_ = true;
    }
    return HLT_Photon90_CaloIdL_PFHT700_;
}
const bool &Nano::HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40() {
    if (!loaded_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40_) {
        if (!b_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40_) throw std::runtime_error("HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40 branch doesn't exist");
        b_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40_->GetEntry(index);
        loaded_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40_ = true;
    }
    return HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40_;
}
const bool &Nano::HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF() {
    if (!loaded_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF_) {
        if (!b_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF_) throw std::runtime_error("HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF branch doesn't exist");
        b_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF_->GetEntry(index);
        loaded_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF_ = true;
    }
    return HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF_;
}
const bool &Nano::HLT_Photon90_R9Id90_HE10_IsoM() {
    if (!loaded_HLT_Photon90_R9Id90_HE10_IsoM_) {
        if (!b_HLT_Photon90_R9Id90_HE10_IsoM_) throw std::runtime_error("HLT_Photon90_R9Id90_HE10_IsoM branch doesn't exist");
        b_HLT_Photon90_R9Id90_HE10_IsoM_->GetEntry(index);
        loaded_HLT_Photon90_R9Id90_HE10_IsoM_ = true;
    }
    return HLT_Photon90_R9Id90_HE10_IsoM_;
}
const bool &Nano::HLT_SinglePhoton10_Eta3p1ForPPRef() {
    if (!loaded_HLT_SinglePhoton10_Eta3p1ForPPRef_) {
        if (!b_HLT_SinglePhoton10_Eta3p1ForPPRef_) throw std::runtime_error("HLT_SinglePhoton10_Eta3p1ForPPRef branch doesn't exist");
        b_HLT_SinglePhoton10_Eta3p1ForPPRef_->GetEntry(index);
        loaded_HLT_SinglePhoton10_Eta3p1ForPPRef_ = true;
    }
    return HLT_SinglePhoton10_Eta3p1ForPPRef_;
}
const bool &Nano::HLT_SinglePhoton20_Eta3p1ForPPRef() {
    if (!loaded_HLT_SinglePhoton20_Eta3p1ForPPRef_) {
        if (!b_HLT_SinglePhoton20_Eta3p1ForPPRef_) throw std::runtime_error("HLT_SinglePhoton20_Eta3p1ForPPRef branch doesn't exist");
        b_HLT_SinglePhoton20_Eta3p1ForPPRef_->GetEntry(index);
        loaded_HLT_SinglePhoton20_Eta3p1ForPPRef_ = true;
    }
    return HLT_SinglePhoton20_Eta3p1ForPPRef_;
}
const bool &Nano::HLT_SinglePhoton30_Eta3p1ForPPRef() {
    if (!loaded_HLT_SinglePhoton30_Eta3p1ForPPRef_) {
        if (!b_HLT_SinglePhoton30_Eta3p1ForPPRef_) throw std::runtime_error("HLT_SinglePhoton30_Eta3p1ForPPRef branch doesn't exist");
        b_HLT_SinglePhoton30_Eta3p1ForPPRef_->GetEntry(index);
        loaded_HLT_SinglePhoton30_Eta3p1ForPPRef_ = true;
    }
    return HLT_SinglePhoton30_Eta3p1ForPPRef_;
}
const bool &Nano::HLT_TriplePhoton_20_20_20_CaloIdLV2() {
    if (!loaded_HLT_TriplePhoton_20_20_20_CaloIdLV2_) {
        if (!b_HLT_TriplePhoton_20_20_20_CaloIdLV2_) throw std::runtime_error("HLT_TriplePhoton_20_20_20_CaloIdLV2 branch doesn't exist");
        b_HLT_TriplePhoton_20_20_20_CaloIdLV2_->GetEntry(index);
        loaded_HLT_TriplePhoton_20_20_20_CaloIdLV2_ = true;
    }
    return HLT_TriplePhoton_20_20_20_CaloIdLV2_;
}
const bool &Nano::HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL() {
    if (!loaded_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_) {
        if (!b_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_) throw std::runtime_error("HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL branch doesn't exist");
        b_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_->GetEntry(index);
        loaded_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_ = true;
    }
    return HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_;
}
const bool &Nano::HLT_TriplePhoton_30_30_10_CaloIdLV2() {
    if (!loaded_HLT_TriplePhoton_30_30_10_CaloIdLV2_) {
        if (!b_HLT_TriplePhoton_30_30_10_CaloIdLV2_) throw std::runtime_error("HLT_TriplePhoton_30_30_10_CaloIdLV2 branch doesn't exist");
        b_HLT_TriplePhoton_30_30_10_CaloIdLV2_->GetEntry(index);
        loaded_HLT_TriplePhoton_30_30_10_CaloIdLV2_ = true;
    }
    return HLT_TriplePhoton_30_30_10_CaloIdLV2_;
}
const bool &Nano::HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL() {
    if (!loaded_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_) {
        if (!b_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_) throw std::runtime_error("HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL branch doesn't exist");
        b_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_->GetEntry(index);
        loaded_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_ = true;
    }
    return HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_;
}
const bool &Nano::HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL() {
    if (!loaded_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_) {
        if (!b_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_) throw std::runtime_error("HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL branch doesn't exist");
        b_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_->GetEntry(index);
        loaded_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_ = true;
    }
    return HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_;
}
const float &Nano::HTXS_Higgs_pt() {
    if (!loaded_HTXS_Higgs_pt_) {
        if (!b_HTXS_Higgs_pt_) throw std::runtime_error("HTXS_Higgs_pt branch doesn't exist");
        b_HTXS_Higgs_pt_->GetEntry(index);
        loaded_HTXS_Higgs_pt_ = true;
    }
    return HTXS_Higgs_pt_;
}
const float &Nano::HTXS_Higgs_y() {
    if (!loaded_HTXS_Higgs_y_) {
        if (!b_HTXS_Higgs_y_) throw std::runtime_error("HTXS_Higgs_y branch doesn't exist");
        b_HTXS_Higgs_y_->GetEntry(index);
        loaded_HTXS_Higgs_y_ = true;
    }
    return HTXS_Higgs_y_;
}
const UChar_t &Nano::HTXS_njets25() {
    if (!loaded_HTXS_njets25_) {
        if (!b_HTXS_njets25_) throw std::runtime_error("HTXS_njets25 branch doesn't exist");
        b_HTXS_njets25_->GetEntry(index);
        loaded_HTXS_njets25_ = true;
    }
    return HTXS_njets25_;
}
const UChar_t &Nano::HTXS_njets30() {
    if (!loaded_HTXS_njets30_) {
        if (!b_HTXS_njets30_) throw std::runtime_error("HTXS_njets30 branch doesn't exist");
        b_HTXS_njets30_->GetEntry(index);
        loaded_HTXS_njets30_ = true;
    }
    return HTXS_njets30_;
}
const int &Nano::HTXS_stage1_1_cat_pTjet25GeV() {
    if (!loaded_HTXS_stage1_1_cat_pTjet25GeV_) {
        if (!b_HTXS_stage1_1_cat_pTjet25GeV_) throw std::runtime_error("HTXS_stage1_1_cat_pTjet25GeV branch doesn't exist");
        b_HTXS_stage1_1_cat_pTjet25GeV_->GetEntry(index);
        loaded_HTXS_stage1_1_cat_pTjet25GeV_ = true;
    }
    return HTXS_stage1_1_cat_pTjet25GeV_;
}
const int &Nano::HTXS_stage1_1_cat_pTjet30GeV() {
    if (!loaded_HTXS_stage1_1_cat_pTjet30GeV_) {
        if (!b_HTXS_stage1_1_cat_pTjet30GeV_) throw std::runtime_error("HTXS_stage1_1_cat_pTjet30GeV branch doesn't exist");
        b_HTXS_stage1_1_cat_pTjet30GeV_->GetEntry(index);
        loaded_HTXS_stage1_1_cat_pTjet30GeV_ = true;
    }
    return HTXS_stage1_1_cat_pTjet30GeV_;
}
const int &Nano::HTXS_stage1_1_fine_cat_pTjet25GeV() {
    if (!loaded_HTXS_stage1_1_fine_cat_pTjet25GeV_) {
        if (!b_HTXS_stage1_1_fine_cat_pTjet25GeV_) throw std::runtime_error("HTXS_stage1_1_fine_cat_pTjet25GeV branch doesn't exist");
        b_HTXS_stage1_1_fine_cat_pTjet25GeV_->GetEntry(index);
        loaded_HTXS_stage1_1_fine_cat_pTjet25GeV_ = true;
    }
    return HTXS_stage1_1_fine_cat_pTjet25GeV_;
}
const int &Nano::HTXS_stage1_1_fine_cat_pTjet30GeV() {
    if (!loaded_HTXS_stage1_1_fine_cat_pTjet30GeV_) {
        if (!b_HTXS_stage1_1_fine_cat_pTjet30GeV_) throw std::runtime_error("HTXS_stage1_1_fine_cat_pTjet30GeV branch doesn't exist");
        b_HTXS_stage1_1_fine_cat_pTjet30GeV_->GetEntry(index);
        loaded_HTXS_stage1_1_fine_cat_pTjet30GeV_ = true;
    }
    return HTXS_stage1_1_fine_cat_pTjet30GeV_;
}
const int &Nano::HTXS_stage1_2_cat_pTjet25GeV() {
    if (!loaded_HTXS_stage1_2_cat_pTjet25GeV_) {
        if (!b_HTXS_stage1_2_cat_pTjet25GeV_) throw std::runtime_error("HTXS_stage1_2_cat_pTjet25GeV branch doesn't exist");
        b_HTXS_stage1_2_cat_pTjet25GeV_->GetEntry(index);
        loaded_HTXS_stage1_2_cat_pTjet25GeV_ = true;
    }
    return HTXS_stage1_2_cat_pTjet25GeV_;
}
const int &Nano::HTXS_stage1_2_cat_pTjet30GeV() {
    if (!loaded_HTXS_stage1_2_cat_pTjet30GeV_) {
        if (!b_HTXS_stage1_2_cat_pTjet30GeV_) throw std::runtime_error("HTXS_stage1_2_cat_pTjet30GeV branch doesn't exist");
        b_HTXS_stage1_2_cat_pTjet30GeV_->GetEntry(index);
        loaded_HTXS_stage1_2_cat_pTjet30GeV_ = true;
    }
    return HTXS_stage1_2_cat_pTjet30GeV_;
}
const int &Nano::HTXS_stage1_2_fine_cat_pTjet25GeV() {
    if (!loaded_HTXS_stage1_2_fine_cat_pTjet25GeV_) {
        if (!b_HTXS_stage1_2_fine_cat_pTjet25GeV_) throw std::runtime_error("HTXS_stage1_2_fine_cat_pTjet25GeV branch doesn't exist");
        b_HTXS_stage1_2_fine_cat_pTjet25GeV_->GetEntry(index);
        loaded_HTXS_stage1_2_fine_cat_pTjet25GeV_ = true;
    }
    return HTXS_stage1_2_fine_cat_pTjet25GeV_;
}
const int &Nano::HTXS_stage1_2_fine_cat_pTjet30GeV() {
    if (!loaded_HTXS_stage1_2_fine_cat_pTjet30GeV_) {
        if (!b_HTXS_stage1_2_fine_cat_pTjet30GeV_) throw std::runtime_error("HTXS_stage1_2_fine_cat_pTjet30GeV branch doesn't exist");
        b_HTXS_stage1_2_fine_cat_pTjet30GeV_->GetEntry(index);
        loaded_HTXS_stage1_2_fine_cat_pTjet30GeV_ = true;
    }
    return HTXS_stage1_2_fine_cat_pTjet30GeV_;
}
const int &Nano::HTXS_stage_0() {
    if (!loaded_HTXS_stage_0_) {
        if (!b_HTXS_stage_0_) throw std::runtime_error("HTXS_stage_0 branch doesn't exist");
        b_HTXS_stage_0_->GetEntry(index);
        loaded_HTXS_stage_0_ = true;
    }
    return HTXS_stage_0_;
}
const int &Nano::HTXS_stage_1_pTjet25() {
    if (!loaded_HTXS_stage_1_pTjet25_) {
        if (!b_HTXS_stage_1_pTjet25_) throw std::runtime_error("HTXS_stage_1_pTjet25 branch doesn't exist");
        b_HTXS_stage_1_pTjet25_->GetEntry(index);
        loaded_HTXS_stage_1_pTjet25_ = true;
    }
    return HTXS_stage_1_pTjet25_;
}
const int &Nano::HTXS_stage_1_pTjet30() {
    if (!loaded_HTXS_stage_1_pTjet30_) {
        if (!b_HTXS_stage_1_pTjet30_) throw std::runtime_error("HTXS_stage_1_pTjet30 branch doesn't exist");
        b_HTXS_stage_1_pTjet30_->GetEntry(index);
        loaded_HTXS_stage_1_pTjet30_ = true;
    }
    return HTXS_stage_1_pTjet30_;
}
const vector<float> &Nano::IsoTrack_dxy() {
    if (!loaded_IsoTrack_dxy_) {
        if (!b_IsoTrack_dxy_) throw std::runtime_error("IsoTrack_dxy branch doesn't exist");
        int bytes = b_IsoTrack_dxy_->GetEntry(index);
        v_IsoTrack_dxy_ = vector<float>(IsoTrack_dxy_,IsoTrack_dxy_+bytes/sizeof(IsoTrack_dxy_[0]));
        loaded_IsoTrack_dxy_ = true;
    }
    return v_IsoTrack_dxy_;
}
const vector<float> &Nano::IsoTrack_dz() {
    if (!loaded_IsoTrack_dz_) {
        if (!b_IsoTrack_dz_) throw std::runtime_error("IsoTrack_dz branch doesn't exist");
        int bytes = b_IsoTrack_dz_->GetEntry(index);
        v_IsoTrack_dz_ = vector<float>(IsoTrack_dz_,IsoTrack_dz_+bytes/sizeof(IsoTrack_dz_[0]));
        loaded_IsoTrack_dz_ = true;
    }
    return v_IsoTrack_dz_;
}
const vector<float> &Nano::IsoTrack_eta() {
    if (!loaded_IsoTrack_eta_) {
        if (!b_IsoTrack_eta_) throw std::runtime_error("IsoTrack_eta branch doesn't exist");
        int bytes = b_IsoTrack_eta_->GetEntry(index);
        v_IsoTrack_eta_ = vector<float>(IsoTrack_eta_,IsoTrack_eta_+bytes/sizeof(IsoTrack_eta_[0]));
        loaded_IsoTrack_eta_ = true;
    }
    return v_IsoTrack_eta_;
}
const vector<int> &Nano::IsoTrack_fromPV() {
    if (!loaded_IsoTrack_fromPV_) {
        if (!b_IsoTrack_fromPV_) throw std::runtime_error("IsoTrack_fromPV branch doesn't exist");
        int bytes = b_IsoTrack_fromPV_->GetEntry(index);
        v_IsoTrack_fromPV_ = vector<int>(IsoTrack_fromPV_,IsoTrack_fromPV_+bytes/sizeof(IsoTrack_fromPV_[0]));
        loaded_IsoTrack_fromPV_ = true;
    }
    return v_IsoTrack_fromPV_;
}
const vector<bool> &Nano::IsoTrack_isFromLostTrack() {
    if (!loaded_IsoTrack_isFromLostTrack_) {
        if (!b_IsoTrack_isFromLostTrack_) throw std::runtime_error("IsoTrack_isFromLostTrack branch doesn't exist");
        int bytes = b_IsoTrack_isFromLostTrack_->GetEntry(index);
        v_IsoTrack_isFromLostTrack_ = vector<bool>(IsoTrack_isFromLostTrack_,IsoTrack_isFromLostTrack_+bytes/sizeof(IsoTrack_isFromLostTrack_[0]));
        loaded_IsoTrack_isFromLostTrack_ = true;
    }
    return v_IsoTrack_isFromLostTrack_;
}
const vector<bool> &Nano::IsoTrack_isHighPurityTrack() {
    if (!loaded_IsoTrack_isHighPurityTrack_) {
        if (!b_IsoTrack_isHighPurityTrack_) throw std::runtime_error("IsoTrack_isHighPurityTrack branch doesn't exist");
        int bytes = b_IsoTrack_isHighPurityTrack_->GetEntry(index);
        v_IsoTrack_isHighPurityTrack_ = vector<bool>(IsoTrack_isHighPurityTrack_,IsoTrack_isHighPurityTrack_+bytes/sizeof(IsoTrack_isHighPurityTrack_[0]));
        loaded_IsoTrack_isHighPurityTrack_ = true;
    }
    return v_IsoTrack_isHighPurityTrack_;
}
const vector<bool> &Nano::IsoTrack_isPFcand() {
    if (!loaded_IsoTrack_isPFcand_) {
        if (!b_IsoTrack_isPFcand_) throw std::runtime_error("IsoTrack_isPFcand branch doesn't exist");
        int bytes = b_IsoTrack_isPFcand_->GetEntry(index);
        v_IsoTrack_isPFcand_ = vector<bool>(IsoTrack_isPFcand_,IsoTrack_isPFcand_+bytes/sizeof(IsoTrack_isPFcand_[0]));
        loaded_IsoTrack_isPFcand_ = true;
    }
    return v_IsoTrack_isPFcand_;
}
const vector<float> &Nano::IsoTrack_miniPFRelIso_all() {
    if (!loaded_IsoTrack_miniPFRelIso_all_) {
        if (!b_IsoTrack_miniPFRelIso_all_) throw std::runtime_error("IsoTrack_miniPFRelIso_all branch doesn't exist");
        int bytes = b_IsoTrack_miniPFRelIso_all_->GetEntry(index);
        v_IsoTrack_miniPFRelIso_all_ = vector<float>(IsoTrack_miniPFRelIso_all_,IsoTrack_miniPFRelIso_all_+bytes/sizeof(IsoTrack_miniPFRelIso_all_[0]));
        loaded_IsoTrack_miniPFRelIso_all_ = true;
    }
    return v_IsoTrack_miniPFRelIso_all_;
}
const vector<float> &Nano::IsoTrack_miniPFRelIso_chg() {
    if (!loaded_IsoTrack_miniPFRelIso_chg_) {
        if (!b_IsoTrack_miniPFRelIso_chg_) throw std::runtime_error("IsoTrack_miniPFRelIso_chg branch doesn't exist");
        int bytes = b_IsoTrack_miniPFRelIso_chg_->GetEntry(index);
        v_IsoTrack_miniPFRelIso_chg_ = vector<float>(IsoTrack_miniPFRelIso_chg_,IsoTrack_miniPFRelIso_chg_+bytes/sizeof(IsoTrack_miniPFRelIso_chg_[0]));
        loaded_IsoTrack_miniPFRelIso_chg_ = true;
    }
    return v_IsoTrack_miniPFRelIso_chg_;
}
const vector<int> &Nano::IsoTrack_pdgId() {
    if (!loaded_IsoTrack_pdgId_) {
        if (!b_IsoTrack_pdgId_) throw std::runtime_error("IsoTrack_pdgId branch doesn't exist");
        int bytes = b_IsoTrack_pdgId_->GetEntry(index);
        v_IsoTrack_pdgId_ = vector<int>(IsoTrack_pdgId_,IsoTrack_pdgId_+bytes/sizeof(IsoTrack_pdgId_[0]));
        loaded_IsoTrack_pdgId_ = true;
    }
    return v_IsoTrack_pdgId_;
}
const vector<float> &Nano::IsoTrack_pfRelIso03_all() {
    if (!loaded_IsoTrack_pfRelIso03_all_) {
        if (!b_IsoTrack_pfRelIso03_all_) throw std::runtime_error("IsoTrack_pfRelIso03_all branch doesn't exist");
        int bytes = b_IsoTrack_pfRelIso03_all_->GetEntry(index);
        v_IsoTrack_pfRelIso03_all_ = vector<float>(IsoTrack_pfRelIso03_all_,IsoTrack_pfRelIso03_all_+bytes/sizeof(IsoTrack_pfRelIso03_all_[0]));
        loaded_IsoTrack_pfRelIso03_all_ = true;
    }
    return v_IsoTrack_pfRelIso03_all_;
}
const vector<float> &Nano::IsoTrack_pfRelIso03_chg() {
    if (!loaded_IsoTrack_pfRelIso03_chg_) {
        if (!b_IsoTrack_pfRelIso03_chg_) throw std::runtime_error("IsoTrack_pfRelIso03_chg branch doesn't exist");
        int bytes = b_IsoTrack_pfRelIso03_chg_->GetEntry(index);
        v_IsoTrack_pfRelIso03_chg_ = vector<float>(IsoTrack_pfRelIso03_chg_,IsoTrack_pfRelIso03_chg_+bytes/sizeof(IsoTrack_pfRelIso03_chg_[0]));
        loaded_IsoTrack_pfRelIso03_chg_ = true;
    }
    return v_IsoTrack_pfRelIso03_chg_;
}
const vector<float> &Nano::IsoTrack_phi() {
    if (!loaded_IsoTrack_phi_) {
        if (!b_IsoTrack_phi_) throw std::runtime_error("IsoTrack_phi branch doesn't exist");
        int bytes = b_IsoTrack_phi_->GetEntry(index);
        v_IsoTrack_phi_ = vector<float>(IsoTrack_phi_,IsoTrack_phi_+bytes/sizeof(IsoTrack_phi_[0]));
        loaded_IsoTrack_phi_ = true;
    }
    return v_IsoTrack_phi_;
}
const vector<float> &Nano::IsoTrack_pt() {
    if (!loaded_IsoTrack_pt_) {
        if (!b_IsoTrack_pt_) throw std::runtime_error("IsoTrack_pt branch doesn't exist");
        int bytes = b_IsoTrack_pt_->GetEntry(index);
        v_IsoTrack_pt_ = vector<float>(IsoTrack_pt_,IsoTrack_pt_+bytes/sizeof(IsoTrack_pt_[0]));
        loaded_IsoTrack_pt_ = true;
    }
    return v_IsoTrack_pt_;
}
const vector<bool> &Nano::Jet_Filter() {
    if (!loaded_Jet_Filter_) {
        if (!b_Jet_Filter_) throw std::runtime_error("Jet_Filter branch doesn't exist");
        int bytes = b_Jet_Filter_->GetEntry(index);
        v_Jet_Filter_ = vector<bool>(Jet_Filter_,Jet_Filter_+bytes/sizeof(Jet_Filter_[0]));
        loaded_Jet_Filter_ = true;
    }
    return v_Jet_Filter_;
}
const vector<bool> &Nano::Jet_FilterLoose() {
    if (!loaded_Jet_FilterLoose_) {
        if (!b_Jet_FilterLoose_) throw std::runtime_error("Jet_FilterLoose branch doesn't exist");
        int bytes = b_Jet_FilterLoose_->GetEntry(index);
        v_Jet_FilterLoose_ = vector<bool>(Jet_FilterLoose_,Jet_FilterLoose_+bytes/sizeof(Jet_FilterLoose_[0]));
        loaded_Jet_FilterLoose_ = true;
    }
    return v_Jet_FilterLoose_;
}
const vector<float> &Nano::Jet_area() {
    if (!loaded_Jet_area_) {
        if (!b_Jet_area_) throw std::runtime_error("Jet_area branch doesn't exist");
        int bytes = b_Jet_area_->GetEntry(index);
        v_Jet_area_ = vector<float>(Jet_area_,Jet_area_+bytes/sizeof(Jet_area_[0]));
        loaded_Jet_area_ = true;
    }
    return v_Jet_area_;
}
const vector<float> &Nano::Jet_bRegCorr() {
    if (!loaded_Jet_bRegCorr_) {
        if (!b_Jet_bRegCorr_) throw std::runtime_error("Jet_bRegCorr branch doesn't exist");
        int bytes = b_Jet_bRegCorr_->GetEntry(index);
        v_Jet_bRegCorr_ = vector<float>(Jet_bRegCorr_,Jet_bRegCorr_+bytes/sizeof(Jet_bRegCorr_[0]));
        loaded_Jet_bRegCorr_ = true;
    }
    return v_Jet_bRegCorr_;
}
const vector<float> &Nano::Jet_bRegRes() {
    if (!loaded_Jet_bRegRes_) {
        if (!b_Jet_bRegRes_) throw std::runtime_error("Jet_bRegRes branch doesn't exist");
        int bytes = b_Jet_bRegRes_->GetEntry(index);
        v_Jet_bRegRes_ = vector<float>(Jet_bRegRes_,Jet_bRegRes_+bytes/sizeof(Jet_bRegRes_[0]));
        loaded_Jet_bRegRes_ = true;
    }
    return v_Jet_bRegRes_;
}
const vector<float> &Nano::Jet_btagCMVA() {
    if (!loaded_Jet_btagCMVA_) {
        if (!b_Jet_btagCMVA_) throw std::runtime_error("Jet_btagCMVA branch doesn't exist");
        int bytes = b_Jet_btagCMVA_->GetEntry(index);
        v_Jet_btagCMVA_ = vector<float>(Jet_btagCMVA_,Jet_btagCMVA_+bytes/sizeof(Jet_btagCMVA_[0]));
        loaded_Jet_btagCMVA_ = true;
    }
    return v_Jet_btagCMVA_;
}
const vector<float> &Nano::Jet_btagCSVV2() {
    if (!loaded_Jet_btagCSVV2_) {
        if (!b_Jet_btagCSVV2_) throw std::runtime_error("Jet_btagCSVV2 branch doesn't exist");
        int bytes = b_Jet_btagCSVV2_->GetEntry(index);
        v_Jet_btagCSVV2_ = vector<float>(Jet_btagCSVV2_,Jet_btagCSVV2_+bytes/sizeof(Jet_btagCSVV2_[0]));
        loaded_Jet_btagCSVV2_ = true;
    }
    return v_Jet_btagCSVV2_;
}
const vector<float> &Nano::Jet_btagDeepB() {
    if (!loaded_Jet_btagDeepB_) {
        if (!b_Jet_btagDeepB_) throw std::runtime_error("Jet_btagDeepB branch doesn't exist");
        int bytes = b_Jet_btagDeepB_->GetEntry(index);
        v_Jet_btagDeepB_ = vector<float>(Jet_btagDeepB_,Jet_btagDeepB_+bytes/sizeof(Jet_btagDeepB_[0]));
        loaded_Jet_btagDeepB_ = true;
    }
    return v_Jet_btagDeepB_;
}
const vector<float> &Nano::Jet_btagDeepC() {
    if (!loaded_Jet_btagDeepC_) {
        if (!b_Jet_btagDeepC_) throw std::runtime_error("Jet_btagDeepC branch doesn't exist");
        int bytes = b_Jet_btagDeepC_->GetEntry(index);
        v_Jet_btagDeepC_ = vector<float>(Jet_btagDeepC_,Jet_btagDeepC_+bytes/sizeof(Jet_btagDeepC_[0]));
        loaded_Jet_btagDeepC_ = true;
    }
    return v_Jet_btagDeepC_;
}
const vector<float> &Nano::Jet_btagDeepFlavB() {
    if (!loaded_Jet_btagDeepFlavB_) {
        if (!b_Jet_btagDeepFlavB_) throw std::runtime_error("Jet_btagDeepFlavB branch doesn't exist");
        int bytes = b_Jet_btagDeepFlavB_->GetEntry(index);
        v_Jet_btagDeepFlavB_ = vector<float>(Jet_btagDeepFlavB_,Jet_btagDeepFlavB_+bytes/sizeof(Jet_btagDeepFlavB_[0]));
        loaded_Jet_btagDeepFlavB_ = true;
    }
    return v_Jet_btagDeepFlavB_;
}
const vector<float> &Nano::Jet_btagDeepFlavC() {
    if (!loaded_Jet_btagDeepFlavC_) {
        if (!b_Jet_btagDeepFlavC_) throw std::runtime_error("Jet_btagDeepFlavC branch doesn't exist");
        int bytes = b_Jet_btagDeepFlavC_->GetEntry(index);
        v_Jet_btagDeepFlavC_ = vector<float>(Jet_btagDeepFlavC_,Jet_btagDeepFlavC_+bytes/sizeof(Jet_btagDeepFlavC_[0]));
        loaded_Jet_btagDeepFlavC_ = true;
    }
    return v_Jet_btagDeepFlavC_;
}
const vector<float> &Nano::Jet_cRegCorr() {
    if (!loaded_Jet_cRegCorr_) {
        if (!b_Jet_cRegCorr_) throw std::runtime_error("Jet_cRegCorr branch doesn't exist");
        int bytes = b_Jet_cRegCorr_->GetEntry(index);
        v_Jet_cRegCorr_ = vector<float>(Jet_cRegCorr_,Jet_cRegCorr_+bytes/sizeof(Jet_cRegCorr_[0]));
        loaded_Jet_cRegCorr_ = true;
    }
    return v_Jet_cRegCorr_;
}
const vector<float> &Nano::Jet_cRegRes() {
    if (!loaded_Jet_cRegRes_) {
        if (!b_Jet_cRegRes_) throw std::runtime_error("Jet_cRegRes branch doesn't exist");
        int bytes = b_Jet_cRegRes_->GetEntry(index);
        v_Jet_cRegRes_ = vector<float>(Jet_cRegRes_,Jet_cRegRes_+bytes/sizeof(Jet_cRegRes_[0]));
        loaded_Jet_cRegRes_ = true;
    }
    return v_Jet_cRegRes_;
}
const vector<float> &Nano::Jet_chEmEF() {
    if (!loaded_Jet_chEmEF_) {
        if (!b_Jet_chEmEF_) throw std::runtime_error("Jet_chEmEF branch doesn't exist");
        int bytes = b_Jet_chEmEF_->GetEntry(index);
        v_Jet_chEmEF_ = vector<float>(Jet_chEmEF_,Jet_chEmEF_+bytes/sizeof(Jet_chEmEF_[0]));
        loaded_Jet_chEmEF_ = true;
    }
    return v_Jet_chEmEF_;
}
const vector<float> &Nano::Jet_chFPV0EF() {
    if (!loaded_Jet_chFPV0EF_) {
        if (!b_Jet_chFPV0EF_) throw std::runtime_error("Jet_chFPV0EF branch doesn't exist");
        int bytes = b_Jet_chFPV0EF_->GetEntry(index);
        v_Jet_chFPV0EF_ = vector<float>(Jet_chFPV0EF_,Jet_chFPV0EF_+bytes/sizeof(Jet_chFPV0EF_[0]));
        loaded_Jet_chFPV0EF_ = true;
    }
    return v_Jet_chFPV0EF_;
}
const vector<float> &Nano::Jet_chFPV1EF() {
    if (!loaded_Jet_chFPV1EF_) {
        if (!b_Jet_chFPV1EF_) throw std::runtime_error("Jet_chFPV1EF branch doesn't exist");
        int bytes = b_Jet_chFPV1EF_->GetEntry(index);
        v_Jet_chFPV1EF_ = vector<float>(Jet_chFPV1EF_,Jet_chFPV1EF_+bytes/sizeof(Jet_chFPV1EF_[0]));
        loaded_Jet_chFPV1EF_ = true;
    }
    return v_Jet_chFPV1EF_;
}
const vector<float> &Nano::Jet_chFPV2EF() {
    if (!loaded_Jet_chFPV2EF_) {
        if (!b_Jet_chFPV2EF_) throw std::runtime_error("Jet_chFPV2EF branch doesn't exist");
        int bytes = b_Jet_chFPV2EF_->GetEntry(index);
        v_Jet_chFPV2EF_ = vector<float>(Jet_chFPV2EF_,Jet_chFPV2EF_+bytes/sizeof(Jet_chFPV2EF_[0]));
        loaded_Jet_chFPV2EF_ = true;
    }
    return v_Jet_chFPV2EF_;
}
const vector<float> &Nano::Jet_chFPV3EF() {
    if (!loaded_Jet_chFPV3EF_) {
        if (!b_Jet_chFPV3EF_) throw std::runtime_error("Jet_chFPV3EF branch doesn't exist");
        int bytes = b_Jet_chFPV3EF_->GetEntry(index);
        v_Jet_chFPV3EF_ = vector<float>(Jet_chFPV3EF_,Jet_chFPV3EF_+bytes/sizeof(Jet_chFPV3EF_[0]));
        loaded_Jet_chFPV3EF_ = true;
    }
    return v_Jet_chFPV3EF_;
}
const vector<float> &Nano::Jet_chHEF() {
    if (!loaded_Jet_chHEF_) {
        if (!b_Jet_chHEF_) throw std::runtime_error("Jet_chHEF branch doesn't exist");
        int bytes = b_Jet_chHEF_->GetEntry(index);
        v_Jet_chHEF_ = vector<float>(Jet_chHEF_,Jet_chHEF_+bytes/sizeof(Jet_chHEF_[0]));
        loaded_Jet_chHEF_ = true;
    }
    return v_Jet_chHEF_;
}
const vector<UChar_t> &Nano::Jet_cleanmask() {
    if (!loaded_Jet_cleanmask_) {
        if (!b_Jet_cleanmask_) throw std::runtime_error("Jet_cleanmask branch doesn't exist");
        int bytes = b_Jet_cleanmask_->GetEntry(index);
        v_Jet_cleanmask_ = vector<UChar_t>(Jet_cleanmask_,Jet_cleanmask_+bytes/sizeof(Jet_cleanmask_[0]));
        loaded_Jet_cleanmask_ = true;
    }
    return v_Jet_cleanmask_;
}
const vector<float> &Nano::Jet_corr_JEC() {
    if (!loaded_Jet_corr_JEC_) {
        if (!b_Jet_corr_JEC_) throw std::runtime_error("Jet_corr_JEC branch doesn't exist");
        int bytes = b_Jet_corr_JEC_->GetEntry(index);
        v_Jet_corr_JEC_ = vector<float>(Jet_corr_JEC_,Jet_corr_JEC_+bytes/sizeof(Jet_corr_JEC_[0]));
        loaded_Jet_corr_JEC_ = true;
    }
    return v_Jet_corr_JEC_;
}
const vector<float> &Nano::Jet_corr_JER() {
    if (!loaded_Jet_corr_JER_) {
        if (!b_Jet_corr_JER_) throw std::runtime_error("Jet_corr_JER branch doesn't exist");
        int bytes = b_Jet_corr_JER_->GetEntry(index);
        v_Jet_corr_JER_ = vector<float>(Jet_corr_JER_,Jet_corr_JER_+bytes/sizeof(Jet_corr_JER_[0]));
        loaded_Jet_corr_JER_ = true;
    }
    return v_Jet_corr_JER_;
}
const vector<int> &Nano::Jet_electronIdx1() {
    if (!loaded_Jet_electronIdx1_) {
        if (!b_Jet_electronIdx1_) throw std::runtime_error("Jet_electronIdx1 branch doesn't exist");
        int bytes = b_Jet_electronIdx1_->GetEntry(index);
        v_Jet_electronIdx1_ = vector<int>(Jet_electronIdx1_,Jet_electronIdx1_+bytes/sizeof(Jet_electronIdx1_[0]));
        loaded_Jet_electronIdx1_ = true;
    }
    return v_Jet_electronIdx1_;
}
const vector<int> &Nano::Jet_electronIdx2() {
    if (!loaded_Jet_electronIdx2_) {
        if (!b_Jet_electronIdx2_) throw std::runtime_error("Jet_electronIdx2 branch doesn't exist");
        int bytes = b_Jet_electronIdx2_->GetEntry(index);
        v_Jet_electronIdx2_ = vector<int>(Jet_electronIdx2_,Jet_electronIdx2_+bytes/sizeof(Jet_electronIdx2_[0]));
        loaded_Jet_electronIdx2_ = true;
    }
    return v_Jet_electronIdx2_;
}
const vector<float> &Nano::Jet_eta() {
    if (!loaded_Jet_eta_) {
        if (!b_Jet_eta_) throw std::runtime_error("Jet_eta branch doesn't exist");
        int bytes = b_Jet_eta_->GetEntry(index);
        v_Jet_eta_ = vector<float>(Jet_eta_,Jet_eta_+bytes/sizeof(Jet_eta_[0]));
        loaded_Jet_eta_ = true;
    }
    return v_Jet_eta_;
}
const vector<int> &Nano::Jet_genJetIdx() {
    if (!loaded_Jet_genJetIdx_) {
        if (!b_Jet_genJetIdx_) throw std::runtime_error("Jet_genJetIdx branch doesn't exist");
        int bytes = b_Jet_genJetIdx_->GetEntry(index);
        v_Jet_genJetIdx_ = vector<int>(Jet_genJetIdx_,Jet_genJetIdx_+bytes/sizeof(Jet_genJetIdx_[0]));
        loaded_Jet_genJetIdx_ = true;
    }
    return v_Jet_genJetIdx_;
}
const vector<int> &Nano::Jet_hadronFlavour() {
    if (!loaded_Jet_hadronFlavour_) {
        if (!b_Jet_hadronFlavour_) throw std::runtime_error("Jet_hadronFlavour branch doesn't exist");
        int bytes = b_Jet_hadronFlavour_->GetEntry(index);
        v_Jet_hadronFlavour_ = vector<int>(Jet_hadronFlavour_,Jet_hadronFlavour_+bytes/sizeof(Jet_hadronFlavour_[0]));
        loaded_Jet_hadronFlavour_ = true;
    }
    return v_Jet_hadronFlavour_;
}
const vector<int> &Nano::Jet_jetId() {
    if (!loaded_Jet_jetId_) {
        if (!b_Jet_jetId_) throw std::runtime_error("Jet_jetId branch doesn't exist");
        int bytes = b_Jet_jetId_->GetEntry(index);
        v_Jet_jetId_ = vector<int>(Jet_jetId_,Jet_jetId_+bytes/sizeof(Jet_jetId_[0]));
        loaded_Jet_jetId_ = true;
    }
    return v_Jet_jetId_;
}
const vector<float> &Nano::Jet_mass() {
    if (!loaded_Jet_mass_) {
        if (!b_Jet_mass_) throw std::runtime_error("Jet_mass branch doesn't exist");
        int bytes = b_Jet_mass_->GetEntry(index);
        v_Jet_mass_ = vector<float>(Jet_mass_,Jet_mass_+bytes/sizeof(Jet_mass_[0]));
        loaded_Jet_mass_ = true;
    }
    return v_Jet_mass_;
}
const vector<float> &Nano::Jet_mass_jerDown() {
    if (!loaded_Jet_mass_jerDown_) {
        if (!b_Jet_mass_jerDown_) throw std::runtime_error("Jet_mass_jerDown branch doesn't exist");
        int bytes = b_Jet_mass_jerDown_->GetEntry(index);
        v_Jet_mass_jerDown_ = vector<float>(Jet_mass_jerDown_,Jet_mass_jerDown_+bytes/sizeof(Jet_mass_jerDown_[0]));
        loaded_Jet_mass_jerDown_ = true;
    }
    return v_Jet_mass_jerDown_;
}
const vector<float> &Nano::Jet_mass_jerUp() {
    if (!loaded_Jet_mass_jerUp_) {
        if (!b_Jet_mass_jerUp_) throw std::runtime_error("Jet_mass_jerUp branch doesn't exist");
        int bytes = b_Jet_mass_jerUp_->GetEntry(index);
        v_Jet_mass_jerUp_ = vector<float>(Jet_mass_jerUp_,Jet_mass_jerUp_+bytes/sizeof(Jet_mass_jerUp_[0]));
        loaded_Jet_mass_jerUp_ = true;
    }
    return v_Jet_mass_jerUp_;
}
const vector<float> &Nano::Jet_mass_jesTotalDown() {
    if (!loaded_Jet_mass_jesTotalDown_) {
        if (!b_Jet_mass_jesTotalDown_) throw std::runtime_error("Jet_mass_jesTotalDown branch doesn't exist");
        int bytes = b_Jet_mass_jesTotalDown_->GetEntry(index);
        v_Jet_mass_jesTotalDown_ = vector<float>(Jet_mass_jesTotalDown_,Jet_mass_jesTotalDown_+bytes/sizeof(Jet_mass_jesTotalDown_[0]));
        loaded_Jet_mass_jesTotalDown_ = true;
    }
    return v_Jet_mass_jesTotalDown_;
}
const vector<float> &Nano::Jet_mass_jesTotalUp() {
    if (!loaded_Jet_mass_jesTotalUp_) {
        if (!b_Jet_mass_jesTotalUp_) throw std::runtime_error("Jet_mass_jesTotalUp branch doesn't exist");
        int bytes = b_Jet_mass_jesTotalUp_->GetEntry(index);
        v_Jet_mass_jesTotalUp_ = vector<float>(Jet_mass_jesTotalUp_,Jet_mass_jesTotalUp_+bytes/sizeof(Jet_mass_jesTotalUp_[0]));
        loaded_Jet_mass_jesTotalUp_ = true;
    }
    return v_Jet_mass_jesTotalUp_;
}
const vector<float> &Nano::Jet_mass_nom() {
    if (!loaded_Jet_mass_nom_) {
        if (!b_Jet_mass_nom_) throw std::runtime_error("Jet_mass_nom branch doesn't exist");
        int bytes = b_Jet_mass_nom_->GetEntry(index);
        v_Jet_mass_nom_ = vector<float>(Jet_mass_nom_,Jet_mass_nom_+bytes/sizeof(Jet_mass_nom_[0]));
        loaded_Jet_mass_nom_ = true;
    }
    return v_Jet_mass_nom_;
}
const vector<float> &Nano::Jet_mass_raw() {
    if (!loaded_Jet_mass_raw_) {
        if (!b_Jet_mass_raw_) throw std::runtime_error("Jet_mass_raw branch doesn't exist");
        int bytes = b_Jet_mass_raw_->GetEntry(index);
        v_Jet_mass_raw_ = vector<float>(Jet_mass_raw_,Jet_mass_raw_+bytes/sizeof(Jet_mass_raw_[0]));
        loaded_Jet_mass_raw_ = true;
    }
    return v_Jet_mass_raw_;
}
const vector<float> &Nano::Jet_muEF() {
    if (!loaded_Jet_muEF_) {
        if (!b_Jet_muEF_) throw std::runtime_error("Jet_muEF branch doesn't exist");
        int bytes = b_Jet_muEF_->GetEntry(index);
        v_Jet_muEF_ = vector<float>(Jet_muEF_,Jet_muEF_+bytes/sizeof(Jet_muEF_[0]));
        loaded_Jet_muEF_ = true;
    }
    return v_Jet_muEF_;
}
const vector<int> &Nano::Jet_muonIdx1() {
    if (!loaded_Jet_muonIdx1_) {
        if (!b_Jet_muonIdx1_) throw std::runtime_error("Jet_muonIdx1 branch doesn't exist");
        int bytes = b_Jet_muonIdx1_->GetEntry(index);
        v_Jet_muonIdx1_ = vector<int>(Jet_muonIdx1_,Jet_muonIdx1_+bytes/sizeof(Jet_muonIdx1_[0]));
        loaded_Jet_muonIdx1_ = true;
    }
    return v_Jet_muonIdx1_;
}
const vector<int> &Nano::Jet_muonIdx2() {
    if (!loaded_Jet_muonIdx2_) {
        if (!b_Jet_muonIdx2_) throw std::runtime_error("Jet_muonIdx2 branch doesn't exist");
        int bytes = b_Jet_muonIdx2_->GetEntry(index);
        v_Jet_muonIdx2_ = vector<int>(Jet_muonIdx2_,Jet_muonIdx2_+bytes/sizeof(Jet_muonIdx2_[0]));
        loaded_Jet_muonIdx2_ = true;
    }
    return v_Jet_muonIdx2_;
}
const vector<float> &Nano::Jet_muonSubtrFactor() {
    if (!loaded_Jet_muonSubtrFactor_) {
        if (!b_Jet_muonSubtrFactor_) throw std::runtime_error("Jet_muonSubtrFactor branch doesn't exist");
        int bytes = b_Jet_muonSubtrFactor_->GetEntry(index);
        v_Jet_muonSubtrFactor_ = vector<float>(Jet_muonSubtrFactor_,Jet_muonSubtrFactor_+bytes/sizeof(Jet_muonSubtrFactor_[0]));
        loaded_Jet_muonSubtrFactor_ = true;
    }
    return v_Jet_muonSubtrFactor_;
}
const vector<int> &Nano::Jet_nConstituents() {
    if (!loaded_Jet_nConstituents_) {
        if (!b_Jet_nConstituents_) throw std::runtime_error("Jet_nConstituents branch doesn't exist");
        int bytes = b_Jet_nConstituents_->GetEntry(index);
        v_Jet_nConstituents_ = vector<int>(Jet_nConstituents_,Jet_nConstituents_+bytes/sizeof(Jet_nConstituents_[0]));
        loaded_Jet_nConstituents_ = true;
    }
    return v_Jet_nConstituents_;
}
const vector<int> &Nano::Jet_nElectrons() {
    if (!loaded_Jet_nElectrons_) {
        if (!b_Jet_nElectrons_) throw std::runtime_error("Jet_nElectrons branch doesn't exist");
        int bytes = b_Jet_nElectrons_->GetEntry(index);
        v_Jet_nElectrons_ = vector<int>(Jet_nElectrons_,Jet_nElectrons_+bytes/sizeof(Jet_nElectrons_[0]));
        loaded_Jet_nElectrons_ = true;
    }
    return v_Jet_nElectrons_;
}
const vector<int> &Nano::Jet_nMuons() {
    if (!loaded_Jet_nMuons_) {
        if (!b_Jet_nMuons_) throw std::runtime_error("Jet_nMuons branch doesn't exist");
        int bytes = b_Jet_nMuons_->GetEntry(index);
        v_Jet_nMuons_ = vector<int>(Jet_nMuons_,Jet_nMuons_+bytes/sizeof(Jet_nMuons_[0]));
        loaded_Jet_nMuons_ = true;
    }
    return v_Jet_nMuons_;
}
const vector<float> &Nano::Jet_neEmEF() {
    if (!loaded_Jet_neEmEF_) {
        if (!b_Jet_neEmEF_) throw std::runtime_error("Jet_neEmEF branch doesn't exist");
        int bytes = b_Jet_neEmEF_->GetEntry(index);
        v_Jet_neEmEF_ = vector<float>(Jet_neEmEF_,Jet_neEmEF_+bytes/sizeof(Jet_neEmEF_[0]));
        loaded_Jet_neEmEF_ = true;
    }
    return v_Jet_neEmEF_;
}
const vector<float> &Nano::Jet_neHEF() {
    if (!loaded_Jet_neHEF_) {
        if (!b_Jet_neHEF_) throw std::runtime_error("Jet_neHEF branch doesn't exist");
        int bytes = b_Jet_neHEF_->GetEntry(index);
        v_Jet_neHEF_ = vector<float>(Jet_neHEF_,Jet_neHEF_+bytes/sizeof(Jet_neHEF_[0]));
        loaded_Jet_neHEF_ = true;
    }
    return v_Jet_neHEF_;
}
const vector<LorentzVector> &Nano::Jet_p4() {
    if (!loaded_Jet_p4_) {
        v_Jet_p4_.clear();
        vector<float> pts = Nano::Jet_pt();
        vector<float> etas = Nano::Jet_eta();
        vector<float> phis = Nano::Jet_phi();
        vector<float> masses = Nano::Jet_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_Jet_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_Jet_p4_ = true;
    }
    return v_Jet_p4_;
}
const vector<int> &Nano::Jet_partonFlavour() {
    if (!loaded_Jet_partonFlavour_) {
        if (!b_Jet_partonFlavour_) throw std::runtime_error("Jet_partonFlavour branch doesn't exist");
        int bytes = b_Jet_partonFlavour_->GetEntry(index);
        v_Jet_partonFlavour_ = vector<int>(Jet_partonFlavour_,Jet_partonFlavour_+bytes/sizeof(Jet_partonFlavour_[0]));
        loaded_Jet_partonFlavour_ = true;
    }
    return v_Jet_partonFlavour_;
}
const vector<float> &Nano::Jet_phi() {
    if (!loaded_Jet_phi_) {
        if (!b_Jet_phi_) throw std::runtime_error("Jet_phi branch doesn't exist");
        int bytes = b_Jet_phi_->GetEntry(index);
        v_Jet_phi_ = vector<float>(Jet_phi_,Jet_phi_+bytes/sizeof(Jet_phi_[0]));
        loaded_Jet_phi_ = true;
    }
    return v_Jet_phi_;
}
const vector<float> &Nano::Jet_pt() {
    if (!loaded_Jet_pt_) {
        if (!b_Jet_pt_) throw std::runtime_error("Jet_pt branch doesn't exist");
        int bytes = b_Jet_pt_->GetEntry(index);
        v_Jet_pt_ = vector<float>(Jet_pt_,Jet_pt_+bytes/sizeof(Jet_pt_[0]));
        loaded_Jet_pt_ = true;
    }
    return v_Jet_pt_;
}
const vector<float> &Nano::Jet_pt_jerDown() {
    if (!loaded_Jet_pt_jerDown_) {
        if (!b_Jet_pt_jerDown_) throw std::runtime_error("Jet_pt_jerDown branch doesn't exist");
        int bytes = b_Jet_pt_jerDown_->GetEntry(index);
        v_Jet_pt_jerDown_ = vector<float>(Jet_pt_jerDown_,Jet_pt_jerDown_+bytes/sizeof(Jet_pt_jerDown_[0]));
        loaded_Jet_pt_jerDown_ = true;
    }
    return v_Jet_pt_jerDown_;
}
const vector<float> &Nano::Jet_pt_jerUp() {
    if (!loaded_Jet_pt_jerUp_) {
        if (!b_Jet_pt_jerUp_) throw std::runtime_error("Jet_pt_jerUp branch doesn't exist");
        int bytes = b_Jet_pt_jerUp_->GetEntry(index);
        v_Jet_pt_jerUp_ = vector<float>(Jet_pt_jerUp_,Jet_pt_jerUp_+bytes/sizeof(Jet_pt_jerUp_[0]));
        loaded_Jet_pt_jerUp_ = true;
    }
    return v_Jet_pt_jerUp_;
}
const vector<float> &Nano::Jet_pt_jesTotalDown() {
    if (!loaded_Jet_pt_jesTotalDown_) {
        if (!b_Jet_pt_jesTotalDown_) throw std::runtime_error("Jet_pt_jesTotalDown branch doesn't exist");
        int bytes = b_Jet_pt_jesTotalDown_->GetEntry(index);
        v_Jet_pt_jesTotalDown_ = vector<float>(Jet_pt_jesTotalDown_,Jet_pt_jesTotalDown_+bytes/sizeof(Jet_pt_jesTotalDown_[0]));
        loaded_Jet_pt_jesTotalDown_ = true;
    }
    return v_Jet_pt_jesTotalDown_;
}
const vector<float> &Nano::Jet_pt_jesTotalUp() {
    if (!loaded_Jet_pt_jesTotalUp_) {
        if (!b_Jet_pt_jesTotalUp_) throw std::runtime_error("Jet_pt_jesTotalUp branch doesn't exist");
        int bytes = b_Jet_pt_jesTotalUp_->GetEntry(index);
        v_Jet_pt_jesTotalUp_ = vector<float>(Jet_pt_jesTotalUp_,Jet_pt_jesTotalUp_+bytes/sizeof(Jet_pt_jesTotalUp_[0]));
        loaded_Jet_pt_jesTotalUp_ = true;
    }
    return v_Jet_pt_jesTotalUp_;
}
const vector<float> &Nano::Jet_pt_nom() {
    if (!loaded_Jet_pt_nom_) {
        if (!b_Jet_pt_nom_) throw std::runtime_error("Jet_pt_nom branch doesn't exist");
        int bytes = b_Jet_pt_nom_->GetEntry(index);
        v_Jet_pt_nom_ = vector<float>(Jet_pt_nom_,Jet_pt_nom_+bytes/sizeof(Jet_pt_nom_[0]));
        loaded_Jet_pt_nom_ = true;
    }
    return v_Jet_pt_nom_;
}
const vector<float> &Nano::Jet_pt_raw() {
    if (!loaded_Jet_pt_raw_) {
        if (!b_Jet_pt_raw_) throw std::runtime_error("Jet_pt_raw branch doesn't exist");
        int bytes = b_Jet_pt_raw_->GetEntry(index);
        v_Jet_pt_raw_ = vector<float>(Jet_pt_raw_,Jet_pt_raw_+bytes/sizeof(Jet_pt_raw_[0]));
        loaded_Jet_pt_raw_ = true;
    }
    return v_Jet_pt_raw_;
}
const vector<int> &Nano::Jet_puId() {
    if (!loaded_Jet_puId_) {
        if (!b_Jet_puId_) throw std::runtime_error("Jet_puId branch doesn't exist");
        int bytes = b_Jet_puId_->GetEntry(index);
        v_Jet_puId_ = vector<int>(Jet_puId_,Jet_puId_+bytes/sizeof(Jet_puId_[0]));
        loaded_Jet_puId_ = true;
    }
    return v_Jet_puId_;
}
const vector<float> &Nano::Jet_puIdDisc() {
    if (!loaded_Jet_puIdDisc_) {
        if (!b_Jet_puIdDisc_) throw std::runtime_error("Jet_puIdDisc branch doesn't exist");
        int bytes = b_Jet_puIdDisc_->GetEntry(index);
        v_Jet_puIdDisc_ = vector<float>(Jet_puIdDisc_,Jet_puIdDisc_+bytes/sizeof(Jet_puIdDisc_[0]));
        loaded_Jet_puIdDisc_ = true;
    }
    return v_Jet_puIdDisc_;
}
const vector<float> &Nano::Jet_qgl() {
    if (!loaded_Jet_qgl_) {
        if (!b_Jet_qgl_) throw std::runtime_error("Jet_qgl branch doesn't exist");
        int bytes = b_Jet_qgl_->GetEntry(index);
        v_Jet_qgl_ = vector<float>(Jet_qgl_,Jet_qgl_+bytes/sizeof(Jet_qgl_[0]));
        loaded_Jet_qgl_ = true;
    }
    return v_Jet_qgl_;
}
const vector<float> &Nano::Jet_rawFactor() {
    if (!loaded_Jet_rawFactor_) {
        if (!b_Jet_rawFactor_) throw std::runtime_error("Jet_rawFactor branch doesn't exist");
        int bytes = b_Jet_rawFactor_->GetEntry(index);
        v_Jet_rawFactor_ = vector<float>(Jet_rawFactor_,Jet_rawFactor_+bytes/sizeof(Jet_rawFactor_[0]));
        loaded_Jet_rawFactor_ = true;
    }
    return v_Jet_rawFactor_;
}
const vector<float> &Nano::LHEPart_eta() {
    if (!loaded_LHEPart_eta_) {
        if (!b_LHEPart_eta_) throw std::runtime_error("LHEPart_eta branch doesn't exist");
        int bytes = b_LHEPart_eta_->GetEntry(index);
        v_LHEPart_eta_ = vector<float>(LHEPart_eta_,LHEPart_eta_+bytes/sizeof(LHEPart_eta_[0]));
        loaded_LHEPart_eta_ = true;
    }
    return v_LHEPart_eta_;
}
const vector<float> &Nano::LHEPart_incomingpz() {
    if (!loaded_LHEPart_incomingpz_) {
        if (!b_LHEPart_incomingpz_) throw std::runtime_error("LHEPart_incomingpz branch doesn't exist");
        int bytes = b_LHEPart_incomingpz_->GetEntry(index);
        v_LHEPart_incomingpz_ = vector<float>(LHEPart_incomingpz_,LHEPart_incomingpz_+bytes/sizeof(LHEPart_incomingpz_[0]));
        loaded_LHEPart_incomingpz_ = true;
    }
    return v_LHEPart_incomingpz_;
}
const vector<float> &Nano::LHEPart_mass() {
    if (!loaded_LHEPart_mass_) {
        if (!b_LHEPart_mass_) throw std::runtime_error("LHEPart_mass branch doesn't exist");
        int bytes = b_LHEPart_mass_->GetEntry(index);
        v_LHEPart_mass_ = vector<float>(LHEPart_mass_,LHEPart_mass_+bytes/sizeof(LHEPart_mass_[0]));
        loaded_LHEPart_mass_ = true;
    }
    return v_LHEPart_mass_;
}
const vector<LorentzVector> &Nano::LHEPart_p4() {
    if (!loaded_LHEPart_p4_) {
        v_LHEPart_p4_.clear();
        vector<float> pts = Nano::LHEPart_pt();
        vector<float> etas = Nano::LHEPart_eta();
        vector<float> phis = Nano::LHEPart_phi();
        vector<float> masses = Nano::LHEPart_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_LHEPart_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_LHEPart_p4_ = true;
    }
    return v_LHEPart_p4_;
}
const vector<int> &Nano::LHEPart_pdgId() {
    if (!loaded_LHEPart_pdgId_) {
        if (!b_LHEPart_pdgId_) throw std::runtime_error("LHEPart_pdgId branch doesn't exist");
        int bytes = b_LHEPart_pdgId_->GetEntry(index);
        v_LHEPart_pdgId_ = vector<int>(LHEPart_pdgId_,LHEPart_pdgId_+bytes/sizeof(LHEPart_pdgId_[0]));
        loaded_LHEPart_pdgId_ = true;
    }
    return v_LHEPart_pdgId_;
}
const vector<float> &Nano::LHEPart_phi() {
    if (!loaded_LHEPart_phi_) {
        if (!b_LHEPart_phi_) throw std::runtime_error("LHEPart_phi branch doesn't exist");
        int bytes = b_LHEPart_phi_->GetEntry(index);
        v_LHEPart_phi_ = vector<float>(LHEPart_phi_,LHEPart_phi_+bytes/sizeof(LHEPart_phi_[0]));
        loaded_LHEPart_phi_ = true;
    }
    return v_LHEPart_phi_;
}
const vector<float> &Nano::LHEPart_pt() {
    if (!loaded_LHEPart_pt_) {
        if (!b_LHEPart_pt_) throw std::runtime_error("LHEPart_pt branch doesn't exist");
        int bytes = b_LHEPart_pt_->GetEntry(index);
        v_LHEPart_pt_ = vector<float>(LHEPart_pt_,LHEPart_pt_+bytes/sizeof(LHEPart_pt_[0]));
        loaded_LHEPart_pt_ = true;
    }
    return v_LHEPart_pt_;
}
const vector<int> &Nano::LHEPart_spin() {
    if (!loaded_LHEPart_spin_) {
        if (!b_LHEPart_spin_) throw std::runtime_error("LHEPart_spin branch doesn't exist");
        int bytes = b_LHEPart_spin_->GetEntry(index);
        v_LHEPart_spin_ = vector<int>(LHEPart_spin_,LHEPart_spin_+bytes/sizeof(LHEPart_spin_[0]));
        loaded_LHEPart_spin_ = true;
    }
    return v_LHEPart_spin_;
}
const vector<int> &Nano::LHEPart_status() {
    if (!loaded_LHEPart_status_) {
        if (!b_LHEPart_status_) throw std::runtime_error("LHEPart_status branch doesn't exist");
        int bytes = b_LHEPart_status_->GetEntry(index);
        v_LHEPart_status_ = vector<int>(LHEPart_status_,LHEPart_status_+bytes/sizeof(LHEPart_status_[0]));
        loaded_LHEPart_status_ = true;
    }
    return v_LHEPart_status_;
}
const vector<float> &Nano::LHEPdfWeight() {
    if (!loaded_LHEPdfWeight_) {
        if (!b_LHEPdfWeight_) throw std::runtime_error("LHEPdfWeight branch doesn't exist");
        int bytes = b_LHEPdfWeight_->GetEntry(index);
        v_LHEPdfWeight_ = vector<float>(LHEPdfWeight_,LHEPdfWeight_+bytes/sizeof(LHEPdfWeight_[0]));
        loaded_LHEPdfWeight_ = true;
    }
    return v_LHEPdfWeight_;
}
const vector<float> &Nano::LHEReweightingWeight() {
    if (!loaded_LHEReweightingWeight_) {
        if (!b_LHEReweightingWeight_) throw std::runtime_error("LHEReweightingWeight branch doesn't exist");
        int bytes = b_LHEReweightingWeight_->GetEntry(index);
        v_LHEReweightingWeight_ = vector<float>(LHEReweightingWeight_,LHEReweightingWeight_+bytes/sizeof(LHEReweightingWeight_[0]));
        loaded_LHEReweightingWeight_ = true;
    }
    return v_LHEReweightingWeight_;
}
const vector<float> &Nano::LHEScaleWeight() {
    if (!loaded_LHEScaleWeight_) {
        if (!b_LHEScaleWeight_) throw std::runtime_error("LHEScaleWeight branch doesn't exist");
        int bytes = b_LHEScaleWeight_->GetEntry(index);
        v_LHEScaleWeight_ = vector<float>(LHEScaleWeight_,LHEScaleWeight_+bytes/sizeof(LHEScaleWeight_[0]));
        loaded_LHEScaleWeight_ = true;
    }
    return v_LHEScaleWeight_;
}
const float &Nano::LHEWeight_originalXWGTUP() {
    if (!loaded_LHEWeight_originalXWGTUP_) {
        if (!b_LHEWeight_originalXWGTUP_) throw std::runtime_error("LHEWeight_originalXWGTUP branch doesn't exist");
        b_LHEWeight_originalXWGTUP_->GetEntry(index);
        loaded_LHEWeight_originalXWGTUP_ = true;
    }
    return LHEWeight_originalXWGTUP_;
}
const float &Nano::LHE_AlphaS() {
    if (!loaded_LHE_AlphaS_) {
        if (!b_LHE_AlphaS_) throw std::runtime_error("LHE_AlphaS branch doesn't exist");
        b_LHE_AlphaS_->GetEntry(index);
        loaded_LHE_AlphaS_ = true;
    }
    return LHE_AlphaS_;
}
const float &Nano::LHE_HT() {
    if (!loaded_LHE_HT_) {
        if (!b_LHE_HT_) throw std::runtime_error("LHE_HT branch doesn't exist");
        b_LHE_HT_->GetEntry(index);
        loaded_LHE_HT_ = true;
    }
    return LHE_HT_;
}
const float &Nano::LHE_HTIncoming() {
    if (!loaded_LHE_HTIncoming_) {
        if (!b_LHE_HTIncoming_) throw std::runtime_error("LHE_HTIncoming branch doesn't exist");
        b_LHE_HTIncoming_->GetEntry(index);
        loaded_LHE_HTIncoming_ = true;
    }
    return LHE_HTIncoming_;
}
const UChar_t &Nano::LHE_Nb() {
    if (!loaded_LHE_Nb_) {
        if (!b_LHE_Nb_) throw std::runtime_error("LHE_Nb branch doesn't exist");
        b_LHE_Nb_->GetEntry(index);
        loaded_LHE_Nb_ = true;
    }
    return LHE_Nb_;
}
const UChar_t &Nano::LHE_Nc() {
    if (!loaded_LHE_Nc_) {
        if (!b_LHE_Nc_) throw std::runtime_error("LHE_Nc branch doesn't exist");
        b_LHE_Nc_->GetEntry(index);
        loaded_LHE_Nc_ = true;
    }
    return LHE_Nc_;
}
const UChar_t &Nano::LHE_Nglu() {
    if (!loaded_LHE_Nglu_) {
        if (!b_LHE_Nglu_) throw std::runtime_error("LHE_Nglu branch doesn't exist");
        b_LHE_Nglu_->GetEntry(index);
        loaded_LHE_Nglu_ = true;
    }
    return LHE_Nglu_;
}
const UChar_t &Nano::LHE_Njets() {
    if (!loaded_LHE_Njets_) {
        if (!b_LHE_Njets_) throw std::runtime_error("LHE_Njets branch doesn't exist");
        b_LHE_Njets_->GetEntry(index);
        loaded_LHE_Njets_ = true;
    }
    return LHE_Njets_;
}
const UChar_t &Nano::LHE_NpLO() {
    if (!loaded_LHE_NpLO_) {
        if (!b_LHE_NpLO_) throw std::runtime_error("LHE_NpLO branch doesn't exist");
        b_LHE_NpLO_->GetEntry(index);
        loaded_LHE_NpLO_ = true;
    }
    return LHE_NpLO_;
}
const UChar_t &Nano::LHE_NpNLO() {
    if (!loaded_LHE_NpNLO_) {
        if (!b_LHE_NpNLO_) throw std::runtime_error("LHE_NpNLO branch doesn't exist");
        b_LHE_NpNLO_->GetEntry(index);
        loaded_LHE_NpNLO_ = true;
    }
    return LHE_NpNLO_;
}
const UChar_t &Nano::LHE_Nuds() {
    if (!loaded_LHE_Nuds_) {
        if (!b_LHE_Nuds_) throw std::runtime_error("LHE_Nuds branch doesn't exist");
        b_LHE_Nuds_->GetEntry(index);
        loaded_LHE_Nuds_ = true;
    }
    return LHE_Nuds_;
}
const float &Nano::LHE_Vpt() {
    if (!loaded_LHE_Vpt_) {
        if (!b_LHE_Vpt_) throw std::runtime_error("LHE_Vpt branch doesn't exist");
        b_LHE_Vpt_->GetEntry(index);
        loaded_LHE_Vpt_ = true;
    }
    return LHE_Vpt_;
}
const float &Nano::METFixEE2017_MetUnclustEnUpDeltaX() {
    if (!loaded_METFixEE2017_MetUnclustEnUpDeltaX_) {
        if (!b_METFixEE2017_MetUnclustEnUpDeltaX_) throw std::runtime_error("METFixEE2017_MetUnclustEnUpDeltaX branch doesn't exist");
        b_METFixEE2017_MetUnclustEnUpDeltaX_->GetEntry(index);
        loaded_METFixEE2017_MetUnclustEnUpDeltaX_ = true;
    }
    return METFixEE2017_MetUnclustEnUpDeltaX_;
}
const float &Nano::METFixEE2017_MetUnclustEnUpDeltaY() {
    if (!loaded_METFixEE2017_MetUnclustEnUpDeltaY_) {
        if (!b_METFixEE2017_MetUnclustEnUpDeltaY_) throw std::runtime_error("METFixEE2017_MetUnclustEnUpDeltaY branch doesn't exist");
        b_METFixEE2017_MetUnclustEnUpDeltaY_->GetEntry(index);
        loaded_METFixEE2017_MetUnclustEnUpDeltaY_ = true;
    }
    return METFixEE2017_MetUnclustEnUpDeltaY_;
}
const float &Nano::METFixEE2017_covXX() {
    if (!loaded_METFixEE2017_covXX_) {
        if (!b_METFixEE2017_covXX_) throw std::runtime_error("METFixEE2017_covXX branch doesn't exist");
        b_METFixEE2017_covXX_->GetEntry(index);
        loaded_METFixEE2017_covXX_ = true;
    }
    return METFixEE2017_covXX_;
}
const float &Nano::METFixEE2017_covXY() {
    if (!loaded_METFixEE2017_covXY_) {
        if (!b_METFixEE2017_covXY_) throw std::runtime_error("METFixEE2017_covXY branch doesn't exist");
        b_METFixEE2017_covXY_->GetEntry(index);
        loaded_METFixEE2017_covXY_ = true;
    }
    return METFixEE2017_covXY_;
}
const float &Nano::METFixEE2017_covYY() {
    if (!loaded_METFixEE2017_covYY_) {
        if (!b_METFixEE2017_covYY_) throw std::runtime_error("METFixEE2017_covYY branch doesn't exist");
        b_METFixEE2017_covYY_->GetEntry(index);
        loaded_METFixEE2017_covYY_ = true;
    }
    return METFixEE2017_covYY_;
}
const float &Nano::METFixEE2017_phi() {
    if (!loaded_METFixEE2017_phi_) {
        if (!b_METFixEE2017_phi_) throw std::runtime_error("METFixEE2017_phi branch doesn't exist");
        b_METFixEE2017_phi_->GetEntry(index);
        loaded_METFixEE2017_phi_ = true;
    }
    return METFixEE2017_phi_;
}
const float &Nano::METFixEE2017_pt() {
    if (!loaded_METFixEE2017_pt_) {
        if (!b_METFixEE2017_pt_) throw std::runtime_error("METFixEE2017_pt branch doesn't exist");
        b_METFixEE2017_pt_->GetEntry(index);
        loaded_METFixEE2017_pt_ = true;
    }
    return METFixEE2017_pt_;
}
const float &Nano::METFixEE2017_significance() {
    if (!loaded_METFixEE2017_significance_) {
        if (!b_METFixEE2017_significance_) throw std::runtime_error("METFixEE2017_significance branch doesn't exist");
        b_METFixEE2017_significance_->GetEntry(index);
        loaded_METFixEE2017_significance_ = true;
    }
    return METFixEE2017_significance_;
}
const float &Nano::METFixEE2017_sumEt() {
    if (!loaded_METFixEE2017_sumEt_) {
        if (!b_METFixEE2017_sumEt_) throw std::runtime_error("METFixEE2017_sumEt branch doesn't exist");
        b_METFixEE2017_sumEt_->GetEntry(index);
        loaded_METFixEE2017_sumEt_ = true;
    }
    return METFixEE2017_sumEt_;
}
const float &Nano::METFixEE2017_sumPtUnclustered() {
    if (!loaded_METFixEE2017_sumPtUnclustered_) {
        if (!b_METFixEE2017_sumPtUnclustered_) throw std::runtime_error("METFixEE2017_sumPtUnclustered branch doesn't exist");
        b_METFixEE2017_sumPtUnclustered_->GetEntry(index);
        loaded_METFixEE2017_sumPtUnclustered_ = true;
    }
    return METFixEE2017_sumPtUnclustered_;
}
const float &Nano::MET_MetUnclustEnUpDeltaX() {
    if (!loaded_MET_MetUnclustEnUpDeltaX_) {
        if (!b_MET_MetUnclustEnUpDeltaX_) throw std::runtime_error("MET_MetUnclustEnUpDeltaX branch doesn't exist");
        b_MET_MetUnclustEnUpDeltaX_->GetEntry(index);
        loaded_MET_MetUnclustEnUpDeltaX_ = true;
    }
    return MET_MetUnclustEnUpDeltaX_;
}
const float &Nano::MET_MetUnclustEnUpDeltaY() {
    if (!loaded_MET_MetUnclustEnUpDeltaY_) {
        if (!b_MET_MetUnclustEnUpDeltaY_) throw std::runtime_error("MET_MetUnclustEnUpDeltaY branch doesn't exist");
        b_MET_MetUnclustEnUpDeltaY_->GetEntry(index);
        loaded_MET_MetUnclustEnUpDeltaY_ = true;
    }
    return MET_MetUnclustEnUpDeltaY_;
}
const float &Nano::MET_T1Smear_phi() {
    if (!loaded_MET_T1Smear_phi_) {
        if (!b_MET_T1Smear_phi_) throw std::runtime_error("MET_T1Smear_phi branch doesn't exist");
        b_MET_T1Smear_phi_->GetEntry(index);
        loaded_MET_T1Smear_phi_ = true;
    }
    return MET_T1Smear_phi_;
}
const float &Nano::MET_T1Smear_phi_jerDown() {
    if (!loaded_MET_T1Smear_phi_jerDown_) {
        if (!b_MET_T1Smear_phi_jerDown_) throw std::runtime_error("MET_T1Smear_phi_jerDown branch doesn't exist");
        b_MET_T1Smear_phi_jerDown_->GetEntry(index);
        loaded_MET_T1Smear_phi_jerDown_ = true;
    }
    return MET_T1Smear_phi_jerDown_;
}
const float &Nano::MET_T1Smear_phi_jerUp() {
    if (!loaded_MET_T1Smear_phi_jerUp_) {
        if (!b_MET_T1Smear_phi_jerUp_) throw std::runtime_error("MET_T1Smear_phi_jerUp branch doesn't exist");
        b_MET_T1Smear_phi_jerUp_->GetEntry(index);
        loaded_MET_T1Smear_phi_jerUp_ = true;
    }
    return MET_T1Smear_phi_jerUp_;
}
const float &Nano::MET_T1Smear_phi_jesTotalDown() {
    if (!loaded_MET_T1Smear_phi_jesTotalDown_) {
        if (!b_MET_T1Smear_phi_jesTotalDown_) throw std::runtime_error("MET_T1Smear_phi_jesTotalDown branch doesn't exist");
        b_MET_T1Smear_phi_jesTotalDown_->GetEntry(index);
        loaded_MET_T1Smear_phi_jesTotalDown_ = true;
    }
    return MET_T1Smear_phi_jesTotalDown_;
}
const float &Nano::MET_T1Smear_phi_jesTotalUp() {
    if (!loaded_MET_T1Smear_phi_jesTotalUp_) {
        if (!b_MET_T1Smear_phi_jesTotalUp_) throw std::runtime_error("MET_T1Smear_phi_jesTotalUp branch doesn't exist");
        b_MET_T1Smear_phi_jesTotalUp_->GetEntry(index);
        loaded_MET_T1Smear_phi_jesTotalUp_ = true;
    }
    return MET_T1Smear_phi_jesTotalUp_;
}
const float &Nano::MET_T1Smear_pt() {
    if (!loaded_MET_T1Smear_pt_) {
        if (!b_MET_T1Smear_pt_) throw std::runtime_error("MET_T1Smear_pt branch doesn't exist");
        b_MET_T1Smear_pt_->GetEntry(index);
        loaded_MET_T1Smear_pt_ = true;
    }
    return MET_T1Smear_pt_;
}
const float &Nano::MET_T1Smear_pt_jerDown() {
    if (!loaded_MET_T1Smear_pt_jerDown_) {
        if (!b_MET_T1Smear_pt_jerDown_) throw std::runtime_error("MET_T1Smear_pt_jerDown branch doesn't exist");
        b_MET_T1Smear_pt_jerDown_->GetEntry(index);
        loaded_MET_T1Smear_pt_jerDown_ = true;
    }
    return MET_T1Smear_pt_jerDown_;
}
const float &Nano::MET_T1Smear_pt_jerUp() {
    if (!loaded_MET_T1Smear_pt_jerUp_) {
        if (!b_MET_T1Smear_pt_jerUp_) throw std::runtime_error("MET_T1Smear_pt_jerUp branch doesn't exist");
        b_MET_T1Smear_pt_jerUp_->GetEntry(index);
        loaded_MET_T1Smear_pt_jerUp_ = true;
    }
    return MET_T1Smear_pt_jerUp_;
}
const float &Nano::MET_T1Smear_pt_jesTotalDown() {
    if (!loaded_MET_T1Smear_pt_jesTotalDown_) {
        if (!b_MET_T1Smear_pt_jesTotalDown_) throw std::runtime_error("MET_T1Smear_pt_jesTotalDown branch doesn't exist");
        b_MET_T1Smear_pt_jesTotalDown_->GetEntry(index);
        loaded_MET_T1Smear_pt_jesTotalDown_ = true;
    }
    return MET_T1Smear_pt_jesTotalDown_;
}
const float &Nano::MET_T1Smear_pt_jesTotalUp() {
    if (!loaded_MET_T1Smear_pt_jesTotalUp_) {
        if (!b_MET_T1Smear_pt_jesTotalUp_) throw std::runtime_error("MET_T1Smear_pt_jesTotalUp branch doesn't exist");
        b_MET_T1Smear_pt_jesTotalUp_->GetEntry(index);
        loaded_MET_T1Smear_pt_jesTotalUp_ = true;
    }
    return MET_T1Smear_pt_jesTotalUp_;
}
const float &Nano::MET_T1_phi() {
    if (!loaded_MET_T1_phi_) {
        if (!b_MET_T1_phi_) throw std::runtime_error("MET_T1_phi branch doesn't exist");
        b_MET_T1_phi_->GetEntry(index);
        loaded_MET_T1_phi_ = true;
    }
    return MET_T1_phi_;
}
const float &Nano::MET_T1_phi_jerDown() {
    if (!loaded_MET_T1_phi_jerDown_) {
        if (!b_MET_T1_phi_jerDown_) throw std::runtime_error("MET_T1_phi_jerDown branch doesn't exist");
        b_MET_T1_phi_jerDown_->GetEntry(index);
        loaded_MET_T1_phi_jerDown_ = true;
    }
    return MET_T1_phi_jerDown_;
}
const float &Nano::MET_T1_phi_jerUp() {
    if (!loaded_MET_T1_phi_jerUp_) {
        if (!b_MET_T1_phi_jerUp_) throw std::runtime_error("MET_T1_phi_jerUp branch doesn't exist");
        b_MET_T1_phi_jerUp_->GetEntry(index);
        loaded_MET_T1_phi_jerUp_ = true;
    }
    return MET_T1_phi_jerUp_;
}
const float &Nano::MET_T1_phi_jesTotalDown() {
    if (!loaded_MET_T1_phi_jesTotalDown_) {
        if (!b_MET_T1_phi_jesTotalDown_) throw std::runtime_error("MET_T1_phi_jesTotalDown branch doesn't exist");
        b_MET_T1_phi_jesTotalDown_->GetEntry(index);
        loaded_MET_T1_phi_jesTotalDown_ = true;
    }
    return MET_T1_phi_jesTotalDown_;
}
const float &Nano::MET_T1_phi_jesTotalUp() {
    if (!loaded_MET_T1_phi_jesTotalUp_) {
        if (!b_MET_T1_phi_jesTotalUp_) throw std::runtime_error("MET_T1_phi_jesTotalUp branch doesn't exist");
        b_MET_T1_phi_jesTotalUp_->GetEntry(index);
        loaded_MET_T1_phi_jesTotalUp_ = true;
    }
    return MET_T1_phi_jesTotalUp_;
}
const float &Nano::MET_T1_pt() {
    if (!loaded_MET_T1_pt_) {
        if (!b_MET_T1_pt_) throw std::runtime_error("MET_T1_pt branch doesn't exist");
        b_MET_T1_pt_->GetEntry(index);
        loaded_MET_T1_pt_ = true;
    }
    return MET_T1_pt_;
}
const float &Nano::MET_T1_pt_jerDown() {
    if (!loaded_MET_T1_pt_jerDown_) {
        if (!b_MET_T1_pt_jerDown_) throw std::runtime_error("MET_T1_pt_jerDown branch doesn't exist");
        b_MET_T1_pt_jerDown_->GetEntry(index);
        loaded_MET_T1_pt_jerDown_ = true;
    }
    return MET_T1_pt_jerDown_;
}
const float &Nano::MET_T1_pt_jerUp() {
    if (!loaded_MET_T1_pt_jerUp_) {
        if (!b_MET_T1_pt_jerUp_) throw std::runtime_error("MET_T1_pt_jerUp branch doesn't exist");
        b_MET_T1_pt_jerUp_->GetEntry(index);
        loaded_MET_T1_pt_jerUp_ = true;
    }
    return MET_T1_pt_jerUp_;
}
const float &Nano::MET_T1_pt_jesTotalDown() {
    if (!loaded_MET_T1_pt_jesTotalDown_) {
        if (!b_MET_T1_pt_jesTotalDown_) throw std::runtime_error("MET_T1_pt_jesTotalDown branch doesn't exist");
        b_MET_T1_pt_jesTotalDown_->GetEntry(index);
        loaded_MET_T1_pt_jesTotalDown_ = true;
    }
    return MET_T1_pt_jesTotalDown_;
}
const float &Nano::MET_T1_pt_jesTotalUp() {
    if (!loaded_MET_T1_pt_jesTotalUp_) {
        if (!b_MET_T1_pt_jesTotalUp_) throw std::runtime_error("MET_T1_pt_jesTotalUp branch doesn't exist");
        b_MET_T1_pt_jesTotalUp_->GetEntry(index);
        loaded_MET_T1_pt_jesTotalUp_ = true;
    }
    return MET_T1_pt_jesTotalUp_;
}
const float &Nano::MET_covXX() {
    if (!loaded_MET_covXX_) {
        if (!b_MET_covXX_) throw std::runtime_error("MET_covXX branch doesn't exist");
        b_MET_covXX_->GetEntry(index);
        loaded_MET_covXX_ = true;
    }
    return MET_covXX_;
}
const float &Nano::MET_covXY() {
    if (!loaded_MET_covXY_) {
        if (!b_MET_covXY_) throw std::runtime_error("MET_covXY branch doesn't exist");
        b_MET_covXY_->GetEntry(index);
        loaded_MET_covXY_ = true;
    }
    return MET_covXY_;
}
const float &Nano::MET_covYY() {
    if (!loaded_MET_covYY_) {
        if (!b_MET_covYY_) throw std::runtime_error("MET_covYY branch doesn't exist");
        b_MET_covYY_->GetEntry(index);
        loaded_MET_covYY_ = true;
    }
    return MET_covYY_;
}
const float &Nano::MET_fiducialGenPhi() {
    if (!loaded_MET_fiducialGenPhi_) {
        if (!b_MET_fiducialGenPhi_) throw std::runtime_error("MET_fiducialGenPhi branch doesn't exist");
        b_MET_fiducialGenPhi_->GetEntry(index);
        loaded_MET_fiducialGenPhi_ = true;
    }
    return MET_fiducialGenPhi_;
}
const float &Nano::MET_fiducialGenPt() {
    if (!loaded_MET_fiducialGenPt_) {
        if (!b_MET_fiducialGenPt_) throw std::runtime_error("MET_fiducialGenPt branch doesn't exist");
        b_MET_fiducialGenPt_->GetEntry(index);
        loaded_MET_fiducialGenPt_ = true;
    }
    return MET_fiducialGenPt_;
}
const float &Nano::MET_phi() {
    if (!loaded_MET_phi_) {
        if (!b_MET_phi_) throw std::runtime_error("MET_phi branch doesn't exist");
        b_MET_phi_->GetEntry(index);
        loaded_MET_phi_ = true;
    }
    return MET_phi_;
}
const float &Nano::MET_phi_unclustEnDown() {
    if (!loaded_MET_phi_unclustEnDown_) {
        if (!b_MET_phi_unclustEnDown_) throw std::runtime_error("MET_phi_unclustEnDown branch doesn't exist");
        b_MET_phi_unclustEnDown_->GetEntry(index);
        loaded_MET_phi_unclustEnDown_ = true;
    }
    return MET_phi_unclustEnDown_;
}
const float &Nano::MET_phi_unclustEnUp() {
    if (!loaded_MET_phi_unclustEnUp_) {
        if (!b_MET_phi_unclustEnUp_) throw std::runtime_error("MET_phi_unclustEnUp branch doesn't exist");
        b_MET_phi_unclustEnUp_->GetEntry(index);
        loaded_MET_phi_unclustEnUp_ = true;
    }
    return MET_phi_unclustEnUp_;
}
const float &Nano::MET_pt() {
    if (!loaded_MET_pt_) {
        if (!b_MET_pt_) throw std::runtime_error("MET_pt branch doesn't exist");
        b_MET_pt_->GetEntry(index);
        loaded_MET_pt_ = true;
    }
    return MET_pt_;
}
const float &Nano::MET_pt_unclustEnDown() {
    if (!loaded_MET_pt_unclustEnDown_) {
        if (!b_MET_pt_unclustEnDown_) throw std::runtime_error("MET_pt_unclustEnDown branch doesn't exist");
        b_MET_pt_unclustEnDown_->GetEntry(index);
        loaded_MET_pt_unclustEnDown_ = true;
    }
    return MET_pt_unclustEnDown_;
}
const float &Nano::MET_pt_unclustEnUp() {
    if (!loaded_MET_pt_unclustEnUp_) {
        if (!b_MET_pt_unclustEnUp_) throw std::runtime_error("MET_pt_unclustEnUp branch doesn't exist");
        b_MET_pt_unclustEnUp_->GetEntry(index);
        loaded_MET_pt_unclustEnUp_ = true;
    }
    return MET_pt_unclustEnUp_;
}
const float &Nano::MET_significance() {
    if (!loaded_MET_significance_) {
        if (!b_MET_significance_) throw std::runtime_error("MET_significance branch doesn't exist");
        b_MET_significance_->GetEntry(index);
        loaded_MET_significance_ = true;
    }
    return MET_significance_;
}
const float &Nano::MET_sumEt() {
    if (!loaded_MET_sumEt_) {
        if (!b_MET_sumEt_) throw std::runtime_error("MET_sumEt branch doesn't exist");
        b_MET_sumEt_->GetEntry(index);
        loaded_MET_sumEt_ = true;
    }
    return MET_sumEt_;
}
const float &Nano::MET_sumPtUnclustered() {
    if (!loaded_MET_sumPtUnclustered_) {
        if (!b_MET_sumPtUnclustered_) throw std::runtime_error("MET_sumPtUnclustered branch doesn't exist");
        b_MET_sumPtUnclustered_->GetEntry(index);
        loaded_MET_sumPtUnclustered_ = true;
    }
    return MET_sumPtUnclustered_;
}
const vector<int> &Nano::Muon_charge() {
    if (!loaded_Muon_charge_) {
        if (!b_Muon_charge_) throw std::runtime_error("Muon_charge branch doesn't exist");
        int bytes = b_Muon_charge_->GetEntry(index);
        v_Muon_charge_ = vector<int>(Muon_charge_,Muon_charge_+bytes/sizeof(Muon_charge_[0]));
        loaded_Muon_charge_ = true;
    }
    return v_Muon_charge_;
}
const vector<UChar_t> &Nano::Muon_cleanmask() {
    if (!loaded_Muon_cleanmask_) {
        if (!b_Muon_cleanmask_) throw std::runtime_error("Muon_cleanmask branch doesn't exist");
        int bytes = b_Muon_cleanmask_->GetEntry(index);
        v_Muon_cleanmask_ = vector<UChar_t>(Muon_cleanmask_,Muon_cleanmask_+bytes/sizeof(Muon_cleanmask_[0]));
        loaded_Muon_cleanmask_ = true;
    }
    return v_Muon_cleanmask_;
}
const vector<float> &Nano::Muon_correctedDown_pt() {
    if (!loaded_Muon_correctedDown_pt_) {
        if (!b_Muon_correctedDown_pt_) throw std::runtime_error("Muon_correctedDown_pt branch doesn't exist");
        int bytes = b_Muon_correctedDown_pt_->GetEntry(index);
        v_Muon_correctedDown_pt_ = vector<float>(Muon_correctedDown_pt_,Muon_correctedDown_pt_+bytes/sizeof(Muon_correctedDown_pt_[0]));
        loaded_Muon_correctedDown_pt_ = true;
    }
    return v_Muon_correctedDown_pt_;
}
const vector<float> &Nano::Muon_correctedUp_pt() {
    if (!loaded_Muon_correctedUp_pt_) {
        if (!b_Muon_correctedUp_pt_) throw std::runtime_error("Muon_correctedUp_pt branch doesn't exist");
        int bytes = b_Muon_correctedUp_pt_->GetEntry(index);
        v_Muon_correctedUp_pt_ = vector<float>(Muon_correctedUp_pt_,Muon_correctedUp_pt_+bytes/sizeof(Muon_correctedUp_pt_[0]));
        loaded_Muon_correctedUp_pt_ = true;
    }
    return v_Muon_correctedUp_pt_;
}
const vector<float> &Nano::Muon_corrected_pt() {
    if (!loaded_Muon_corrected_pt_) {
        if (!b_Muon_corrected_pt_) throw std::runtime_error("Muon_corrected_pt branch doesn't exist");
        int bytes = b_Muon_corrected_pt_->GetEntry(index);
        v_Muon_corrected_pt_ = vector<float>(Muon_corrected_pt_,Muon_corrected_pt_+bytes/sizeof(Muon_corrected_pt_[0]));
        loaded_Muon_corrected_pt_ = true;
    }
    return v_Muon_corrected_pt_;
}
const vector<float> &Nano::Muon_dxy() {
    if (!loaded_Muon_dxy_) {
        if (!b_Muon_dxy_) throw std::runtime_error("Muon_dxy branch doesn't exist");
        int bytes = b_Muon_dxy_->GetEntry(index);
        v_Muon_dxy_ = vector<float>(Muon_dxy_,Muon_dxy_+bytes/sizeof(Muon_dxy_[0]));
        loaded_Muon_dxy_ = true;
    }
    return v_Muon_dxy_;
}
const vector<float> &Nano::Muon_dxyErr() {
    if (!loaded_Muon_dxyErr_) {
        if (!b_Muon_dxyErr_) throw std::runtime_error("Muon_dxyErr branch doesn't exist");
        int bytes = b_Muon_dxyErr_->GetEntry(index);
        v_Muon_dxyErr_ = vector<float>(Muon_dxyErr_,Muon_dxyErr_+bytes/sizeof(Muon_dxyErr_[0]));
        loaded_Muon_dxyErr_ = true;
    }
    return v_Muon_dxyErr_;
}
const vector<float> &Nano::Muon_dxybs() {
    if (!loaded_Muon_dxybs_) {
        if (!b_Muon_dxybs_) throw std::runtime_error("Muon_dxybs branch doesn't exist");
        int bytes = b_Muon_dxybs_->GetEntry(index);
        v_Muon_dxybs_ = vector<float>(Muon_dxybs_,Muon_dxybs_+bytes/sizeof(Muon_dxybs_[0]));
        loaded_Muon_dxybs_ = true;
    }
    return v_Muon_dxybs_;
}
const vector<float> &Nano::Muon_dz() {
    if (!loaded_Muon_dz_) {
        if (!b_Muon_dz_) throw std::runtime_error("Muon_dz branch doesn't exist");
        int bytes = b_Muon_dz_->GetEntry(index);
        v_Muon_dz_ = vector<float>(Muon_dz_,Muon_dz_+bytes/sizeof(Muon_dz_[0]));
        loaded_Muon_dz_ = true;
    }
    return v_Muon_dz_;
}
const vector<float> &Nano::Muon_dzErr() {
    if (!loaded_Muon_dzErr_) {
        if (!b_Muon_dzErr_) throw std::runtime_error("Muon_dzErr branch doesn't exist");
        int bytes = b_Muon_dzErr_->GetEntry(index);
        v_Muon_dzErr_ = vector<float>(Muon_dzErr_,Muon_dzErr_+bytes/sizeof(Muon_dzErr_[0]));
        loaded_Muon_dzErr_ = true;
    }
    return v_Muon_dzErr_;
}
const vector<float> &Nano::Muon_eta() {
    if (!loaded_Muon_eta_) {
        if (!b_Muon_eta_) throw std::runtime_error("Muon_eta branch doesn't exist");
        int bytes = b_Muon_eta_->GetEntry(index);
        v_Muon_eta_ = vector<float>(Muon_eta_,Muon_eta_+bytes/sizeof(Muon_eta_[0]));
        loaded_Muon_eta_ = true;
    }
    return v_Muon_eta_;
}
const vector<int> &Nano::Muon_fsrPhotonIdx() {
    if (!loaded_Muon_fsrPhotonIdx_) {
        if (!b_Muon_fsrPhotonIdx_) throw std::runtime_error("Muon_fsrPhotonIdx branch doesn't exist");
        int bytes = b_Muon_fsrPhotonIdx_->GetEntry(index);
        v_Muon_fsrPhotonIdx_ = vector<int>(Muon_fsrPhotonIdx_,Muon_fsrPhotonIdx_+bytes/sizeof(Muon_fsrPhotonIdx_[0]));
        loaded_Muon_fsrPhotonIdx_ = true;
    }
    return v_Muon_fsrPhotonIdx_;
}
const vector<UChar_t> &Nano::Muon_genPartFlav() {
    if (!loaded_Muon_genPartFlav_) {
        if (!b_Muon_genPartFlav_) throw std::runtime_error("Muon_genPartFlav branch doesn't exist");
        int bytes = b_Muon_genPartFlav_->GetEntry(index);
        v_Muon_genPartFlav_ = vector<UChar_t>(Muon_genPartFlav_,Muon_genPartFlav_+bytes/sizeof(Muon_genPartFlav_[0]));
        loaded_Muon_genPartFlav_ = true;
    }
    return v_Muon_genPartFlav_;
}
const vector<int> &Nano::Muon_genPartIdx() {
    if (!loaded_Muon_genPartIdx_) {
        if (!b_Muon_genPartIdx_) throw std::runtime_error("Muon_genPartIdx branch doesn't exist");
        int bytes = b_Muon_genPartIdx_->GetEntry(index);
        v_Muon_genPartIdx_ = vector<int>(Muon_genPartIdx_,Muon_genPartIdx_+bytes/sizeof(Muon_genPartIdx_[0]));
        loaded_Muon_genPartIdx_ = true;
    }
    return v_Muon_genPartIdx_;
}
const vector<UChar_t> &Nano::Muon_highPtId() {
    if (!loaded_Muon_highPtId_) {
        if (!b_Muon_highPtId_) throw std::runtime_error("Muon_highPtId branch doesn't exist");
        int bytes = b_Muon_highPtId_->GetEntry(index);
        v_Muon_highPtId_ = vector<UChar_t>(Muon_highPtId_,Muon_highPtId_+bytes/sizeof(Muon_highPtId_[0]));
        loaded_Muon_highPtId_ = true;
    }
    return v_Muon_highPtId_;
}
const vector<bool> &Nano::Muon_highPurity() {
    if (!loaded_Muon_highPurity_) {
        if (!b_Muon_highPurity_) throw std::runtime_error("Muon_highPurity branch doesn't exist");
        int bytes = b_Muon_highPurity_->GetEntry(index);
        v_Muon_highPurity_ = vector<bool>(Muon_highPurity_,Muon_highPurity_+bytes/sizeof(Muon_highPurity_[0]));
        loaded_Muon_highPurity_ = true;
    }
    return v_Muon_highPurity_;
}
const vector<bool> &Nano::Muon_inTimeMuon() {
    if (!loaded_Muon_inTimeMuon_) {
        if (!b_Muon_inTimeMuon_) throw std::runtime_error("Muon_inTimeMuon branch doesn't exist");
        int bytes = b_Muon_inTimeMuon_->GetEntry(index);
        v_Muon_inTimeMuon_ = vector<bool>(Muon_inTimeMuon_,Muon_inTimeMuon_+bytes/sizeof(Muon_inTimeMuon_[0]));
        loaded_Muon_inTimeMuon_ = true;
    }
    return v_Muon_inTimeMuon_;
}
const vector<float> &Nano::Muon_ip3d() {
    if (!loaded_Muon_ip3d_) {
        if (!b_Muon_ip3d_) throw std::runtime_error("Muon_ip3d branch doesn't exist");
        int bytes = b_Muon_ip3d_->GetEntry(index);
        v_Muon_ip3d_ = vector<float>(Muon_ip3d_,Muon_ip3d_+bytes/sizeof(Muon_ip3d_[0]));
        loaded_Muon_ip3d_ = true;
    }
    return v_Muon_ip3d_;
}
const vector<bool> &Nano::Muon_isGlobal() {
    if (!loaded_Muon_isGlobal_) {
        if (!b_Muon_isGlobal_) throw std::runtime_error("Muon_isGlobal branch doesn't exist");
        int bytes = b_Muon_isGlobal_->GetEntry(index);
        v_Muon_isGlobal_ = vector<bool>(Muon_isGlobal_,Muon_isGlobal_+bytes/sizeof(Muon_isGlobal_[0]));
        loaded_Muon_isGlobal_ = true;
    }
    return v_Muon_isGlobal_;
}
const vector<bool> &Nano::Muon_isPFcand() {
    if (!loaded_Muon_isPFcand_) {
        if (!b_Muon_isPFcand_) throw std::runtime_error("Muon_isPFcand branch doesn't exist");
        int bytes = b_Muon_isPFcand_->GetEntry(index);
        v_Muon_isPFcand_ = vector<bool>(Muon_isPFcand_,Muon_isPFcand_+bytes/sizeof(Muon_isPFcand_[0]));
        loaded_Muon_isPFcand_ = true;
    }
    return v_Muon_isPFcand_;
}
const vector<bool> &Nano::Muon_isTracker() {
    if (!loaded_Muon_isTracker_) {
        if (!b_Muon_isTracker_) throw std::runtime_error("Muon_isTracker branch doesn't exist");
        int bytes = b_Muon_isTracker_->GetEntry(index);
        v_Muon_isTracker_ = vector<bool>(Muon_isTracker_,Muon_isTracker_+bytes/sizeof(Muon_isTracker_[0]));
        loaded_Muon_isTracker_ = true;
    }
    return v_Muon_isTracker_;
}
const vector<int> &Nano::Muon_jetIdx() {
    if (!loaded_Muon_jetIdx_) {
        if (!b_Muon_jetIdx_) throw std::runtime_error("Muon_jetIdx branch doesn't exist");
        int bytes = b_Muon_jetIdx_->GetEntry(index);
        v_Muon_jetIdx_ = vector<int>(Muon_jetIdx_,Muon_jetIdx_+bytes/sizeof(Muon_jetIdx_[0]));
        loaded_Muon_jetIdx_ = true;
    }
    return v_Muon_jetIdx_;
}
const vector<float> &Nano::Muon_jetPtRelv2() {
    if (!loaded_Muon_jetPtRelv2_) {
        if (!b_Muon_jetPtRelv2_) throw std::runtime_error("Muon_jetPtRelv2 branch doesn't exist");
        int bytes = b_Muon_jetPtRelv2_->GetEntry(index);
        v_Muon_jetPtRelv2_ = vector<float>(Muon_jetPtRelv2_,Muon_jetPtRelv2_+bytes/sizeof(Muon_jetPtRelv2_[0]));
        loaded_Muon_jetPtRelv2_ = true;
    }
    return v_Muon_jetPtRelv2_;
}
const vector<float> &Nano::Muon_jetRelIso() {
    if (!loaded_Muon_jetRelIso_) {
        if (!b_Muon_jetRelIso_) throw std::runtime_error("Muon_jetRelIso branch doesn't exist");
        int bytes = b_Muon_jetRelIso_->GetEntry(index);
        v_Muon_jetRelIso_ = vector<float>(Muon_jetRelIso_,Muon_jetRelIso_+bytes/sizeof(Muon_jetRelIso_[0]));
        loaded_Muon_jetRelIso_ = true;
    }
    return v_Muon_jetRelIso_;
}
const vector<bool> &Nano::Muon_looseId() {
    if (!loaded_Muon_looseId_) {
        if (!b_Muon_looseId_) throw std::runtime_error("Muon_looseId branch doesn't exist");
        int bytes = b_Muon_looseId_->GetEntry(index);
        v_Muon_looseId_ = vector<bool>(Muon_looseId_,Muon_looseId_+bytes/sizeof(Muon_looseId_[0]));
        loaded_Muon_looseId_ = true;
    }
    return v_Muon_looseId_;
}
const vector<float> &Nano::Muon_mass() {
    if (!loaded_Muon_mass_) {
        if (!b_Muon_mass_) throw std::runtime_error("Muon_mass branch doesn't exist");
        int bytes = b_Muon_mass_->GetEntry(index);
        v_Muon_mass_ = vector<float>(Muon_mass_,Muon_mass_+bytes/sizeof(Muon_mass_[0]));
        loaded_Muon_mass_ = true;
    }
    return v_Muon_mass_;
}
const vector<bool> &Nano::Muon_mediumId() {
    if (!loaded_Muon_mediumId_) {
        if (!b_Muon_mediumId_) throw std::runtime_error("Muon_mediumId branch doesn't exist");
        int bytes = b_Muon_mediumId_->GetEntry(index);
        v_Muon_mediumId_ = vector<bool>(Muon_mediumId_,Muon_mediumId_+bytes/sizeof(Muon_mediumId_[0]));
        loaded_Muon_mediumId_ = true;
    }
    return v_Muon_mediumId_;
}
const vector<bool> &Nano::Muon_mediumPromptId() {
    if (!loaded_Muon_mediumPromptId_) {
        if (!b_Muon_mediumPromptId_) throw std::runtime_error("Muon_mediumPromptId branch doesn't exist");
        int bytes = b_Muon_mediumPromptId_->GetEntry(index);
        v_Muon_mediumPromptId_ = vector<bool>(Muon_mediumPromptId_,Muon_mediumPromptId_+bytes/sizeof(Muon_mediumPromptId_[0]));
        loaded_Muon_mediumPromptId_ = true;
    }
    return v_Muon_mediumPromptId_;
}
const vector<UChar_t> &Nano::Muon_miniIsoId() {
    if (!loaded_Muon_miniIsoId_) {
        if (!b_Muon_miniIsoId_) throw std::runtime_error("Muon_miniIsoId branch doesn't exist");
        int bytes = b_Muon_miniIsoId_->GetEntry(index);
        v_Muon_miniIsoId_ = vector<UChar_t>(Muon_miniIsoId_,Muon_miniIsoId_+bytes/sizeof(Muon_miniIsoId_[0]));
        loaded_Muon_miniIsoId_ = true;
    }
    return v_Muon_miniIsoId_;
}
const vector<float> &Nano::Muon_miniPFRelIso_all() {
    if (!loaded_Muon_miniPFRelIso_all_) {
        if (!b_Muon_miniPFRelIso_all_) throw std::runtime_error("Muon_miniPFRelIso_all branch doesn't exist");
        int bytes = b_Muon_miniPFRelIso_all_->GetEntry(index);
        v_Muon_miniPFRelIso_all_ = vector<float>(Muon_miniPFRelIso_all_,Muon_miniPFRelIso_all_+bytes/sizeof(Muon_miniPFRelIso_all_[0]));
        loaded_Muon_miniPFRelIso_all_ = true;
    }
    return v_Muon_miniPFRelIso_all_;
}
const vector<float> &Nano::Muon_miniPFRelIso_chg() {
    if (!loaded_Muon_miniPFRelIso_chg_) {
        if (!b_Muon_miniPFRelIso_chg_) throw std::runtime_error("Muon_miniPFRelIso_chg branch doesn't exist");
        int bytes = b_Muon_miniPFRelIso_chg_->GetEntry(index);
        v_Muon_miniPFRelIso_chg_ = vector<float>(Muon_miniPFRelIso_chg_,Muon_miniPFRelIso_chg_+bytes/sizeof(Muon_miniPFRelIso_chg_[0]));
        loaded_Muon_miniPFRelIso_chg_ = true;
    }
    return v_Muon_miniPFRelIso_chg_;
}
const vector<UChar_t> &Nano::Muon_multiIsoId() {
    if (!loaded_Muon_multiIsoId_) {
        if (!b_Muon_multiIsoId_) throw std::runtime_error("Muon_multiIsoId branch doesn't exist");
        int bytes = b_Muon_multiIsoId_->GetEntry(index);
        v_Muon_multiIsoId_ = vector<UChar_t>(Muon_multiIsoId_,Muon_multiIsoId_+bytes/sizeof(Muon_multiIsoId_[0]));
        loaded_Muon_multiIsoId_ = true;
    }
    return v_Muon_multiIsoId_;
}
const vector<UChar_t> &Nano::Muon_mvaId() {
    if (!loaded_Muon_mvaId_) {
        if (!b_Muon_mvaId_) throw std::runtime_error("Muon_mvaId branch doesn't exist");
        int bytes = b_Muon_mvaId_->GetEntry(index);
        v_Muon_mvaId_ = vector<UChar_t>(Muon_mvaId_,Muon_mvaId_+bytes/sizeof(Muon_mvaId_[0]));
        loaded_Muon_mvaId_ = true;
    }
    return v_Muon_mvaId_;
}
const vector<float> &Nano::Muon_mvaLowPt() {
    if (!loaded_Muon_mvaLowPt_) {
        if (!b_Muon_mvaLowPt_) throw std::runtime_error("Muon_mvaLowPt branch doesn't exist");
        int bytes = b_Muon_mvaLowPt_->GetEntry(index);
        v_Muon_mvaLowPt_ = vector<float>(Muon_mvaLowPt_,Muon_mvaLowPt_+bytes/sizeof(Muon_mvaLowPt_[0]));
        loaded_Muon_mvaLowPt_ = true;
    }
    return v_Muon_mvaLowPt_;
}
const vector<float> &Nano::Muon_mvaTTH() {
    if (!loaded_Muon_mvaTTH_) {
        if (!b_Muon_mvaTTH_) throw std::runtime_error("Muon_mvaTTH branch doesn't exist");
        int bytes = b_Muon_mvaTTH_->GetEntry(index);
        v_Muon_mvaTTH_ = vector<float>(Muon_mvaTTH_,Muon_mvaTTH_+bytes/sizeof(Muon_mvaTTH_[0]));
        loaded_Muon_mvaTTH_ = true;
    }
    return v_Muon_mvaTTH_;
}
const vector<int> &Nano::Muon_nStations() {
    if (!loaded_Muon_nStations_) {
        if (!b_Muon_nStations_) throw std::runtime_error("Muon_nStations branch doesn't exist");
        int bytes = b_Muon_nStations_->GetEntry(index);
        v_Muon_nStations_ = vector<int>(Muon_nStations_,Muon_nStations_+bytes/sizeof(Muon_nStations_[0]));
        loaded_Muon_nStations_ = true;
    }
    return v_Muon_nStations_;
}
const vector<int> &Nano::Muon_nTrackerLayers() {
    if (!loaded_Muon_nTrackerLayers_) {
        if (!b_Muon_nTrackerLayers_) throw std::runtime_error("Muon_nTrackerLayers branch doesn't exist");
        int bytes = b_Muon_nTrackerLayers_->GetEntry(index);
        v_Muon_nTrackerLayers_ = vector<int>(Muon_nTrackerLayers_,Muon_nTrackerLayers_+bytes/sizeof(Muon_nTrackerLayers_[0]));
        loaded_Muon_nTrackerLayers_ = true;
    }
    return v_Muon_nTrackerLayers_;
}
const vector<LorentzVector> &Nano::Muon_p4() {
    if (!loaded_Muon_p4_) {
        v_Muon_p4_.clear();
        vector<float> pts = Nano::Muon_pt();
        vector<float> etas = Nano::Muon_eta();
        vector<float> phis = Nano::Muon_phi();
        vector<float> masses = Nano::Muon_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_Muon_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_Muon_p4_ = true;
    }
    return v_Muon_p4_;
}
const vector<int> &Nano::Muon_pdgId() {
    if (!loaded_Muon_pdgId_) {
        if (!b_Muon_pdgId_) throw std::runtime_error("Muon_pdgId branch doesn't exist");
        int bytes = b_Muon_pdgId_->GetEntry(index);
        v_Muon_pdgId_ = vector<int>(Muon_pdgId_,Muon_pdgId_+bytes/sizeof(Muon_pdgId_[0]));
        loaded_Muon_pdgId_ = true;
    }
    return v_Muon_pdgId_;
}
const vector<UChar_t> &Nano::Muon_pfIsoId() {
    if (!loaded_Muon_pfIsoId_) {
        if (!b_Muon_pfIsoId_) throw std::runtime_error("Muon_pfIsoId branch doesn't exist");
        int bytes = b_Muon_pfIsoId_->GetEntry(index);
        v_Muon_pfIsoId_ = vector<UChar_t>(Muon_pfIsoId_,Muon_pfIsoId_+bytes/sizeof(Muon_pfIsoId_[0]));
        loaded_Muon_pfIsoId_ = true;
    }
    return v_Muon_pfIsoId_;
}
const vector<float> &Nano::Muon_pfRelIso03_all() {
    if (!loaded_Muon_pfRelIso03_all_) {
        if (!b_Muon_pfRelIso03_all_) throw std::runtime_error("Muon_pfRelIso03_all branch doesn't exist");
        int bytes = b_Muon_pfRelIso03_all_->GetEntry(index);
        v_Muon_pfRelIso03_all_ = vector<float>(Muon_pfRelIso03_all_,Muon_pfRelIso03_all_+bytes/sizeof(Muon_pfRelIso03_all_[0]));
        loaded_Muon_pfRelIso03_all_ = true;
    }
    return v_Muon_pfRelIso03_all_;
}
const vector<float> &Nano::Muon_pfRelIso03_chg() {
    if (!loaded_Muon_pfRelIso03_chg_) {
        if (!b_Muon_pfRelIso03_chg_) throw std::runtime_error("Muon_pfRelIso03_chg branch doesn't exist");
        int bytes = b_Muon_pfRelIso03_chg_->GetEntry(index);
        v_Muon_pfRelIso03_chg_ = vector<float>(Muon_pfRelIso03_chg_,Muon_pfRelIso03_chg_+bytes/sizeof(Muon_pfRelIso03_chg_[0]));
        loaded_Muon_pfRelIso03_chg_ = true;
    }
    return v_Muon_pfRelIso03_chg_;
}
const vector<float> &Nano::Muon_pfRelIso04_all() {
    if (!loaded_Muon_pfRelIso04_all_) {
        if (!b_Muon_pfRelIso04_all_) throw std::runtime_error("Muon_pfRelIso04_all branch doesn't exist");
        int bytes = b_Muon_pfRelIso04_all_->GetEntry(index);
        v_Muon_pfRelIso04_all_ = vector<float>(Muon_pfRelIso04_all_,Muon_pfRelIso04_all_+bytes/sizeof(Muon_pfRelIso04_all_[0]));
        loaded_Muon_pfRelIso04_all_ = true;
    }
    return v_Muon_pfRelIso04_all_;
}
const vector<float> &Nano::Muon_phi() {
    if (!loaded_Muon_phi_) {
        if (!b_Muon_phi_) throw std::runtime_error("Muon_phi branch doesn't exist");
        int bytes = b_Muon_phi_->GetEntry(index);
        v_Muon_phi_ = vector<float>(Muon_phi_,Muon_phi_+bytes/sizeof(Muon_phi_[0]));
        loaded_Muon_phi_ = true;
    }
    return v_Muon_phi_;
}
const vector<float> &Nano::Muon_pt() {
    if (!loaded_Muon_pt_) {
        if (!b_Muon_pt_) throw std::runtime_error("Muon_pt branch doesn't exist");
        int bytes = b_Muon_pt_->GetEntry(index);
        v_Muon_pt_ = vector<float>(Muon_pt_,Muon_pt_+bytes/sizeof(Muon_pt_[0]));
        loaded_Muon_pt_ = true;
    }
    return v_Muon_pt_;
}
const vector<float> &Nano::Muon_ptErr() {
    if (!loaded_Muon_ptErr_) {
        if (!b_Muon_ptErr_) throw std::runtime_error("Muon_ptErr branch doesn't exist");
        int bytes = b_Muon_ptErr_->GetEntry(index);
        v_Muon_ptErr_ = vector<float>(Muon_ptErr_,Muon_ptErr_+bytes/sizeof(Muon_ptErr_[0]));
        loaded_Muon_ptErr_ = true;
    }
    return v_Muon_ptErr_;
}
const vector<float> &Nano::Muon_segmentComp() {
    if (!loaded_Muon_segmentComp_) {
        if (!b_Muon_segmentComp_) throw std::runtime_error("Muon_segmentComp branch doesn't exist");
        int bytes = b_Muon_segmentComp_->GetEntry(index);
        v_Muon_segmentComp_ = vector<float>(Muon_segmentComp_,Muon_segmentComp_+bytes/sizeof(Muon_segmentComp_[0]));
        loaded_Muon_segmentComp_ = true;
    }
    return v_Muon_segmentComp_;
}
const vector<float> &Nano::Muon_sip3d() {
    if (!loaded_Muon_sip3d_) {
        if (!b_Muon_sip3d_) throw std::runtime_error("Muon_sip3d branch doesn't exist");
        int bytes = b_Muon_sip3d_->GetEntry(index);
        v_Muon_sip3d_ = vector<float>(Muon_sip3d_,Muon_sip3d_+bytes/sizeof(Muon_sip3d_[0]));
        loaded_Muon_sip3d_ = true;
    }
    return v_Muon_sip3d_;
}
const vector<bool> &Nano::Muon_softId() {
    if (!loaded_Muon_softId_) {
        if (!b_Muon_softId_) throw std::runtime_error("Muon_softId branch doesn't exist");
        int bytes = b_Muon_softId_->GetEntry(index);
        v_Muon_softId_ = vector<bool>(Muon_softId_,Muon_softId_+bytes/sizeof(Muon_softId_[0]));
        loaded_Muon_softId_ = true;
    }
    return v_Muon_softId_;
}
const vector<float> &Nano::Muon_softMva() {
    if (!loaded_Muon_softMva_) {
        if (!b_Muon_softMva_) throw std::runtime_error("Muon_softMva branch doesn't exist");
        int bytes = b_Muon_softMva_->GetEntry(index);
        v_Muon_softMva_ = vector<float>(Muon_softMva_,Muon_softMva_+bytes/sizeof(Muon_softMva_[0]));
        loaded_Muon_softMva_ = true;
    }
    return v_Muon_softMva_;
}
const vector<bool> &Nano::Muon_softMvaId() {
    if (!loaded_Muon_softMvaId_) {
        if (!b_Muon_softMvaId_) throw std::runtime_error("Muon_softMvaId branch doesn't exist");
        int bytes = b_Muon_softMvaId_->GetEntry(index);
        v_Muon_softMvaId_ = vector<bool>(Muon_softMvaId_,Muon_softMvaId_+bytes/sizeof(Muon_softMvaId_[0]));
        loaded_Muon_softMvaId_ = true;
    }
    return v_Muon_softMvaId_;
}
const vector<int> &Nano::Muon_tightCharge() {
    if (!loaded_Muon_tightCharge_) {
        if (!b_Muon_tightCharge_) throw std::runtime_error("Muon_tightCharge branch doesn't exist");
        int bytes = b_Muon_tightCharge_->GetEntry(index);
        v_Muon_tightCharge_ = vector<int>(Muon_tightCharge_,Muon_tightCharge_+bytes/sizeof(Muon_tightCharge_[0]));
        loaded_Muon_tightCharge_ = true;
    }
    return v_Muon_tightCharge_;
}
const vector<bool> &Nano::Muon_tightId() {
    if (!loaded_Muon_tightId_) {
        if (!b_Muon_tightId_) throw std::runtime_error("Muon_tightId branch doesn't exist");
        int bytes = b_Muon_tightId_->GetEntry(index);
        v_Muon_tightId_ = vector<bool>(Muon_tightId_,Muon_tightId_+bytes/sizeof(Muon_tightId_[0]));
        loaded_Muon_tightId_ = true;
    }
    return v_Muon_tightId_;
}
const vector<UChar_t> &Nano::Muon_tkIsoId() {
    if (!loaded_Muon_tkIsoId_) {
        if (!b_Muon_tkIsoId_) throw std::runtime_error("Muon_tkIsoId branch doesn't exist");
        int bytes = b_Muon_tkIsoId_->GetEntry(index);
        v_Muon_tkIsoId_ = vector<UChar_t>(Muon_tkIsoId_,Muon_tkIsoId_+bytes/sizeof(Muon_tkIsoId_[0]));
        loaded_Muon_tkIsoId_ = true;
    }
    return v_Muon_tkIsoId_;
}
const vector<float> &Nano::Muon_tkRelIso() {
    if (!loaded_Muon_tkRelIso_) {
        if (!b_Muon_tkRelIso_) throw std::runtime_error("Muon_tkRelIso branch doesn't exist");
        int bytes = b_Muon_tkRelIso_->GetEntry(index);
        v_Muon_tkRelIso_ = vector<float>(Muon_tkRelIso_,Muon_tkRelIso_+bytes/sizeof(Muon_tkRelIso_[0]));
        loaded_Muon_tkRelIso_ = true;
    }
    return v_Muon_tkRelIso_;
}
const vector<bool> &Nano::Muon_triggerIdLoose() {
    if (!loaded_Muon_triggerIdLoose_) {
        if (!b_Muon_triggerIdLoose_) throw std::runtime_error("Muon_triggerIdLoose branch doesn't exist");
        int bytes = b_Muon_triggerIdLoose_->GetEntry(index);
        v_Muon_triggerIdLoose_ = vector<bool>(Muon_triggerIdLoose_,Muon_triggerIdLoose_+bytes/sizeof(Muon_triggerIdLoose_[0]));
        loaded_Muon_triggerIdLoose_ = true;
    }
    return v_Muon_triggerIdLoose_;
}
const vector<float> &Nano::Muon_tunepRelPt() {
    if (!loaded_Muon_tunepRelPt_) {
        if (!b_Muon_tunepRelPt_) throw std::runtime_error("Muon_tunepRelPt branch doesn't exist");
        int bytes = b_Muon_tunepRelPt_->GetEntry(index);
        v_Muon_tunepRelPt_ = vector<float>(Muon_tunepRelPt_,Muon_tunepRelPt_+bytes/sizeof(Muon_tunepRelPt_[0]));
        loaded_Muon_tunepRelPt_ = true;
    }
    return v_Muon_tunepRelPt_;
}
const vector<float> &Nano::OtherPV_z() {
    if (!loaded_OtherPV_z_) {
        if (!b_OtherPV_z_) throw std::runtime_error("OtherPV_z branch doesn't exist");
        int bytes = b_OtherPV_z_->GetEntry(index);
        v_OtherPV_z_ = vector<float>(OtherPV_z_,OtherPV_z_+bytes/sizeof(OtherPV_z_[0]));
        loaded_OtherPV_z_ = true;
    }
    return v_OtherPV_z_;
}
const vector<float> &Nano::PSWeight() {
    if (!loaded_PSWeight_) {
        if (!b_PSWeight_) throw std::runtime_error("PSWeight branch doesn't exist");
        int bytes = b_PSWeight_->GetEntry(index);
        v_PSWeight_ = vector<float>(PSWeight_,PSWeight_+bytes/sizeof(PSWeight_[0]));
        loaded_PSWeight_ = true;
    }
    return v_PSWeight_;
}
const float &Nano::PV_chi2() {
    if (!loaded_PV_chi2_) {
        if (!b_PV_chi2_) throw std::runtime_error("PV_chi2 branch doesn't exist");
        b_PV_chi2_->GetEntry(index);
        loaded_PV_chi2_ = true;
    }
    return PV_chi2_;
}
const float &Nano::PV_ndof() {
    if (!loaded_PV_ndof_) {
        if (!b_PV_ndof_) throw std::runtime_error("PV_ndof branch doesn't exist");
        b_PV_ndof_->GetEntry(index);
        loaded_PV_ndof_ = true;
    }
    return PV_ndof_;
}
const int &Nano::PV_npvs() {
    if (!loaded_PV_npvs_) {
        if (!b_PV_npvs_) throw std::runtime_error("PV_npvs branch doesn't exist");
        b_PV_npvs_->GetEntry(index);
        loaded_PV_npvs_ = true;
    }
    return PV_npvs_;
}
const int &Nano::PV_npvsGood() {
    if (!loaded_PV_npvsGood_) {
        if (!b_PV_npvsGood_) throw std::runtime_error("PV_npvsGood branch doesn't exist");
        b_PV_npvsGood_->GetEntry(index);
        loaded_PV_npvsGood_ = true;
    }
    return PV_npvsGood_;
}
const float &Nano::PV_score() {
    if (!loaded_PV_score_) {
        if (!b_PV_score_) throw std::runtime_error("PV_score branch doesn't exist");
        b_PV_score_->GetEntry(index);
        loaded_PV_score_ = true;
    }
    return PV_score_;
}
const float &Nano::PV_x() {
    if (!loaded_PV_x_) {
        if (!b_PV_x_) throw std::runtime_error("PV_x branch doesn't exist");
        b_PV_x_->GetEntry(index);
        loaded_PV_x_ = true;
    }
    return PV_x_;
}
const float &Nano::PV_y() {
    if (!loaded_PV_y_) {
        if (!b_PV_y_) throw std::runtime_error("PV_y branch doesn't exist");
        b_PV_y_->GetEntry(index);
        loaded_PV_y_ = true;
    }
    return PV_y_;
}
const float &Nano::PV_z() {
    if (!loaded_PV_z_) {
        if (!b_PV_z_) throw std::runtime_error("PV_z branch doesn't exist");
        b_PV_z_->GetEntry(index);
        loaded_PV_z_ = true;
    }
    return PV_z_;
}
const vector<int> &Nano::Photon_charge() {
    if (!loaded_Photon_charge_) {
        if (!b_Photon_charge_) throw std::runtime_error("Photon_charge branch doesn't exist");
        int bytes = b_Photon_charge_->GetEntry(index);
        v_Photon_charge_ = vector<int>(Photon_charge_,Photon_charge_+bytes/sizeof(Photon_charge_[0]));
        loaded_Photon_charge_ = true;
    }
    return v_Photon_charge_;
}
const vector<float> &Nano::Photon_chargedHadronIso() {
    if (!loaded_Photon_chargedHadronIso_) {
        if (!b_Photon_chargedHadronIso_) throw std::runtime_error("Photon_chargedHadronIso branch doesn't exist");
        int bytes = b_Photon_chargedHadronIso_->GetEntry(index);
        v_Photon_chargedHadronIso_ = vector<float>(Photon_chargedHadronIso_,Photon_chargedHadronIso_+bytes/sizeof(Photon_chargedHadronIso_[0]));
        loaded_Photon_chargedHadronIso_ = true;
    }
    return v_Photon_chargedHadronIso_;
}
const vector<UChar_t> &Nano::Photon_cleanmask() {
    if (!loaded_Photon_cleanmask_) {
        if (!b_Photon_cleanmask_) throw std::runtime_error("Photon_cleanmask branch doesn't exist");
        int bytes = b_Photon_cleanmask_->GetEntry(index);
        v_Photon_cleanmask_ = vector<UChar_t>(Photon_cleanmask_,Photon_cleanmask_+bytes/sizeof(Photon_cleanmask_[0]));
        loaded_Photon_cleanmask_ = true;
    }
    return v_Photon_cleanmask_;
}
const vector<int> &Nano::Photon_cutBased() {
    if (!loaded_Photon_cutBased_) {
        if (!b_Photon_cutBased_) throw std::runtime_error("Photon_cutBased branch doesn't exist");
        int bytes = b_Photon_cutBased_->GetEntry(index);
        v_Photon_cutBased_ = vector<int>(Photon_cutBased_,Photon_cutBased_+bytes/sizeof(Photon_cutBased_[0]));
        loaded_Photon_cutBased_ = true;
    }
    return v_Photon_cutBased_;
}
const vector<int> &Nano::Photon_cutBased_Fall17V1Bitmap() {
    if (!loaded_Photon_cutBased_Fall17V1Bitmap_) {
        if (!b_Photon_cutBased_Fall17V1Bitmap_) throw std::runtime_error("Photon_cutBased_Fall17V1Bitmap branch doesn't exist");
        int bytes = b_Photon_cutBased_Fall17V1Bitmap_->GetEntry(index);
        v_Photon_cutBased_Fall17V1Bitmap_ = vector<int>(Photon_cutBased_Fall17V1Bitmap_,Photon_cutBased_Fall17V1Bitmap_+bytes/sizeof(Photon_cutBased_Fall17V1Bitmap_[0]));
        loaded_Photon_cutBased_Fall17V1Bitmap_ = true;
    }
    return v_Photon_cutBased_Fall17V1Bitmap_;
}
const vector<int> &Nano::Photon_cutBased_Spring16V2p2() {
    if (!loaded_Photon_cutBased_Spring16V2p2_) {
        if (!b_Photon_cutBased_Spring16V2p2_) throw std::runtime_error("Photon_cutBased_Spring16V2p2 branch doesn't exist");
        int bytes = b_Photon_cutBased_Spring16V2p2_->GetEntry(index);
        v_Photon_cutBased_Spring16V2p2_ = vector<int>(Photon_cutBased_Spring16V2p2_,Photon_cutBased_Spring16V2p2_+bytes/sizeof(Photon_cutBased_Spring16V2p2_[0]));
        loaded_Photon_cutBased_Spring16V2p2_ = true;
    }
    return v_Photon_cutBased_Spring16V2p2_;
}
const vector<float> &Nano::Photon_eCorr() {
    if (!loaded_Photon_eCorr_) {
        if (!b_Photon_eCorr_) throw std::runtime_error("Photon_eCorr branch doesn't exist");
        int bytes = b_Photon_eCorr_->GetEntry(index);
        v_Photon_eCorr_ = vector<float>(Photon_eCorr_,Photon_eCorr_+bytes/sizeof(Photon_eCorr_[0]));
        loaded_Photon_eCorr_ = true;
    }
    return v_Photon_eCorr_;
}
const vector<int> &Nano::Photon_electronIdx() {
    if (!loaded_Photon_electronIdx_) {
        if (!b_Photon_electronIdx_) throw std::runtime_error("Photon_electronIdx branch doesn't exist");
        int bytes = b_Photon_electronIdx_->GetEntry(index);
        v_Photon_electronIdx_ = vector<int>(Photon_electronIdx_,Photon_electronIdx_+bytes/sizeof(Photon_electronIdx_[0]));
        loaded_Photon_electronIdx_ = true;
    }
    return v_Photon_electronIdx_;
}
const vector<bool> &Nano::Photon_electronVeto() {
    if (!loaded_Photon_electronVeto_) {
        if (!b_Photon_electronVeto_) throw std::runtime_error("Photon_electronVeto branch doesn't exist");
        int bytes = b_Photon_electronVeto_->GetEntry(index);
        v_Photon_electronVeto_ = vector<bool>(Photon_electronVeto_,Photon_electronVeto_+bytes/sizeof(Photon_electronVeto_[0]));
        loaded_Photon_electronVeto_ = true;
    }
    return v_Photon_electronVeto_;
}
const vector<float> &Nano::Photon_energyErr() {
    if (!loaded_Photon_energyErr_) {
        if (!b_Photon_energyErr_) throw std::runtime_error("Photon_energyErr branch doesn't exist");
        int bytes = b_Photon_energyErr_->GetEntry(index);
        v_Photon_energyErr_ = vector<float>(Photon_energyErr_,Photon_energyErr_+bytes/sizeof(Photon_energyErr_[0]));
        loaded_Photon_energyErr_ = true;
    }
    return v_Photon_energyErr_;
}
const vector<float> &Nano::Photon_eta() {
    if (!loaded_Photon_eta_) {
        if (!b_Photon_eta_) throw std::runtime_error("Photon_eta branch doesn't exist");
        int bytes = b_Photon_eta_->GetEntry(index);
        v_Photon_eta_ = vector<float>(Photon_eta_,Photon_eta_+bytes/sizeof(Photon_eta_[0]));
        loaded_Photon_eta_ = true;
    }
    return v_Photon_eta_;
}
const vector<UChar_t> &Nano::Photon_genPartFlav() {
    if (!loaded_Photon_genPartFlav_) {
        if (!b_Photon_genPartFlav_) throw std::runtime_error("Photon_genPartFlav branch doesn't exist");
        int bytes = b_Photon_genPartFlav_->GetEntry(index);
        v_Photon_genPartFlav_ = vector<UChar_t>(Photon_genPartFlav_,Photon_genPartFlav_+bytes/sizeof(Photon_genPartFlav_[0]));
        loaded_Photon_genPartFlav_ = true;
    }
    return v_Photon_genPartFlav_;
}
const vector<int> &Nano::Photon_genPartIdx() {
    if (!loaded_Photon_genPartIdx_) {
        if (!b_Photon_genPartIdx_) throw std::runtime_error("Photon_genPartIdx branch doesn't exist");
        int bytes = b_Photon_genPartIdx_->GetEntry(index);
        v_Photon_genPartIdx_ = vector<int>(Photon_genPartIdx_,Photon_genPartIdx_+bytes/sizeof(Photon_genPartIdx_[0]));
        loaded_Photon_genPartIdx_ = true;
    }
    return v_Photon_genPartIdx_;
}
const vector<float> &Nano::Photon_hoe() {
    if (!loaded_Photon_hoe_) {
        if (!b_Photon_hoe_) throw std::runtime_error("Photon_hoe branch doesn't exist");
        int bytes = b_Photon_hoe_->GetEntry(index);
        v_Photon_hoe_ = vector<float>(Photon_hoe_,Photon_hoe_+bytes/sizeof(Photon_hoe_[0]));
        loaded_Photon_hoe_ = true;
    }
    return v_Photon_hoe_;
}
const vector<bool> &Nano::Photon_isScEtaEB() {
    if (!loaded_Photon_isScEtaEB_) {
        if (!b_Photon_isScEtaEB_) throw std::runtime_error("Photon_isScEtaEB branch doesn't exist");
        int bytes = b_Photon_isScEtaEB_->GetEntry(index);
        v_Photon_isScEtaEB_ = vector<bool>(Photon_isScEtaEB_,Photon_isScEtaEB_+bytes/sizeof(Photon_isScEtaEB_[0]));
        loaded_Photon_isScEtaEB_ = true;
    }
    return v_Photon_isScEtaEB_;
}
const vector<bool> &Nano::Photon_isScEtaEE() {
    if (!loaded_Photon_isScEtaEE_) {
        if (!b_Photon_isScEtaEE_) throw std::runtime_error("Photon_isScEtaEE branch doesn't exist");
        int bytes = b_Photon_isScEtaEE_->GetEntry(index);
        v_Photon_isScEtaEE_ = vector<bool>(Photon_isScEtaEE_,Photon_isScEtaEE_+bytes/sizeof(Photon_isScEtaEE_[0]));
        loaded_Photon_isScEtaEE_ = true;
    }
    return v_Photon_isScEtaEE_;
}
const vector<int> &Nano::Photon_jetIdx() {
    if (!loaded_Photon_jetIdx_) {
        if (!b_Photon_jetIdx_) throw std::runtime_error("Photon_jetIdx branch doesn't exist");
        int bytes = b_Photon_jetIdx_->GetEntry(index);
        v_Photon_jetIdx_ = vector<int>(Photon_jetIdx_,Photon_jetIdx_+bytes/sizeof(Photon_jetIdx_[0]));
        loaded_Photon_jetIdx_ = true;
    }
    return v_Photon_jetIdx_;
}
const vector<float> &Nano::Photon_mass() {
    if (!loaded_Photon_mass_) {
        if (!b_Photon_mass_) throw std::runtime_error("Photon_mass branch doesn't exist");
        int bytes = b_Photon_mass_->GetEntry(index);
        v_Photon_mass_ = vector<float>(Photon_mass_,Photon_mass_+bytes/sizeof(Photon_mass_[0]));
        loaded_Photon_mass_ = true;
    }
    return v_Photon_mass_;
}
const vector<float> &Nano::Photon_mvaID() {
    if (!loaded_Photon_mvaID_) {
        if (!b_Photon_mvaID_) throw std::runtime_error("Photon_mvaID branch doesn't exist");
        int bytes = b_Photon_mvaID_->GetEntry(index);
        v_Photon_mvaID_ = vector<float>(Photon_mvaID_,Photon_mvaID_+bytes/sizeof(Photon_mvaID_[0]));
        loaded_Photon_mvaID_ = true;
    }
    return v_Photon_mvaID_;
}
const vector<float> &Nano::Photon_mvaID_Fall17V1p1() {
    if (!loaded_Photon_mvaID_Fall17V1p1_) {
        if (!b_Photon_mvaID_Fall17V1p1_) throw std::runtime_error("Photon_mvaID_Fall17V1p1 branch doesn't exist");
        int bytes = b_Photon_mvaID_Fall17V1p1_->GetEntry(index);
        v_Photon_mvaID_Fall17V1p1_ = vector<float>(Photon_mvaID_Fall17V1p1_,Photon_mvaID_Fall17V1p1_+bytes/sizeof(Photon_mvaID_Fall17V1p1_[0]));
        loaded_Photon_mvaID_Fall17V1p1_ = true;
    }
    return v_Photon_mvaID_Fall17V1p1_;
}
const vector<float> &Nano::Photon_mvaID_Spring16nonTrigV1() {
    if (!loaded_Photon_mvaID_Spring16nonTrigV1_) {
        if (!b_Photon_mvaID_Spring16nonTrigV1_) throw std::runtime_error("Photon_mvaID_Spring16nonTrigV1 branch doesn't exist");
        int bytes = b_Photon_mvaID_Spring16nonTrigV1_->GetEntry(index);
        v_Photon_mvaID_Spring16nonTrigV1_ = vector<float>(Photon_mvaID_Spring16nonTrigV1_,Photon_mvaID_Spring16nonTrigV1_+bytes/sizeof(Photon_mvaID_Spring16nonTrigV1_[0]));
        loaded_Photon_mvaID_Spring16nonTrigV1_ = true;
    }
    return v_Photon_mvaID_Spring16nonTrigV1_;
}
const vector<bool> &Nano::Photon_mvaID_WP80() {
    if (!loaded_Photon_mvaID_WP80_) {
        if (!b_Photon_mvaID_WP80_) throw std::runtime_error("Photon_mvaID_WP80 branch doesn't exist");
        int bytes = b_Photon_mvaID_WP80_->GetEntry(index);
        v_Photon_mvaID_WP80_ = vector<bool>(Photon_mvaID_WP80_,Photon_mvaID_WP80_+bytes/sizeof(Photon_mvaID_WP80_[0]));
        loaded_Photon_mvaID_WP80_ = true;
    }
    return v_Photon_mvaID_WP80_;
}
const vector<bool> &Nano::Photon_mvaID_WP90() {
    if (!loaded_Photon_mvaID_WP90_) {
        if (!b_Photon_mvaID_WP90_) throw std::runtime_error("Photon_mvaID_WP90 branch doesn't exist");
        int bytes = b_Photon_mvaID_WP90_->GetEntry(index);
        v_Photon_mvaID_WP90_ = vector<bool>(Photon_mvaID_WP90_,Photon_mvaID_WP90_+bytes/sizeof(Photon_mvaID_WP90_[0]));
        loaded_Photon_mvaID_WP90_ = true;
    }
    return v_Photon_mvaID_WP90_;
}
const vector<LorentzVector> &Nano::Photon_p4() {
    if (!loaded_Photon_p4_) {
        v_Photon_p4_.clear();
        vector<float> pts = Nano::Photon_pt();
        vector<float> etas = Nano::Photon_eta();
        vector<float> phis = Nano::Photon_phi();
        vector<float> masses = Nano::Photon_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_Photon_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_Photon_p4_ = true;
    }
    return v_Photon_p4_;
}
const vector<int> &Nano::Photon_pdgId() {
    if (!loaded_Photon_pdgId_) {
        if (!b_Photon_pdgId_) throw std::runtime_error("Photon_pdgId branch doesn't exist");
        int bytes = b_Photon_pdgId_->GetEntry(index);
        v_Photon_pdgId_ = vector<int>(Photon_pdgId_,Photon_pdgId_+bytes/sizeof(Photon_pdgId_[0]));
        loaded_Photon_pdgId_ = true;
    }
    return v_Photon_pdgId_;
}
const vector<float> &Nano::Photon_pfRelIso03_all() {
    if (!loaded_Photon_pfRelIso03_all_) {
        if (!b_Photon_pfRelIso03_all_) throw std::runtime_error("Photon_pfRelIso03_all branch doesn't exist");
        int bytes = b_Photon_pfRelIso03_all_->GetEntry(index);
        v_Photon_pfRelIso03_all_ = vector<float>(Photon_pfRelIso03_all_,Photon_pfRelIso03_all_+bytes/sizeof(Photon_pfRelIso03_all_[0]));
        loaded_Photon_pfRelIso03_all_ = true;
    }
    return v_Photon_pfRelIso03_all_;
}
const vector<float> &Nano::Photon_pfRelIso03_chg() {
    if (!loaded_Photon_pfRelIso03_chg_) {
        if (!b_Photon_pfRelIso03_chg_) throw std::runtime_error("Photon_pfRelIso03_chg branch doesn't exist");
        int bytes = b_Photon_pfRelIso03_chg_->GetEntry(index);
        v_Photon_pfRelIso03_chg_ = vector<float>(Photon_pfRelIso03_chg_,Photon_pfRelIso03_chg_+bytes/sizeof(Photon_pfRelIso03_chg_[0]));
        loaded_Photon_pfRelIso03_chg_ = true;
    }
    return v_Photon_pfRelIso03_chg_;
}
const vector<float> &Nano::Photon_phi() {
    if (!loaded_Photon_phi_) {
        if (!b_Photon_phi_) throw std::runtime_error("Photon_phi branch doesn't exist");
        int bytes = b_Photon_phi_->GetEntry(index);
        v_Photon_phi_ = vector<float>(Photon_phi_,Photon_phi_+bytes/sizeof(Photon_phi_[0]));
        loaded_Photon_phi_ = true;
    }
    return v_Photon_phi_;
}
const vector<float> &Nano::Photon_photonIso() {
    if (!loaded_Photon_photonIso_) {
        if (!b_Photon_photonIso_) throw std::runtime_error("Photon_photonIso branch doesn't exist");
        int bytes = b_Photon_photonIso_->GetEntry(index);
        v_Photon_photonIso_ = vector<float>(Photon_photonIso_,Photon_photonIso_+bytes/sizeof(Photon_photonIso_[0]));
        loaded_Photon_photonIso_ = true;
    }
    return v_Photon_photonIso_;
}
const vector<bool> &Nano::Photon_pixelSeed() {
    if (!loaded_Photon_pixelSeed_) {
        if (!b_Photon_pixelSeed_) throw std::runtime_error("Photon_pixelSeed branch doesn't exist");
        int bytes = b_Photon_pixelSeed_->GetEntry(index);
        v_Photon_pixelSeed_ = vector<bool>(Photon_pixelSeed_,Photon_pixelSeed_+bytes/sizeof(Photon_pixelSeed_[0]));
        loaded_Photon_pixelSeed_ = true;
    }
    return v_Photon_pixelSeed_;
}
const vector<float> &Nano::Photon_pt() {
    if (!loaded_Photon_pt_) {
        if (!b_Photon_pt_) throw std::runtime_error("Photon_pt branch doesn't exist");
        int bytes = b_Photon_pt_->GetEntry(index);
        v_Photon_pt_ = vector<float>(Photon_pt_,Photon_pt_+bytes/sizeof(Photon_pt_[0]));
        loaded_Photon_pt_ = true;
    }
    return v_Photon_pt_;
}
const vector<float> &Nano::Photon_pt_FNUDown() {
    if (!loaded_Photon_pt_FNUDown_) {
        if (!b_Photon_pt_FNUDown_) throw std::runtime_error("Photon_pt_FNUDown branch doesn't exist");
        int bytes = b_Photon_pt_FNUDown_->GetEntry(index);
        v_Photon_pt_FNUDown_ = vector<float>(Photon_pt_FNUDown_,Photon_pt_FNUDown_+bytes/sizeof(Photon_pt_FNUDown_[0]));
        loaded_Photon_pt_FNUDown_ = true;
    }
    return v_Photon_pt_FNUDown_;
}
const vector<float> &Nano::Photon_pt_FNUUp() {
    if (!loaded_Photon_pt_FNUUp_) {
        if (!b_Photon_pt_FNUUp_) throw std::runtime_error("Photon_pt_FNUUp branch doesn't exist");
        int bytes = b_Photon_pt_FNUUp_->GetEntry(index);
        v_Photon_pt_FNUUp_ = vector<float>(Photon_pt_FNUUp_,Photon_pt_FNUUp_+bytes/sizeof(Photon_pt_FNUUp_[0]));
        loaded_Photon_pt_FNUUp_ = true;
    }
    return v_Photon_pt_FNUUp_;
}
const vector<float> &Nano::Photon_pt_MCScaleDown() {
    if (!loaded_Photon_pt_MCScaleDown_) {
        if (!b_Photon_pt_MCScaleDown_) throw std::runtime_error("Photon_pt_MCScaleDown branch doesn't exist");
        int bytes = b_Photon_pt_MCScaleDown_->GetEntry(index);
        v_Photon_pt_MCScaleDown_ = vector<float>(Photon_pt_MCScaleDown_,Photon_pt_MCScaleDown_+bytes/sizeof(Photon_pt_MCScaleDown_[0]));
        loaded_Photon_pt_MCScaleDown_ = true;
    }
    return v_Photon_pt_MCScaleDown_;
}
const vector<float> &Nano::Photon_pt_MCScaleGainDown() {
    if (!loaded_Photon_pt_MCScaleGainDown_) {
        if (!b_Photon_pt_MCScaleGainDown_) throw std::runtime_error("Photon_pt_MCScaleGainDown branch doesn't exist");
        int bytes = b_Photon_pt_MCScaleGainDown_->GetEntry(index);
        v_Photon_pt_MCScaleGainDown_ = vector<float>(Photon_pt_MCScaleGainDown_,Photon_pt_MCScaleGainDown_+bytes/sizeof(Photon_pt_MCScaleGainDown_[0]));
        loaded_Photon_pt_MCScaleGainDown_ = true;
    }
    return v_Photon_pt_MCScaleGainDown_;
}
const vector<float> &Nano::Photon_pt_MCScaleGainUp() {
    if (!loaded_Photon_pt_MCScaleGainUp_) {
        if (!b_Photon_pt_MCScaleGainUp_) throw std::runtime_error("Photon_pt_MCScaleGainUp branch doesn't exist");
        int bytes = b_Photon_pt_MCScaleGainUp_->GetEntry(index);
        v_Photon_pt_MCScaleGainUp_ = vector<float>(Photon_pt_MCScaleGainUp_,Photon_pt_MCScaleGainUp_+bytes/sizeof(Photon_pt_MCScaleGainUp_[0]));
        loaded_Photon_pt_MCScaleGainUp_ = true;
    }
    return v_Photon_pt_MCScaleGainUp_;
}
const vector<float> &Nano::Photon_pt_MCScaleUp() {
    if (!loaded_Photon_pt_MCScaleUp_) {
        if (!b_Photon_pt_MCScaleUp_) throw std::runtime_error("Photon_pt_MCScaleUp branch doesn't exist");
        int bytes = b_Photon_pt_MCScaleUp_->GetEntry(index);
        v_Photon_pt_MCScaleUp_ = vector<float>(Photon_pt_MCScaleUp_,Photon_pt_MCScaleUp_+bytes/sizeof(Photon_pt_MCScaleUp_[0]));
        loaded_Photon_pt_MCScaleUp_ = true;
    }
    return v_Photon_pt_MCScaleUp_;
}
const vector<float> &Nano::Photon_pt_MCSmearDown() {
    if (!loaded_Photon_pt_MCSmearDown_) {
        if (!b_Photon_pt_MCSmearDown_) throw std::runtime_error("Photon_pt_MCSmearDown branch doesn't exist");
        int bytes = b_Photon_pt_MCSmearDown_->GetEntry(index);
        v_Photon_pt_MCSmearDown_ = vector<float>(Photon_pt_MCSmearDown_,Photon_pt_MCSmearDown_+bytes/sizeof(Photon_pt_MCSmearDown_[0]));
        loaded_Photon_pt_MCSmearDown_ = true;
    }
    return v_Photon_pt_MCSmearDown_;
}
const vector<float> &Nano::Photon_pt_MCSmearUp() {
    if (!loaded_Photon_pt_MCSmearUp_) {
        if (!b_Photon_pt_MCSmearUp_) throw std::runtime_error("Photon_pt_MCSmearUp branch doesn't exist");
        int bytes = b_Photon_pt_MCSmearUp_->GetEntry(index);
        v_Photon_pt_MCSmearUp_ = vector<float>(Photon_pt_MCSmearUp_,Photon_pt_MCSmearUp_+bytes/sizeof(Photon_pt_MCSmearUp_[0]));
        loaded_Photon_pt_MCSmearUp_ = true;
    }
    return v_Photon_pt_MCSmearUp_;
}
const vector<float> &Nano::Photon_pt_MaterialDown() {
    if (!loaded_Photon_pt_MaterialDown_) {
        if (!b_Photon_pt_MaterialDown_) throw std::runtime_error("Photon_pt_MaterialDown branch doesn't exist");
        int bytes = b_Photon_pt_MaterialDown_->GetEntry(index);
        v_Photon_pt_MaterialDown_ = vector<float>(Photon_pt_MaterialDown_,Photon_pt_MaterialDown_+bytes/sizeof(Photon_pt_MaterialDown_[0]));
        loaded_Photon_pt_MaterialDown_ = true;
    }
    return v_Photon_pt_MaterialDown_;
}
const vector<float> &Nano::Photon_pt_MaterialUp() {
    if (!loaded_Photon_pt_MaterialUp_) {
        if (!b_Photon_pt_MaterialUp_) throw std::runtime_error("Photon_pt_MaterialUp branch doesn't exist");
        int bytes = b_Photon_pt_MaterialUp_->GetEntry(index);
        v_Photon_pt_MaterialUp_ = vector<float>(Photon_pt_MaterialUp_,Photon_pt_MaterialUp_+bytes/sizeof(Photon_pt_MaterialUp_[0]));
        loaded_Photon_pt_MaterialUp_ = true;
    }
    return v_Photon_pt_MaterialUp_;
}
const vector<float> &Nano::Photon_pt_ShowerShapeDown() {
    if (!loaded_Photon_pt_ShowerShapeDown_) {
        if (!b_Photon_pt_ShowerShapeDown_) throw std::runtime_error("Photon_pt_ShowerShapeDown branch doesn't exist");
        int bytes = b_Photon_pt_ShowerShapeDown_->GetEntry(index);
        v_Photon_pt_ShowerShapeDown_ = vector<float>(Photon_pt_ShowerShapeDown_,Photon_pt_ShowerShapeDown_+bytes/sizeof(Photon_pt_ShowerShapeDown_[0]));
        loaded_Photon_pt_ShowerShapeDown_ = true;
    }
    return v_Photon_pt_ShowerShapeDown_;
}
const vector<float> &Nano::Photon_pt_ShowerShapeUp() {
    if (!loaded_Photon_pt_ShowerShapeUp_) {
        if (!b_Photon_pt_ShowerShapeUp_) throw std::runtime_error("Photon_pt_ShowerShapeUp branch doesn't exist");
        int bytes = b_Photon_pt_ShowerShapeUp_->GetEntry(index);
        v_Photon_pt_ShowerShapeUp_ = vector<float>(Photon_pt_ShowerShapeUp_,Photon_pt_ShowerShapeUp_+bytes/sizeof(Photon_pt_ShowerShapeUp_[0]));
        loaded_Photon_pt_ShowerShapeUp_ = true;
    }
    return v_Photon_pt_ShowerShapeUp_;
}
const vector<float> &Nano::Photon_r9() {
    if (!loaded_Photon_r9_) {
        if (!b_Photon_r9_) throw std::runtime_error("Photon_r9 branch doesn't exist");
        int bytes = b_Photon_r9_->GetEntry(index);
        v_Photon_r9_ = vector<float>(Photon_r9_,Photon_r9_+bytes/sizeof(Photon_r9_[0]));
        loaded_Photon_r9_ = true;
    }
    return v_Photon_r9_;
}
const vector<UChar_t> &Nano::Photon_seedGain() {
    if (!loaded_Photon_seedGain_) {
        if (!b_Photon_seedGain_) throw std::runtime_error("Photon_seedGain branch doesn't exist");
        int bytes = b_Photon_seedGain_->GetEntry(index);
        v_Photon_seedGain_ = vector<UChar_t>(Photon_seedGain_,Photon_seedGain_+bytes/sizeof(Photon_seedGain_[0]));
        loaded_Photon_seedGain_ = true;
    }
    return v_Photon_seedGain_;
}
const vector<float> &Nano::Photon_sieie() {
    if (!loaded_Photon_sieie_) {
        if (!b_Photon_sieie_) throw std::runtime_error("Photon_sieie branch doesn't exist");
        int bytes = b_Photon_sieie_->GetEntry(index);
        v_Photon_sieie_ = vector<float>(Photon_sieie_,Photon_sieie_+bytes/sizeof(Photon_sieie_[0]));
        loaded_Photon_sieie_ = true;
    }
    return v_Photon_sieie_;
}
const vector<float> &Nano::Photon_trkSumPtHollowConeDR03() {
    if (!loaded_Photon_trkSumPtHollowConeDR03_) {
        if (!b_Photon_trkSumPtHollowConeDR03_) throw std::runtime_error("Photon_trkSumPtHollowConeDR03 branch doesn't exist");
        int bytes = b_Photon_trkSumPtHollowConeDR03_->GetEntry(index);
        v_Photon_trkSumPtHollowConeDR03_ = vector<float>(Photon_trkSumPtHollowConeDR03_,Photon_trkSumPtHollowConeDR03_+bytes/sizeof(Photon_trkSumPtHollowConeDR03_[0]));
        loaded_Photon_trkSumPtHollowConeDR03_ = true;
    }
    return v_Photon_trkSumPtHollowConeDR03_;
}
const vector<int> &Nano::Photon_vidNestedWPBitmap() {
    if (!loaded_Photon_vidNestedWPBitmap_) {
        if (!b_Photon_vidNestedWPBitmap_) throw std::runtime_error("Photon_vidNestedWPBitmap branch doesn't exist");
        int bytes = b_Photon_vidNestedWPBitmap_->GetEntry(index);
        v_Photon_vidNestedWPBitmap_ = vector<int>(Photon_vidNestedWPBitmap_,Photon_vidNestedWPBitmap_+bytes/sizeof(Photon_vidNestedWPBitmap_[0]));
        loaded_Photon_vidNestedWPBitmap_ = true;
    }
    return v_Photon_vidNestedWPBitmap_;
}
const vector<int> &Nano::Photon_vidNestedWPBitmap_Spring16V2p2() {
    if (!loaded_Photon_vidNestedWPBitmap_Spring16V2p2_) {
        if (!b_Photon_vidNestedWPBitmap_Spring16V2p2_) throw std::runtime_error("Photon_vidNestedWPBitmap_Spring16V2p2 branch doesn't exist");
        int bytes = b_Photon_vidNestedWPBitmap_Spring16V2p2_->GetEntry(index);
        v_Photon_vidNestedWPBitmap_Spring16V2p2_ = vector<int>(Photon_vidNestedWPBitmap_Spring16V2p2_,Photon_vidNestedWPBitmap_Spring16V2p2_+bytes/sizeof(Photon_vidNestedWPBitmap_Spring16V2p2_[0]));
        loaded_Photon_vidNestedWPBitmap_Spring16V2p2_ = true;
    }
    return v_Photon_vidNestedWPBitmap_Spring16V2p2_;
}
const float &Nano::Pileup_gpudensity() {
    if (!loaded_Pileup_gpudensity_) {
        if (!b_Pileup_gpudensity_) throw std::runtime_error("Pileup_gpudensity branch doesn't exist");
        b_Pileup_gpudensity_->GetEntry(index);
        loaded_Pileup_gpudensity_ = true;
    }
    return Pileup_gpudensity_;
}
const int &Nano::Pileup_nPU() {
    if (!loaded_Pileup_nPU_) {
        if (!b_Pileup_nPU_) throw std::runtime_error("Pileup_nPU branch doesn't exist");
        b_Pileup_nPU_->GetEntry(index);
        loaded_Pileup_nPU_ = true;
    }
    return Pileup_nPU_;
}
const float &Nano::Pileup_nTrueInt() {
    if (!loaded_Pileup_nTrueInt_) {
        if (!b_Pileup_nTrueInt_) throw std::runtime_error("Pileup_nTrueInt branch doesn't exist");
        b_Pileup_nTrueInt_->GetEntry(index);
        loaded_Pileup_nTrueInt_ = true;
    }
    return Pileup_nTrueInt_;
}
const float &Nano::Pileup_pudensity() {
    if (!loaded_Pileup_pudensity_) {
        if (!b_Pileup_pudensity_) throw std::runtime_error("Pileup_pudensity branch doesn't exist");
        b_Pileup_pudensity_->GetEntry(index);
        loaded_Pileup_pudensity_ = true;
    }
    return Pileup_pudensity_;
}
const int &Nano::Pileup_sumEOOT() {
    if (!loaded_Pileup_sumEOOT_) {
        if (!b_Pileup_sumEOOT_) throw std::runtime_error("Pileup_sumEOOT branch doesn't exist");
        b_Pileup_sumEOOT_->GetEntry(index);
        loaded_Pileup_sumEOOT_ = true;
    }
    return Pileup_sumEOOT_;
}
const int &Nano::Pileup_sumLOOT() {
    if (!loaded_Pileup_sumLOOT_) {
        if (!b_Pileup_sumLOOT_) throw std::runtime_error("Pileup_sumLOOT branch doesn't exist");
        b_Pileup_sumLOOT_->GetEntry(index);
        loaded_Pileup_sumLOOT_ = true;
    }
    return Pileup_sumLOOT_;
}
const float &Nano::PrefireWeight() {
    if (!loaded_PrefireWeight_) {
        if (!b_PrefireWeight_) throw std::runtime_error("PrefireWeight branch doesn't exist");
        b_PrefireWeight_->GetEntry(index);
        loaded_PrefireWeight_ = true;
    }
    return PrefireWeight_;
}
const float &Nano::PrefireWeight_Down() {
    if (!loaded_PrefireWeight_Down_) {
        if (!b_PrefireWeight_Down_) throw std::runtime_error("PrefireWeight_Down branch doesn't exist");
        b_PrefireWeight_Down_->GetEntry(index);
        loaded_PrefireWeight_Down_ = true;
    }
    return PrefireWeight_Down_;
}
const float &Nano::PrefireWeight_Up() {
    if (!loaded_PrefireWeight_Up_) {
        if (!b_PrefireWeight_Up_) throw std::runtime_error("PrefireWeight_Up branch doesn't exist");
        b_PrefireWeight_Up_->GetEntry(index);
        loaded_PrefireWeight_Up_ = true;
    }
    return PrefireWeight_Up_;
}
const float &Nano::PuppiMET_phi() {
    if (!loaded_PuppiMET_phi_) {
        if (!b_PuppiMET_phi_) throw std::runtime_error("PuppiMET_phi branch doesn't exist");
        b_PuppiMET_phi_->GetEntry(index);
        loaded_PuppiMET_phi_ = true;
    }
    return PuppiMET_phi_;
}
const float &Nano::PuppiMET_phiJERUp() {
    if (!loaded_PuppiMET_phiJERUp_) {
        if (!b_PuppiMET_phiJERUp_) throw std::runtime_error("PuppiMET_phiJERUp branch doesn't exist");
        b_PuppiMET_phiJERUp_->GetEntry(index);
        loaded_PuppiMET_phiJERUp_ = true;
    }
    return PuppiMET_phiJERUp_;
}
const float &Nano::PuppiMET_phiJESUp() {
    if (!loaded_PuppiMET_phiJESUp_) {
        if (!b_PuppiMET_phiJESUp_) throw std::runtime_error("PuppiMET_phiJESUp branch doesn't exist");
        b_PuppiMET_phiJESUp_->GetEntry(index);
        loaded_PuppiMET_phiJESUp_ = true;
    }
    return PuppiMET_phiJESUp_;
}
const float &Nano::PuppiMET_pt() {
    if (!loaded_PuppiMET_pt_) {
        if (!b_PuppiMET_pt_) throw std::runtime_error("PuppiMET_pt branch doesn't exist");
        b_PuppiMET_pt_->GetEntry(index);
        loaded_PuppiMET_pt_ = true;
    }
    return PuppiMET_pt_;
}
const float &Nano::PuppiMET_ptJERUp() {
    if (!loaded_PuppiMET_ptJERUp_) {
        if (!b_PuppiMET_ptJERUp_) throw std::runtime_error("PuppiMET_ptJERUp branch doesn't exist");
        b_PuppiMET_ptJERUp_->GetEntry(index);
        loaded_PuppiMET_ptJERUp_ = true;
    }
    return PuppiMET_ptJERUp_;
}
const float &Nano::PuppiMET_ptJESUp() {
    if (!loaded_PuppiMET_ptJESUp_) {
        if (!b_PuppiMET_ptJESUp_) throw std::runtime_error("PuppiMET_ptJESUp branch doesn't exist");
        b_PuppiMET_ptJESUp_->GetEntry(index);
        loaded_PuppiMET_ptJESUp_ = true;
    }
    return PuppiMET_ptJESUp_;
}
const float &Nano::PuppiMET_sumEt() {
    if (!loaded_PuppiMET_sumEt_) {
        if (!b_PuppiMET_sumEt_) throw std::runtime_error("PuppiMET_sumEt branch doesn't exist");
        b_PuppiMET_sumEt_->GetEntry(index);
        loaded_PuppiMET_sumEt_ = true;
    }
    return PuppiMET_sumEt_;
}
const float &Nano::RawMET_phi() {
    if (!loaded_RawMET_phi_) {
        if (!b_RawMET_phi_) throw std::runtime_error("RawMET_phi branch doesn't exist");
        b_RawMET_phi_->GetEntry(index);
        loaded_RawMET_phi_ = true;
    }
    return RawMET_phi_;
}
const float &Nano::RawMET_pt() {
    if (!loaded_RawMET_pt_) {
        if (!b_RawMET_pt_) throw std::runtime_error("RawMET_pt branch doesn't exist");
        b_RawMET_pt_->GetEntry(index);
        loaded_RawMET_pt_ = true;
    }
    return RawMET_pt_;
}
const float &Nano::RawMET_sumEt() {
    if (!loaded_RawMET_sumEt_) {
        if (!b_RawMET_sumEt_) throw std::runtime_error("RawMET_sumEt branch doesn't exist");
        b_RawMET_sumEt_->GetEntry(index);
        loaded_RawMET_sumEt_ = true;
    }
    return RawMET_sumEt_;
}
const float &Nano::RawPuppiMET_phi() {
    if (!loaded_RawPuppiMET_phi_) {
        if (!b_RawPuppiMET_phi_) throw std::runtime_error("RawPuppiMET_phi branch doesn't exist");
        b_RawPuppiMET_phi_->GetEntry(index);
        loaded_RawPuppiMET_phi_ = true;
    }
    return RawPuppiMET_phi_;
}
const float &Nano::RawPuppiMET_pt() {
    if (!loaded_RawPuppiMET_pt_) {
        if (!b_RawPuppiMET_pt_) throw std::runtime_error("RawPuppiMET_pt branch doesn't exist");
        b_RawPuppiMET_pt_->GetEntry(index);
        loaded_RawPuppiMET_pt_ = true;
    }
    return RawPuppiMET_pt_;
}
const float &Nano::RawPuppiMET_sumEt() {
    if (!loaded_RawPuppiMET_sumEt_) {
        if (!b_RawPuppiMET_sumEt_) throw std::runtime_error("RawPuppiMET_sumEt branch doesn't exist");
        b_RawPuppiMET_sumEt_->GetEntry(index);
        loaded_RawPuppiMET_sumEt_ = true;
    }
    return RawPuppiMET_sumEt_;
}
const vector<float> &Nano::SV_chi2() {
    if (!loaded_SV_chi2_) {
        if (!b_SV_chi2_) throw std::runtime_error("SV_chi2 branch doesn't exist");
        int bytes = b_SV_chi2_->GetEntry(index);
        v_SV_chi2_ = vector<float>(SV_chi2_,SV_chi2_+bytes/sizeof(SV_chi2_[0]));
        loaded_SV_chi2_ = true;
    }
    return v_SV_chi2_;
}
const vector<float> &Nano::SV_dlen() {
    if (!loaded_SV_dlen_) {
        if (!b_SV_dlen_) throw std::runtime_error("SV_dlen branch doesn't exist");
        int bytes = b_SV_dlen_->GetEntry(index);
        v_SV_dlen_ = vector<float>(SV_dlen_,SV_dlen_+bytes/sizeof(SV_dlen_[0]));
        loaded_SV_dlen_ = true;
    }
    return v_SV_dlen_;
}
const vector<float> &Nano::SV_dlenSig() {
    if (!loaded_SV_dlenSig_) {
        if (!b_SV_dlenSig_) throw std::runtime_error("SV_dlenSig branch doesn't exist");
        int bytes = b_SV_dlenSig_->GetEntry(index);
        v_SV_dlenSig_ = vector<float>(SV_dlenSig_,SV_dlenSig_+bytes/sizeof(SV_dlenSig_[0]));
        loaded_SV_dlenSig_ = true;
    }
    return v_SV_dlenSig_;
}
const vector<float> &Nano::SV_dxy() {
    if (!loaded_SV_dxy_) {
        if (!b_SV_dxy_) throw std::runtime_error("SV_dxy branch doesn't exist");
        int bytes = b_SV_dxy_->GetEntry(index);
        v_SV_dxy_ = vector<float>(SV_dxy_,SV_dxy_+bytes/sizeof(SV_dxy_[0]));
        loaded_SV_dxy_ = true;
    }
    return v_SV_dxy_;
}
const vector<float> &Nano::SV_dxySig() {
    if (!loaded_SV_dxySig_) {
        if (!b_SV_dxySig_) throw std::runtime_error("SV_dxySig branch doesn't exist");
        int bytes = b_SV_dxySig_->GetEntry(index);
        v_SV_dxySig_ = vector<float>(SV_dxySig_,SV_dxySig_+bytes/sizeof(SV_dxySig_[0]));
        loaded_SV_dxySig_ = true;
    }
    return v_SV_dxySig_;
}
const vector<float> &Nano::SV_eta() {
    if (!loaded_SV_eta_) {
        if (!b_SV_eta_) throw std::runtime_error("SV_eta branch doesn't exist");
        int bytes = b_SV_eta_->GetEntry(index);
        v_SV_eta_ = vector<float>(SV_eta_,SV_eta_+bytes/sizeof(SV_eta_[0]));
        loaded_SV_eta_ = true;
    }
    return v_SV_eta_;
}
const vector<float> &Nano::SV_mass() {
    if (!loaded_SV_mass_) {
        if (!b_SV_mass_) throw std::runtime_error("SV_mass branch doesn't exist");
        int bytes = b_SV_mass_->GetEntry(index);
        v_SV_mass_ = vector<float>(SV_mass_,SV_mass_+bytes/sizeof(SV_mass_[0]));
        loaded_SV_mass_ = true;
    }
    return v_SV_mass_;
}
const vector<float> &Nano::SV_ndof() {
    if (!loaded_SV_ndof_) {
        if (!b_SV_ndof_) throw std::runtime_error("SV_ndof branch doesn't exist");
        int bytes = b_SV_ndof_->GetEntry(index);
        v_SV_ndof_ = vector<float>(SV_ndof_,SV_ndof_+bytes/sizeof(SV_ndof_[0]));
        loaded_SV_ndof_ = true;
    }
    return v_SV_ndof_;
}
const vector<LorentzVector> &Nano::SV_p4() {
    if (!loaded_SV_p4_) {
        v_SV_p4_.clear();
        vector<float> pts = Nano::SV_pt();
        vector<float> etas = Nano::SV_eta();
        vector<float> phis = Nano::SV_phi();
        vector<float> masses = Nano::SV_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_SV_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_SV_p4_ = true;
    }
    return v_SV_p4_;
}
const vector<float> &Nano::SV_pAngle() {
    if (!loaded_SV_pAngle_) {
        if (!b_SV_pAngle_) throw std::runtime_error("SV_pAngle branch doesn't exist");
        int bytes = b_SV_pAngle_->GetEntry(index);
        v_SV_pAngle_ = vector<float>(SV_pAngle_,SV_pAngle_+bytes/sizeof(SV_pAngle_[0]));
        loaded_SV_pAngle_ = true;
    }
    return v_SV_pAngle_;
}
const vector<float> &Nano::SV_phi() {
    if (!loaded_SV_phi_) {
        if (!b_SV_phi_) throw std::runtime_error("SV_phi branch doesn't exist");
        int bytes = b_SV_phi_->GetEntry(index);
        v_SV_phi_ = vector<float>(SV_phi_,SV_phi_+bytes/sizeof(SV_phi_[0]));
        loaded_SV_phi_ = true;
    }
    return v_SV_phi_;
}
const vector<float> &Nano::SV_pt() {
    if (!loaded_SV_pt_) {
        if (!b_SV_pt_) throw std::runtime_error("SV_pt branch doesn't exist");
        int bytes = b_SV_pt_->GetEntry(index);
        v_SV_pt_ = vector<float>(SV_pt_,SV_pt_+bytes/sizeof(SV_pt_[0]));
        loaded_SV_pt_ = true;
    }
    return v_SV_pt_;
}
const vector<float> &Nano::SV_x() {
    if (!loaded_SV_x_) {
        if (!b_SV_x_) throw std::runtime_error("SV_x branch doesn't exist");
        int bytes = b_SV_x_->GetEntry(index);
        v_SV_x_ = vector<float>(SV_x_,SV_x_+bytes/sizeof(SV_x_[0]));
        loaded_SV_x_ = true;
    }
    return v_SV_x_;
}
const vector<float> &Nano::SV_y() {
    if (!loaded_SV_y_) {
        if (!b_SV_y_) throw std::runtime_error("SV_y branch doesn't exist");
        int bytes = b_SV_y_->GetEntry(index);
        v_SV_y_ = vector<float>(SV_y_,SV_y_+bytes/sizeof(SV_y_[0]));
        loaded_SV_y_ = true;
    }
    return v_SV_y_;
}
const vector<float> &Nano::SV_z() {
    if (!loaded_SV_z_) {
        if (!b_SV_z_) throw std::runtime_error("SV_z branch doesn't exist");
        int bytes = b_SV_z_->GetEntry(index);
        v_SV_z_ = vector<float>(SV_z_,SV_z_+bytes/sizeof(SV_z_[0]));
        loaded_SV_z_ = true;
    }
    return v_SV_z_;
}
const float &Nano::SoftActivityJetHT() {
    if (!loaded_SoftActivityJetHT_) {
        if (!b_SoftActivityJetHT_) throw std::runtime_error("SoftActivityJetHT branch doesn't exist");
        b_SoftActivityJetHT_->GetEntry(index);
        loaded_SoftActivityJetHT_ = true;
    }
    return SoftActivityJetHT_;
}
const float &Nano::SoftActivityJetHT10() {
    if (!loaded_SoftActivityJetHT10_) {
        if (!b_SoftActivityJetHT10_) throw std::runtime_error("SoftActivityJetHT10 branch doesn't exist");
        b_SoftActivityJetHT10_->GetEntry(index);
        loaded_SoftActivityJetHT10_ = true;
    }
    return SoftActivityJetHT10_;
}
const float &Nano::SoftActivityJetHT2() {
    if (!loaded_SoftActivityJetHT2_) {
        if (!b_SoftActivityJetHT2_) throw std::runtime_error("SoftActivityJetHT2 branch doesn't exist");
        b_SoftActivityJetHT2_->GetEntry(index);
        loaded_SoftActivityJetHT2_ = true;
    }
    return SoftActivityJetHT2_;
}
const float &Nano::SoftActivityJetHT5() {
    if (!loaded_SoftActivityJetHT5_) {
        if (!b_SoftActivityJetHT5_) throw std::runtime_error("SoftActivityJetHT5 branch doesn't exist");
        b_SoftActivityJetHT5_->GetEntry(index);
        loaded_SoftActivityJetHT5_ = true;
    }
    return SoftActivityJetHT5_;
}
const int &Nano::SoftActivityJetNjets10() {
    if (!loaded_SoftActivityJetNjets10_) {
        if (!b_SoftActivityJetNjets10_) throw std::runtime_error("SoftActivityJetNjets10 branch doesn't exist");
        b_SoftActivityJetNjets10_->GetEntry(index);
        loaded_SoftActivityJetNjets10_ = true;
    }
    return SoftActivityJetNjets10_;
}
const int &Nano::SoftActivityJetNjets2() {
    if (!loaded_SoftActivityJetNjets2_) {
        if (!b_SoftActivityJetNjets2_) throw std::runtime_error("SoftActivityJetNjets2 branch doesn't exist");
        b_SoftActivityJetNjets2_->GetEntry(index);
        loaded_SoftActivityJetNjets2_ = true;
    }
    return SoftActivityJetNjets2_;
}
const int &Nano::SoftActivityJetNjets5() {
    if (!loaded_SoftActivityJetNjets5_) {
        if (!b_SoftActivityJetNjets5_) throw std::runtime_error("SoftActivityJetNjets5 branch doesn't exist");
        b_SoftActivityJetNjets5_->GetEntry(index);
        loaded_SoftActivityJetNjets5_ = true;
    }
    return SoftActivityJetNjets5_;
}
const vector<float> &Nano::SoftActivityJet_eta() {
    if (!loaded_SoftActivityJet_eta_) {
        if (!b_SoftActivityJet_eta_) throw std::runtime_error("SoftActivityJet_eta branch doesn't exist");
        int bytes = b_SoftActivityJet_eta_->GetEntry(index);
        v_SoftActivityJet_eta_ = vector<float>(SoftActivityJet_eta_,SoftActivityJet_eta_+bytes/sizeof(SoftActivityJet_eta_[0]));
        loaded_SoftActivityJet_eta_ = true;
    }
    return v_SoftActivityJet_eta_;
}
const vector<float> &Nano::SoftActivityJet_phi() {
    if (!loaded_SoftActivityJet_phi_) {
        if (!b_SoftActivityJet_phi_) throw std::runtime_error("SoftActivityJet_phi branch doesn't exist");
        int bytes = b_SoftActivityJet_phi_->GetEntry(index);
        v_SoftActivityJet_phi_ = vector<float>(SoftActivityJet_phi_,SoftActivityJet_phi_+bytes/sizeof(SoftActivityJet_phi_[0]));
        loaded_SoftActivityJet_phi_ = true;
    }
    return v_SoftActivityJet_phi_;
}
const vector<float> &Nano::SoftActivityJet_pt() {
    if (!loaded_SoftActivityJet_pt_) {
        if (!b_SoftActivityJet_pt_) throw std::runtime_error("SoftActivityJet_pt branch doesn't exist");
        int bytes = b_SoftActivityJet_pt_->GetEntry(index);
        v_SoftActivityJet_pt_ = vector<float>(SoftActivityJet_pt_,SoftActivityJet_pt_+bytes/sizeof(SoftActivityJet_pt_[0]));
        loaded_SoftActivityJet_pt_ = true;
    }
    return v_SoftActivityJet_pt_;
}
const vector<float> &Nano::SubGenJetAK8_eta() {
    if (!loaded_SubGenJetAK8_eta_) {
        if (!b_SubGenJetAK8_eta_) throw std::runtime_error("SubGenJetAK8_eta branch doesn't exist");
        int bytes = b_SubGenJetAK8_eta_->GetEntry(index);
        v_SubGenJetAK8_eta_ = vector<float>(SubGenJetAK8_eta_,SubGenJetAK8_eta_+bytes/sizeof(SubGenJetAK8_eta_[0]));
        loaded_SubGenJetAK8_eta_ = true;
    }
    return v_SubGenJetAK8_eta_;
}
const vector<float> &Nano::SubGenJetAK8_mass() {
    if (!loaded_SubGenJetAK8_mass_) {
        if (!b_SubGenJetAK8_mass_) throw std::runtime_error("SubGenJetAK8_mass branch doesn't exist");
        int bytes = b_SubGenJetAK8_mass_->GetEntry(index);
        v_SubGenJetAK8_mass_ = vector<float>(SubGenJetAK8_mass_,SubGenJetAK8_mass_+bytes/sizeof(SubGenJetAK8_mass_[0]));
        loaded_SubGenJetAK8_mass_ = true;
    }
    return v_SubGenJetAK8_mass_;
}
const vector<LorentzVector> &Nano::SubGenJetAK8_p4() {
    if (!loaded_SubGenJetAK8_p4_) {
        v_SubGenJetAK8_p4_.clear();
        vector<float> pts = Nano::SubGenJetAK8_pt();
        vector<float> etas = Nano::SubGenJetAK8_eta();
        vector<float> phis = Nano::SubGenJetAK8_phi();
        vector<float> masses = Nano::SubGenJetAK8_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_SubGenJetAK8_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_SubGenJetAK8_p4_ = true;
    }
    return v_SubGenJetAK8_p4_;
}
const vector<float> &Nano::SubGenJetAK8_phi() {
    if (!loaded_SubGenJetAK8_phi_) {
        if (!b_SubGenJetAK8_phi_) throw std::runtime_error("SubGenJetAK8_phi branch doesn't exist");
        int bytes = b_SubGenJetAK8_phi_->GetEntry(index);
        v_SubGenJetAK8_phi_ = vector<float>(SubGenJetAK8_phi_,SubGenJetAK8_phi_+bytes/sizeof(SubGenJetAK8_phi_[0]));
        loaded_SubGenJetAK8_phi_ = true;
    }
    return v_SubGenJetAK8_phi_;
}
const vector<float> &Nano::SubGenJetAK8_pt() {
    if (!loaded_SubGenJetAK8_pt_) {
        if (!b_SubGenJetAK8_pt_) throw std::runtime_error("SubGenJetAK8_pt branch doesn't exist");
        int bytes = b_SubGenJetAK8_pt_->GetEntry(index);
        v_SubGenJetAK8_pt_ = vector<float>(SubGenJetAK8_pt_,SubGenJetAK8_pt_+bytes/sizeof(SubGenJetAK8_pt_[0]));
        loaded_SubGenJetAK8_pt_ = true;
    }
    return v_SubGenJetAK8_pt_;
}
const vector<float> &Nano::SubJet_btagCMVA() {
    if (!loaded_SubJet_btagCMVA_) {
        if (!b_SubJet_btagCMVA_) throw std::runtime_error("SubJet_btagCMVA branch doesn't exist");
        int bytes = b_SubJet_btagCMVA_->GetEntry(index);
        v_SubJet_btagCMVA_ = vector<float>(SubJet_btagCMVA_,SubJet_btagCMVA_+bytes/sizeof(SubJet_btagCMVA_[0]));
        loaded_SubJet_btagCMVA_ = true;
    }
    return v_SubJet_btagCMVA_;
}
const vector<float> &Nano::SubJet_btagCSVV2() {
    if (!loaded_SubJet_btagCSVV2_) {
        if (!b_SubJet_btagCSVV2_) throw std::runtime_error("SubJet_btagCSVV2 branch doesn't exist");
        int bytes = b_SubJet_btagCSVV2_->GetEntry(index);
        v_SubJet_btagCSVV2_ = vector<float>(SubJet_btagCSVV2_,SubJet_btagCSVV2_+bytes/sizeof(SubJet_btagCSVV2_[0]));
        loaded_SubJet_btagCSVV2_ = true;
    }
    return v_SubJet_btagCSVV2_;
}
const vector<float> &Nano::SubJet_btagDeepB() {
    if (!loaded_SubJet_btagDeepB_) {
        if (!b_SubJet_btagDeepB_) throw std::runtime_error("SubJet_btagDeepB branch doesn't exist");
        int bytes = b_SubJet_btagDeepB_->GetEntry(index);
        v_SubJet_btagDeepB_ = vector<float>(SubJet_btagDeepB_,SubJet_btagDeepB_+bytes/sizeof(SubJet_btagDeepB_[0]));
        loaded_SubJet_btagDeepB_ = true;
    }
    return v_SubJet_btagDeepB_;
}
const vector<float> &Nano::SubJet_eta() {
    if (!loaded_SubJet_eta_) {
        if (!b_SubJet_eta_) throw std::runtime_error("SubJet_eta branch doesn't exist");
        int bytes = b_SubJet_eta_->GetEntry(index);
        v_SubJet_eta_ = vector<float>(SubJet_eta_,SubJet_eta_+bytes/sizeof(SubJet_eta_[0]));
        loaded_SubJet_eta_ = true;
    }
    return v_SubJet_eta_;
}
const vector<float> &Nano::SubJet_mass() {
    if (!loaded_SubJet_mass_) {
        if (!b_SubJet_mass_) throw std::runtime_error("SubJet_mass branch doesn't exist");
        int bytes = b_SubJet_mass_->GetEntry(index);
        v_SubJet_mass_ = vector<float>(SubJet_mass_,SubJet_mass_+bytes/sizeof(SubJet_mass_[0]));
        loaded_SubJet_mass_ = true;
    }
    return v_SubJet_mass_;
}
const vector<float> &Nano::SubJet_n2b1() {
    if (!loaded_SubJet_n2b1_) {
        if (!b_SubJet_n2b1_) throw std::runtime_error("SubJet_n2b1 branch doesn't exist");
        int bytes = b_SubJet_n2b1_->GetEntry(index);
        v_SubJet_n2b1_ = vector<float>(SubJet_n2b1_,SubJet_n2b1_+bytes/sizeof(SubJet_n2b1_[0]));
        loaded_SubJet_n2b1_ = true;
    }
    return v_SubJet_n2b1_;
}
const vector<float> &Nano::SubJet_n3b1() {
    if (!loaded_SubJet_n3b1_) {
        if (!b_SubJet_n3b1_) throw std::runtime_error("SubJet_n3b1 branch doesn't exist");
        int bytes = b_SubJet_n3b1_->GetEntry(index);
        v_SubJet_n3b1_ = vector<float>(SubJet_n3b1_,SubJet_n3b1_+bytes/sizeof(SubJet_n3b1_[0]));
        loaded_SubJet_n3b1_ = true;
    }
    return v_SubJet_n3b1_;
}
const vector<UChar_t> &Nano::SubJet_nBHadrons() {
    if (!loaded_SubJet_nBHadrons_) {
        if (!b_SubJet_nBHadrons_) throw std::runtime_error("SubJet_nBHadrons branch doesn't exist");
        int bytes = b_SubJet_nBHadrons_->GetEntry(index);
        v_SubJet_nBHadrons_ = vector<UChar_t>(SubJet_nBHadrons_,SubJet_nBHadrons_+bytes/sizeof(SubJet_nBHadrons_[0]));
        loaded_SubJet_nBHadrons_ = true;
    }
    return v_SubJet_nBHadrons_;
}
const vector<UChar_t> &Nano::SubJet_nCHadrons() {
    if (!loaded_SubJet_nCHadrons_) {
        if (!b_SubJet_nCHadrons_) throw std::runtime_error("SubJet_nCHadrons branch doesn't exist");
        int bytes = b_SubJet_nCHadrons_->GetEntry(index);
        v_SubJet_nCHadrons_ = vector<UChar_t>(SubJet_nCHadrons_,SubJet_nCHadrons_+bytes/sizeof(SubJet_nCHadrons_[0]));
        loaded_SubJet_nCHadrons_ = true;
    }
    return v_SubJet_nCHadrons_;
}
const vector<LorentzVector> &Nano::SubJet_p4() {
    if (!loaded_SubJet_p4_) {
        v_SubJet_p4_.clear();
        vector<float> pts = Nano::SubJet_pt();
        vector<float> etas = Nano::SubJet_eta();
        vector<float> phis = Nano::SubJet_phi();
        vector<float> masses = Nano::SubJet_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_SubJet_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_SubJet_p4_ = true;
    }
    return v_SubJet_p4_;
}
const vector<float> &Nano::SubJet_phi() {
    if (!loaded_SubJet_phi_) {
        if (!b_SubJet_phi_) throw std::runtime_error("SubJet_phi branch doesn't exist");
        int bytes = b_SubJet_phi_->GetEntry(index);
        v_SubJet_phi_ = vector<float>(SubJet_phi_,SubJet_phi_+bytes/sizeof(SubJet_phi_[0]));
        loaded_SubJet_phi_ = true;
    }
    return v_SubJet_phi_;
}
const vector<float> &Nano::SubJet_pt() {
    if (!loaded_SubJet_pt_) {
        if (!b_SubJet_pt_) throw std::runtime_error("SubJet_pt branch doesn't exist");
        int bytes = b_SubJet_pt_->GetEntry(index);
        v_SubJet_pt_ = vector<float>(SubJet_pt_,SubJet_pt_+bytes/sizeof(SubJet_pt_[0]));
        loaded_SubJet_pt_ = true;
    }
    return v_SubJet_pt_;
}
const vector<float> &Nano::SubJet_rawFactor() {
    if (!loaded_SubJet_rawFactor_) {
        if (!b_SubJet_rawFactor_) throw std::runtime_error("SubJet_rawFactor branch doesn't exist");
        int bytes = b_SubJet_rawFactor_->GetEntry(index);
        v_SubJet_rawFactor_ = vector<float>(SubJet_rawFactor_,SubJet_rawFactor_+bytes/sizeof(SubJet_rawFactor_[0]));
        loaded_SubJet_rawFactor_ = true;
    }
    return v_SubJet_rawFactor_;
}
const vector<float> &Nano::SubJet_tau1() {
    if (!loaded_SubJet_tau1_) {
        if (!b_SubJet_tau1_) throw std::runtime_error("SubJet_tau1 branch doesn't exist");
        int bytes = b_SubJet_tau1_->GetEntry(index);
        v_SubJet_tau1_ = vector<float>(SubJet_tau1_,SubJet_tau1_+bytes/sizeof(SubJet_tau1_[0]));
        loaded_SubJet_tau1_ = true;
    }
    return v_SubJet_tau1_;
}
const vector<float> &Nano::SubJet_tau2() {
    if (!loaded_SubJet_tau2_) {
        if (!b_SubJet_tau2_) throw std::runtime_error("SubJet_tau2 branch doesn't exist");
        int bytes = b_SubJet_tau2_->GetEntry(index);
        v_SubJet_tau2_ = vector<float>(SubJet_tau2_,SubJet_tau2_+bytes/sizeof(SubJet_tau2_[0]));
        loaded_SubJet_tau2_ = true;
    }
    return v_SubJet_tau2_;
}
const vector<float> &Nano::SubJet_tau3() {
    if (!loaded_SubJet_tau3_) {
        if (!b_SubJet_tau3_) throw std::runtime_error("SubJet_tau3 branch doesn't exist");
        int bytes = b_SubJet_tau3_->GetEntry(index);
        v_SubJet_tau3_ = vector<float>(SubJet_tau3_,SubJet_tau3_+bytes/sizeof(SubJet_tau3_[0]));
        loaded_SubJet_tau3_ = true;
    }
    return v_SubJet_tau3_;
}
const vector<float> &Nano::SubJet_tau4() {
    if (!loaded_SubJet_tau4_) {
        if (!b_SubJet_tau4_) throw std::runtime_error("SubJet_tau4 branch doesn't exist");
        int bytes = b_SubJet_tau4_->GetEntry(index);
        v_SubJet_tau4_ = vector<float>(SubJet_tau4_,SubJet_tau4_+bytes/sizeof(SubJet_tau4_[0]));
        loaded_SubJet_tau4_ = true;
    }
    return v_SubJet_tau4_;
}
const vector<bool> &Nano::Tau_Filter() {
    if (!loaded_Tau_Filter_) {
        if (!b_Tau_Filter_) throw std::runtime_error("Tau_Filter branch doesn't exist");
        int bytes = b_Tau_Filter_->GetEntry(index);
        v_Tau_Filter_ = vector<bool>(Tau_Filter_,Tau_Filter_+bytes/sizeof(Tau_Filter_[0]));
        loaded_Tau_Filter_ = true;
    }
    return v_Tau_Filter_;
}
const vector<int> &Nano::Tau_charge() {
    if (!loaded_Tau_charge_) {
        if (!b_Tau_charge_) throw std::runtime_error("Tau_charge branch doesn't exist");
        int bytes = b_Tau_charge_->GetEntry(index);
        v_Tau_charge_ = vector<int>(Tau_charge_,Tau_charge_+bytes/sizeof(Tau_charge_[0]));
        loaded_Tau_charge_ = true;
    }
    return v_Tau_charge_;
}
const vector<float> &Nano::Tau_chargedIso() {
    if (!loaded_Tau_chargedIso_) {
        if (!b_Tau_chargedIso_) throw std::runtime_error("Tau_chargedIso branch doesn't exist");
        int bytes = b_Tau_chargedIso_->GetEntry(index);
        v_Tau_chargedIso_ = vector<float>(Tau_chargedIso_,Tau_chargedIso_+bytes/sizeof(Tau_chargedIso_[0]));
        loaded_Tau_chargedIso_ = true;
    }
    return v_Tau_chargedIso_;
}
const vector<UChar_t> &Nano::Tau_cleanmask() {
    if (!loaded_Tau_cleanmask_) {
        if (!b_Tau_cleanmask_) throw std::runtime_error("Tau_cleanmask branch doesn't exist");
        int bytes = b_Tau_cleanmask_->GetEntry(index);
        v_Tau_cleanmask_ = vector<UChar_t>(Tau_cleanmask_,Tau_cleanmask_+bytes/sizeof(Tau_cleanmask_[0]));
        loaded_Tau_cleanmask_ = true;
    }
    return v_Tau_cleanmask_;
}
const vector<int> &Nano::Tau_decayMode() {
    if (!loaded_Tau_decayMode_) {
        if (!b_Tau_decayMode_) throw std::runtime_error("Tau_decayMode branch doesn't exist");
        int bytes = b_Tau_decayMode_->GetEntry(index);
        v_Tau_decayMode_ = vector<int>(Tau_decayMode_,Tau_decayMode_+bytes/sizeof(Tau_decayMode_[0]));
        loaded_Tau_decayMode_ = true;
    }
    return v_Tau_decayMode_;
}
const vector<float> &Nano::Tau_dxy() {
    if (!loaded_Tau_dxy_) {
        if (!b_Tau_dxy_) throw std::runtime_error("Tau_dxy branch doesn't exist");
        int bytes = b_Tau_dxy_->GetEntry(index);
        v_Tau_dxy_ = vector<float>(Tau_dxy_,Tau_dxy_+bytes/sizeof(Tau_dxy_[0]));
        loaded_Tau_dxy_ = true;
    }
    return v_Tau_dxy_;
}
const vector<float> &Nano::Tau_dz() {
    if (!loaded_Tau_dz_) {
        if (!b_Tau_dz_) throw std::runtime_error("Tau_dz branch doesn't exist");
        int bytes = b_Tau_dz_->GetEntry(index);
        v_Tau_dz_ = vector<float>(Tau_dz_,Tau_dz_+bytes/sizeof(Tau_dz_[0]));
        loaded_Tau_dz_ = true;
    }
    return v_Tau_dz_;
}
const vector<float> &Nano::Tau_eta() {
    if (!loaded_Tau_eta_) {
        if (!b_Tau_eta_) throw std::runtime_error("Tau_eta branch doesn't exist");
        int bytes = b_Tau_eta_->GetEntry(index);
        v_Tau_eta_ = vector<float>(Tau_eta_,Tau_eta_+bytes/sizeof(Tau_eta_[0]));
        loaded_Tau_eta_ = true;
    }
    return v_Tau_eta_;
}
const vector<UChar_t> &Nano::Tau_genPartFlav() {
    if (!loaded_Tau_genPartFlav_) {
        if (!b_Tau_genPartFlav_) throw std::runtime_error("Tau_genPartFlav branch doesn't exist");
        int bytes = b_Tau_genPartFlav_->GetEntry(index);
        v_Tau_genPartFlav_ = vector<UChar_t>(Tau_genPartFlav_,Tau_genPartFlav_+bytes/sizeof(Tau_genPartFlav_[0]));
        loaded_Tau_genPartFlav_ = true;
    }
    return v_Tau_genPartFlav_;
}
const vector<int> &Nano::Tau_genPartIdx() {
    if (!loaded_Tau_genPartIdx_) {
        if (!b_Tau_genPartIdx_) throw std::runtime_error("Tau_genPartIdx branch doesn't exist");
        int bytes = b_Tau_genPartIdx_->GetEntry(index);
        v_Tau_genPartIdx_ = vector<int>(Tau_genPartIdx_,Tau_genPartIdx_+bytes/sizeof(Tau_genPartIdx_[0]));
        loaded_Tau_genPartIdx_ = true;
    }
    return v_Tau_genPartIdx_;
}
const vector<UChar_t> &Nano::Tau_idAntiEle() {
    if (!loaded_Tau_idAntiEle_) {
        if (!b_Tau_idAntiEle_) throw std::runtime_error("Tau_idAntiEle branch doesn't exist");
        int bytes = b_Tau_idAntiEle_->GetEntry(index);
        v_Tau_idAntiEle_ = vector<UChar_t>(Tau_idAntiEle_,Tau_idAntiEle_+bytes/sizeof(Tau_idAntiEle_[0]));
        loaded_Tau_idAntiEle_ = true;
    }
    return v_Tau_idAntiEle_;
}
const vector<UChar_t> &Nano::Tau_idAntiEle2018() {
    if (!loaded_Tau_idAntiEle2018_) {
        if (!b_Tau_idAntiEle2018_) throw std::runtime_error("Tau_idAntiEle2018 branch doesn't exist");
        int bytes = b_Tau_idAntiEle2018_->GetEntry(index);
        v_Tau_idAntiEle2018_ = vector<UChar_t>(Tau_idAntiEle2018_,Tau_idAntiEle2018_+bytes/sizeof(Tau_idAntiEle2018_[0]));
        loaded_Tau_idAntiEle2018_ = true;
    }
    return v_Tau_idAntiEle2018_;
}
const vector<UChar_t> &Nano::Tau_idAntiMu() {
    if (!loaded_Tau_idAntiMu_) {
        if (!b_Tau_idAntiMu_) throw std::runtime_error("Tau_idAntiMu branch doesn't exist");
        int bytes = b_Tau_idAntiMu_->GetEntry(index);
        v_Tau_idAntiMu_ = vector<UChar_t>(Tau_idAntiMu_,Tau_idAntiMu_+bytes/sizeof(Tau_idAntiMu_[0]));
        loaded_Tau_idAntiMu_ = true;
    }
    return v_Tau_idAntiMu_;
}
const vector<bool> &Nano::Tau_idDecayMode() {
    if (!loaded_Tau_idDecayMode_) {
        if (!b_Tau_idDecayMode_) throw std::runtime_error("Tau_idDecayMode branch doesn't exist");
        int bytes = b_Tau_idDecayMode_->GetEntry(index);
        v_Tau_idDecayMode_ = vector<bool>(Tau_idDecayMode_,Tau_idDecayMode_+bytes/sizeof(Tau_idDecayMode_[0]));
        loaded_Tau_idDecayMode_ = true;
    }
    return v_Tau_idDecayMode_;
}
const vector<bool> &Nano::Tau_idDecayModeNewDMs() {
    if (!loaded_Tau_idDecayModeNewDMs_) {
        if (!b_Tau_idDecayModeNewDMs_) throw std::runtime_error("Tau_idDecayModeNewDMs branch doesn't exist");
        int bytes = b_Tau_idDecayModeNewDMs_->GetEntry(index);
        v_Tau_idDecayModeNewDMs_ = vector<bool>(Tau_idDecayModeNewDMs_,Tau_idDecayModeNewDMs_+bytes/sizeof(Tau_idDecayModeNewDMs_[0]));
        loaded_Tau_idDecayModeNewDMs_ = true;
    }
    return v_Tau_idDecayModeNewDMs_;
}
const vector<UChar_t> &Nano::Tau_idDeepTau2017v2p1VSe() {
    if (!loaded_Tau_idDeepTau2017v2p1VSe_) {
        if (!b_Tau_idDeepTau2017v2p1VSe_) throw std::runtime_error("Tau_idDeepTau2017v2p1VSe branch doesn't exist");
        int bytes = b_Tau_idDeepTau2017v2p1VSe_->GetEntry(index);
        v_Tau_idDeepTau2017v2p1VSe_ = vector<UChar_t>(Tau_idDeepTau2017v2p1VSe_,Tau_idDeepTau2017v2p1VSe_+bytes/sizeof(Tau_idDeepTau2017v2p1VSe_[0]));
        loaded_Tau_idDeepTau2017v2p1VSe_ = true;
    }
    return v_Tau_idDeepTau2017v2p1VSe_;
}
const vector<UChar_t> &Nano::Tau_idDeepTau2017v2p1VSjet() {
    if (!loaded_Tau_idDeepTau2017v2p1VSjet_) {
        if (!b_Tau_idDeepTau2017v2p1VSjet_) throw std::runtime_error("Tau_idDeepTau2017v2p1VSjet branch doesn't exist");
        int bytes = b_Tau_idDeepTau2017v2p1VSjet_->GetEntry(index);
        v_Tau_idDeepTau2017v2p1VSjet_ = vector<UChar_t>(Tau_idDeepTau2017v2p1VSjet_,Tau_idDeepTau2017v2p1VSjet_+bytes/sizeof(Tau_idDeepTau2017v2p1VSjet_[0]));
        loaded_Tau_idDeepTau2017v2p1VSjet_ = true;
    }
    return v_Tau_idDeepTau2017v2p1VSjet_;
}
const vector<UChar_t> &Nano::Tau_idDeepTau2017v2p1VSmu() {
    if (!loaded_Tau_idDeepTau2017v2p1VSmu_) {
        if (!b_Tau_idDeepTau2017v2p1VSmu_) throw std::runtime_error("Tau_idDeepTau2017v2p1VSmu branch doesn't exist");
        int bytes = b_Tau_idDeepTau2017v2p1VSmu_->GetEntry(index);
        v_Tau_idDeepTau2017v2p1VSmu_ = vector<UChar_t>(Tau_idDeepTau2017v2p1VSmu_,Tau_idDeepTau2017v2p1VSmu_+bytes/sizeof(Tau_idDeepTau2017v2p1VSmu_[0]));
        loaded_Tau_idDeepTau2017v2p1VSmu_ = true;
    }
    return v_Tau_idDeepTau2017v2p1VSmu_;
}
const vector<UChar_t> &Nano::Tau_idMVAnewDM2017v2() {
    if (!loaded_Tau_idMVAnewDM2017v2_) {
        if (!b_Tau_idMVAnewDM2017v2_) throw std::runtime_error("Tau_idMVAnewDM2017v2 branch doesn't exist");
        int bytes = b_Tau_idMVAnewDM2017v2_->GetEntry(index);
        v_Tau_idMVAnewDM2017v2_ = vector<UChar_t>(Tau_idMVAnewDM2017v2_,Tau_idMVAnewDM2017v2_+bytes/sizeof(Tau_idMVAnewDM2017v2_[0]));
        loaded_Tau_idMVAnewDM2017v2_ = true;
    }
    return v_Tau_idMVAnewDM2017v2_;
}
const vector<UChar_t> &Nano::Tau_idMVAoldDM() {
    if (!loaded_Tau_idMVAoldDM_) {
        if (!b_Tau_idMVAoldDM_) throw std::runtime_error("Tau_idMVAoldDM branch doesn't exist");
        int bytes = b_Tau_idMVAoldDM_->GetEntry(index);
        v_Tau_idMVAoldDM_ = vector<UChar_t>(Tau_idMVAoldDM_,Tau_idMVAoldDM_+bytes/sizeof(Tau_idMVAoldDM_[0]));
        loaded_Tau_idMVAoldDM_ = true;
    }
    return v_Tau_idMVAoldDM_;
}
const vector<UChar_t> &Nano::Tau_idMVAoldDM2017v1() {
    if (!loaded_Tau_idMVAoldDM2017v1_) {
        if (!b_Tau_idMVAoldDM2017v1_) throw std::runtime_error("Tau_idMVAoldDM2017v1 branch doesn't exist");
        int bytes = b_Tau_idMVAoldDM2017v1_->GetEntry(index);
        v_Tau_idMVAoldDM2017v1_ = vector<UChar_t>(Tau_idMVAoldDM2017v1_,Tau_idMVAoldDM2017v1_+bytes/sizeof(Tau_idMVAoldDM2017v1_[0]));
        loaded_Tau_idMVAoldDM2017v1_ = true;
    }
    return v_Tau_idMVAoldDM2017v1_;
}
const vector<UChar_t> &Nano::Tau_idMVAoldDM2017v2() {
    if (!loaded_Tau_idMVAoldDM2017v2_) {
        if (!b_Tau_idMVAoldDM2017v2_) throw std::runtime_error("Tau_idMVAoldDM2017v2 branch doesn't exist");
        int bytes = b_Tau_idMVAoldDM2017v2_->GetEntry(index);
        v_Tau_idMVAoldDM2017v2_ = vector<UChar_t>(Tau_idMVAoldDM2017v2_,Tau_idMVAoldDM2017v2_+bytes/sizeof(Tau_idMVAoldDM2017v2_[0]));
        loaded_Tau_idMVAoldDM2017v2_ = true;
    }
    return v_Tau_idMVAoldDM2017v2_;
}
const vector<UChar_t> &Nano::Tau_idMVAoldDMdR032017v2() {
    if (!loaded_Tau_idMVAoldDMdR032017v2_) {
        if (!b_Tau_idMVAoldDMdR032017v2_) throw std::runtime_error("Tau_idMVAoldDMdR032017v2 branch doesn't exist");
        int bytes = b_Tau_idMVAoldDMdR032017v2_->GetEntry(index);
        v_Tau_idMVAoldDMdR032017v2_ = vector<UChar_t>(Tau_idMVAoldDMdR032017v2_,Tau_idMVAoldDMdR032017v2_+bytes/sizeof(Tau_idMVAoldDMdR032017v2_[0]));
        loaded_Tau_idMVAoldDMdR032017v2_ = true;
    }
    return v_Tau_idMVAoldDMdR032017v2_;
}
const vector<int> &Nano::Tau_jetIdx() {
    if (!loaded_Tau_jetIdx_) {
        if (!b_Tau_jetIdx_) throw std::runtime_error("Tau_jetIdx branch doesn't exist");
        int bytes = b_Tau_jetIdx_->GetEntry(index);
        v_Tau_jetIdx_ = vector<int>(Tau_jetIdx_,Tau_jetIdx_+bytes/sizeof(Tau_jetIdx_[0]));
        loaded_Tau_jetIdx_ = true;
    }
    return v_Tau_jetIdx_;
}
const vector<float> &Nano::Tau_leadTkDeltaEta() {
    if (!loaded_Tau_leadTkDeltaEta_) {
        if (!b_Tau_leadTkDeltaEta_) throw std::runtime_error("Tau_leadTkDeltaEta branch doesn't exist");
        int bytes = b_Tau_leadTkDeltaEta_->GetEntry(index);
        v_Tau_leadTkDeltaEta_ = vector<float>(Tau_leadTkDeltaEta_,Tau_leadTkDeltaEta_+bytes/sizeof(Tau_leadTkDeltaEta_[0]));
        loaded_Tau_leadTkDeltaEta_ = true;
    }
    return v_Tau_leadTkDeltaEta_;
}
const vector<float> &Nano::Tau_leadTkDeltaPhi() {
    if (!loaded_Tau_leadTkDeltaPhi_) {
        if (!b_Tau_leadTkDeltaPhi_) throw std::runtime_error("Tau_leadTkDeltaPhi branch doesn't exist");
        int bytes = b_Tau_leadTkDeltaPhi_->GetEntry(index);
        v_Tau_leadTkDeltaPhi_ = vector<float>(Tau_leadTkDeltaPhi_,Tau_leadTkDeltaPhi_+bytes/sizeof(Tau_leadTkDeltaPhi_[0]));
        loaded_Tau_leadTkDeltaPhi_ = true;
    }
    return v_Tau_leadTkDeltaPhi_;
}
const vector<float> &Nano::Tau_leadTkPtOverTauPt() {
    if (!loaded_Tau_leadTkPtOverTauPt_) {
        if (!b_Tau_leadTkPtOverTauPt_) throw std::runtime_error("Tau_leadTkPtOverTauPt branch doesn't exist");
        int bytes = b_Tau_leadTkPtOverTauPt_->GetEntry(index);
        v_Tau_leadTkPtOverTauPt_ = vector<float>(Tau_leadTkPtOverTauPt_,Tau_leadTkPtOverTauPt_+bytes/sizeof(Tau_leadTkPtOverTauPt_[0]));
        loaded_Tau_leadTkPtOverTauPt_ = true;
    }
    return v_Tau_leadTkPtOverTauPt_;
}
const vector<float> &Nano::Tau_mass() {
    if (!loaded_Tau_mass_) {
        if (!b_Tau_mass_) throw std::runtime_error("Tau_mass branch doesn't exist");
        int bytes = b_Tau_mass_->GetEntry(index);
        v_Tau_mass_ = vector<float>(Tau_mass_,Tau_mass_+bytes/sizeof(Tau_mass_[0]));
        loaded_Tau_mass_ = true;
    }
    return v_Tau_mass_;
}
const vector<float> &Nano::Tau_neutralIso() {
    if (!loaded_Tau_neutralIso_) {
        if (!b_Tau_neutralIso_) throw std::runtime_error("Tau_neutralIso branch doesn't exist");
        int bytes = b_Tau_neutralIso_->GetEntry(index);
        v_Tau_neutralIso_ = vector<float>(Tau_neutralIso_,Tau_neutralIso_+bytes/sizeof(Tau_neutralIso_[0]));
        loaded_Tau_neutralIso_ = true;
    }
    return v_Tau_neutralIso_;
}
const vector<LorentzVector> &Nano::Tau_p4() {
    if (!loaded_Tau_p4_) {
        v_Tau_p4_.clear();
        vector<float> pts = Nano::Tau_pt();
        vector<float> etas = Nano::Tau_eta();
        vector<float> phis = Nano::Tau_phi();
        vector<float> masses = Nano::Tau_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_Tau_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_Tau_p4_ = true;
    }
    return v_Tau_p4_;
}
const vector<float> &Nano::Tau_phi() {
    if (!loaded_Tau_phi_) {
        if (!b_Tau_phi_) throw std::runtime_error("Tau_phi branch doesn't exist");
        int bytes = b_Tau_phi_->GetEntry(index);
        v_Tau_phi_ = vector<float>(Tau_phi_,Tau_phi_+bytes/sizeof(Tau_phi_[0]));
        loaded_Tau_phi_ = true;
    }
    return v_Tau_phi_;
}
const vector<float> &Nano::Tau_photonsOutsideSignalCone() {
    if (!loaded_Tau_photonsOutsideSignalCone_) {
        if (!b_Tau_photonsOutsideSignalCone_) throw std::runtime_error("Tau_photonsOutsideSignalCone branch doesn't exist");
        int bytes = b_Tau_photonsOutsideSignalCone_->GetEntry(index);
        v_Tau_photonsOutsideSignalCone_ = vector<float>(Tau_photonsOutsideSignalCone_,Tau_photonsOutsideSignalCone_+bytes/sizeof(Tau_photonsOutsideSignalCone_[0]));
        loaded_Tau_photonsOutsideSignalCone_ = true;
    }
    return v_Tau_photonsOutsideSignalCone_;
}
const vector<float> &Nano::Tau_pt() {
    if (!loaded_Tau_pt_) {
        if (!b_Tau_pt_) throw std::runtime_error("Tau_pt branch doesn't exist");
        int bytes = b_Tau_pt_->GetEntry(index);
        v_Tau_pt_ = vector<float>(Tau_pt_,Tau_pt_+bytes/sizeof(Tau_pt_[0]));
        loaded_Tau_pt_ = true;
    }
    return v_Tau_pt_;
}
const vector<float> &Nano::Tau_puCorr() {
    if (!loaded_Tau_puCorr_) {
        if (!b_Tau_puCorr_) throw std::runtime_error("Tau_puCorr branch doesn't exist");
        int bytes = b_Tau_puCorr_->GetEntry(index);
        v_Tau_puCorr_ = vector<float>(Tau_puCorr_,Tau_puCorr_+bytes/sizeof(Tau_puCorr_[0]));
        loaded_Tau_puCorr_ = true;
    }
    return v_Tau_puCorr_;
}
const vector<float> &Nano::Tau_rawAntiEle() {
    if (!loaded_Tau_rawAntiEle_) {
        if (!b_Tau_rawAntiEle_) throw std::runtime_error("Tau_rawAntiEle branch doesn't exist");
        int bytes = b_Tau_rawAntiEle_->GetEntry(index);
        v_Tau_rawAntiEle_ = vector<float>(Tau_rawAntiEle_,Tau_rawAntiEle_+bytes/sizeof(Tau_rawAntiEle_[0]));
        loaded_Tau_rawAntiEle_ = true;
    }
    return v_Tau_rawAntiEle_;
}
const vector<float> &Nano::Tau_rawAntiEle2018() {
    if (!loaded_Tau_rawAntiEle2018_) {
        if (!b_Tau_rawAntiEle2018_) throw std::runtime_error("Tau_rawAntiEle2018 branch doesn't exist");
        int bytes = b_Tau_rawAntiEle2018_->GetEntry(index);
        v_Tau_rawAntiEle2018_ = vector<float>(Tau_rawAntiEle2018_,Tau_rawAntiEle2018_+bytes/sizeof(Tau_rawAntiEle2018_[0]));
        loaded_Tau_rawAntiEle2018_ = true;
    }
    return v_Tau_rawAntiEle2018_;
}
const vector<int> &Nano::Tau_rawAntiEleCat() {
    if (!loaded_Tau_rawAntiEleCat_) {
        if (!b_Tau_rawAntiEleCat_) throw std::runtime_error("Tau_rawAntiEleCat branch doesn't exist");
        int bytes = b_Tau_rawAntiEleCat_->GetEntry(index);
        v_Tau_rawAntiEleCat_ = vector<int>(Tau_rawAntiEleCat_,Tau_rawAntiEleCat_+bytes/sizeof(Tau_rawAntiEleCat_[0]));
        loaded_Tau_rawAntiEleCat_ = true;
    }
    return v_Tau_rawAntiEleCat_;
}
const vector<int> &Nano::Tau_rawAntiEleCat2018() {
    if (!loaded_Tau_rawAntiEleCat2018_) {
        if (!b_Tau_rawAntiEleCat2018_) throw std::runtime_error("Tau_rawAntiEleCat2018 branch doesn't exist");
        int bytes = b_Tau_rawAntiEleCat2018_->GetEntry(index);
        v_Tau_rawAntiEleCat2018_ = vector<int>(Tau_rawAntiEleCat2018_,Tau_rawAntiEleCat2018_+bytes/sizeof(Tau_rawAntiEleCat2018_[0]));
        loaded_Tau_rawAntiEleCat2018_ = true;
    }
    return v_Tau_rawAntiEleCat2018_;
}
const vector<float> &Nano::Tau_rawDeepTau2017v2p1VSe() {
    if (!loaded_Tau_rawDeepTau2017v2p1VSe_) {
        if (!b_Tau_rawDeepTau2017v2p1VSe_) throw std::runtime_error("Tau_rawDeepTau2017v2p1VSe branch doesn't exist");
        int bytes = b_Tau_rawDeepTau2017v2p1VSe_->GetEntry(index);
        v_Tau_rawDeepTau2017v2p1VSe_ = vector<float>(Tau_rawDeepTau2017v2p1VSe_,Tau_rawDeepTau2017v2p1VSe_+bytes/sizeof(Tau_rawDeepTau2017v2p1VSe_[0]));
        loaded_Tau_rawDeepTau2017v2p1VSe_ = true;
    }
    return v_Tau_rawDeepTau2017v2p1VSe_;
}
const vector<float> &Nano::Tau_rawDeepTau2017v2p1VSjet() {
    if (!loaded_Tau_rawDeepTau2017v2p1VSjet_) {
        if (!b_Tau_rawDeepTau2017v2p1VSjet_) throw std::runtime_error("Tau_rawDeepTau2017v2p1VSjet branch doesn't exist");
        int bytes = b_Tau_rawDeepTau2017v2p1VSjet_->GetEntry(index);
        v_Tau_rawDeepTau2017v2p1VSjet_ = vector<float>(Tau_rawDeepTau2017v2p1VSjet_,Tau_rawDeepTau2017v2p1VSjet_+bytes/sizeof(Tau_rawDeepTau2017v2p1VSjet_[0]));
        loaded_Tau_rawDeepTau2017v2p1VSjet_ = true;
    }
    return v_Tau_rawDeepTau2017v2p1VSjet_;
}
const vector<float> &Nano::Tau_rawDeepTau2017v2p1VSmu() {
    if (!loaded_Tau_rawDeepTau2017v2p1VSmu_) {
        if (!b_Tau_rawDeepTau2017v2p1VSmu_) throw std::runtime_error("Tau_rawDeepTau2017v2p1VSmu branch doesn't exist");
        int bytes = b_Tau_rawDeepTau2017v2p1VSmu_->GetEntry(index);
        v_Tau_rawDeepTau2017v2p1VSmu_ = vector<float>(Tau_rawDeepTau2017v2p1VSmu_,Tau_rawDeepTau2017v2p1VSmu_+bytes/sizeof(Tau_rawDeepTau2017v2p1VSmu_[0]));
        loaded_Tau_rawDeepTau2017v2p1VSmu_ = true;
    }
    return v_Tau_rawDeepTau2017v2p1VSmu_;
}
const vector<float> &Nano::Tau_rawIso() {
    if (!loaded_Tau_rawIso_) {
        if (!b_Tau_rawIso_) throw std::runtime_error("Tau_rawIso branch doesn't exist");
        int bytes = b_Tau_rawIso_->GetEntry(index);
        v_Tau_rawIso_ = vector<float>(Tau_rawIso_,Tau_rawIso_+bytes/sizeof(Tau_rawIso_[0]));
        loaded_Tau_rawIso_ = true;
    }
    return v_Tau_rawIso_;
}
const vector<float> &Nano::Tau_rawIsodR03() {
    if (!loaded_Tau_rawIsodR03_) {
        if (!b_Tau_rawIsodR03_) throw std::runtime_error("Tau_rawIsodR03 branch doesn't exist");
        int bytes = b_Tau_rawIsodR03_->GetEntry(index);
        v_Tau_rawIsodR03_ = vector<float>(Tau_rawIsodR03_,Tau_rawIsodR03_+bytes/sizeof(Tau_rawIsodR03_[0]));
        loaded_Tau_rawIsodR03_ = true;
    }
    return v_Tau_rawIsodR03_;
}
const vector<float> &Nano::Tau_rawMVAnewDM2017v2() {
    if (!loaded_Tau_rawMVAnewDM2017v2_) {
        if (!b_Tau_rawMVAnewDM2017v2_) throw std::runtime_error("Tau_rawMVAnewDM2017v2 branch doesn't exist");
        int bytes = b_Tau_rawMVAnewDM2017v2_->GetEntry(index);
        v_Tau_rawMVAnewDM2017v2_ = vector<float>(Tau_rawMVAnewDM2017v2_,Tau_rawMVAnewDM2017v2_+bytes/sizeof(Tau_rawMVAnewDM2017v2_[0]));
        loaded_Tau_rawMVAnewDM2017v2_ = true;
    }
    return v_Tau_rawMVAnewDM2017v2_;
}
const vector<float> &Nano::Tau_rawMVAoldDM() {
    if (!loaded_Tau_rawMVAoldDM_) {
        if (!b_Tau_rawMVAoldDM_) throw std::runtime_error("Tau_rawMVAoldDM branch doesn't exist");
        int bytes = b_Tau_rawMVAoldDM_->GetEntry(index);
        v_Tau_rawMVAoldDM_ = vector<float>(Tau_rawMVAoldDM_,Tau_rawMVAoldDM_+bytes/sizeof(Tau_rawMVAoldDM_[0]));
        loaded_Tau_rawMVAoldDM_ = true;
    }
    return v_Tau_rawMVAoldDM_;
}
const vector<float> &Nano::Tau_rawMVAoldDM2017v1() {
    if (!loaded_Tau_rawMVAoldDM2017v1_) {
        if (!b_Tau_rawMVAoldDM2017v1_) throw std::runtime_error("Tau_rawMVAoldDM2017v1 branch doesn't exist");
        int bytes = b_Tau_rawMVAoldDM2017v1_->GetEntry(index);
        v_Tau_rawMVAoldDM2017v1_ = vector<float>(Tau_rawMVAoldDM2017v1_,Tau_rawMVAoldDM2017v1_+bytes/sizeof(Tau_rawMVAoldDM2017v1_[0]));
        loaded_Tau_rawMVAoldDM2017v1_ = true;
    }
    return v_Tau_rawMVAoldDM2017v1_;
}
const vector<float> &Nano::Tau_rawMVAoldDM2017v2() {
    if (!loaded_Tau_rawMVAoldDM2017v2_) {
        if (!b_Tau_rawMVAoldDM2017v2_) throw std::runtime_error("Tau_rawMVAoldDM2017v2 branch doesn't exist");
        int bytes = b_Tau_rawMVAoldDM2017v2_->GetEntry(index);
        v_Tau_rawMVAoldDM2017v2_ = vector<float>(Tau_rawMVAoldDM2017v2_,Tau_rawMVAoldDM2017v2_+bytes/sizeof(Tau_rawMVAoldDM2017v2_[0]));
        loaded_Tau_rawMVAoldDM2017v2_ = true;
    }
    return v_Tau_rawMVAoldDM2017v2_;
}
const vector<float> &Nano::Tau_rawMVAoldDMdR032017v2() {
    if (!loaded_Tau_rawMVAoldDMdR032017v2_) {
        if (!b_Tau_rawMVAoldDMdR032017v2_) throw std::runtime_error("Tau_rawMVAoldDMdR032017v2 branch doesn't exist");
        int bytes = b_Tau_rawMVAoldDMdR032017v2_->GetEntry(index);
        v_Tau_rawMVAoldDMdR032017v2_ = vector<float>(Tau_rawMVAoldDMdR032017v2_,Tau_rawMVAoldDMdR032017v2_+bytes/sizeof(Tau_rawMVAoldDMdR032017v2_[0]));
        loaded_Tau_rawMVAoldDMdR032017v2_ = true;
    }
    return v_Tau_rawMVAoldDMdR032017v2_;
}
const float &Nano::TkMET_phi() {
    if (!loaded_TkMET_phi_) {
        if (!b_TkMET_phi_) throw std::runtime_error("TkMET_phi branch doesn't exist");
        b_TkMET_phi_->GetEntry(index);
        loaded_TkMET_phi_ = true;
    }
    return TkMET_phi_;
}
const float &Nano::TkMET_pt() {
    if (!loaded_TkMET_pt_) {
        if (!b_TkMET_pt_) throw std::runtime_error("TkMET_pt branch doesn't exist");
        b_TkMET_pt_->GetEntry(index);
        loaded_TkMET_pt_ = true;
    }
    return TkMET_pt_;
}
const float &Nano::TkMET_sumEt() {
    if (!loaded_TkMET_sumEt_) {
        if (!b_TkMET_sumEt_) throw std::runtime_error("TkMET_sumEt branch doesn't exist");
        b_TkMET_sumEt_->GetEntry(index);
        loaded_TkMET_sumEt_ = true;
    }
    return TkMET_sumEt_;
}
const vector<float> &Nano::TrigObj_eta() {
    if (!loaded_TrigObj_eta_) {
        if (!b_TrigObj_eta_) throw std::runtime_error("TrigObj_eta branch doesn't exist");
        int bytes = b_TrigObj_eta_->GetEntry(index);
        v_TrigObj_eta_ = vector<float>(TrigObj_eta_,TrigObj_eta_+bytes/sizeof(TrigObj_eta_[0]));
        loaded_TrigObj_eta_ = true;
    }
    return v_TrigObj_eta_;
}
const vector<int> &Nano::TrigObj_filterBits() {
    if (!loaded_TrigObj_filterBits_) {
        if (!b_TrigObj_filterBits_) throw std::runtime_error("TrigObj_filterBits branch doesn't exist");
        int bytes = b_TrigObj_filterBits_->GetEntry(index);
        v_TrigObj_filterBits_ = vector<int>(TrigObj_filterBits_,TrigObj_filterBits_+bytes/sizeof(TrigObj_filterBits_[0]));
        loaded_TrigObj_filterBits_ = true;
    }
    return v_TrigObj_filterBits_;
}
const vector<int> &Nano::TrigObj_id() {
    if (!loaded_TrigObj_id_) {
        if (!b_TrigObj_id_) throw std::runtime_error("TrigObj_id branch doesn't exist");
        int bytes = b_TrigObj_id_->GetEntry(index);
        v_TrigObj_id_ = vector<int>(TrigObj_id_,TrigObj_id_+bytes/sizeof(TrigObj_id_[0]));
        loaded_TrigObj_id_ = true;
    }
    return v_TrigObj_id_;
}
const vector<int> &Nano::TrigObj_l1charge() {
    if (!loaded_TrigObj_l1charge_) {
        if (!b_TrigObj_l1charge_) throw std::runtime_error("TrigObj_l1charge branch doesn't exist");
        int bytes = b_TrigObj_l1charge_->GetEntry(index);
        v_TrigObj_l1charge_ = vector<int>(TrigObj_l1charge_,TrigObj_l1charge_+bytes/sizeof(TrigObj_l1charge_[0]));
        loaded_TrigObj_l1charge_ = true;
    }
    return v_TrigObj_l1charge_;
}
const vector<int> &Nano::TrigObj_l1iso() {
    if (!loaded_TrigObj_l1iso_) {
        if (!b_TrigObj_l1iso_) throw std::runtime_error("TrigObj_l1iso branch doesn't exist");
        int bytes = b_TrigObj_l1iso_->GetEntry(index);
        v_TrigObj_l1iso_ = vector<int>(TrigObj_l1iso_,TrigObj_l1iso_+bytes/sizeof(TrigObj_l1iso_[0]));
        loaded_TrigObj_l1iso_ = true;
    }
    return v_TrigObj_l1iso_;
}
const vector<float> &Nano::TrigObj_l1pt() {
    if (!loaded_TrigObj_l1pt_) {
        if (!b_TrigObj_l1pt_) throw std::runtime_error("TrigObj_l1pt branch doesn't exist");
        int bytes = b_TrigObj_l1pt_->GetEntry(index);
        v_TrigObj_l1pt_ = vector<float>(TrigObj_l1pt_,TrigObj_l1pt_+bytes/sizeof(TrigObj_l1pt_[0]));
        loaded_TrigObj_l1pt_ = true;
    }
    return v_TrigObj_l1pt_;
}
const vector<float> &Nano::TrigObj_l1pt_2() {
    if (!loaded_TrigObj_l1pt_2_) {
        if (!b_TrigObj_l1pt_2_) throw std::runtime_error("TrigObj_l1pt_2 branch doesn't exist");
        int bytes = b_TrigObj_l1pt_2_->GetEntry(index);
        v_TrigObj_l1pt_2_ = vector<float>(TrigObj_l1pt_2_,TrigObj_l1pt_2_+bytes/sizeof(TrigObj_l1pt_2_[0]));
        loaded_TrigObj_l1pt_2_ = true;
    }
    return v_TrigObj_l1pt_2_;
}
const vector<float> &Nano::TrigObj_l2pt() {
    if (!loaded_TrigObj_l2pt_) {
        if (!b_TrigObj_l2pt_) throw std::runtime_error("TrigObj_l2pt branch doesn't exist");
        int bytes = b_TrigObj_l2pt_->GetEntry(index);
        v_TrigObj_l2pt_ = vector<float>(TrigObj_l2pt_,TrigObj_l2pt_+bytes/sizeof(TrigObj_l2pt_[0]));
        loaded_TrigObj_l2pt_ = true;
    }
    return v_TrigObj_l2pt_;
}
const vector<float> &Nano::TrigObj_phi() {
    if (!loaded_TrigObj_phi_) {
        if (!b_TrigObj_phi_) throw std::runtime_error("TrigObj_phi branch doesn't exist");
        int bytes = b_TrigObj_phi_->GetEntry(index);
        v_TrigObj_phi_ = vector<float>(TrigObj_phi_,TrigObj_phi_+bytes/sizeof(TrigObj_phi_[0]));
        loaded_TrigObj_phi_ = true;
    }
    return v_TrigObj_phi_;
}
const vector<float> &Nano::TrigObj_pt() {
    if (!loaded_TrigObj_pt_) {
        if (!b_TrigObj_pt_) throw std::runtime_error("TrigObj_pt branch doesn't exist");
        int bytes = b_TrigObj_pt_->GetEntry(index);
        v_TrigObj_pt_ = vector<float>(TrigObj_pt_,TrigObj_pt_+bytes/sizeof(TrigObj_pt_[0]));
        loaded_TrigObj_pt_ = true;
    }
    return v_TrigObj_pt_;
}
const float &Nano::btagWeight_CMVA() {
    if (!loaded_btagWeight_CMVA_) {
        if (!b_btagWeight_CMVA_) throw std::runtime_error("btagWeight_CMVA branch doesn't exist");
        b_btagWeight_CMVA_->GetEntry(index);
        loaded_btagWeight_CMVA_ = true;
    }
    return btagWeight_CMVA_;
}
const float &Nano::btagWeight_CSVV2() {
    if (!loaded_btagWeight_CSVV2_) {
        if (!b_btagWeight_CSVV2_) throw std::runtime_error("btagWeight_CSVV2 branch doesn't exist");
        b_btagWeight_CSVV2_->GetEntry(index);
        loaded_btagWeight_CSVV2_ = true;
    }
    return btagWeight_CSVV2_;
}
const float &Nano::btagWeight_DeepCSVB() {
    if (!loaded_btagWeight_DeepCSVB_) {
        if (!b_btagWeight_DeepCSVB_) throw std::runtime_error("btagWeight_DeepCSVB branch doesn't exist");
        b_btagWeight_DeepCSVB_->GetEntry(index);
        loaded_btagWeight_DeepCSVB_ = true;
    }
    return btagWeight_DeepCSVB_;
}
const float &Nano::dPhi_ggtautauLoose() {
    if (!loaded_dPhi_ggtautauLoose_) {
        if (!b_dPhi_ggtautauLoose_) throw std::runtime_error("dPhi_ggtautauLoose branch doesn't exist");
        b_dPhi_ggtautauLoose_->GetEntry(index);
        loaded_dPhi_ggtautauLoose_ = true;
    }
    return dPhi_ggtautauLoose_;
}
const float &Nano::dPhi_ggtautauSVFitLoose() {
    if (!loaded_dPhi_ggtautauSVFitLoose_) {
        if (!b_dPhi_ggtautauSVFitLoose_) throw std::runtime_error("dPhi_ggtautauSVFitLoose branch doesn't exist");
        b_dPhi_ggtautauSVFitLoose_->GetEntry(index);
        loaded_dPhi_ggtautauSVFitLoose_ = true;
    }
    return dPhi_ggtautauSVFitLoose_;
}
const float &Nano::dR_ggtautauLoose() {
    if (!loaded_dR_ggtautauLoose_) {
        if (!b_dR_ggtautauLoose_) throw std::runtime_error("dR_ggtautauLoose branch doesn't exist");
        b_dR_ggtautauLoose_->GetEntry(index);
        loaded_dR_ggtautauLoose_ = true;
    }
    return dR_ggtautauLoose_;
}
const float &Nano::dR_ggtautauSVFitLoose() {
    if (!loaded_dR_ggtautauSVFitLoose_) {
        if (!b_dR_ggtautauSVFitLoose_) throw std::runtime_error("dR_ggtautauSVFitLoose branch doesn't exist");
        b_dR_ggtautauSVFitLoose_->GetEntry(index);
        loaded_dR_ggtautauSVFitLoose_ = true;
    }
    return dR_ggtautauSVFitLoose_;
}
const float &Nano::dR_tautauLoose() {
    if (!loaded_dR_tautauLoose_) {
        if (!b_dR_tautauLoose_) throw std::runtime_error("dR_tautauLoose branch doesn't exist");
        b_dR_tautauLoose_->GetEntry(index);
        loaded_dR_tautauLoose_ = true;
    }
    return dR_tautauLoose_;
}
const float &Nano::dR_tautauSVFitLoose() {
    if (!loaded_dR_tautauSVFitLoose_) {
        if (!b_dR_tautauSVFitLoose_) throw std::runtime_error("dR_tautauSVFitLoose branch doesn't exist");
        b_dR_tautauSVFitLoose_->GetEntry(index);
        loaded_dR_tautauSVFitLoose_ = true;
    }
    return dR_tautauSVFitLoose_;
}
const vector<int> &Nano::eleHidx() {
    if (!loaded_eleHidx_) {
        if (!b_eleHidx_) throw std::runtime_error("eleHidx branch doesn't exist");
        int bytes = b_eleHidx_->GetEntry(index);
        v_eleHidx_ = vector<int>(eleHidx_,eleHidx_+bytes/sizeof(eleHidx_[0]));
        loaded_eleHidx_ = true;
    }
    return v_eleHidx_;
}
const float &Nano::eta_tautauLoose() {
    if (!loaded_eta_tautauLoose_) {
        if (!b_eta_tautauLoose_) throw std::runtime_error("eta_tautauLoose branch doesn't exist");
        b_eta_tautauLoose_->GetEntry(index);
        loaded_eta_tautauLoose_ = true;
    }
    return eta_tautauLoose_;
}
const float &Nano::eta_tautauSVFitLoose() {
    if (!loaded_eta_tautauSVFitLoose_) {
        if (!b_eta_tautauSVFitLoose_) throw std::runtime_error("eta_tautauSVFitLoose branch doesn't exist");
        b_eta_tautauSVFitLoose_->GetEntry(index);
        loaded_eta_tautauSVFitLoose_ = true;
    }
    return eta_tautauSVFitLoose_;
}
const float &Nano::evWeight_electronVeto() {
    if (!loaded_evWeight_electronVeto_) {
        if (!b_evWeight_electronVeto_) throw std::runtime_error("evWeight_electronVeto branch doesn't exist");
        b_evWeight_electronVeto_->GetEntry(index);
        loaded_evWeight_electronVeto_ = true;
    }
    return evWeight_electronVeto_;
}
const float &Nano::evWeight_electronVetoDown() {
    if (!loaded_evWeight_electronVetoDown_) {
        if (!b_evWeight_electronVetoDown_) throw std::runtime_error("evWeight_electronVetoDown branch doesn't exist");
        b_evWeight_electronVetoDown_->GetEntry(index);
        loaded_evWeight_electronVetoDown_ = true;
    }
    return evWeight_electronVetoDown_;
}
const float &Nano::evWeight_electronVetoUp() {
    if (!loaded_evWeight_electronVetoUp_) {
        if (!b_evWeight_electronVetoUp_) throw std::runtime_error("evWeight_electronVetoUp branch doesn't exist");
        b_evWeight_electronVetoUp_->GetEntry(index);
        loaded_evWeight_electronVetoUp_ = true;
    }
    return evWeight_electronVetoUp_;
}
const float &Nano::evWeight_looseMva() {
    if (!loaded_evWeight_looseMva_) {
        if (!b_evWeight_looseMva_) throw std::runtime_error("evWeight_looseMva branch doesn't exist");
        b_evWeight_looseMva_->GetEntry(index);
        loaded_evWeight_looseMva_ = true;
    }
    return evWeight_looseMva_;
}
const float &Nano::evWeight_looseMvaDown() {
    if (!loaded_evWeight_looseMvaDown_) {
        if (!b_evWeight_looseMvaDown_) throw std::runtime_error("evWeight_looseMvaDown branch doesn't exist");
        b_evWeight_looseMvaDown_->GetEntry(index);
        loaded_evWeight_looseMvaDown_ = true;
    }
    return evWeight_looseMvaDown_;
}
const float &Nano::evWeight_looseMvaUp() {
    if (!loaded_evWeight_looseMvaUp_) {
        if (!b_evWeight_looseMvaUp_) throw std::runtime_error("evWeight_looseMvaUp branch doesn't exist");
        b_evWeight_looseMvaUp_->GetEntry(index);
        loaded_evWeight_looseMvaUp_ = true;
    }
    return evWeight_looseMvaUp_;
}
const float &Nano::evWeight_presel() {
    if (!loaded_evWeight_presel_) {
        if (!b_evWeight_presel_) throw std::runtime_error("evWeight_presel branch doesn't exist");
        b_evWeight_presel_->GetEntry(index);
        loaded_evWeight_presel_ = true;
    }
    return evWeight_presel_;
}
const float &Nano::evWeight_preselDown() {
    if (!loaded_evWeight_preselDown_) {
        if (!b_evWeight_preselDown_) throw std::runtime_error("evWeight_preselDown branch doesn't exist");
        b_evWeight_preselDown_->GetEntry(index);
        loaded_evWeight_preselDown_ = true;
    }
    return evWeight_preselDown_;
}
const float &Nano::evWeight_preselUp() {
    if (!loaded_evWeight_preselUp_) {
        if (!b_evWeight_preselUp_) throw std::runtime_error("evWeight_preselUp branch doesn't exist");
        b_evWeight_preselUp_->GetEntry(index);
        loaded_evWeight_preselUp_ = true;
    }
    return evWeight_preselUp_;
}
const ULong64_t &Nano::event() {
    if (!loaded_event_) {
        if (!b_event_) throw std::runtime_error("event branch doesn't exist");
        b_event_->GetEntry(index);
        loaded_event_ = true;
    }
    return event_;
}
const float &Nano::fixedGridRhoAll() {
    if (!loaded_fixedGridRhoAll_) {
        if (!b_fixedGridRhoAll_) throw std::runtime_error("fixedGridRhoAll branch doesn't exist");
        b_fixedGridRhoAll_->GetEntry(index);
        loaded_fixedGridRhoAll_ = true;
    }
    return fixedGridRhoAll_;
}
const float &Nano::fixedGridRhoFastjetAll() {
    if (!loaded_fixedGridRhoFastjetAll_) {
        if (!b_fixedGridRhoFastjetAll_) throw std::runtime_error("fixedGridRhoFastjetAll branch doesn't exist");
        b_fixedGridRhoFastjetAll_->GetEntry(index);
        loaded_fixedGridRhoFastjetAll_ = true;
    }
    return fixedGridRhoFastjetAll_;
}
const float &Nano::fixedGridRhoFastjetCentral() {
    if (!loaded_fixedGridRhoFastjetCentral_) {
        if (!b_fixedGridRhoFastjetCentral_) throw std::runtime_error("fixedGridRhoFastjetCentral branch doesn't exist");
        b_fixedGridRhoFastjetCentral_->GetEntry(index);
        loaded_fixedGridRhoFastjetCentral_ = true;
    }
    return fixedGridRhoFastjetCentral_;
}
const float &Nano::fixedGridRhoFastjetCentralCalo() {
    if (!loaded_fixedGridRhoFastjetCentralCalo_) {
        if (!b_fixedGridRhoFastjetCentralCalo_) throw std::runtime_error("fixedGridRhoFastjetCentralCalo branch doesn't exist");
        b_fixedGridRhoFastjetCentralCalo_->GetEntry(index);
        loaded_fixedGridRhoFastjetCentralCalo_ = true;
    }
    return fixedGridRhoFastjetCentralCalo_;
}
const float &Nano::fixedGridRhoFastjetCentralChargedPileUp() {
    if (!loaded_fixedGridRhoFastjetCentralChargedPileUp_) {
        if (!b_fixedGridRhoFastjetCentralChargedPileUp_) throw std::runtime_error("fixedGridRhoFastjetCentralChargedPileUp branch doesn't exist");
        b_fixedGridRhoFastjetCentralChargedPileUp_->GetEntry(index);
        loaded_fixedGridRhoFastjetCentralChargedPileUp_ = true;
    }
    return fixedGridRhoFastjetCentralChargedPileUp_;
}
const float &Nano::fixedGridRhoFastjetCentralNeutral() {
    if (!loaded_fixedGridRhoFastjetCentralNeutral_) {
        if (!b_fixedGridRhoFastjetCentralNeutral_) throw std::runtime_error("fixedGridRhoFastjetCentralNeutral branch doesn't exist");
        b_fixedGridRhoFastjetCentralNeutral_->GetEntry(index);
        loaded_fixedGridRhoFastjetCentralNeutral_ = true;
    }
    return fixedGridRhoFastjetCentralNeutral_;
}
const vector<int> &Nano::gHidx() {
    if (!loaded_gHidx_) {
        if (!b_gHidx_) throw std::runtime_error("gHidx branch doesn't exist");
        int bytes = b_gHidx_->GetEntry(index);
        v_gHidx_ = vector<int>(gHidx_,gHidx_+bytes/sizeof(gHidx_[0]));
        loaded_gHidx_ = true;
    }
    return v_gHidx_;
}
const int &Nano::genTtbarId() {
    if (!loaded_genTtbarId_) {
        if (!b_genTtbarId_) throw std::runtime_error("genTtbarId branch doesn't exist");
        b_genTtbarId_->GetEntry(index);
        loaded_genTtbarId_ = true;
    }
    return genTtbarId_;
}
const float &Nano::genWeight() {
    if (!loaded_genWeight_) {
        if (!b_genWeight_) throw std::runtime_error("genWeight branch doesn't exist");
        b_genWeight_->GetEntry(index);
        loaded_genWeight_ = true;
    }
    return genWeight_;
}
const float &Nano::gg_eta() {
    if (!loaded_gg_eta_) {
        if (!b_gg_eta_) throw std::runtime_error("gg_eta branch doesn't exist");
        b_gg_eta_->GetEntry(index);
        loaded_gg_eta_ = true;
    }
    return gg_eta_;
}
const float &Nano::gg_mass() {
    if (!loaded_gg_mass_) {
        if (!b_gg_mass_) throw std::runtime_error("gg_mass branch doesn't exist");
        b_gg_mass_->GetEntry(index);
        loaded_gg_mass_ = true;
    }
    return gg_mass_;
}
const LorentzVector &Nano::gg_p4() {
    if (!loaded_gg_p4_) {
        gg_p4_ = LorentzVector(gg_pt_,gg_eta_,gg_phi_,gg_mass_);
        loaded_gg_p4_ = true;
    }
    return gg_p4_;
}
const float &Nano::gg_phi() {
    if (!loaded_gg_phi_) {
        if (!b_gg_phi_) throw std::runtime_error("gg_phi branch doesn't exist");
        b_gg_phi_->GetEntry(index);
        loaded_gg_phi_ = true;
    }
    return gg_phi_;
}
const float &Nano::gg_pt() {
    if (!loaded_gg_pt_) {
        if (!b_gg_pt_) throw std::runtime_error("gg_pt branch doesn't exist");
        b_gg_pt_->GetEntry(index);
        loaded_gg_pt_ = true;
    }
    return gg_pt_;
}
const UInt_t &Nano::luminosityBlock() {
    if (!loaded_luminosityBlock_) {
        if (!b_luminosityBlock_) throw std::runtime_error("luminosityBlock branch doesn't exist");
        b_luminosityBlock_->GetEntry(index);
        loaded_luminosityBlock_ = true;
    }
    return luminosityBlock_;
}
const float &Nano::m_tautauLoose() {
    if (!loaded_m_tautauLoose_) {
        if (!b_m_tautauLoose_) throw std::runtime_error("m_tautauLoose branch doesn't exist");
        b_m_tautauLoose_->GetEntry(index);
        loaded_m_tautauLoose_ = true;
    }
    return m_tautauLoose_;
}
const float &Nano::m_tautauSVFitLoose() {
    if (!loaded_m_tautauSVFitLoose_) {
        if (!b_m_tautauSVFitLoose_) throw std::runtime_error("m_tautauSVFitLoose branch doesn't exist");
        b_m_tautauSVFitLoose_->GetEntry(index);
        loaded_m_tautauSVFitLoose_ = true;
    }
    return m_tautauSVFitLoose_;
}
const vector<int> &Nano::muHidx() {
    if (!loaded_muHidx_) {
        if (!b_muHidx_) throw std::runtime_error("muHidx branch doesn't exist");
        int bytes = b_muHidx_->GetEntry(index);
        v_muHidx_ = vector<int>(muHidx_,muHidx_+bytes/sizeof(muHidx_[0]));
        loaded_muHidx_ = true;
    }
    return v_muHidx_;
}
const UInt_t &Nano::nCorrT1METJet() {
    if (!loaded_nCorrT1METJet_) {
        if (!b_nCorrT1METJet_) throw std::runtime_error("nCorrT1METJet branch doesn't exist");
        b_nCorrT1METJet_->GetEntry(index);
        loaded_nCorrT1METJet_ = true;
    }
    return nCorrT1METJet_;
}
const UInt_t &Nano::nElectron() {
    if (!loaded_nElectron_) {
        if (!b_nElectron_) throw std::runtime_error("nElectron branch doesn't exist");
        b_nElectron_->GetEntry(index);
        loaded_nElectron_ = true;
    }
    return nElectron_;
}
const UInt_t &Nano::nFsrPhoton() {
    if (!loaded_nFsrPhoton_) {
        if (!b_nFsrPhoton_) throw std::runtime_error("nFsrPhoton branch doesn't exist");
        b_nFsrPhoton_->GetEntry(index);
        loaded_nFsrPhoton_ = true;
    }
    return nFsrPhoton_;
}
const UInt_t &Nano::nGenDressedLepton() {
    if (!loaded_nGenDressedLepton_) {
        if (!b_nGenDressedLepton_) throw std::runtime_error("nGenDressedLepton branch doesn't exist");
        b_nGenDressedLepton_->GetEntry(index);
        loaded_nGenDressedLepton_ = true;
    }
    return nGenDressedLepton_;
}
const UInt_t &Nano::nGenIsolatedPhoton() {
    if (!loaded_nGenIsolatedPhoton_) {
        if (!b_nGenIsolatedPhoton_) throw std::runtime_error("nGenIsolatedPhoton branch doesn't exist");
        b_nGenIsolatedPhoton_->GetEntry(index);
        loaded_nGenIsolatedPhoton_ = true;
    }
    return nGenIsolatedPhoton_;
}
const UInt_t &Nano::nGenJet() {
    if (!loaded_nGenJet_) {
        if (!b_nGenJet_) throw std::runtime_error("nGenJet branch doesn't exist");
        b_nGenJet_->GetEntry(index);
        loaded_nGenJet_ = true;
    }
    return nGenJet_;
}
const UInt_t &Nano::nGenJetAK8() {
    if (!loaded_nGenJetAK8_) {
        if (!b_nGenJetAK8_) throw std::runtime_error("nGenJetAK8 branch doesn't exist");
        b_nGenJetAK8_->GetEntry(index);
        loaded_nGenJetAK8_ = true;
    }
    return nGenJetAK8_;
}
const UInt_t &Nano::nGenPart() {
    if (!loaded_nGenPart_) {
        if (!b_nGenPart_) throw std::runtime_error("nGenPart branch doesn't exist");
        b_nGenPart_->GetEntry(index);
        loaded_nGenPart_ = true;
    }
    return nGenPart_;
}
const UInt_t &Nano::nGenVisTau() {
    if (!loaded_nGenVisTau_) {
        if (!b_nGenVisTau_) throw std::runtime_error("nGenVisTau branch doesn't exist");
        b_nGenVisTau_->GetEntry(index);
        loaded_nGenVisTau_ = true;
    }
    return nGenVisTau_;
}
const UInt_t &Nano::nIsoTrack() {
    if (!loaded_nIsoTrack_) {
        if (!b_nIsoTrack_) throw std::runtime_error("nIsoTrack branch doesn't exist");
        b_nIsoTrack_->GetEntry(index);
        loaded_nIsoTrack_ = true;
    }
    return nIsoTrack_;
}
const UInt_t &Nano::nJet() {
    if (!loaded_nJet_) {
        if (!b_nJet_) throw std::runtime_error("nJet branch doesn't exist");
        b_nJet_->GetEntry(index);
        loaded_nJet_ = true;
    }
    return nJet_;
}
const UInt_t &Nano::nLHEPart() {
    if (!loaded_nLHEPart_) {
        if (!b_nLHEPart_) throw std::runtime_error("nLHEPart branch doesn't exist");
        b_nLHEPart_->GetEntry(index);
        loaded_nLHEPart_ = true;
    }
    return nLHEPart_;
}
const UInt_t &Nano::nLHEPdfWeight() {
    if (!loaded_nLHEPdfWeight_) {
        if (!b_nLHEPdfWeight_) throw std::runtime_error("nLHEPdfWeight branch doesn't exist");
        b_nLHEPdfWeight_->GetEntry(index);
        loaded_nLHEPdfWeight_ = true;
    }
    return nLHEPdfWeight_;
}
const UInt_t &Nano::nLHEReweightingWeight() {
    if (!loaded_nLHEReweightingWeight_) {
        if (!b_nLHEReweightingWeight_) throw std::runtime_error("nLHEReweightingWeight branch doesn't exist");
        b_nLHEReweightingWeight_->GetEntry(index);
        loaded_nLHEReweightingWeight_ = true;
    }
    return nLHEReweightingWeight_;
}
const UInt_t &Nano::nLHEScaleWeight() {
    if (!loaded_nLHEScaleWeight_) {
        if (!b_nLHEScaleWeight_) throw std::runtime_error("nLHEScaleWeight branch doesn't exist");
        b_nLHEScaleWeight_->GetEntry(index);
        loaded_nLHEScaleWeight_ = true;
    }
    return nLHEScaleWeight_;
}
const UInt_t &Nano::nMuon() {
    if (!loaded_nMuon_) {
        if (!b_nMuon_) throw std::runtime_error("nMuon branch doesn't exist");
        b_nMuon_->GetEntry(index);
        loaded_nMuon_ = true;
    }
    return nMuon_;
}
const UInt_t &Nano::nOtherPV() {
    if (!loaded_nOtherPV_) {
        if (!b_nOtherPV_) throw std::runtime_error("nOtherPV branch doesn't exist");
        b_nOtherPV_->GetEntry(index);
        loaded_nOtherPV_ = true;
    }
    return nOtherPV_;
}
const UInt_t &Nano::nPSWeight() {
    if (!loaded_nPSWeight_) {
        if (!b_nPSWeight_) throw std::runtime_error("nPSWeight branch doesn't exist");
        b_nPSWeight_->GetEntry(index);
        loaded_nPSWeight_ = true;
    }
    return nPSWeight_;
}
const UInt_t &Nano::nPhoton() {
    if (!loaded_nPhoton_) {
        if (!b_nPhoton_) throw std::runtime_error("nPhoton branch doesn't exist");
        b_nPhoton_->GetEntry(index);
        loaded_nPhoton_ = true;
    }
    return nPhoton_;
}
const UInt_t &Nano::nSV() {
    if (!loaded_nSV_) {
        if (!b_nSV_) throw std::runtime_error("nSV branch doesn't exist");
        b_nSV_->GetEntry(index);
        loaded_nSV_ = true;
    }
    return nSV_;
}
const UInt_t &Nano::nSoftActivityJet() {
    if (!loaded_nSoftActivityJet_) {
        if (!b_nSoftActivityJet_) throw std::runtime_error("nSoftActivityJet branch doesn't exist");
        b_nSoftActivityJet_->GetEntry(index);
        loaded_nSoftActivityJet_ = true;
    }
    return nSoftActivityJet_;
}
const UInt_t &Nano::nSubGenJetAK8() {
    if (!loaded_nSubGenJetAK8_) {
        if (!b_nSubGenJetAK8_) throw std::runtime_error("nSubGenJetAK8 branch doesn't exist");
        b_nSubGenJetAK8_->GetEntry(index);
        loaded_nSubGenJetAK8_ = true;
    }
    return nSubGenJetAK8_;
}
const UInt_t &Nano::nSubJet() {
    if (!loaded_nSubJet_) {
        if (!b_nSubJet_) throw std::runtime_error("nSubJet branch doesn't exist");
        b_nSubJet_->GetEntry(index);
        loaded_nSubJet_ = true;
    }
    return nSubJet_;
}
const UInt_t &Nano::nTau() {
    if (!loaded_nTau_) {
        if (!b_nTau_) throw std::runtime_error("nTau branch doesn't exist");
        b_nTau_->GetEntry(index);
        loaded_nTau_ = true;
    }
    return nTau_;
}
const UInt_t &Nano::nTrigObj() {
    if (!loaded_nTrigObj_) {
        if (!b_nTrigObj_) throw std::runtime_error("nTrigObj branch doesn't exist");
        b_nTrigObj_->GetEntry(index);
        loaded_nTrigObj_ = true;
    }
    return nTrigObj_;
}
const int &Nano::nselectedElectron() {
    if (!loaded_nselectedElectron_) {
        if (!b_nselectedElectron_) throw std::runtime_error("nselectedElectron branch doesn't exist");
        b_nselectedElectron_->GetEntry(index);
        loaded_nselectedElectron_ = true;
    }
    return nselectedElectron_;
}
const int &Nano::nselectedMuon() {
    if (!loaded_nselectedMuon_) {
        if (!b_nselectedMuon_) throw std::runtime_error("nselectedMuon branch doesn't exist");
        b_nselectedMuon_->GetEntry(index);
        loaded_nselectedMuon_ = true;
    }
    return nselectedMuon_;
}
const int &Nano::nselectedTauLoose() {
    if (!loaded_nselectedTauLoose_) {
        if (!b_nselectedTauLoose_) throw std::runtime_error("nselectedTauLoose branch doesn't exist");
        b_nselectedTauLoose_->GetEntry(index);
        loaded_nselectedTauLoose_ = true;
    }
    return nselectedTauLoose_;
}
const Char_t &Nano::passedDigammaPair() {
    if (!loaded_passedDigammaPair_) {
        if (!b_passedDigammaPair_) throw std::runtime_error("passedDigammaPair branch doesn't exist");
        b_passedDigammaPair_->GetEntry(index);
        loaded_passedDigammaPair_ = true;
    }
    return passedDigammaPair_;
}
const Char_t &Nano::passedGoodPhotons() {
    if (!loaded_passedGoodPhotons_) {
        if (!b_passedGoodPhotons_) throw std::runtime_error("passedGoodPhotons branch doesn't exist");
        b_passedGoodPhotons_->GetEntry(index);
        loaded_passedGoodPhotons_ = true;
    }
    return passedGoodPhotons_;
}
const Char_t &Nano::passedHPhotons() {
    if (!loaded_passedHPhotons_) {
        if (!b_passedHPhotons_) throw std::runtime_error("passedHPhotons branch doesn't exist");
        b_passedHPhotons_->GetEntry(index);
        loaded_passedHPhotons_ = true;
    }
    return passedHPhotons_;
}
const float &Nano::phi_tautauLoose() {
    if (!loaded_phi_tautauLoose_) {
        if (!b_phi_tautauLoose_) throw std::runtime_error("phi_tautauLoose branch doesn't exist");
        b_phi_tautauLoose_->GetEntry(index);
        loaded_phi_tautauLoose_ = true;
    }
    return phi_tautauLoose_;
}
const float &Nano::phi_tautauSVFitLoose() {
    if (!loaded_phi_tautauSVFitLoose_) {
        if (!b_phi_tautauSVFitLoose_) throw std::runtime_error("phi_tautauSVFitLoose branch doesn't exist");
        b_phi_tautauSVFitLoose_->GetEntry(index);
        loaded_phi_tautauSVFitLoose_ = true;
    }
    return phi_tautauSVFitLoose_;
}
const float &Nano::pt_tautauLoose() {
    if (!loaded_pt_tautauLoose_) {
        if (!b_pt_tautauLoose_) throw std::runtime_error("pt_tautauLoose branch doesn't exist");
        b_pt_tautauLoose_->GetEntry(index);
        loaded_pt_tautauLoose_ = true;
    }
    return pt_tautauLoose_;
}
const float &Nano::pt_tautauSVFitLoose() {
    if (!loaded_pt_tautauSVFitLoose_) {
        if (!b_pt_tautauSVFitLoose_) throw std::runtime_error("pt_tautauSVFitLoose branch doesn't exist");
        b_pt_tautauSVFitLoose_->GetEntry(index);
        loaded_pt_tautauSVFitLoose_ = true;
    }
    return pt_tautauSVFitLoose_;
}
const float &Nano::puWeight() {
    if (!loaded_puWeight_) {
        if (!b_puWeight_) throw std::runtime_error("puWeight branch doesn't exist");
        b_puWeight_->GetEntry(index);
        loaded_puWeight_ = true;
    }
    return puWeight_;
}
const float &Nano::puWeightDown() {
    if (!loaded_puWeightDown_) {
        if (!b_puWeightDown_) throw std::runtime_error("puWeightDown branch doesn't exist");
        b_puWeightDown_->GetEntry(index);
        loaded_puWeightDown_ = true;
    }
    return puWeightDown_;
}
const float &Nano::puWeightUp() {
    if (!loaded_puWeightUp_) {
        if (!b_puWeightUp_) throw std::runtime_error("puWeightUp branch doesn't exist");
        b_puWeightUp_->GetEntry(index);
        loaded_puWeightUp_ = true;
    }
    return puWeightUp_;
}
const UInt_t &Nano::run() {
    if (!loaded_run_) {
        if (!b_run_) throw std::runtime_error("run branch doesn't exist");
        b_run_->GetEntry(index);
        loaded_run_ = true;
    }
    return run_;
}
const vector<float> &Nano::selectedElectron_charge() {
    if (!loaded_selectedElectron_charge_) {
        if (!b_selectedElectron_charge_) throw std::runtime_error("selectedElectron_charge branch doesn't exist");
        int bytes = b_selectedElectron_charge_->GetEntry(index);
        v_selectedElectron_charge_ = vector<float>(selectedElectron_charge_,selectedElectron_charge_+bytes/sizeof(selectedElectron_charge_[0]));
        loaded_selectedElectron_charge_ = true;
    }
    return v_selectedElectron_charge_;
}
const vector<float> &Nano::selectedElectron_cleanmask() {
    if (!loaded_selectedElectron_cleanmask_) {
        if (!b_selectedElectron_cleanmask_) throw std::runtime_error("selectedElectron_cleanmask branch doesn't exist");
        int bytes = b_selectedElectron_cleanmask_->GetEntry(index);
        v_selectedElectron_cleanmask_ = vector<float>(selectedElectron_cleanmask_,selectedElectron_cleanmask_+bytes/sizeof(selectedElectron_cleanmask_[0]));
        loaded_selectedElectron_cleanmask_ = true;
    }
    return v_selectedElectron_cleanmask_;
}
const vector<float> &Nano::selectedElectron_convVeto() {
    if (!loaded_selectedElectron_convVeto_) {
        if (!b_selectedElectron_convVeto_) throw std::runtime_error("selectedElectron_convVeto branch doesn't exist");
        int bytes = b_selectedElectron_convVeto_->GetEntry(index);
        v_selectedElectron_convVeto_ = vector<float>(selectedElectron_convVeto_,selectedElectron_convVeto_+bytes/sizeof(selectedElectron_convVeto_[0]));
        loaded_selectedElectron_convVeto_ = true;
    }
    return v_selectedElectron_convVeto_;
}
const vector<float> &Nano::selectedElectron_cutBased() {
    if (!loaded_selectedElectron_cutBased_) {
        if (!b_selectedElectron_cutBased_) throw std::runtime_error("selectedElectron_cutBased branch doesn't exist");
        int bytes = b_selectedElectron_cutBased_->GetEntry(index);
        v_selectedElectron_cutBased_ = vector<float>(selectedElectron_cutBased_,selectedElectron_cutBased_+bytes/sizeof(selectedElectron_cutBased_[0]));
        loaded_selectedElectron_cutBased_ = true;
    }
    return v_selectedElectron_cutBased_;
}
const vector<float> &Nano::selectedElectron_cutBased_Fall17_V1() {
    if (!loaded_selectedElectron_cutBased_Fall17_V1_) {
        if (!b_selectedElectron_cutBased_Fall17_V1_) throw std::runtime_error("selectedElectron_cutBased_Fall17_V1 branch doesn't exist");
        int bytes = b_selectedElectron_cutBased_Fall17_V1_->GetEntry(index);
        v_selectedElectron_cutBased_Fall17_V1_ = vector<float>(selectedElectron_cutBased_Fall17_V1_,selectedElectron_cutBased_Fall17_V1_+bytes/sizeof(selectedElectron_cutBased_Fall17_V1_[0]));
        loaded_selectedElectron_cutBased_Fall17_V1_ = true;
    }
    return v_selectedElectron_cutBased_Fall17_V1_;
}
const vector<float> &Nano::selectedElectron_cutBased_HEEP() {
    if (!loaded_selectedElectron_cutBased_HEEP_) {
        if (!b_selectedElectron_cutBased_HEEP_) throw std::runtime_error("selectedElectron_cutBased_HEEP branch doesn't exist");
        int bytes = b_selectedElectron_cutBased_HEEP_->GetEntry(index);
        v_selectedElectron_cutBased_HEEP_ = vector<float>(selectedElectron_cutBased_HEEP_,selectedElectron_cutBased_HEEP_+bytes/sizeof(selectedElectron_cutBased_HEEP_[0]));
        loaded_selectedElectron_cutBased_HEEP_ = true;
    }
    return v_selectedElectron_cutBased_HEEP_;
}
const vector<float> &Nano::selectedElectron_cutBased_HLTPreSel() {
    if (!loaded_selectedElectron_cutBased_HLTPreSel_) {
        if (!b_selectedElectron_cutBased_HLTPreSel_) throw std::runtime_error("selectedElectron_cutBased_HLTPreSel branch doesn't exist");
        int bytes = b_selectedElectron_cutBased_HLTPreSel_->GetEntry(index);
        v_selectedElectron_cutBased_HLTPreSel_ = vector<float>(selectedElectron_cutBased_HLTPreSel_,selectedElectron_cutBased_HLTPreSel_+bytes/sizeof(selectedElectron_cutBased_HLTPreSel_[0]));
        loaded_selectedElectron_cutBased_HLTPreSel_ = true;
    }
    return v_selectedElectron_cutBased_HLTPreSel_;
}
const vector<float> &Nano::selectedElectron_cutBased_Spring15() {
    if (!loaded_selectedElectron_cutBased_Spring15_) {
        if (!b_selectedElectron_cutBased_Spring15_) throw std::runtime_error("selectedElectron_cutBased_Spring15 branch doesn't exist");
        int bytes = b_selectedElectron_cutBased_Spring15_->GetEntry(index);
        v_selectedElectron_cutBased_Spring15_ = vector<float>(selectedElectron_cutBased_Spring15_,selectedElectron_cutBased_Spring15_+bytes/sizeof(selectedElectron_cutBased_Spring15_[0]));
        loaded_selectedElectron_cutBased_Spring15_ = true;
    }
    return v_selectedElectron_cutBased_Spring15_;
}
const vector<float> &Nano::selectedElectron_cutBased_Sum16() {
    if (!loaded_selectedElectron_cutBased_Sum16_) {
        if (!b_selectedElectron_cutBased_Sum16_) throw std::runtime_error("selectedElectron_cutBased_Sum16 branch doesn't exist");
        int bytes = b_selectedElectron_cutBased_Sum16_->GetEntry(index);
        v_selectedElectron_cutBased_Sum16_ = vector<float>(selectedElectron_cutBased_Sum16_,selectedElectron_cutBased_Sum16_+bytes/sizeof(selectedElectron_cutBased_Sum16_[0]));
        loaded_selectedElectron_cutBased_Sum16_ = true;
    }
    return v_selectedElectron_cutBased_Sum16_;
}
const vector<float> &Nano::selectedElectron_deltaEtaSC() {
    if (!loaded_selectedElectron_deltaEtaSC_) {
        if (!b_selectedElectron_deltaEtaSC_) throw std::runtime_error("selectedElectron_deltaEtaSC branch doesn't exist");
        int bytes = b_selectedElectron_deltaEtaSC_->GetEntry(index);
        v_selectedElectron_deltaEtaSC_ = vector<float>(selectedElectron_deltaEtaSC_,selectedElectron_deltaEtaSC_+bytes/sizeof(selectedElectron_deltaEtaSC_[0]));
        loaded_selectedElectron_deltaEtaSC_ = true;
    }
    return v_selectedElectron_deltaEtaSC_;
}
const vector<float> &Nano::selectedElectron_dr03EcalRecHitSumEt() {
    if (!loaded_selectedElectron_dr03EcalRecHitSumEt_) {
        if (!b_selectedElectron_dr03EcalRecHitSumEt_) throw std::runtime_error("selectedElectron_dr03EcalRecHitSumEt branch doesn't exist");
        int bytes = b_selectedElectron_dr03EcalRecHitSumEt_->GetEntry(index);
        v_selectedElectron_dr03EcalRecHitSumEt_ = vector<float>(selectedElectron_dr03EcalRecHitSumEt_,selectedElectron_dr03EcalRecHitSumEt_+bytes/sizeof(selectedElectron_dr03EcalRecHitSumEt_[0]));
        loaded_selectedElectron_dr03EcalRecHitSumEt_ = true;
    }
    return v_selectedElectron_dr03EcalRecHitSumEt_;
}
const vector<float> &Nano::selectedElectron_dr03HcalDepth1TowerSumEt() {
    if (!loaded_selectedElectron_dr03HcalDepth1TowerSumEt_) {
        if (!b_selectedElectron_dr03HcalDepth1TowerSumEt_) throw std::runtime_error("selectedElectron_dr03HcalDepth1TowerSumEt branch doesn't exist");
        int bytes = b_selectedElectron_dr03HcalDepth1TowerSumEt_->GetEntry(index);
        v_selectedElectron_dr03HcalDepth1TowerSumEt_ = vector<float>(selectedElectron_dr03HcalDepth1TowerSumEt_,selectedElectron_dr03HcalDepth1TowerSumEt_+bytes/sizeof(selectedElectron_dr03HcalDepth1TowerSumEt_[0]));
        loaded_selectedElectron_dr03HcalDepth1TowerSumEt_ = true;
    }
    return v_selectedElectron_dr03HcalDepth1TowerSumEt_;
}
const vector<float> &Nano::selectedElectron_dr03TkSumPt() {
    if (!loaded_selectedElectron_dr03TkSumPt_) {
        if (!b_selectedElectron_dr03TkSumPt_) throw std::runtime_error("selectedElectron_dr03TkSumPt branch doesn't exist");
        int bytes = b_selectedElectron_dr03TkSumPt_->GetEntry(index);
        v_selectedElectron_dr03TkSumPt_ = vector<float>(selectedElectron_dr03TkSumPt_,selectedElectron_dr03TkSumPt_+bytes/sizeof(selectedElectron_dr03TkSumPt_[0]));
        loaded_selectedElectron_dr03TkSumPt_ = true;
    }
    return v_selectedElectron_dr03TkSumPt_;
}
const vector<float> &Nano::selectedElectron_dr03TkSumPtHEEP() {
    if (!loaded_selectedElectron_dr03TkSumPtHEEP_) {
        if (!b_selectedElectron_dr03TkSumPtHEEP_) throw std::runtime_error("selectedElectron_dr03TkSumPtHEEP branch doesn't exist");
        int bytes = b_selectedElectron_dr03TkSumPtHEEP_->GetEntry(index);
        v_selectedElectron_dr03TkSumPtHEEP_ = vector<float>(selectedElectron_dr03TkSumPtHEEP_,selectedElectron_dr03TkSumPtHEEP_+bytes/sizeof(selectedElectron_dr03TkSumPtHEEP_[0]));
        loaded_selectedElectron_dr03TkSumPtHEEP_ = true;
    }
    return v_selectedElectron_dr03TkSumPtHEEP_;
}
const vector<float> &Nano::selectedElectron_dxy() {
    if (!loaded_selectedElectron_dxy_) {
        if (!b_selectedElectron_dxy_) throw std::runtime_error("selectedElectron_dxy branch doesn't exist");
        int bytes = b_selectedElectron_dxy_->GetEntry(index);
        v_selectedElectron_dxy_ = vector<float>(selectedElectron_dxy_,selectedElectron_dxy_+bytes/sizeof(selectedElectron_dxy_[0]));
        loaded_selectedElectron_dxy_ = true;
    }
    return v_selectedElectron_dxy_;
}
const vector<float> &Nano::selectedElectron_dxyErr() {
    if (!loaded_selectedElectron_dxyErr_) {
        if (!b_selectedElectron_dxyErr_) throw std::runtime_error("selectedElectron_dxyErr branch doesn't exist");
        int bytes = b_selectedElectron_dxyErr_->GetEntry(index);
        v_selectedElectron_dxyErr_ = vector<float>(selectedElectron_dxyErr_,selectedElectron_dxyErr_+bytes/sizeof(selectedElectron_dxyErr_[0]));
        loaded_selectedElectron_dxyErr_ = true;
    }
    return v_selectedElectron_dxyErr_;
}
const vector<float> &Nano::selectedElectron_dz() {
    if (!loaded_selectedElectron_dz_) {
        if (!b_selectedElectron_dz_) throw std::runtime_error("selectedElectron_dz branch doesn't exist");
        int bytes = b_selectedElectron_dz_->GetEntry(index);
        v_selectedElectron_dz_ = vector<float>(selectedElectron_dz_,selectedElectron_dz_+bytes/sizeof(selectedElectron_dz_[0]));
        loaded_selectedElectron_dz_ = true;
    }
    return v_selectedElectron_dz_;
}
const vector<float> &Nano::selectedElectron_dzErr() {
    if (!loaded_selectedElectron_dzErr_) {
        if (!b_selectedElectron_dzErr_) throw std::runtime_error("selectedElectron_dzErr branch doesn't exist");
        int bytes = b_selectedElectron_dzErr_->GetEntry(index);
        v_selectedElectron_dzErr_ = vector<float>(selectedElectron_dzErr_,selectedElectron_dzErr_+bytes/sizeof(selectedElectron_dzErr_[0]));
        loaded_selectedElectron_dzErr_ = true;
    }
    return v_selectedElectron_dzErr_;
}
const vector<float> &Nano::selectedElectron_eCorr() {
    if (!loaded_selectedElectron_eCorr_) {
        if (!b_selectedElectron_eCorr_) throw std::runtime_error("selectedElectron_eCorr branch doesn't exist");
        int bytes = b_selectedElectron_eCorr_->GetEntry(index);
        v_selectedElectron_eCorr_ = vector<float>(selectedElectron_eCorr_,selectedElectron_eCorr_+bytes/sizeof(selectedElectron_eCorr_[0]));
        loaded_selectedElectron_eCorr_ = true;
    }
    return v_selectedElectron_eCorr_;
}
const vector<float> &Nano::selectedElectron_eInvMinusPInv() {
    if (!loaded_selectedElectron_eInvMinusPInv_) {
        if (!b_selectedElectron_eInvMinusPInv_) throw std::runtime_error("selectedElectron_eInvMinusPInv branch doesn't exist");
        int bytes = b_selectedElectron_eInvMinusPInv_->GetEntry(index);
        v_selectedElectron_eInvMinusPInv_ = vector<float>(selectedElectron_eInvMinusPInv_,selectedElectron_eInvMinusPInv_+bytes/sizeof(selectedElectron_eInvMinusPInv_[0]));
        loaded_selectedElectron_eInvMinusPInv_ = true;
    }
    return v_selectedElectron_eInvMinusPInv_;
}
const vector<float> &Nano::selectedElectron_energyErr() {
    if (!loaded_selectedElectron_energyErr_) {
        if (!b_selectedElectron_energyErr_) throw std::runtime_error("selectedElectron_energyErr branch doesn't exist");
        int bytes = b_selectedElectron_energyErr_->GetEntry(index);
        v_selectedElectron_energyErr_ = vector<float>(selectedElectron_energyErr_,selectedElectron_energyErr_+bytes/sizeof(selectedElectron_energyErr_[0]));
        loaded_selectedElectron_energyErr_ = true;
    }
    return v_selectedElectron_energyErr_;
}
const vector<float> &Nano::selectedElectron_eta() {
    if (!loaded_selectedElectron_eta_) {
        if (!b_selectedElectron_eta_) throw std::runtime_error("selectedElectron_eta branch doesn't exist");
        int bytes = b_selectedElectron_eta_->GetEntry(index);
        v_selectedElectron_eta_ = vector<float>(selectedElectron_eta_,selectedElectron_eta_+bytes/sizeof(selectedElectron_eta_[0]));
        loaded_selectedElectron_eta_ = true;
    }
    return v_selectedElectron_eta_;
}
const vector<float> &Nano::selectedElectron_etaSVFit() {
    if (!loaded_selectedElectron_etaSVFit_) {
        if (!b_selectedElectron_etaSVFit_) throw std::runtime_error("selectedElectron_etaSVFit branch doesn't exist");
        int bytes = b_selectedElectron_etaSVFit_->GetEntry(index);
        v_selectedElectron_etaSVFit_ = vector<float>(selectedElectron_etaSVFit_,selectedElectron_etaSVFit_+bytes/sizeof(selectedElectron_etaSVFit_[0]));
        loaded_selectedElectron_etaSVFit_ = true;
    }
    return v_selectedElectron_etaSVFit_;
}
const vector<float> &Nano::selectedElectron_genPartFlav() {
    if (!loaded_selectedElectron_genPartFlav_) {
        if (!b_selectedElectron_genPartFlav_) throw std::runtime_error("selectedElectron_genPartFlav branch doesn't exist");
        int bytes = b_selectedElectron_genPartFlav_->GetEntry(index);
        v_selectedElectron_genPartFlav_ = vector<float>(selectedElectron_genPartFlav_,selectedElectron_genPartFlav_+bytes/sizeof(selectedElectron_genPartFlav_[0]));
        loaded_selectedElectron_genPartFlav_ = true;
    }
    return v_selectedElectron_genPartFlav_;
}
const vector<float> &Nano::selectedElectron_genPartIdx() {
    if (!loaded_selectedElectron_genPartIdx_) {
        if (!b_selectedElectron_genPartIdx_) throw std::runtime_error("selectedElectron_genPartIdx branch doesn't exist");
        int bytes = b_selectedElectron_genPartIdx_->GetEntry(index);
        v_selectedElectron_genPartIdx_ = vector<float>(selectedElectron_genPartIdx_,selectedElectron_genPartIdx_+bytes/sizeof(selectedElectron_genPartIdx_[0]));
        loaded_selectedElectron_genPartIdx_ = true;
    }
    return v_selectedElectron_genPartIdx_;
}
const vector<float> &Nano::selectedElectron_hoe() {
    if (!loaded_selectedElectron_hoe_) {
        if (!b_selectedElectron_hoe_) throw std::runtime_error("selectedElectron_hoe branch doesn't exist");
        int bytes = b_selectedElectron_hoe_->GetEntry(index);
        v_selectedElectron_hoe_ = vector<float>(selectedElectron_hoe_,selectedElectron_hoe_+bytes/sizeof(selectedElectron_hoe_[0]));
        loaded_selectedElectron_hoe_ = true;
    }
    return v_selectedElectron_hoe_;
}
const vector<float> &Nano::selectedElectron_ip3d() {
    if (!loaded_selectedElectron_ip3d_) {
        if (!b_selectedElectron_ip3d_) throw std::runtime_error("selectedElectron_ip3d branch doesn't exist");
        int bytes = b_selectedElectron_ip3d_->GetEntry(index);
        v_selectedElectron_ip3d_ = vector<float>(selectedElectron_ip3d_,selectedElectron_ip3d_+bytes/sizeof(selectedElectron_ip3d_[0]));
        loaded_selectedElectron_ip3d_ = true;
    }
    return v_selectedElectron_ip3d_;
}
const vector<float> &Nano::selectedElectron_isPFcand() {
    if (!loaded_selectedElectron_isPFcand_) {
        if (!b_selectedElectron_isPFcand_) throw std::runtime_error("selectedElectron_isPFcand branch doesn't exist");
        int bytes = b_selectedElectron_isPFcand_->GetEntry(index);
        v_selectedElectron_isPFcand_ = vector<float>(selectedElectron_isPFcand_,selectedElectron_isPFcand_+bytes/sizeof(selectedElectron_isPFcand_[0]));
        loaded_selectedElectron_isPFcand_ = true;
    }
    return v_selectedElectron_isPFcand_;
}
const vector<float> &Nano::selectedElectron_jetIdx() {
    if (!loaded_selectedElectron_jetIdx_) {
        if (!b_selectedElectron_jetIdx_) throw std::runtime_error("selectedElectron_jetIdx branch doesn't exist");
        int bytes = b_selectedElectron_jetIdx_->GetEntry(index);
        v_selectedElectron_jetIdx_ = vector<float>(selectedElectron_jetIdx_,selectedElectron_jetIdx_+bytes/sizeof(selectedElectron_jetIdx_[0]));
        loaded_selectedElectron_jetIdx_ = true;
    }
    return v_selectedElectron_jetIdx_;
}
const vector<float> &Nano::selectedElectron_jetPtRelv2() {
    if (!loaded_selectedElectron_jetPtRelv2_) {
        if (!b_selectedElectron_jetPtRelv2_) throw std::runtime_error("selectedElectron_jetPtRelv2 branch doesn't exist");
        int bytes = b_selectedElectron_jetPtRelv2_->GetEntry(index);
        v_selectedElectron_jetPtRelv2_ = vector<float>(selectedElectron_jetPtRelv2_,selectedElectron_jetPtRelv2_+bytes/sizeof(selectedElectron_jetPtRelv2_[0]));
        loaded_selectedElectron_jetPtRelv2_ = true;
    }
    return v_selectedElectron_jetPtRelv2_;
}
const vector<float> &Nano::selectedElectron_jetRelIso() {
    if (!loaded_selectedElectron_jetRelIso_) {
        if (!b_selectedElectron_jetRelIso_) throw std::runtime_error("selectedElectron_jetRelIso branch doesn't exist");
        int bytes = b_selectedElectron_jetRelIso_->GetEntry(index);
        v_selectedElectron_jetRelIso_ = vector<float>(selectedElectron_jetRelIso_,selectedElectron_jetRelIso_+bytes/sizeof(selectedElectron_jetRelIso_[0]));
        loaded_selectedElectron_jetRelIso_ = true;
    }
    return v_selectedElectron_jetRelIso_;
}
const vector<float> &Nano::selectedElectron_lostHits() {
    if (!loaded_selectedElectron_lostHits_) {
        if (!b_selectedElectron_lostHits_) throw std::runtime_error("selectedElectron_lostHits branch doesn't exist");
        int bytes = b_selectedElectron_lostHits_->GetEntry(index);
        v_selectedElectron_lostHits_ = vector<float>(selectedElectron_lostHits_,selectedElectron_lostHits_+bytes/sizeof(selectedElectron_lostHits_[0]));
        loaded_selectedElectron_lostHits_ = true;
    }
    return v_selectedElectron_lostHits_;
}
const vector<float> &Nano::selectedElectron_mSVFit() {
    if (!loaded_selectedElectron_mSVFit_) {
        if (!b_selectedElectron_mSVFit_) throw std::runtime_error("selectedElectron_mSVFit branch doesn't exist");
        int bytes = b_selectedElectron_mSVFit_->GetEntry(index);
        v_selectedElectron_mSVFit_ = vector<float>(selectedElectron_mSVFit_,selectedElectron_mSVFit_+bytes/sizeof(selectedElectron_mSVFit_[0]));
        loaded_selectedElectron_mSVFit_ = true;
    }
    return v_selectedElectron_mSVFit_;
}
const vector<float> &Nano::selectedElectron_mass() {
    if (!loaded_selectedElectron_mass_) {
        if (!b_selectedElectron_mass_) throw std::runtime_error("selectedElectron_mass branch doesn't exist");
        int bytes = b_selectedElectron_mass_->GetEntry(index);
        v_selectedElectron_mass_ = vector<float>(selectedElectron_mass_,selectedElectron_mass_+bytes/sizeof(selectedElectron_mass_[0]));
        loaded_selectedElectron_mass_ = true;
    }
    return v_selectedElectron_mass_;
}
const vector<float> &Nano::selectedElectron_miniPFRelIso_all() {
    if (!loaded_selectedElectron_miniPFRelIso_all_) {
        if (!b_selectedElectron_miniPFRelIso_all_) throw std::runtime_error("selectedElectron_miniPFRelIso_all branch doesn't exist");
        int bytes = b_selectedElectron_miniPFRelIso_all_->GetEntry(index);
        v_selectedElectron_miniPFRelIso_all_ = vector<float>(selectedElectron_miniPFRelIso_all_,selectedElectron_miniPFRelIso_all_+bytes/sizeof(selectedElectron_miniPFRelIso_all_[0]));
        loaded_selectedElectron_miniPFRelIso_all_ = true;
    }
    return v_selectedElectron_miniPFRelIso_all_;
}
const vector<float> &Nano::selectedElectron_miniPFRelIso_chg() {
    if (!loaded_selectedElectron_miniPFRelIso_chg_) {
        if (!b_selectedElectron_miniPFRelIso_chg_) throw std::runtime_error("selectedElectron_miniPFRelIso_chg branch doesn't exist");
        int bytes = b_selectedElectron_miniPFRelIso_chg_->GetEntry(index);
        v_selectedElectron_miniPFRelIso_chg_ = vector<float>(selectedElectron_miniPFRelIso_chg_,selectedElectron_miniPFRelIso_chg_+bytes/sizeof(selectedElectron_miniPFRelIso_chg_[0]));
        loaded_selectedElectron_miniPFRelIso_chg_ = true;
    }
    return v_selectedElectron_miniPFRelIso_chg_;
}
const vector<float> &Nano::selectedElectron_mvaFall17V1Iso() {
    if (!loaded_selectedElectron_mvaFall17V1Iso_) {
        if (!b_selectedElectron_mvaFall17V1Iso_) throw std::runtime_error("selectedElectron_mvaFall17V1Iso branch doesn't exist");
        int bytes = b_selectedElectron_mvaFall17V1Iso_->GetEntry(index);
        v_selectedElectron_mvaFall17V1Iso_ = vector<float>(selectedElectron_mvaFall17V1Iso_,selectedElectron_mvaFall17V1Iso_+bytes/sizeof(selectedElectron_mvaFall17V1Iso_[0]));
        loaded_selectedElectron_mvaFall17V1Iso_ = true;
    }
    return v_selectedElectron_mvaFall17V1Iso_;
}
const vector<float> &Nano::selectedElectron_mvaFall17V1Iso_WP80() {
    if (!loaded_selectedElectron_mvaFall17V1Iso_WP80_) {
        if (!b_selectedElectron_mvaFall17V1Iso_WP80_) throw std::runtime_error("selectedElectron_mvaFall17V1Iso_WP80 branch doesn't exist");
        int bytes = b_selectedElectron_mvaFall17V1Iso_WP80_->GetEntry(index);
        v_selectedElectron_mvaFall17V1Iso_WP80_ = vector<float>(selectedElectron_mvaFall17V1Iso_WP80_,selectedElectron_mvaFall17V1Iso_WP80_+bytes/sizeof(selectedElectron_mvaFall17V1Iso_WP80_[0]));
        loaded_selectedElectron_mvaFall17V1Iso_WP80_ = true;
    }
    return v_selectedElectron_mvaFall17V1Iso_WP80_;
}
const vector<float> &Nano::selectedElectron_mvaFall17V1Iso_WP90() {
    if (!loaded_selectedElectron_mvaFall17V1Iso_WP90_) {
        if (!b_selectedElectron_mvaFall17V1Iso_WP90_) throw std::runtime_error("selectedElectron_mvaFall17V1Iso_WP90 branch doesn't exist");
        int bytes = b_selectedElectron_mvaFall17V1Iso_WP90_->GetEntry(index);
        v_selectedElectron_mvaFall17V1Iso_WP90_ = vector<float>(selectedElectron_mvaFall17V1Iso_WP90_,selectedElectron_mvaFall17V1Iso_WP90_+bytes/sizeof(selectedElectron_mvaFall17V1Iso_WP90_[0]));
        loaded_selectedElectron_mvaFall17V1Iso_WP90_ = true;
    }
    return v_selectedElectron_mvaFall17V1Iso_WP90_;
}
const vector<float> &Nano::selectedElectron_mvaFall17V1Iso_WPL() {
    if (!loaded_selectedElectron_mvaFall17V1Iso_WPL_) {
        if (!b_selectedElectron_mvaFall17V1Iso_WPL_) throw std::runtime_error("selectedElectron_mvaFall17V1Iso_WPL branch doesn't exist");
        int bytes = b_selectedElectron_mvaFall17V1Iso_WPL_->GetEntry(index);
        v_selectedElectron_mvaFall17V1Iso_WPL_ = vector<float>(selectedElectron_mvaFall17V1Iso_WPL_,selectedElectron_mvaFall17V1Iso_WPL_+bytes/sizeof(selectedElectron_mvaFall17V1Iso_WPL_[0]));
        loaded_selectedElectron_mvaFall17V1Iso_WPL_ = true;
    }
    return v_selectedElectron_mvaFall17V1Iso_WPL_;
}
const vector<float> &Nano::selectedElectron_mvaFall17V1noIso() {
    if (!loaded_selectedElectron_mvaFall17V1noIso_) {
        if (!b_selectedElectron_mvaFall17V1noIso_) throw std::runtime_error("selectedElectron_mvaFall17V1noIso branch doesn't exist");
        int bytes = b_selectedElectron_mvaFall17V1noIso_->GetEntry(index);
        v_selectedElectron_mvaFall17V1noIso_ = vector<float>(selectedElectron_mvaFall17V1noIso_,selectedElectron_mvaFall17V1noIso_+bytes/sizeof(selectedElectron_mvaFall17V1noIso_[0]));
        loaded_selectedElectron_mvaFall17V1noIso_ = true;
    }
    return v_selectedElectron_mvaFall17V1noIso_;
}
const vector<float> &Nano::selectedElectron_mvaFall17V1noIso_WP80() {
    if (!loaded_selectedElectron_mvaFall17V1noIso_WP80_) {
        if (!b_selectedElectron_mvaFall17V1noIso_WP80_) throw std::runtime_error("selectedElectron_mvaFall17V1noIso_WP80 branch doesn't exist");
        int bytes = b_selectedElectron_mvaFall17V1noIso_WP80_->GetEntry(index);
        v_selectedElectron_mvaFall17V1noIso_WP80_ = vector<float>(selectedElectron_mvaFall17V1noIso_WP80_,selectedElectron_mvaFall17V1noIso_WP80_+bytes/sizeof(selectedElectron_mvaFall17V1noIso_WP80_[0]));
        loaded_selectedElectron_mvaFall17V1noIso_WP80_ = true;
    }
    return v_selectedElectron_mvaFall17V1noIso_WP80_;
}
const vector<float> &Nano::selectedElectron_mvaFall17V1noIso_WP90() {
    if (!loaded_selectedElectron_mvaFall17V1noIso_WP90_) {
        if (!b_selectedElectron_mvaFall17V1noIso_WP90_) throw std::runtime_error("selectedElectron_mvaFall17V1noIso_WP90 branch doesn't exist");
        int bytes = b_selectedElectron_mvaFall17V1noIso_WP90_->GetEntry(index);
        v_selectedElectron_mvaFall17V1noIso_WP90_ = vector<float>(selectedElectron_mvaFall17V1noIso_WP90_,selectedElectron_mvaFall17V1noIso_WP90_+bytes/sizeof(selectedElectron_mvaFall17V1noIso_WP90_[0]));
        loaded_selectedElectron_mvaFall17V1noIso_WP90_ = true;
    }
    return v_selectedElectron_mvaFall17V1noIso_WP90_;
}
const vector<float> &Nano::selectedElectron_mvaFall17V1noIso_WPL() {
    if (!loaded_selectedElectron_mvaFall17V1noIso_WPL_) {
        if (!b_selectedElectron_mvaFall17V1noIso_WPL_) throw std::runtime_error("selectedElectron_mvaFall17V1noIso_WPL branch doesn't exist");
        int bytes = b_selectedElectron_mvaFall17V1noIso_WPL_->GetEntry(index);
        v_selectedElectron_mvaFall17V1noIso_WPL_ = vector<float>(selectedElectron_mvaFall17V1noIso_WPL_,selectedElectron_mvaFall17V1noIso_WPL_+bytes/sizeof(selectedElectron_mvaFall17V1noIso_WPL_[0]));
        loaded_selectedElectron_mvaFall17V1noIso_WPL_ = true;
    }
    return v_selectedElectron_mvaFall17V1noIso_WPL_;
}
const vector<float> &Nano::selectedElectron_mvaFall17V2Iso() {
    if (!loaded_selectedElectron_mvaFall17V2Iso_) {
        if (!b_selectedElectron_mvaFall17V2Iso_) throw std::runtime_error("selectedElectron_mvaFall17V2Iso branch doesn't exist");
        int bytes = b_selectedElectron_mvaFall17V2Iso_->GetEntry(index);
        v_selectedElectron_mvaFall17V2Iso_ = vector<float>(selectedElectron_mvaFall17V2Iso_,selectedElectron_mvaFall17V2Iso_+bytes/sizeof(selectedElectron_mvaFall17V2Iso_[0]));
        loaded_selectedElectron_mvaFall17V2Iso_ = true;
    }
    return v_selectedElectron_mvaFall17V2Iso_;
}
const vector<float> &Nano::selectedElectron_mvaFall17V2Iso_WP80() {
    if (!loaded_selectedElectron_mvaFall17V2Iso_WP80_) {
        if (!b_selectedElectron_mvaFall17V2Iso_WP80_) throw std::runtime_error("selectedElectron_mvaFall17V2Iso_WP80 branch doesn't exist");
        int bytes = b_selectedElectron_mvaFall17V2Iso_WP80_->GetEntry(index);
        v_selectedElectron_mvaFall17V2Iso_WP80_ = vector<float>(selectedElectron_mvaFall17V2Iso_WP80_,selectedElectron_mvaFall17V2Iso_WP80_+bytes/sizeof(selectedElectron_mvaFall17V2Iso_WP80_[0]));
        loaded_selectedElectron_mvaFall17V2Iso_WP80_ = true;
    }
    return v_selectedElectron_mvaFall17V2Iso_WP80_;
}
const vector<float> &Nano::selectedElectron_mvaFall17V2Iso_WP90() {
    if (!loaded_selectedElectron_mvaFall17V2Iso_WP90_) {
        if (!b_selectedElectron_mvaFall17V2Iso_WP90_) throw std::runtime_error("selectedElectron_mvaFall17V2Iso_WP90 branch doesn't exist");
        int bytes = b_selectedElectron_mvaFall17V2Iso_WP90_->GetEntry(index);
        v_selectedElectron_mvaFall17V2Iso_WP90_ = vector<float>(selectedElectron_mvaFall17V2Iso_WP90_,selectedElectron_mvaFall17V2Iso_WP90_+bytes/sizeof(selectedElectron_mvaFall17V2Iso_WP90_[0]));
        loaded_selectedElectron_mvaFall17V2Iso_WP90_ = true;
    }
    return v_selectedElectron_mvaFall17V2Iso_WP90_;
}
const vector<float> &Nano::selectedElectron_mvaFall17V2Iso_WPL() {
    if (!loaded_selectedElectron_mvaFall17V2Iso_WPL_) {
        if (!b_selectedElectron_mvaFall17V2Iso_WPL_) throw std::runtime_error("selectedElectron_mvaFall17V2Iso_WPL branch doesn't exist");
        int bytes = b_selectedElectron_mvaFall17V2Iso_WPL_->GetEntry(index);
        v_selectedElectron_mvaFall17V2Iso_WPL_ = vector<float>(selectedElectron_mvaFall17V2Iso_WPL_,selectedElectron_mvaFall17V2Iso_WPL_+bytes/sizeof(selectedElectron_mvaFall17V2Iso_WPL_[0]));
        loaded_selectedElectron_mvaFall17V2Iso_WPL_ = true;
    }
    return v_selectedElectron_mvaFall17V2Iso_WPL_;
}
const vector<float> &Nano::selectedElectron_mvaFall17V2noIso() {
    if (!loaded_selectedElectron_mvaFall17V2noIso_) {
        if (!b_selectedElectron_mvaFall17V2noIso_) throw std::runtime_error("selectedElectron_mvaFall17V2noIso branch doesn't exist");
        int bytes = b_selectedElectron_mvaFall17V2noIso_->GetEntry(index);
        v_selectedElectron_mvaFall17V2noIso_ = vector<float>(selectedElectron_mvaFall17V2noIso_,selectedElectron_mvaFall17V2noIso_+bytes/sizeof(selectedElectron_mvaFall17V2noIso_[0]));
        loaded_selectedElectron_mvaFall17V2noIso_ = true;
    }
    return v_selectedElectron_mvaFall17V2noIso_;
}
const vector<float> &Nano::selectedElectron_mvaFall17V2noIso_WP80() {
    if (!loaded_selectedElectron_mvaFall17V2noIso_WP80_) {
        if (!b_selectedElectron_mvaFall17V2noIso_WP80_) throw std::runtime_error("selectedElectron_mvaFall17V2noIso_WP80 branch doesn't exist");
        int bytes = b_selectedElectron_mvaFall17V2noIso_WP80_->GetEntry(index);
        v_selectedElectron_mvaFall17V2noIso_WP80_ = vector<float>(selectedElectron_mvaFall17V2noIso_WP80_,selectedElectron_mvaFall17V2noIso_WP80_+bytes/sizeof(selectedElectron_mvaFall17V2noIso_WP80_[0]));
        loaded_selectedElectron_mvaFall17V2noIso_WP80_ = true;
    }
    return v_selectedElectron_mvaFall17V2noIso_WP80_;
}
const vector<float> &Nano::selectedElectron_mvaFall17V2noIso_WP90() {
    if (!loaded_selectedElectron_mvaFall17V2noIso_WP90_) {
        if (!b_selectedElectron_mvaFall17V2noIso_WP90_) throw std::runtime_error("selectedElectron_mvaFall17V2noIso_WP90 branch doesn't exist");
        int bytes = b_selectedElectron_mvaFall17V2noIso_WP90_->GetEntry(index);
        v_selectedElectron_mvaFall17V2noIso_WP90_ = vector<float>(selectedElectron_mvaFall17V2noIso_WP90_,selectedElectron_mvaFall17V2noIso_WP90_+bytes/sizeof(selectedElectron_mvaFall17V2noIso_WP90_[0]));
        loaded_selectedElectron_mvaFall17V2noIso_WP90_ = true;
    }
    return v_selectedElectron_mvaFall17V2noIso_WP90_;
}
const vector<float> &Nano::selectedElectron_mvaFall17V2noIso_WPL() {
    if (!loaded_selectedElectron_mvaFall17V2noIso_WPL_) {
        if (!b_selectedElectron_mvaFall17V2noIso_WPL_) throw std::runtime_error("selectedElectron_mvaFall17V2noIso_WPL branch doesn't exist");
        int bytes = b_selectedElectron_mvaFall17V2noIso_WPL_->GetEntry(index);
        v_selectedElectron_mvaFall17V2noIso_WPL_ = vector<float>(selectedElectron_mvaFall17V2noIso_WPL_,selectedElectron_mvaFall17V2noIso_WPL_+bytes/sizeof(selectedElectron_mvaFall17V2noIso_WPL_[0]));
        loaded_selectedElectron_mvaFall17V2noIso_WPL_ = true;
    }
    return v_selectedElectron_mvaFall17V2noIso_WPL_;
}
const vector<float> &Nano::selectedElectron_mvaSpring16GP() {
    if (!loaded_selectedElectron_mvaSpring16GP_) {
        if (!b_selectedElectron_mvaSpring16GP_) throw std::runtime_error("selectedElectron_mvaSpring16GP branch doesn't exist");
        int bytes = b_selectedElectron_mvaSpring16GP_->GetEntry(index);
        v_selectedElectron_mvaSpring16GP_ = vector<float>(selectedElectron_mvaSpring16GP_,selectedElectron_mvaSpring16GP_+bytes/sizeof(selectedElectron_mvaSpring16GP_[0]));
        loaded_selectedElectron_mvaSpring16GP_ = true;
    }
    return v_selectedElectron_mvaSpring16GP_;
}
const vector<float> &Nano::selectedElectron_mvaSpring16GP_WP80() {
    if (!loaded_selectedElectron_mvaSpring16GP_WP80_) {
        if (!b_selectedElectron_mvaSpring16GP_WP80_) throw std::runtime_error("selectedElectron_mvaSpring16GP_WP80 branch doesn't exist");
        int bytes = b_selectedElectron_mvaSpring16GP_WP80_->GetEntry(index);
        v_selectedElectron_mvaSpring16GP_WP80_ = vector<float>(selectedElectron_mvaSpring16GP_WP80_,selectedElectron_mvaSpring16GP_WP80_+bytes/sizeof(selectedElectron_mvaSpring16GP_WP80_[0]));
        loaded_selectedElectron_mvaSpring16GP_WP80_ = true;
    }
    return v_selectedElectron_mvaSpring16GP_WP80_;
}
const vector<float> &Nano::selectedElectron_mvaSpring16GP_WP90() {
    if (!loaded_selectedElectron_mvaSpring16GP_WP90_) {
        if (!b_selectedElectron_mvaSpring16GP_WP90_) throw std::runtime_error("selectedElectron_mvaSpring16GP_WP90 branch doesn't exist");
        int bytes = b_selectedElectron_mvaSpring16GP_WP90_->GetEntry(index);
        v_selectedElectron_mvaSpring16GP_WP90_ = vector<float>(selectedElectron_mvaSpring16GP_WP90_,selectedElectron_mvaSpring16GP_WP90_+bytes/sizeof(selectedElectron_mvaSpring16GP_WP90_[0]));
        loaded_selectedElectron_mvaSpring16GP_WP90_ = true;
    }
    return v_selectedElectron_mvaSpring16GP_WP90_;
}
const vector<float> &Nano::selectedElectron_mvaSpring16HZZ() {
    if (!loaded_selectedElectron_mvaSpring16HZZ_) {
        if (!b_selectedElectron_mvaSpring16HZZ_) throw std::runtime_error("selectedElectron_mvaSpring16HZZ branch doesn't exist");
        int bytes = b_selectedElectron_mvaSpring16HZZ_->GetEntry(index);
        v_selectedElectron_mvaSpring16HZZ_ = vector<float>(selectedElectron_mvaSpring16HZZ_,selectedElectron_mvaSpring16HZZ_+bytes/sizeof(selectedElectron_mvaSpring16HZZ_[0]));
        loaded_selectedElectron_mvaSpring16HZZ_ = true;
    }
    return v_selectedElectron_mvaSpring16HZZ_;
}
const vector<float> &Nano::selectedElectron_mvaSpring16HZZ_WPL() {
    if (!loaded_selectedElectron_mvaSpring16HZZ_WPL_) {
        if (!b_selectedElectron_mvaSpring16HZZ_WPL_) throw std::runtime_error("selectedElectron_mvaSpring16HZZ_WPL branch doesn't exist");
        int bytes = b_selectedElectron_mvaSpring16HZZ_WPL_->GetEntry(index);
        v_selectedElectron_mvaSpring16HZZ_WPL_ = vector<float>(selectedElectron_mvaSpring16HZZ_WPL_,selectedElectron_mvaSpring16HZZ_WPL_+bytes/sizeof(selectedElectron_mvaSpring16HZZ_WPL_[0]));
        loaded_selectedElectron_mvaSpring16HZZ_WPL_ = true;
    }
    return v_selectedElectron_mvaSpring16HZZ_WPL_;
}
const vector<float> &Nano::selectedElectron_mvaTTH() {
    if (!loaded_selectedElectron_mvaTTH_) {
        if (!b_selectedElectron_mvaTTH_) throw std::runtime_error("selectedElectron_mvaTTH branch doesn't exist");
        int bytes = b_selectedElectron_mvaTTH_->GetEntry(index);
        v_selectedElectron_mvaTTH_ = vector<float>(selectedElectron_mvaTTH_,selectedElectron_mvaTTH_+bytes/sizeof(selectedElectron_mvaTTH_[0]));
        loaded_selectedElectron_mvaTTH_ = true;
    }
    return v_selectedElectron_mvaTTH_;
}
const vector<LorentzVector> &Nano::selectedElectron_p4() {
    if (!loaded_selectedElectron_p4_) {
        v_selectedElectron_p4_.clear();
        vector<float> pts = Nano::selectedElectron_pt();
        vector<float> etas = Nano::selectedElectron_eta();
        vector<float> phis = Nano::selectedElectron_phi();
        vector<float> masses = Nano::selectedElectron_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_selectedElectron_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_selectedElectron_p4_ = true;
    }
    return v_selectedElectron_p4_;
}
const vector<float> &Nano::selectedElectron_pdgId() {
    if (!loaded_selectedElectron_pdgId_) {
        if (!b_selectedElectron_pdgId_) throw std::runtime_error("selectedElectron_pdgId branch doesn't exist");
        int bytes = b_selectedElectron_pdgId_->GetEntry(index);
        v_selectedElectron_pdgId_ = vector<float>(selectedElectron_pdgId_,selectedElectron_pdgId_+bytes/sizeof(selectedElectron_pdgId_[0]));
        loaded_selectedElectron_pdgId_ = true;
    }
    return v_selectedElectron_pdgId_;
}
const vector<float> &Nano::selectedElectron_pfRelIso03_all() {
    if (!loaded_selectedElectron_pfRelIso03_all_) {
        if (!b_selectedElectron_pfRelIso03_all_) throw std::runtime_error("selectedElectron_pfRelIso03_all branch doesn't exist");
        int bytes = b_selectedElectron_pfRelIso03_all_->GetEntry(index);
        v_selectedElectron_pfRelIso03_all_ = vector<float>(selectedElectron_pfRelIso03_all_,selectedElectron_pfRelIso03_all_+bytes/sizeof(selectedElectron_pfRelIso03_all_[0]));
        loaded_selectedElectron_pfRelIso03_all_ = true;
    }
    return v_selectedElectron_pfRelIso03_all_;
}
const vector<float> &Nano::selectedElectron_pfRelIso03_chg() {
    if (!loaded_selectedElectron_pfRelIso03_chg_) {
        if (!b_selectedElectron_pfRelIso03_chg_) throw std::runtime_error("selectedElectron_pfRelIso03_chg branch doesn't exist");
        int bytes = b_selectedElectron_pfRelIso03_chg_->GetEntry(index);
        v_selectedElectron_pfRelIso03_chg_ = vector<float>(selectedElectron_pfRelIso03_chg_,selectedElectron_pfRelIso03_chg_+bytes/sizeof(selectedElectron_pfRelIso03_chg_[0]));
        loaded_selectedElectron_pfRelIso03_chg_ = true;
    }
    return v_selectedElectron_pfRelIso03_chg_;
}
const vector<float> &Nano::selectedElectron_phi() {
    if (!loaded_selectedElectron_phi_) {
        if (!b_selectedElectron_phi_) throw std::runtime_error("selectedElectron_phi branch doesn't exist");
        int bytes = b_selectedElectron_phi_->GetEntry(index);
        v_selectedElectron_phi_ = vector<float>(selectedElectron_phi_,selectedElectron_phi_+bytes/sizeof(selectedElectron_phi_[0]));
        loaded_selectedElectron_phi_ = true;
    }
    return v_selectedElectron_phi_;
}
const vector<float> &Nano::selectedElectron_phiSVFit() {
    if (!loaded_selectedElectron_phiSVFit_) {
        if (!b_selectedElectron_phiSVFit_) throw std::runtime_error("selectedElectron_phiSVFit branch doesn't exist");
        int bytes = b_selectedElectron_phiSVFit_->GetEntry(index);
        v_selectedElectron_phiSVFit_ = vector<float>(selectedElectron_phiSVFit_,selectedElectron_phiSVFit_+bytes/sizeof(selectedElectron_phiSVFit_[0]));
        loaded_selectedElectron_phiSVFit_ = true;
    }
    return v_selectedElectron_phiSVFit_;
}
const vector<float> &Nano::selectedElectron_photonIdx() {
    if (!loaded_selectedElectron_photonIdx_) {
        if (!b_selectedElectron_photonIdx_) throw std::runtime_error("selectedElectron_photonIdx branch doesn't exist");
        int bytes = b_selectedElectron_photonIdx_->GetEntry(index);
        v_selectedElectron_photonIdx_ = vector<float>(selectedElectron_photonIdx_,selectedElectron_photonIdx_+bytes/sizeof(selectedElectron_photonIdx_[0]));
        loaded_selectedElectron_photonIdx_ = true;
    }
    return v_selectedElectron_photonIdx_;
}
const vector<float> &Nano::selectedElectron_pt() {
    if (!loaded_selectedElectron_pt_) {
        if (!b_selectedElectron_pt_) throw std::runtime_error("selectedElectron_pt branch doesn't exist");
        int bytes = b_selectedElectron_pt_->GetEntry(index);
        v_selectedElectron_pt_ = vector<float>(selectedElectron_pt_,selectedElectron_pt_+bytes/sizeof(selectedElectron_pt_[0]));
        loaded_selectedElectron_pt_ = true;
    }
    return v_selectedElectron_pt_;
}
const vector<float> &Nano::selectedElectron_ptSVFit() {
    if (!loaded_selectedElectron_ptSVFit_) {
        if (!b_selectedElectron_ptSVFit_) throw std::runtime_error("selectedElectron_ptSVFit branch doesn't exist");
        int bytes = b_selectedElectron_ptSVFit_->GetEntry(index);
        v_selectedElectron_ptSVFit_ = vector<float>(selectedElectron_ptSVFit_,selectedElectron_ptSVFit_+bytes/sizeof(selectedElectron_ptSVFit_[0]));
        loaded_selectedElectron_ptSVFit_ = true;
    }
    return v_selectedElectron_ptSVFit_;
}
const vector<float> &Nano::selectedElectron_r9() {
    if (!loaded_selectedElectron_r9_) {
        if (!b_selectedElectron_r9_) throw std::runtime_error("selectedElectron_r9 branch doesn't exist");
        int bytes = b_selectedElectron_r9_->GetEntry(index);
        v_selectedElectron_r9_ = vector<float>(selectedElectron_r9_,selectedElectron_r9_+bytes/sizeof(selectedElectron_r9_[0]));
        loaded_selectedElectron_r9_ = true;
    }
    return v_selectedElectron_r9_;
}
const vector<float> &Nano::selectedElectron_scEtOverPt() {
    if (!loaded_selectedElectron_scEtOverPt_) {
        if (!b_selectedElectron_scEtOverPt_) throw std::runtime_error("selectedElectron_scEtOverPt branch doesn't exist");
        int bytes = b_selectedElectron_scEtOverPt_->GetEntry(index);
        v_selectedElectron_scEtOverPt_ = vector<float>(selectedElectron_scEtOverPt_,selectedElectron_scEtOverPt_+bytes/sizeof(selectedElectron_scEtOverPt_[0]));
        loaded_selectedElectron_scEtOverPt_ = true;
    }
    return v_selectedElectron_scEtOverPt_;
}
const vector<float> &Nano::selectedElectron_seedGain() {
    if (!loaded_selectedElectron_seedGain_) {
        if (!b_selectedElectron_seedGain_) throw std::runtime_error("selectedElectron_seedGain branch doesn't exist");
        int bytes = b_selectedElectron_seedGain_->GetEntry(index);
        v_selectedElectron_seedGain_ = vector<float>(selectedElectron_seedGain_,selectedElectron_seedGain_+bytes/sizeof(selectedElectron_seedGain_[0]));
        loaded_selectedElectron_seedGain_ = true;
    }
    return v_selectedElectron_seedGain_;
}
const vector<float> &Nano::selectedElectron_sieie() {
    if (!loaded_selectedElectron_sieie_) {
        if (!b_selectedElectron_sieie_) throw std::runtime_error("selectedElectron_sieie branch doesn't exist");
        int bytes = b_selectedElectron_sieie_->GetEntry(index);
        v_selectedElectron_sieie_ = vector<float>(selectedElectron_sieie_,selectedElectron_sieie_+bytes/sizeof(selectedElectron_sieie_[0]));
        loaded_selectedElectron_sieie_ = true;
    }
    return v_selectedElectron_sieie_;
}
const vector<float> &Nano::selectedElectron_sip3d() {
    if (!loaded_selectedElectron_sip3d_) {
        if (!b_selectedElectron_sip3d_) throw std::runtime_error("selectedElectron_sip3d branch doesn't exist");
        int bytes = b_selectedElectron_sip3d_->GetEntry(index);
        v_selectedElectron_sip3d_ = vector<float>(selectedElectron_sip3d_,selectedElectron_sip3d_+bytes/sizeof(selectedElectron_sip3d_[0]));
        loaded_selectedElectron_sip3d_ = true;
    }
    return v_selectedElectron_sip3d_;
}
const vector<float> &Nano::selectedElectron_tightCharge() {
    if (!loaded_selectedElectron_tightCharge_) {
        if (!b_selectedElectron_tightCharge_) throw std::runtime_error("selectedElectron_tightCharge branch doesn't exist");
        int bytes = b_selectedElectron_tightCharge_->GetEntry(index);
        v_selectedElectron_tightCharge_ = vector<float>(selectedElectron_tightCharge_,selectedElectron_tightCharge_+bytes/sizeof(selectedElectron_tightCharge_[0]));
        loaded_selectedElectron_tightCharge_ = true;
    }
    return v_selectedElectron_tightCharge_;
}
const vector<float> &Nano::selectedElectron_vidNestedWPBitmap() {
    if (!loaded_selectedElectron_vidNestedWPBitmap_) {
        if (!b_selectedElectron_vidNestedWPBitmap_) throw std::runtime_error("selectedElectron_vidNestedWPBitmap branch doesn't exist");
        int bytes = b_selectedElectron_vidNestedWPBitmap_->GetEntry(index);
        v_selectedElectron_vidNestedWPBitmap_ = vector<float>(selectedElectron_vidNestedWPBitmap_,selectedElectron_vidNestedWPBitmap_+bytes/sizeof(selectedElectron_vidNestedWPBitmap_[0]));
        loaded_selectedElectron_vidNestedWPBitmap_ = true;
    }
    return v_selectedElectron_vidNestedWPBitmap_;
}
const vector<float> &Nano::selectedElectron_vidNestedWPBitmapHEEP() {
    if (!loaded_selectedElectron_vidNestedWPBitmapHEEP_) {
        if (!b_selectedElectron_vidNestedWPBitmapHEEP_) throw std::runtime_error("selectedElectron_vidNestedWPBitmapHEEP branch doesn't exist");
        int bytes = b_selectedElectron_vidNestedWPBitmapHEEP_->GetEntry(index);
        v_selectedElectron_vidNestedWPBitmapHEEP_ = vector<float>(selectedElectron_vidNestedWPBitmapHEEP_,selectedElectron_vidNestedWPBitmapHEEP_+bytes/sizeof(selectedElectron_vidNestedWPBitmapHEEP_[0]));
        loaded_selectedElectron_vidNestedWPBitmapHEEP_ = true;
    }
    return v_selectedElectron_vidNestedWPBitmapHEEP_;
}
const vector<float> &Nano::selectedElectron_vidNestedWPBitmapSpring15() {
    if (!loaded_selectedElectron_vidNestedWPBitmapSpring15_) {
        if (!b_selectedElectron_vidNestedWPBitmapSpring15_) throw std::runtime_error("selectedElectron_vidNestedWPBitmapSpring15 branch doesn't exist");
        int bytes = b_selectedElectron_vidNestedWPBitmapSpring15_->GetEntry(index);
        v_selectedElectron_vidNestedWPBitmapSpring15_ = vector<float>(selectedElectron_vidNestedWPBitmapSpring15_,selectedElectron_vidNestedWPBitmapSpring15_+bytes/sizeof(selectedElectron_vidNestedWPBitmapSpring15_[0]));
        loaded_selectedElectron_vidNestedWPBitmapSpring15_ = true;
    }
    return v_selectedElectron_vidNestedWPBitmapSpring15_;
}
const vector<float> &Nano::selectedElectron_vidNestedWPBitmapSum16() {
    if (!loaded_selectedElectron_vidNestedWPBitmapSum16_) {
        if (!b_selectedElectron_vidNestedWPBitmapSum16_) throw std::runtime_error("selectedElectron_vidNestedWPBitmapSum16 branch doesn't exist");
        int bytes = b_selectedElectron_vidNestedWPBitmapSum16_->GetEntry(index);
        v_selectedElectron_vidNestedWPBitmapSum16_ = vector<float>(selectedElectron_vidNestedWPBitmapSum16_,selectedElectron_vidNestedWPBitmapSum16_+bytes/sizeof(selectedElectron_vidNestedWPBitmapSum16_[0]));
        loaded_selectedElectron_vidNestedWPBitmapSum16_ = true;
    }
    return v_selectedElectron_vidNestedWPBitmapSum16_;
}
const vector<float> &Nano::selectedMuon_charge() {
    if (!loaded_selectedMuon_charge_) {
        if (!b_selectedMuon_charge_) throw std::runtime_error("selectedMuon_charge branch doesn't exist");
        int bytes = b_selectedMuon_charge_->GetEntry(index);
        v_selectedMuon_charge_ = vector<float>(selectedMuon_charge_,selectedMuon_charge_+bytes/sizeof(selectedMuon_charge_[0]));
        loaded_selectedMuon_charge_ = true;
    }
    return v_selectedMuon_charge_;
}
const vector<float> &Nano::selectedMuon_cleanmask() {
    if (!loaded_selectedMuon_cleanmask_) {
        if (!b_selectedMuon_cleanmask_) throw std::runtime_error("selectedMuon_cleanmask branch doesn't exist");
        int bytes = b_selectedMuon_cleanmask_->GetEntry(index);
        v_selectedMuon_cleanmask_ = vector<float>(selectedMuon_cleanmask_,selectedMuon_cleanmask_+bytes/sizeof(selectedMuon_cleanmask_[0]));
        loaded_selectedMuon_cleanmask_ = true;
    }
    return v_selectedMuon_cleanmask_;
}
const vector<float> &Nano::selectedMuon_dxy() {
    if (!loaded_selectedMuon_dxy_) {
        if (!b_selectedMuon_dxy_) throw std::runtime_error("selectedMuon_dxy branch doesn't exist");
        int bytes = b_selectedMuon_dxy_->GetEntry(index);
        v_selectedMuon_dxy_ = vector<float>(selectedMuon_dxy_,selectedMuon_dxy_+bytes/sizeof(selectedMuon_dxy_[0]));
        loaded_selectedMuon_dxy_ = true;
    }
    return v_selectedMuon_dxy_;
}
const vector<float> &Nano::selectedMuon_dxyErr() {
    if (!loaded_selectedMuon_dxyErr_) {
        if (!b_selectedMuon_dxyErr_) throw std::runtime_error("selectedMuon_dxyErr branch doesn't exist");
        int bytes = b_selectedMuon_dxyErr_->GetEntry(index);
        v_selectedMuon_dxyErr_ = vector<float>(selectedMuon_dxyErr_,selectedMuon_dxyErr_+bytes/sizeof(selectedMuon_dxyErr_[0]));
        loaded_selectedMuon_dxyErr_ = true;
    }
    return v_selectedMuon_dxyErr_;
}
const vector<float> &Nano::selectedMuon_dxybs() {
    if (!loaded_selectedMuon_dxybs_) {
        if (!b_selectedMuon_dxybs_) throw std::runtime_error("selectedMuon_dxybs branch doesn't exist");
        int bytes = b_selectedMuon_dxybs_->GetEntry(index);
        v_selectedMuon_dxybs_ = vector<float>(selectedMuon_dxybs_,selectedMuon_dxybs_+bytes/sizeof(selectedMuon_dxybs_[0]));
        loaded_selectedMuon_dxybs_ = true;
    }
    return v_selectedMuon_dxybs_;
}
const vector<float> &Nano::selectedMuon_dz() {
    if (!loaded_selectedMuon_dz_) {
        if (!b_selectedMuon_dz_) throw std::runtime_error("selectedMuon_dz branch doesn't exist");
        int bytes = b_selectedMuon_dz_->GetEntry(index);
        v_selectedMuon_dz_ = vector<float>(selectedMuon_dz_,selectedMuon_dz_+bytes/sizeof(selectedMuon_dz_[0]));
        loaded_selectedMuon_dz_ = true;
    }
    return v_selectedMuon_dz_;
}
const vector<float> &Nano::selectedMuon_dzErr() {
    if (!loaded_selectedMuon_dzErr_) {
        if (!b_selectedMuon_dzErr_) throw std::runtime_error("selectedMuon_dzErr branch doesn't exist");
        int bytes = b_selectedMuon_dzErr_->GetEntry(index);
        v_selectedMuon_dzErr_ = vector<float>(selectedMuon_dzErr_,selectedMuon_dzErr_+bytes/sizeof(selectedMuon_dzErr_[0]));
        loaded_selectedMuon_dzErr_ = true;
    }
    return v_selectedMuon_dzErr_;
}
const vector<float> &Nano::selectedMuon_eta() {
    if (!loaded_selectedMuon_eta_) {
        if (!b_selectedMuon_eta_) throw std::runtime_error("selectedMuon_eta branch doesn't exist");
        int bytes = b_selectedMuon_eta_->GetEntry(index);
        v_selectedMuon_eta_ = vector<float>(selectedMuon_eta_,selectedMuon_eta_+bytes/sizeof(selectedMuon_eta_[0]));
        loaded_selectedMuon_eta_ = true;
    }
    return v_selectedMuon_eta_;
}
const vector<float> &Nano::selectedMuon_etaSVFit() {
    if (!loaded_selectedMuon_etaSVFit_) {
        if (!b_selectedMuon_etaSVFit_) throw std::runtime_error("selectedMuon_etaSVFit branch doesn't exist");
        int bytes = b_selectedMuon_etaSVFit_->GetEntry(index);
        v_selectedMuon_etaSVFit_ = vector<float>(selectedMuon_etaSVFit_,selectedMuon_etaSVFit_+bytes/sizeof(selectedMuon_etaSVFit_[0]));
        loaded_selectedMuon_etaSVFit_ = true;
    }
    return v_selectedMuon_etaSVFit_;
}
const vector<float> &Nano::selectedMuon_fsrPhotonIdx() {
    if (!loaded_selectedMuon_fsrPhotonIdx_) {
        if (!b_selectedMuon_fsrPhotonIdx_) throw std::runtime_error("selectedMuon_fsrPhotonIdx branch doesn't exist");
        int bytes = b_selectedMuon_fsrPhotonIdx_->GetEntry(index);
        v_selectedMuon_fsrPhotonIdx_ = vector<float>(selectedMuon_fsrPhotonIdx_,selectedMuon_fsrPhotonIdx_+bytes/sizeof(selectedMuon_fsrPhotonIdx_[0]));
        loaded_selectedMuon_fsrPhotonIdx_ = true;
    }
    return v_selectedMuon_fsrPhotonIdx_;
}
const vector<float> &Nano::selectedMuon_genPartFlav() {
    if (!loaded_selectedMuon_genPartFlav_) {
        if (!b_selectedMuon_genPartFlav_) throw std::runtime_error("selectedMuon_genPartFlav branch doesn't exist");
        int bytes = b_selectedMuon_genPartFlav_->GetEntry(index);
        v_selectedMuon_genPartFlav_ = vector<float>(selectedMuon_genPartFlav_,selectedMuon_genPartFlav_+bytes/sizeof(selectedMuon_genPartFlav_[0]));
        loaded_selectedMuon_genPartFlav_ = true;
    }
    return v_selectedMuon_genPartFlav_;
}
const vector<float> &Nano::selectedMuon_genPartIdx() {
    if (!loaded_selectedMuon_genPartIdx_) {
        if (!b_selectedMuon_genPartIdx_) throw std::runtime_error("selectedMuon_genPartIdx branch doesn't exist");
        int bytes = b_selectedMuon_genPartIdx_->GetEntry(index);
        v_selectedMuon_genPartIdx_ = vector<float>(selectedMuon_genPartIdx_,selectedMuon_genPartIdx_+bytes/sizeof(selectedMuon_genPartIdx_[0]));
        loaded_selectedMuon_genPartIdx_ = true;
    }
    return v_selectedMuon_genPartIdx_;
}
const vector<float> &Nano::selectedMuon_highPtId() {
    if (!loaded_selectedMuon_highPtId_) {
        if (!b_selectedMuon_highPtId_) throw std::runtime_error("selectedMuon_highPtId branch doesn't exist");
        int bytes = b_selectedMuon_highPtId_->GetEntry(index);
        v_selectedMuon_highPtId_ = vector<float>(selectedMuon_highPtId_,selectedMuon_highPtId_+bytes/sizeof(selectedMuon_highPtId_[0]));
        loaded_selectedMuon_highPtId_ = true;
    }
    return v_selectedMuon_highPtId_;
}
const vector<float> &Nano::selectedMuon_highPurity() {
    if (!loaded_selectedMuon_highPurity_) {
        if (!b_selectedMuon_highPurity_) throw std::runtime_error("selectedMuon_highPurity branch doesn't exist");
        int bytes = b_selectedMuon_highPurity_->GetEntry(index);
        v_selectedMuon_highPurity_ = vector<float>(selectedMuon_highPurity_,selectedMuon_highPurity_+bytes/sizeof(selectedMuon_highPurity_[0]));
        loaded_selectedMuon_highPurity_ = true;
    }
    return v_selectedMuon_highPurity_;
}
const vector<float> &Nano::selectedMuon_inTimeselectedMuon() {
    if (!loaded_selectedMuon_inTimeselectedMuon_) {
        if (!b_selectedMuon_inTimeselectedMuon_) throw std::runtime_error("selectedMuon_inTimeselectedMuon branch doesn't exist");
        int bytes = b_selectedMuon_inTimeselectedMuon_->GetEntry(index);
        v_selectedMuon_inTimeselectedMuon_ = vector<float>(selectedMuon_inTimeselectedMuon_,selectedMuon_inTimeselectedMuon_+bytes/sizeof(selectedMuon_inTimeselectedMuon_[0]));
        loaded_selectedMuon_inTimeselectedMuon_ = true;
    }
    return v_selectedMuon_inTimeselectedMuon_;
}
const vector<float> &Nano::selectedMuon_ip3d() {
    if (!loaded_selectedMuon_ip3d_) {
        if (!b_selectedMuon_ip3d_) throw std::runtime_error("selectedMuon_ip3d branch doesn't exist");
        int bytes = b_selectedMuon_ip3d_->GetEntry(index);
        v_selectedMuon_ip3d_ = vector<float>(selectedMuon_ip3d_,selectedMuon_ip3d_+bytes/sizeof(selectedMuon_ip3d_[0]));
        loaded_selectedMuon_ip3d_ = true;
    }
    return v_selectedMuon_ip3d_;
}
const vector<float> &Nano::selectedMuon_isGlobal() {
    if (!loaded_selectedMuon_isGlobal_) {
        if (!b_selectedMuon_isGlobal_) throw std::runtime_error("selectedMuon_isGlobal branch doesn't exist");
        int bytes = b_selectedMuon_isGlobal_->GetEntry(index);
        v_selectedMuon_isGlobal_ = vector<float>(selectedMuon_isGlobal_,selectedMuon_isGlobal_+bytes/sizeof(selectedMuon_isGlobal_[0]));
        loaded_selectedMuon_isGlobal_ = true;
    }
    return v_selectedMuon_isGlobal_;
}
const vector<float> &Nano::selectedMuon_isPFcand() {
    if (!loaded_selectedMuon_isPFcand_) {
        if (!b_selectedMuon_isPFcand_) throw std::runtime_error("selectedMuon_isPFcand branch doesn't exist");
        int bytes = b_selectedMuon_isPFcand_->GetEntry(index);
        v_selectedMuon_isPFcand_ = vector<float>(selectedMuon_isPFcand_,selectedMuon_isPFcand_+bytes/sizeof(selectedMuon_isPFcand_[0]));
        loaded_selectedMuon_isPFcand_ = true;
    }
    return v_selectedMuon_isPFcand_;
}
const vector<float> &Nano::selectedMuon_isTracker() {
    if (!loaded_selectedMuon_isTracker_) {
        if (!b_selectedMuon_isTracker_) throw std::runtime_error("selectedMuon_isTracker branch doesn't exist");
        int bytes = b_selectedMuon_isTracker_->GetEntry(index);
        v_selectedMuon_isTracker_ = vector<float>(selectedMuon_isTracker_,selectedMuon_isTracker_+bytes/sizeof(selectedMuon_isTracker_[0]));
        loaded_selectedMuon_isTracker_ = true;
    }
    return v_selectedMuon_isTracker_;
}
const vector<float> &Nano::selectedMuon_jetIdx() {
    if (!loaded_selectedMuon_jetIdx_) {
        if (!b_selectedMuon_jetIdx_) throw std::runtime_error("selectedMuon_jetIdx branch doesn't exist");
        int bytes = b_selectedMuon_jetIdx_->GetEntry(index);
        v_selectedMuon_jetIdx_ = vector<float>(selectedMuon_jetIdx_,selectedMuon_jetIdx_+bytes/sizeof(selectedMuon_jetIdx_[0]));
        loaded_selectedMuon_jetIdx_ = true;
    }
    return v_selectedMuon_jetIdx_;
}
const vector<float> &Nano::selectedMuon_jetPtRelv2() {
    if (!loaded_selectedMuon_jetPtRelv2_) {
        if (!b_selectedMuon_jetPtRelv2_) throw std::runtime_error("selectedMuon_jetPtRelv2 branch doesn't exist");
        int bytes = b_selectedMuon_jetPtRelv2_->GetEntry(index);
        v_selectedMuon_jetPtRelv2_ = vector<float>(selectedMuon_jetPtRelv2_,selectedMuon_jetPtRelv2_+bytes/sizeof(selectedMuon_jetPtRelv2_[0]));
        loaded_selectedMuon_jetPtRelv2_ = true;
    }
    return v_selectedMuon_jetPtRelv2_;
}
const vector<float> &Nano::selectedMuon_jetRelIso() {
    if (!loaded_selectedMuon_jetRelIso_) {
        if (!b_selectedMuon_jetRelIso_) throw std::runtime_error("selectedMuon_jetRelIso branch doesn't exist");
        int bytes = b_selectedMuon_jetRelIso_->GetEntry(index);
        v_selectedMuon_jetRelIso_ = vector<float>(selectedMuon_jetRelIso_,selectedMuon_jetRelIso_+bytes/sizeof(selectedMuon_jetRelIso_[0]));
        loaded_selectedMuon_jetRelIso_ = true;
    }
    return v_selectedMuon_jetRelIso_;
}
const vector<float> &Nano::selectedMuon_looseId() {
    if (!loaded_selectedMuon_looseId_) {
        if (!b_selectedMuon_looseId_) throw std::runtime_error("selectedMuon_looseId branch doesn't exist");
        int bytes = b_selectedMuon_looseId_->GetEntry(index);
        v_selectedMuon_looseId_ = vector<float>(selectedMuon_looseId_,selectedMuon_looseId_+bytes/sizeof(selectedMuon_looseId_[0]));
        loaded_selectedMuon_looseId_ = true;
    }
    return v_selectedMuon_looseId_;
}
const vector<float> &Nano::selectedMuon_mSVFit() {
    if (!loaded_selectedMuon_mSVFit_) {
        if (!b_selectedMuon_mSVFit_) throw std::runtime_error("selectedMuon_mSVFit branch doesn't exist");
        int bytes = b_selectedMuon_mSVFit_->GetEntry(index);
        v_selectedMuon_mSVFit_ = vector<float>(selectedMuon_mSVFit_,selectedMuon_mSVFit_+bytes/sizeof(selectedMuon_mSVFit_[0]));
        loaded_selectedMuon_mSVFit_ = true;
    }
    return v_selectedMuon_mSVFit_;
}
const vector<float> &Nano::selectedMuon_mass() {
    if (!loaded_selectedMuon_mass_) {
        if (!b_selectedMuon_mass_) throw std::runtime_error("selectedMuon_mass branch doesn't exist");
        int bytes = b_selectedMuon_mass_->GetEntry(index);
        v_selectedMuon_mass_ = vector<float>(selectedMuon_mass_,selectedMuon_mass_+bytes/sizeof(selectedMuon_mass_[0]));
        loaded_selectedMuon_mass_ = true;
    }
    return v_selectedMuon_mass_;
}
const vector<float> &Nano::selectedMuon_mediumId() {
    if (!loaded_selectedMuon_mediumId_) {
        if (!b_selectedMuon_mediumId_) throw std::runtime_error("selectedMuon_mediumId branch doesn't exist");
        int bytes = b_selectedMuon_mediumId_->GetEntry(index);
        v_selectedMuon_mediumId_ = vector<float>(selectedMuon_mediumId_,selectedMuon_mediumId_+bytes/sizeof(selectedMuon_mediumId_[0]));
        loaded_selectedMuon_mediumId_ = true;
    }
    return v_selectedMuon_mediumId_;
}
const vector<float> &Nano::selectedMuon_mediumPromptId() {
    if (!loaded_selectedMuon_mediumPromptId_) {
        if (!b_selectedMuon_mediumPromptId_) throw std::runtime_error("selectedMuon_mediumPromptId branch doesn't exist");
        int bytes = b_selectedMuon_mediumPromptId_->GetEntry(index);
        v_selectedMuon_mediumPromptId_ = vector<float>(selectedMuon_mediumPromptId_,selectedMuon_mediumPromptId_+bytes/sizeof(selectedMuon_mediumPromptId_[0]));
        loaded_selectedMuon_mediumPromptId_ = true;
    }
    return v_selectedMuon_mediumPromptId_;
}
const vector<float> &Nano::selectedMuon_miniIsoId() {
    if (!loaded_selectedMuon_miniIsoId_) {
        if (!b_selectedMuon_miniIsoId_) throw std::runtime_error("selectedMuon_miniIsoId branch doesn't exist");
        int bytes = b_selectedMuon_miniIsoId_->GetEntry(index);
        v_selectedMuon_miniIsoId_ = vector<float>(selectedMuon_miniIsoId_,selectedMuon_miniIsoId_+bytes/sizeof(selectedMuon_miniIsoId_[0]));
        loaded_selectedMuon_miniIsoId_ = true;
    }
    return v_selectedMuon_miniIsoId_;
}
const vector<float> &Nano::selectedMuon_miniPFRelIso_all() {
    if (!loaded_selectedMuon_miniPFRelIso_all_) {
        if (!b_selectedMuon_miniPFRelIso_all_) throw std::runtime_error("selectedMuon_miniPFRelIso_all branch doesn't exist");
        int bytes = b_selectedMuon_miniPFRelIso_all_->GetEntry(index);
        v_selectedMuon_miniPFRelIso_all_ = vector<float>(selectedMuon_miniPFRelIso_all_,selectedMuon_miniPFRelIso_all_+bytes/sizeof(selectedMuon_miniPFRelIso_all_[0]));
        loaded_selectedMuon_miniPFRelIso_all_ = true;
    }
    return v_selectedMuon_miniPFRelIso_all_;
}
const vector<float> &Nano::selectedMuon_miniPFRelIso_chg() {
    if (!loaded_selectedMuon_miniPFRelIso_chg_) {
        if (!b_selectedMuon_miniPFRelIso_chg_) throw std::runtime_error("selectedMuon_miniPFRelIso_chg branch doesn't exist");
        int bytes = b_selectedMuon_miniPFRelIso_chg_->GetEntry(index);
        v_selectedMuon_miniPFRelIso_chg_ = vector<float>(selectedMuon_miniPFRelIso_chg_,selectedMuon_miniPFRelIso_chg_+bytes/sizeof(selectedMuon_miniPFRelIso_chg_[0]));
        loaded_selectedMuon_miniPFRelIso_chg_ = true;
    }
    return v_selectedMuon_miniPFRelIso_chg_;
}
const vector<float> &Nano::selectedMuon_multiIsoId() {
    if (!loaded_selectedMuon_multiIsoId_) {
        if (!b_selectedMuon_multiIsoId_) throw std::runtime_error("selectedMuon_multiIsoId branch doesn't exist");
        int bytes = b_selectedMuon_multiIsoId_->GetEntry(index);
        v_selectedMuon_multiIsoId_ = vector<float>(selectedMuon_multiIsoId_,selectedMuon_multiIsoId_+bytes/sizeof(selectedMuon_multiIsoId_[0]));
        loaded_selectedMuon_multiIsoId_ = true;
    }
    return v_selectedMuon_multiIsoId_;
}
const vector<float> &Nano::selectedMuon_mvaId() {
    if (!loaded_selectedMuon_mvaId_) {
        if (!b_selectedMuon_mvaId_) throw std::runtime_error("selectedMuon_mvaId branch doesn't exist");
        int bytes = b_selectedMuon_mvaId_->GetEntry(index);
        v_selectedMuon_mvaId_ = vector<float>(selectedMuon_mvaId_,selectedMuon_mvaId_+bytes/sizeof(selectedMuon_mvaId_[0]));
        loaded_selectedMuon_mvaId_ = true;
    }
    return v_selectedMuon_mvaId_;
}
const vector<float> &Nano::selectedMuon_mvaLowPt() {
    if (!loaded_selectedMuon_mvaLowPt_) {
        if (!b_selectedMuon_mvaLowPt_) throw std::runtime_error("selectedMuon_mvaLowPt branch doesn't exist");
        int bytes = b_selectedMuon_mvaLowPt_->GetEntry(index);
        v_selectedMuon_mvaLowPt_ = vector<float>(selectedMuon_mvaLowPt_,selectedMuon_mvaLowPt_+bytes/sizeof(selectedMuon_mvaLowPt_[0]));
        loaded_selectedMuon_mvaLowPt_ = true;
    }
    return v_selectedMuon_mvaLowPt_;
}
const vector<float> &Nano::selectedMuon_mvaTTH() {
    if (!loaded_selectedMuon_mvaTTH_) {
        if (!b_selectedMuon_mvaTTH_) throw std::runtime_error("selectedMuon_mvaTTH branch doesn't exist");
        int bytes = b_selectedMuon_mvaTTH_->GetEntry(index);
        v_selectedMuon_mvaTTH_ = vector<float>(selectedMuon_mvaTTH_,selectedMuon_mvaTTH_+bytes/sizeof(selectedMuon_mvaTTH_[0]));
        loaded_selectedMuon_mvaTTH_ = true;
    }
    return v_selectedMuon_mvaTTH_;
}
const vector<float> &Nano::selectedMuon_nStations() {
    if (!loaded_selectedMuon_nStations_) {
        if (!b_selectedMuon_nStations_) throw std::runtime_error("selectedMuon_nStations branch doesn't exist");
        int bytes = b_selectedMuon_nStations_->GetEntry(index);
        v_selectedMuon_nStations_ = vector<float>(selectedMuon_nStations_,selectedMuon_nStations_+bytes/sizeof(selectedMuon_nStations_[0]));
        loaded_selectedMuon_nStations_ = true;
    }
    return v_selectedMuon_nStations_;
}
const vector<float> &Nano::selectedMuon_nTrackerLayers() {
    if (!loaded_selectedMuon_nTrackerLayers_) {
        if (!b_selectedMuon_nTrackerLayers_) throw std::runtime_error("selectedMuon_nTrackerLayers branch doesn't exist");
        int bytes = b_selectedMuon_nTrackerLayers_->GetEntry(index);
        v_selectedMuon_nTrackerLayers_ = vector<float>(selectedMuon_nTrackerLayers_,selectedMuon_nTrackerLayers_+bytes/sizeof(selectedMuon_nTrackerLayers_[0]));
        loaded_selectedMuon_nTrackerLayers_ = true;
    }
    return v_selectedMuon_nTrackerLayers_;
}
const vector<LorentzVector> &Nano::selectedMuon_p4() {
    if (!loaded_selectedMuon_p4_) {
        v_selectedMuon_p4_.clear();
        vector<float> pts = Nano::selectedMuon_pt();
        vector<float> etas = Nano::selectedMuon_eta();
        vector<float> phis = Nano::selectedMuon_phi();
        vector<float> masses = Nano::selectedMuon_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_selectedMuon_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_selectedMuon_p4_ = true;
    }
    return v_selectedMuon_p4_;
}
const vector<float> &Nano::selectedMuon_pdgId() {
    if (!loaded_selectedMuon_pdgId_) {
        if (!b_selectedMuon_pdgId_) throw std::runtime_error("selectedMuon_pdgId branch doesn't exist");
        int bytes = b_selectedMuon_pdgId_->GetEntry(index);
        v_selectedMuon_pdgId_ = vector<float>(selectedMuon_pdgId_,selectedMuon_pdgId_+bytes/sizeof(selectedMuon_pdgId_[0]));
        loaded_selectedMuon_pdgId_ = true;
    }
    return v_selectedMuon_pdgId_;
}
const vector<float> &Nano::selectedMuon_pfIsoId() {
    if (!loaded_selectedMuon_pfIsoId_) {
        if (!b_selectedMuon_pfIsoId_) throw std::runtime_error("selectedMuon_pfIsoId branch doesn't exist");
        int bytes = b_selectedMuon_pfIsoId_->GetEntry(index);
        v_selectedMuon_pfIsoId_ = vector<float>(selectedMuon_pfIsoId_,selectedMuon_pfIsoId_+bytes/sizeof(selectedMuon_pfIsoId_[0]));
        loaded_selectedMuon_pfIsoId_ = true;
    }
    return v_selectedMuon_pfIsoId_;
}
const vector<float> &Nano::selectedMuon_pfRelIso03_all() {
    if (!loaded_selectedMuon_pfRelIso03_all_) {
        if (!b_selectedMuon_pfRelIso03_all_) throw std::runtime_error("selectedMuon_pfRelIso03_all branch doesn't exist");
        int bytes = b_selectedMuon_pfRelIso03_all_->GetEntry(index);
        v_selectedMuon_pfRelIso03_all_ = vector<float>(selectedMuon_pfRelIso03_all_,selectedMuon_pfRelIso03_all_+bytes/sizeof(selectedMuon_pfRelIso03_all_[0]));
        loaded_selectedMuon_pfRelIso03_all_ = true;
    }
    return v_selectedMuon_pfRelIso03_all_;
}
const vector<float> &Nano::selectedMuon_pfRelIso03_chg() {
    if (!loaded_selectedMuon_pfRelIso03_chg_) {
        if (!b_selectedMuon_pfRelIso03_chg_) throw std::runtime_error("selectedMuon_pfRelIso03_chg branch doesn't exist");
        int bytes = b_selectedMuon_pfRelIso03_chg_->GetEntry(index);
        v_selectedMuon_pfRelIso03_chg_ = vector<float>(selectedMuon_pfRelIso03_chg_,selectedMuon_pfRelIso03_chg_+bytes/sizeof(selectedMuon_pfRelIso03_chg_[0]));
        loaded_selectedMuon_pfRelIso03_chg_ = true;
    }
    return v_selectedMuon_pfRelIso03_chg_;
}
const vector<float> &Nano::selectedMuon_pfRelIso04_all() {
    if (!loaded_selectedMuon_pfRelIso04_all_) {
        if (!b_selectedMuon_pfRelIso04_all_) throw std::runtime_error("selectedMuon_pfRelIso04_all branch doesn't exist");
        int bytes = b_selectedMuon_pfRelIso04_all_->GetEntry(index);
        v_selectedMuon_pfRelIso04_all_ = vector<float>(selectedMuon_pfRelIso04_all_,selectedMuon_pfRelIso04_all_+bytes/sizeof(selectedMuon_pfRelIso04_all_[0]));
        loaded_selectedMuon_pfRelIso04_all_ = true;
    }
    return v_selectedMuon_pfRelIso04_all_;
}
const vector<float> &Nano::selectedMuon_phi() {
    if (!loaded_selectedMuon_phi_) {
        if (!b_selectedMuon_phi_) throw std::runtime_error("selectedMuon_phi branch doesn't exist");
        int bytes = b_selectedMuon_phi_->GetEntry(index);
        v_selectedMuon_phi_ = vector<float>(selectedMuon_phi_,selectedMuon_phi_+bytes/sizeof(selectedMuon_phi_[0]));
        loaded_selectedMuon_phi_ = true;
    }
    return v_selectedMuon_phi_;
}
const vector<float> &Nano::selectedMuon_phiSVFit() {
    if (!loaded_selectedMuon_phiSVFit_) {
        if (!b_selectedMuon_phiSVFit_) throw std::runtime_error("selectedMuon_phiSVFit branch doesn't exist");
        int bytes = b_selectedMuon_phiSVFit_->GetEntry(index);
        v_selectedMuon_phiSVFit_ = vector<float>(selectedMuon_phiSVFit_,selectedMuon_phiSVFit_+bytes/sizeof(selectedMuon_phiSVFit_[0]));
        loaded_selectedMuon_phiSVFit_ = true;
    }
    return v_selectedMuon_phiSVFit_;
}
const vector<float> &Nano::selectedMuon_pt() {
    if (!loaded_selectedMuon_pt_) {
        if (!b_selectedMuon_pt_) throw std::runtime_error("selectedMuon_pt branch doesn't exist");
        int bytes = b_selectedMuon_pt_->GetEntry(index);
        v_selectedMuon_pt_ = vector<float>(selectedMuon_pt_,selectedMuon_pt_+bytes/sizeof(selectedMuon_pt_[0]));
        loaded_selectedMuon_pt_ = true;
    }
    return v_selectedMuon_pt_;
}
const vector<float> &Nano::selectedMuon_ptErr() {
    if (!loaded_selectedMuon_ptErr_) {
        if (!b_selectedMuon_ptErr_) throw std::runtime_error("selectedMuon_ptErr branch doesn't exist");
        int bytes = b_selectedMuon_ptErr_->GetEntry(index);
        v_selectedMuon_ptErr_ = vector<float>(selectedMuon_ptErr_,selectedMuon_ptErr_+bytes/sizeof(selectedMuon_ptErr_[0]));
        loaded_selectedMuon_ptErr_ = true;
    }
    return v_selectedMuon_ptErr_;
}
const vector<float> &Nano::selectedMuon_ptSVFit() {
    if (!loaded_selectedMuon_ptSVFit_) {
        if (!b_selectedMuon_ptSVFit_) throw std::runtime_error("selectedMuon_ptSVFit branch doesn't exist");
        int bytes = b_selectedMuon_ptSVFit_->GetEntry(index);
        v_selectedMuon_ptSVFit_ = vector<float>(selectedMuon_ptSVFit_,selectedMuon_ptSVFit_+bytes/sizeof(selectedMuon_ptSVFit_[0]));
        loaded_selectedMuon_ptSVFit_ = true;
    }
    return v_selectedMuon_ptSVFit_;
}
const vector<float> &Nano::selectedMuon_segmentComp() {
    if (!loaded_selectedMuon_segmentComp_) {
        if (!b_selectedMuon_segmentComp_) throw std::runtime_error("selectedMuon_segmentComp branch doesn't exist");
        int bytes = b_selectedMuon_segmentComp_->GetEntry(index);
        v_selectedMuon_segmentComp_ = vector<float>(selectedMuon_segmentComp_,selectedMuon_segmentComp_+bytes/sizeof(selectedMuon_segmentComp_[0]));
        loaded_selectedMuon_segmentComp_ = true;
    }
    return v_selectedMuon_segmentComp_;
}
const vector<float> &Nano::selectedMuon_sip3d() {
    if (!loaded_selectedMuon_sip3d_) {
        if (!b_selectedMuon_sip3d_) throw std::runtime_error("selectedMuon_sip3d branch doesn't exist");
        int bytes = b_selectedMuon_sip3d_->GetEntry(index);
        v_selectedMuon_sip3d_ = vector<float>(selectedMuon_sip3d_,selectedMuon_sip3d_+bytes/sizeof(selectedMuon_sip3d_[0]));
        loaded_selectedMuon_sip3d_ = true;
    }
    return v_selectedMuon_sip3d_;
}
const vector<float> &Nano::selectedMuon_softId() {
    if (!loaded_selectedMuon_softId_) {
        if (!b_selectedMuon_softId_) throw std::runtime_error("selectedMuon_softId branch doesn't exist");
        int bytes = b_selectedMuon_softId_->GetEntry(index);
        v_selectedMuon_softId_ = vector<float>(selectedMuon_softId_,selectedMuon_softId_+bytes/sizeof(selectedMuon_softId_[0]));
        loaded_selectedMuon_softId_ = true;
    }
    return v_selectedMuon_softId_;
}
const vector<float> &Nano::selectedMuon_softMva() {
    if (!loaded_selectedMuon_softMva_) {
        if (!b_selectedMuon_softMva_) throw std::runtime_error("selectedMuon_softMva branch doesn't exist");
        int bytes = b_selectedMuon_softMva_->GetEntry(index);
        v_selectedMuon_softMva_ = vector<float>(selectedMuon_softMva_,selectedMuon_softMva_+bytes/sizeof(selectedMuon_softMva_[0]));
        loaded_selectedMuon_softMva_ = true;
    }
    return v_selectedMuon_softMva_;
}
const vector<float> &Nano::selectedMuon_softMvaId() {
    if (!loaded_selectedMuon_softMvaId_) {
        if (!b_selectedMuon_softMvaId_) throw std::runtime_error("selectedMuon_softMvaId branch doesn't exist");
        int bytes = b_selectedMuon_softMvaId_->GetEntry(index);
        v_selectedMuon_softMvaId_ = vector<float>(selectedMuon_softMvaId_,selectedMuon_softMvaId_+bytes/sizeof(selectedMuon_softMvaId_[0]));
        loaded_selectedMuon_softMvaId_ = true;
    }
    return v_selectedMuon_softMvaId_;
}
const vector<float> &Nano::selectedMuon_tightCharge() {
    if (!loaded_selectedMuon_tightCharge_) {
        if (!b_selectedMuon_tightCharge_) throw std::runtime_error("selectedMuon_tightCharge branch doesn't exist");
        int bytes = b_selectedMuon_tightCharge_->GetEntry(index);
        v_selectedMuon_tightCharge_ = vector<float>(selectedMuon_tightCharge_,selectedMuon_tightCharge_+bytes/sizeof(selectedMuon_tightCharge_[0]));
        loaded_selectedMuon_tightCharge_ = true;
    }
    return v_selectedMuon_tightCharge_;
}
const vector<float> &Nano::selectedMuon_tightId() {
    if (!loaded_selectedMuon_tightId_) {
        if (!b_selectedMuon_tightId_) throw std::runtime_error("selectedMuon_tightId branch doesn't exist");
        int bytes = b_selectedMuon_tightId_->GetEntry(index);
        v_selectedMuon_tightId_ = vector<float>(selectedMuon_tightId_,selectedMuon_tightId_+bytes/sizeof(selectedMuon_tightId_[0]));
        loaded_selectedMuon_tightId_ = true;
    }
    return v_selectedMuon_tightId_;
}
const vector<float> &Nano::selectedMuon_tkIsoId() {
    if (!loaded_selectedMuon_tkIsoId_) {
        if (!b_selectedMuon_tkIsoId_) throw std::runtime_error("selectedMuon_tkIsoId branch doesn't exist");
        int bytes = b_selectedMuon_tkIsoId_->GetEntry(index);
        v_selectedMuon_tkIsoId_ = vector<float>(selectedMuon_tkIsoId_,selectedMuon_tkIsoId_+bytes/sizeof(selectedMuon_tkIsoId_[0]));
        loaded_selectedMuon_tkIsoId_ = true;
    }
    return v_selectedMuon_tkIsoId_;
}
const vector<float> &Nano::selectedMuon_tkRelIso() {
    if (!loaded_selectedMuon_tkRelIso_) {
        if (!b_selectedMuon_tkRelIso_) throw std::runtime_error("selectedMuon_tkRelIso branch doesn't exist");
        int bytes = b_selectedMuon_tkRelIso_->GetEntry(index);
        v_selectedMuon_tkRelIso_ = vector<float>(selectedMuon_tkRelIso_,selectedMuon_tkRelIso_+bytes/sizeof(selectedMuon_tkRelIso_[0]));
        loaded_selectedMuon_tkRelIso_ = true;
    }
    return v_selectedMuon_tkRelIso_;
}
const vector<float> &Nano::selectedMuon_triggerIdLoose() {
    if (!loaded_selectedMuon_triggerIdLoose_) {
        if (!b_selectedMuon_triggerIdLoose_) throw std::runtime_error("selectedMuon_triggerIdLoose branch doesn't exist");
        int bytes = b_selectedMuon_triggerIdLoose_->GetEntry(index);
        v_selectedMuon_triggerIdLoose_ = vector<float>(selectedMuon_triggerIdLoose_,selectedMuon_triggerIdLoose_+bytes/sizeof(selectedMuon_triggerIdLoose_[0]));
        loaded_selectedMuon_triggerIdLoose_ = true;
    }
    return v_selectedMuon_triggerIdLoose_;
}
const vector<float> &Nano::selectedMuon_tunepRelPt() {
    if (!loaded_selectedMuon_tunepRelPt_) {
        if (!b_selectedMuon_tunepRelPt_) throw std::runtime_error("selectedMuon_tunepRelPt branch doesn't exist");
        int bytes = b_selectedMuon_tunepRelPt_->GetEntry(index);
        v_selectedMuon_tunepRelPt_ = vector<float>(selectedMuon_tunepRelPt_,selectedMuon_tunepRelPt_+bytes/sizeof(selectedMuon_tunepRelPt_[0]));
        loaded_selectedMuon_tunepRelPt_ = true;
    }
    return v_selectedMuon_tunepRelPt_;
}
const vector<float> &Nano::selectedPhoton_charge() {
    if (!loaded_selectedPhoton_charge_) {
        if (!b_selectedPhoton_charge_) throw std::runtime_error("selectedPhoton_charge branch doesn't exist");
        int bytes = b_selectedPhoton_charge_->GetEntry(index);
        v_selectedPhoton_charge_ = vector<float>(selectedPhoton_charge_,selectedPhoton_charge_+bytes/sizeof(selectedPhoton_charge_[0]));
        loaded_selectedPhoton_charge_ = true;
    }
    return v_selectedPhoton_charge_;
}
const vector<float> &Nano::selectedPhoton_chargedHadronIso() {
    if (!loaded_selectedPhoton_chargedHadronIso_) {
        if (!b_selectedPhoton_chargedHadronIso_) throw std::runtime_error("selectedPhoton_chargedHadronIso branch doesn't exist");
        int bytes = b_selectedPhoton_chargedHadronIso_->GetEntry(index);
        v_selectedPhoton_chargedHadronIso_ = vector<float>(selectedPhoton_chargedHadronIso_,selectedPhoton_chargedHadronIso_+bytes/sizeof(selectedPhoton_chargedHadronIso_[0]));
        loaded_selectedPhoton_chargedHadronIso_ = true;
    }
    return v_selectedPhoton_chargedHadronIso_;
}
const vector<float> &Nano::selectedPhoton_cleanmask() {
    if (!loaded_selectedPhoton_cleanmask_) {
        if (!b_selectedPhoton_cleanmask_) throw std::runtime_error("selectedPhoton_cleanmask branch doesn't exist");
        int bytes = b_selectedPhoton_cleanmask_->GetEntry(index);
        v_selectedPhoton_cleanmask_ = vector<float>(selectedPhoton_cleanmask_,selectedPhoton_cleanmask_+bytes/sizeof(selectedPhoton_cleanmask_[0]));
        loaded_selectedPhoton_cleanmask_ = true;
    }
    return v_selectedPhoton_cleanmask_;
}
const vector<float> &Nano::selectedPhoton_cutBased() {
    if (!loaded_selectedPhoton_cutBased_) {
        if (!b_selectedPhoton_cutBased_) throw std::runtime_error("selectedPhoton_cutBased branch doesn't exist");
        int bytes = b_selectedPhoton_cutBased_->GetEntry(index);
        v_selectedPhoton_cutBased_ = vector<float>(selectedPhoton_cutBased_,selectedPhoton_cutBased_+bytes/sizeof(selectedPhoton_cutBased_[0]));
        loaded_selectedPhoton_cutBased_ = true;
    }
    return v_selectedPhoton_cutBased_;
}
const vector<float> &Nano::selectedPhoton_cutBased_Fall17V1Bitmap() {
    if (!loaded_selectedPhoton_cutBased_Fall17V1Bitmap_) {
        if (!b_selectedPhoton_cutBased_Fall17V1Bitmap_) throw std::runtime_error("selectedPhoton_cutBased_Fall17V1Bitmap branch doesn't exist");
        int bytes = b_selectedPhoton_cutBased_Fall17V1Bitmap_->GetEntry(index);
        v_selectedPhoton_cutBased_Fall17V1Bitmap_ = vector<float>(selectedPhoton_cutBased_Fall17V1Bitmap_,selectedPhoton_cutBased_Fall17V1Bitmap_+bytes/sizeof(selectedPhoton_cutBased_Fall17V1Bitmap_[0]));
        loaded_selectedPhoton_cutBased_Fall17V1Bitmap_ = true;
    }
    return v_selectedPhoton_cutBased_Fall17V1Bitmap_;
}
const vector<float> &Nano::selectedPhoton_cutBased_Spring16V2p2() {
    if (!loaded_selectedPhoton_cutBased_Spring16V2p2_) {
        if (!b_selectedPhoton_cutBased_Spring16V2p2_) throw std::runtime_error("selectedPhoton_cutBased_Spring16V2p2 branch doesn't exist");
        int bytes = b_selectedPhoton_cutBased_Spring16V2p2_->GetEntry(index);
        v_selectedPhoton_cutBased_Spring16V2p2_ = vector<float>(selectedPhoton_cutBased_Spring16V2p2_,selectedPhoton_cutBased_Spring16V2p2_+bytes/sizeof(selectedPhoton_cutBased_Spring16V2p2_[0]));
        loaded_selectedPhoton_cutBased_Spring16V2p2_ = true;
    }
    return v_selectedPhoton_cutBased_Spring16V2p2_;
}
const vector<float> &Nano::selectedPhoton_eCorr() {
    if (!loaded_selectedPhoton_eCorr_) {
        if (!b_selectedPhoton_eCorr_) throw std::runtime_error("selectedPhoton_eCorr branch doesn't exist");
        int bytes = b_selectedPhoton_eCorr_->GetEntry(index);
        v_selectedPhoton_eCorr_ = vector<float>(selectedPhoton_eCorr_,selectedPhoton_eCorr_+bytes/sizeof(selectedPhoton_eCorr_[0]));
        loaded_selectedPhoton_eCorr_ = true;
    }
    return v_selectedPhoton_eCorr_;
}
const vector<float> &Nano::selectedPhoton_electronIdx() {
    if (!loaded_selectedPhoton_electronIdx_) {
        if (!b_selectedPhoton_electronIdx_) throw std::runtime_error("selectedPhoton_electronIdx branch doesn't exist");
        int bytes = b_selectedPhoton_electronIdx_->GetEntry(index);
        v_selectedPhoton_electronIdx_ = vector<float>(selectedPhoton_electronIdx_,selectedPhoton_electronIdx_+bytes/sizeof(selectedPhoton_electronIdx_[0]));
        loaded_selectedPhoton_electronIdx_ = true;
    }
    return v_selectedPhoton_electronIdx_;
}
const vector<float> &Nano::selectedPhoton_electronVeto() {
    if (!loaded_selectedPhoton_electronVeto_) {
        if (!b_selectedPhoton_electronVeto_) throw std::runtime_error("selectedPhoton_electronVeto branch doesn't exist");
        int bytes = b_selectedPhoton_electronVeto_->GetEntry(index);
        v_selectedPhoton_electronVeto_ = vector<float>(selectedPhoton_electronVeto_,selectedPhoton_electronVeto_+bytes/sizeof(selectedPhoton_electronVeto_[0]));
        loaded_selectedPhoton_electronVeto_ = true;
    }
    return v_selectedPhoton_electronVeto_;
}
const vector<float> &Nano::selectedPhoton_energyErr() {
    if (!loaded_selectedPhoton_energyErr_) {
        if (!b_selectedPhoton_energyErr_) throw std::runtime_error("selectedPhoton_energyErr branch doesn't exist");
        int bytes = b_selectedPhoton_energyErr_->GetEntry(index);
        v_selectedPhoton_energyErr_ = vector<float>(selectedPhoton_energyErr_,selectedPhoton_energyErr_+bytes/sizeof(selectedPhoton_energyErr_[0]));
        loaded_selectedPhoton_energyErr_ = true;
    }
    return v_selectedPhoton_energyErr_;
}
const vector<float> &Nano::selectedPhoton_eta() {
    if (!loaded_selectedPhoton_eta_) {
        if (!b_selectedPhoton_eta_) throw std::runtime_error("selectedPhoton_eta branch doesn't exist");
        int bytes = b_selectedPhoton_eta_->GetEntry(index);
        v_selectedPhoton_eta_ = vector<float>(selectedPhoton_eta_,selectedPhoton_eta_+bytes/sizeof(selectedPhoton_eta_[0]));
        loaded_selectedPhoton_eta_ = true;
    }
    return v_selectedPhoton_eta_;
}
const vector<float> &Nano::selectedPhoton_genPartFlav() {
    if (!loaded_selectedPhoton_genPartFlav_) {
        if (!b_selectedPhoton_genPartFlav_) throw std::runtime_error("selectedPhoton_genPartFlav branch doesn't exist");
        int bytes = b_selectedPhoton_genPartFlav_->GetEntry(index);
        v_selectedPhoton_genPartFlav_ = vector<float>(selectedPhoton_genPartFlav_,selectedPhoton_genPartFlav_+bytes/sizeof(selectedPhoton_genPartFlav_[0]));
        loaded_selectedPhoton_genPartFlav_ = true;
    }
    return v_selectedPhoton_genPartFlav_;
}
const vector<float> &Nano::selectedPhoton_genPartIdx() {
    if (!loaded_selectedPhoton_genPartIdx_) {
        if (!b_selectedPhoton_genPartIdx_) throw std::runtime_error("selectedPhoton_genPartIdx branch doesn't exist");
        int bytes = b_selectedPhoton_genPartIdx_->GetEntry(index);
        v_selectedPhoton_genPartIdx_ = vector<float>(selectedPhoton_genPartIdx_,selectedPhoton_genPartIdx_+bytes/sizeof(selectedPhoton_genPartIdx_[0]));
        loaded_selectedPhoton_genPartIdx_ = true;
    }
    return v_selectedPhoton_genPartIdx_;
}
const vector<float> &Nano::selectedPhoton_hoe() {
    if (!loaded_selectedPhoton_hoe_) {
        if (!b_selectedPhoton_hoe_) throw std::runtime_error("selectedPhoton_hoe branch doesn't exist");
        int bytes = b_selectedPhoton_hoe_->GetEntry(index);
        v_selectedPhoton_hoe_ = vector<float>(selectedPhoton_hoe_,selectedPhoton_hoe_+bytes/sizeof(selectedPhoton_hoe_[0]));
        loaded_selectedPhoton_hoe_ = true;
    }
    return v_selectedPhoton_hoe_;
}
const vector<float> &Nano::selectedPhoton_isScEtaEB() {
    if (!loaded_selectedPhoton_isScEtaEB_) {
        if (!b_selectedPhoton_isScEtaEB_) throw std::runtime_error("selectedPhoton_isScEtaEB branch doesn't exist");
        int bytes = b_selectedPhoton_isScEtaEB_->GetEntry(index);
        v_selectedPhoton_isScEtaEB_ = vector<float>(selectedPhoton_isScEtaEB_,selectedPhoton_isScEtaEB_+bytes/sizeof(selectedPhoton_isScEtaEB_[0]));
        loaded_selectedPhoton_isScEtaEB_ = true;
    }
    return v_selectedPhoton_isScEtaEB_;
}
const vector<float> &Nano::selectedPhoton_isScEtaEE() {
    if (!loaded_selectedPhoton_isScEtaEE_) {
        if (!b_selectedPhoton_isScEtaEE_) throw std::runtime_error("selectedPhoton_isScEtaEE branch doesn't exist");
        int bytes = b_selectedPhoton_isScEtaEE_->GetEntry(index);
        v_selectedPhoton_isScEtaEE_ = vector<float>(selectedPhoton_isScEtaEE_,selectedPhoton_isScEtaEE_+bytes/sizeof(selectedPhoton_isScEtaEE_[0]));
        loaded_selectedPhoton_isScEtaEE_ = true;
    }
    return v_selectedPhoton_isScEtaEE_;
}
const vector<float> &Nano::selectedPhoton_jetIdx() {
    if (!loaded_selectedPhoton_jetIdx_) {
        if (!b_selectedPhoton_jetIdx_) throw std::runtime_error("selectedPhoton_jetIdx branch doesn't exist");
        int bytes = b_selectedPhoton_jetIdx_->GetEntry(index);
        v_selectedPhoton_jetIdx_ = vector<float>(selectedPhoton_jetIdx_,selectedPhoton_jetIdx_+bytes/sizeof(selectedPhoton_jetIdx_[0]));
        loaded_selectedPhoton_jetIdx_ = true;
    }
    return v_selectedPhoton_jetIdx_;
}
const vector<float> &Nano::selectedPhoton_mass() {
    if (!loaded_selectedPhoton_mass_) {
        if (!b_selectedPhoton_mass_) throw std::runtime_error("selectedPhoton_mass branch doesn't exist");
        int bytes = b_selectedPhoton_mass_->GetEntry(index);
        v_selectedPhoton_mass_ = vector<float>(selectedPhoton_mass_,selectedPhoton_mass_+bytes/sizeof(selectedPhoton_mass_[0]));
        loaded_selectedPhoton_mass_ = true;
    }
    return v_selectedPhoton_mass_;
}
const vector<float> &Nano::selectedPhoton_mvaID() {
    if (!loaded_selectedPhoton_mvaID_) {
        if (!b_selectedPhoton_mvaID_) throw std::runtime_error("selectedPhoton_mvaID branch doesn't exist");
        int bytes = b_selectedPhoton_mvaID_->GetEntry(index);
        v_selectedPhoton_mvaID_ = vector<float>(selectedPhoton_mvaID_,selectedPhoton_mvaID_+bytes/sizeof(selectedPhoton_mvaID_[0]));
        loaded_selectedPhoton_mvaID_ = true;
    }
    return v_selectedPhoton_mvaID_;
}
const vector<float> &Nano::selectedPhoton_mvaID_Fall17V1p1() {
    if (!loaded_selectedPhoton_mvaID_Fall17V1p1_) {
        if (!b_selectedPhoton_mvaID_Fall17V1p1_) throw std::runtime_error("selectedPhoton_mvaID_Fall17V1p1 branch doesn't exist");
        int bytes = b_selectedPhoton_mvaID_Fall17V1p1_->GetEntry(index);
        v_selectedPhoton_mvaID_Fall17V1p1_ = vector<float>(selectedPhoton_mvaID_Fall17V1p1_,selectedPhoton_mvaID_Fall17V1p1_+bytes/sizeof(selectedPhoton_mvaID_Fall17V1p1_[0]));
        loaded_selectedPhoton_mvaID_Fall17V1p1_ = true;
    }
    return v_selectedPhoton_mvaID_Fall17V1p1_;
}
const vector<float> &Nano::selectedPhoton_mvaID_Spring16nonTrigV1() {
    if (!loaded_selectedPhoton_mvaID_Spring16nonTrigV1_) {
        if (!b_selectedPhoton_mvaID_Spring16nonTrigV1_) throw std::runtime_error("selectedPhoton_mvaID_Spring16nonTrigV1 branch doesn't exist");
        int bytes = b_selectedPhoton_mvaID_Spring16nonTrigV1_->GetEntry(index);
        v_selectedPhoton_mvaID_Spring16nonTrigV1_ = vector<float>(selectedPhoton_mvaID_Spring16nonTrigV1_,selectedPhoton_mvaID_Spring16nonTrigV1_+bytes/sizeof(selectedPhoton_mvaID_Spring16nonTrigV1_[0]));
        loaded_selectedPhoton_mvaID_Spring16nonTrigV1_ = true;
    }
    return v_selectedPhoton_mvaID_Spring16nonTrigV1_;
}
const vector<float> &Nano::selectedPhoton_mvaID_WP80() {
    if (!loaded_selectedPhoton_mvaID_WP80_) {
        if (!b_selectedPhoton_mvaID_WP80_) throw std::runtime_error("selectedPhoton_mvaID_WP80 branch doesn't exist");
        int bytes = b_selectedPhoton_mvaID_WP80_->GetEntry(index);
        v_selectedPhoton_mvaID_WP80_ = vector<float>(selectedPhoton_mvaID_WP80_,selectedPhoton_mvaID_WP80_+bytes/sizeof(selectedPhoton_mvaID_WP80_[0]));
        loaded_selectedPhoton_mvaID_WP80_ = true;
    }
    return v_selectedPhoton_mvaID_WP80_;
}
const vector<float> &Nano::selectedPhoton_mvaID_WP90() {
    if (!loaded_selectedPhoton_mvaID_WP90_) {
        if (!b_selectedPhoton_mvaID_WP90_) throw std::runtime_error("selectedPhoton_mvaID_WP90 branch doesn't exist");
        int bytes = b_selectedPhoton_mvaID_WP90_->GetEntry(index);
        v_selectedPhoton_mvaID_WP90_ = vector<float>(selectedPhoton_mvaID_WP90_,selectedPhoton_mvaID_WP90_+bytes/sizeof(selectedPhoton_mvaID_WP90_[0]));
        loaded_selectedPhoton_mvaID_WP90_ = true;
    }
    return v_selectedPhoton_mvaID_WP90_;
}
const vector<LorentzVector> &Nano::selectedPhoton_p4() {
    if (!loaded_selectedPhoton_p4_) {
        v_selectedPhoton_p4_.clear();
        vector<float> pts = Nano::selectedPhoton_pt();
        vector<float> etas = Nano::selectedPhoton_eta();
        vector<float> phis = Nano::selectedPhoton_phi();
        vector<float> masses = Nano::selectedPhoton_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_selectedPhoton_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_selectedPhoton_p4_ = true;
    }
    return v_selectedPhoton_p4_;
}
const vector<float> &Nano::selectedPhoton_pdgId() {
    if (!loaded_selectedPhoton_pdgId_) {
        if (!b_selectedPhoton_pdgId_) throw std::runtime_error("selectedPhoton_pdgId branch doesn't exist");
        int bytes = b_selectedPhoton_pdgId_->GetEntry(index);
        v_selectedPhoton_pdgId_ = vector<float>(selectedPhoton_pdgId_,selectedPhoton_pdgId_+bytes/sizeof(selectedPhoton_pdgId_[0]));
        loaded_selectedPhoton_pdgId_ = true;
    }
    return v_selectedPhoton_pdgId_;
}
const vector<float> &Nano::selectedPhoton_pfRelIso03_all() {
    if (!loaded_selectedPhoton_pfRelIso03_all_) {
        if (!b_selectedPhoton_pfRelIso03_all_) throw std::runtime_error("selectedPhoton_pfRelIso03_all branch doesn't exist");
        int bytes = b_selectedPhoton_pfRelIso03_all_->GetEntry(index);
        v_selectedPhoton_pfRelIso03_all_ = vector<float>(selectedPhoton_pfRelIso03_all_,selectedPhoton_pfRelIso03_all_+bytes/sizeof(selectedPhoton_pfRelIso03_all_[0]));
        loaded_selectedPhoton_pfRelIso03_all_ = true;
    }
    return v_selectedPhoton_pfRelIso03_all_;
}
const vector<float> &Nano::selectedPhoton_pfRelIso03_chg() {
    if (!loaded_selectedPhoton_pfRelIso03_chg_) {
        if (!b_selectedPhoton_pfRelIso03_chg_) throw std::runtime_error("selectedPhoton_pfRelIso03_chg branch doesn't exist");
        int bytes = b_selectedPhoton_pfRelIso03_chg_->GetEntry(index);
        v_selectedPhoton_pfRelIso03_chg_ = vector<float>(selectedPhoton_pfRelIso03_chg_,selectedPhoton_pfRelIso03_chg_+bytes/sizeof(selectedPhoton_pfRelIso03_chg_[0]));
        loaded_selectedPhoton_pfRelIso03_chg_ = true;
    }
    return v_selectedPhoton_pfRelIso03_chg_;
}
const vector<float> &Nano::selectedPhoton_phi() {
    if (!loaded_selectedPhoton_phi_) {
        if (!b_selectedPhoton_phi_) throw std::runtime_error("selectedPhoton_phi branch doesn't exist");
        int bytes = b_selectedPhoton_phi_->GetEntry(index);
        v_selectedPhoton_phi_ = vector<float>(selectedPhoton_phi_,selectedPhoton_phi_+bytes/sizeof(selectedPhoton_phi_[0]));
        loaded_selectedPhoton_phi_ = true;
    }
    return v_selectedPhoton_phi_;
}
const vector<float> &Nano::selectedPhoton_photonIso() {
    if (!loaded_selectedPhoton_photonIso_) {
        if (!b_selectedPhoton_photonIso_) throw std::runtime_error("selectedPhoton_photonIso branch doesn't exist");
        int bytes = b_selectedPhoton_photonIso_->GetEntry(index);
        v_selectedPhoton_photonIso_ = vector<float>(selectedPhoton_photonIso_,selectedPhoton_photonIso_+bytes/sizeof(selectedPhoton_photonIso_[0]));
        loaded_selectedPhoton_photonIso_ = true;
    }
    return v_selectedPhoton_photonIso_;
}
const vector<float> &Nano::selectedPhoton_pixelSeed() {
    if (!loaded_selectedPhoton_pixelSeed_) {
        if (!b_selectedPhoton_pixelSeed_) throw std::runtime_error("selectedPhoton_pixelSeed branch doesn't exist");
        int bytes = b_selectedPhoton_pixelSeed_->GetEntry(index);
        v_selectedPhoton_pixelSeed_ = vector<float>(selectedPhoton_pixelSeed_,selectedPhoton_pixelSeed_+bytes/sizeof(selectedPhoton_pixelSeed_[0]));
        loaded_selectedPhoton_pixelSeed_ = true;
    }
    return v_selectedPhoton_pixelSeed_;
}
const vector<float> &Nano::selectedPhoton_pt() {
    if (!loaded_selectedPhoton_pt_) {
        if (!b_selectedPhoton_pt_) throw std::runtime_error("selectedPhoton_pt branch doesn't exist");
        int bytes = b_selectedPhoton_pt_->GetEntry(index);
        v_selectedPhoton_pt_ = vector<float>(selectedPhoton_pt_,selectedPhoton_pt_+bytes/sizeof(selectedPhoton_pt_[0]));
        loaded_selectedPhoton_pt_ = true;
    }
    return v_selectedPhoton_pt_;
}
const vector<float> &Nano::selectedPhoton_r9() {
    if (!loaded_selectedPhoton_r9_) {
        if (!b_selectedPhoton_r9_) throw std::runtime_error("selectedPhoton_r9 branch doesn't exist");
        int bytes = b_selectedPhoton_r9_->GetEntry(index);
        v_selectedPhoton_r9_ = vector<float>(selectedPhoton_r9_,selectedPhoton_r9_+bytes/sizeof(selectedPhoton_r9_[0]));
        loaded_selectedPhoton_r9_ = true;
    }
    return v_selectedPhoton_r9_;
}
const vector<float> &Nano::selectedPhoton_seedGain() {
    if (!loaded_selectedPhoton_seedGain_) {
        if (!b_selectedPhoton_seedGain_) throw std::runtime_error("selectedPhoton_seedGain branch doesn't exist");
        int bytes = b_selectedPhoton_seedGain_->GetEntry(index);
        v_selectedPhoton_seedGain_ = vector<float>(selectedPhoton_seedGain_,selectedPhoton_seedGain_+bytes/sizeof(selectedPhoton_seedGain_[0]));
        loaded_selectedPhoton_seedGain_ = true;
    }
    return v_selectedPhoton_seedGain_;
}
const vector<float> &Nano::selectedPhoton_sieie() {
    if (!loaded_selectedPhoton_sieie_) {
        if (!b_selectedPhoton_sieie_) throw std::runtime_error("selectedPhoton_sieie branch doesn't exist");
        int bytes = b_selectedPhoton_sieie_->GetEntry(index);
        v_selectedPhoton_sieie_ = vector<float>(selectedPhoton_sieie_,selectedPhoton_sieie_+bytes/sizeof(selectedPhoton_sieie_[0]));
        loaded_selectedPhoton_sieie_ = true;
    }
    return v_selectedPhoton_sieie_;
}
const vector<float> &Nano::selectedPhoton_trkSumPtHollowConeDR03() {
    if (!loaded_selectedPhoton_trkSumPtHollowConeDR03_) {
        if (!b_selectedPhoton_trkSumPtHollowConeDR03_) throw std::runtime_error("selectedPhoton_trkSumPtHollowConeDR03 branch doesn't exist");
        int bytes = b_selectedPhoton_trkSumPtHollowConeDR03_->GetEntry(index);
        v_selectedPhoton_trkSumPtHollowConeDR03_ = vector<float>(selectedPhoton_trkSumPtHollowConeDR03_,selectedPhoton_trkSumPtHollowConeDR03_+bytes/sizeof(selectedPhoton_trkSumPtHollowConeDR03_[0]));
        loaded_selectedPhoton_trkSumPtHollowConeDR03_ = true;
    }
    return v_selectedPhoton_trkSumPtHollowConeDR03_;
}
const vector<float> &Nano::selectedPhoton_vidNestedWPBitmap() {
    if (!loaded_selectedPhoton_vidNestedWPBitmap_) {
        if (!b_selectedPhoton_vidNestedWPBitmap_) throw std::runtime_error("selectedPhoton_vidNestedWPBitmap branch doesn't exist");
        int bytes = b_selectedPhoton_vidNestedWPBitmap_->GetEntry(index);
        v_selectedPhoton_vidNestedWPBitmap_ = vector<float>(selectedPhoton_vidNestedWPBitmap_,selectedPhoton_vidNestedWPBitmap_+bytes/sizeof(selectedPhoton_vidNestedWPBitmap_[0]));
        loaded_selectedPhoton_vidNestedWPBitmap_ = true;
    }
    return v_selectedPhoton_vidNestedWPBitmap_;
}
const vector<float> &Nano::selectedPhoton_vidNestedWPBitmap_Spring16V2p2() {
    if (!loaded_selectedPhoton_vidNestedWPBitmap_Spring16V2p2_) {
        if (!b_selectedPhoton_vidNestedWPBitmap_Spring16V2p2_) throw std::runtime_error("selectedPhoton_vidNestedWPBitmap_Spring16V2p2 branch doesn't exist");
        int bytes = b_selectedPhoton_vidNestedWPBitmap_Spring16V2p2_->GetEntry(index);
        v_selectedPhoton_vidNestedWPBitmap_Spring16V2p2_ = vector<float>(selectedPhoton_vidNestedWPBitmap_Spring16V2p2_,selectedPhoton_vidNestedWPBitmap_Spring16V2p2_+bytes/sizeof(selectedPhoton_vidNestedWPBitmap_Spring16V2p2_[0]));
        loaded_selectedPhoton_vidNestedWPBitmap_Spring16V2p2_ = true;
    }
    return v_selectedPhoton_vidNestedWPBitmap_Spring16V2p2_;
}
const vector<float> &Nano::selectedTauLoose_charge() {
    if (!loaded_selectedTauLoose_charge_) {
        if (!b_selectedTauLoose_charge_) throw std::runtime_error("selectedTauLoose_charge branch doesn't exist");
        int bytes = b_selectedTauLoose_charge_->GetEntry(index);
        v_selectedTauLoose_charge_ = vector<float>(selectedTauLoose_charge_,selectedTauLoose_charge_+bytes/sizeof(selectedTauLoose_charge_[0]));
        loaded_selectedTauLoose_charge_ = true;
    }
    return v_selectedTauLoose_charge_;
}
const vector<float> &Nano::selectedTauLoose_chargedIso() {
    if (!loaded_selectedTauLoose_chargedIso_) {
        if (!b_selectedTauLoose_chargedIso_) throw std::runtime_error("selectedTauLoose_chargedIso branch doesn't exist");
        int bytes = b_selectedTauLoose_chargedIso_->GetEntry(index);
        v_selectedTauLoose_chargedIso_ = vector<float>(selectedTauLoose_chargedIso_,selectedTauLoose_chargedIso_+bytes/sizeof(selectedTauLoose_chargedIso_[0]));
        loaded_selectedTauLoose_chargedIso_ = true;
    }
    return v_selectedTauLoose_chargedIso_;
}
const vector<float> &Nano::selectedTauLoose_cleanmask() {
    if (!loaded_selectedTauLoose_cleanmask_) {
        if (!b_selectedTauLoose_cleanmask_) throw std::runtime_error("selectedTauLoose_cleanmask branch doesn't exist");
        int bytes = b_selectedTauLoose_cleanmask_->GetEntry(index);
        v_selectedTauLoose_cleanmask_ = vector<float>(selectedTauLoose_cleanmask_,selectedTauLoose_cleanmask_+bytes/sizeof(selectedTauLoose_cleanmask_[0]));
        loaded_selectedTauLoose_cleanmask_ = true;
    }
    return v_selectedTauLoose_cleanmask_;
}
const vector<float> &Nano::selectedTauLoose_decayMode() {
    if (!loaded_selectedTauLoose_decayMode_) {
        if (!b_selectedTauLoose_decayMode_) throw std::runtime_error("selectedTauLoose_decayMode branch doesn't exist");
        int bytes = b_selectedTauLoose_decayMode_->GetEntry(index);
        v_selectedTauLoose_decayMode_ = vector<float>(selectedTauLoose_decayMode_,selectedTauLoose_decayMode_+bytes/sizeof(selectedTauLoose_decayMode_[0]));
        loaded_selectedTauLoose_decayMode_ = true;
    }
    return v_selectedTauLoose_decayMode_;
}
const vector<float> &Nano::selectedTauLoose_dxy() {
    if (!loaded_selectedTauLoose_dxy_) {
        if (!b_selectedTauLoose_dxy_) throw std::runtime_error("selectedTauLoose_dxy branch doesn't exist");
        int bytes = b_selectedTauLoose_dxy_->GetEntry(index);
        v_selectedTauLoose_dxy_ = vector<float>(selectedTauLoose_dxy_,selectedTauLoose_dxy_+bytes/sizeof(selectedTauLoose_dxy_[0]));
        loaded_selectedTauLoose_dxy_ = true;
    }
    return v_selectedTauLoose_dxy_;
}
const vector<float> &Nano::selectedTauLoose_dz() {
    if (!loaded_selectedTauLoose_dz_) {
        if (!b_selectedTauLoose_dz_) throw std::runtime_error("selectedTauLoose_dz branch doesn't exist");
        int bytes = b_selectedTauLoose_dz_->GetEntry(index);
        v_selectedTauLoose_dz_ = vector<float>(selectedTauLoose_dz_,selectedTauLoose_dz_+bytes/sizeof(selectedTauLoose_dz_[0]));
        loaded_selectedTauLoose_dz_ = true;
    }
    return v_selectedTauLoose_dz_;
}
const vector<float> &Nano::selectedTauLoose_eta() {
    if (!loaded_selectedTauLoose_eta_) {
        if (!b_selectedTauLoose_eta_) throw std::runtime_error("selectedTauLoose_eta branch doesn't exist");
        int bytes = b_selectedTauLoose_eta_->GetEntry(index);
        v_selectedTauLoose_eta_ = vector<float>(selectedTauLoose_eta_,selectedTauLoose_eta_+bytes/sizeof(selectedTauLoose_eta_[0]));
        loaded_selectedTauLoose_eta_ = true;
    }
    return v_selectedTauLoose_eta_;
}
const vector<float> &Nano::selectedTauLoose_etaSVFit() {
    if (!loaded_selectedTauLoose_etaSVFit_) {
        if (!b_selectedTauLoose_etaSVFit_) throw std::runtime_error("selectedTauLoose_etaSVFit branch doesn't exist");
        int bytes = b_selectedTauLoose_etaSVFit_->GetEntry(index);
        v_selectedTauLoose_etaSVFit_ = vector<float>(selectedTauLoose_etaSVFit_,selectedTauLoose_etaSVFit_+bytes/sizeof(selectedTauLoose_etaSVFit_[0]));
        loaded_selectedTauLoose_etaSVFit_ = true;
    }
    return v_selectedTauLoose_etaSVFit_;
}
const vector<float> &Nano::selectedTauLoose_genPartFlav() {
    if (!loaded_selectedTauLoose_genPartFlav_) {
        if (!b_selectedTauLoose_genPartFlav_) throw std::runtime_error("selectedTauLoose_genPartFlav branch doesn't exist");
        int bytes = b_selectedTauLoose_genPartFlav_->GetEntry(index);
        v_selectedTauLoose_genPartFlav_ = vector<float>(selectedTauLoose_genPartFlav_,selectedTauLoose_genPartFlav_+bytes/sizeof(selectedTauLoose_genPartFlav_[0]));
        loaded_selectedTauLoose_genPartFlav_ = true;
    }
    return v_selectedTauLoose_genPartFlav_;
}
const vector<float> &Nano::selectedTauLoose_genPartIdx() {
    if (!loaded_selectedTauLoose_genPartIdx_) {
        if (!b_selectedTauLoose_genPartIdx_) throw std::runtime_error("selectedTauLoose_genPartIdx branch doesn't exist");
        int bytes = b_selectedTauLoose_genPartIdx_->GetEntry(index);
        v_selectedTauLoose_genPartIdx_ = vector<float>(selectedTauLoose_genPartIdx_,selectedTauLoose_genPartIdx_+bytes/sizeof(selectedTauLoose_genPartIdx_[0]));
        loaded_selectedTauLoose_genPartIdx_ = true;
    }
    return v_selectedTauLoose_genPartIdx_;
}
const vector<float> &Nano::selectedTauLoose_idAntiEle() {
    if (!loaded_selectedTauLoose_idAntiEle_) {
        if (!b_selectedTauLoose_idAntiEle_) throw std::runtime_error("selectedTauLoose_idAntiEle branch doesn't exist");
        int bytes = b_selectedTauLoose_idAntiEle_->GetEntry(index);
        v_selectedTauLoose_idAntiEle_ = vector<float>(selectedTauLoose_idAntiEle_,selectedTauLoose_idAntiEle_+bytes/sizeof(selectedTauLoose_idAntiEle_[0]));
        loaded_selectedTauLoose_idAntiEle_ = true;
    }
    return v_selectedTauLoose_idAntiEle_;
}
const vector<float> &Nano::selectedTauLoose_idAntiEle2018() {
    if (!loaded_selectedTauLoose_idAntiEle2018_) {
        if (!b_selectedTauLoose_idAntiEle2018_) throw std::runtime_error("selectedTauLoose_idAntiEle2018 branch doesn't exist");
        int bytes = b_selectedTauLoose_idAntiEle2018_->GetEntry(index);
        v_selectedTauLoose_idAntiEle2018_ = vector<float>(selectedTauLoose_idAntiEle2018_,selectedTauLoose_idAntiEle2018_+bytes/sizeof(selectedTauLoose_idAntiEle2018_[0]));
        loaded_selectedTauLoose_idAntiEle2018_ = true;
    }
    return v_selectedTauLoose_idAntiEle2018_;
}
const vector<float> &Nano::selectedTauLoose_idAntiMu() {
    if (!loaded_selectedTauLoose_idAntiMu_) {
        if (!b_selectedTauLoose_idAntiMu_) throw std::runtime_error("selectedTauLoose_idAntiMu branch doesn't exist");
        int bytes = b_selectedTauLoose_idAntiMu_->GetEntry(index);
        v_selectedTauLoose_idAntiMu_ = vector<float>(selectedTauLoose_idAntiMu_,selectedTauLoose_idAntiMu_+bytes/sizeof(selectedTauLoose_idAntiMu_[0]));
        loaded_selectedTauLoose_idAntiMu_ = true;
    }
    return v_selectedTauLoose_idAntiMu_;
}
const vector<float> &Nano::selectedTauLoose_idDecayMode() {
    if (!loaded_selectedTauLoose_idDecayMode_) {
        if (!b_selectedTauLoose_idDecayMode_) throw std::runtime_error("selectedTauLoose_idDecayMode branch doesn't exist");
        int bytes = b_selectedTauLoose_idDecayMode_->GetEntry(index);
        v_selectedTauLoose_idDecayMode_ = vector<float>(selectedTauLoose_idDecayMode_,selectedTauLoose_idDecayMode_+bytes/sizeof(selectedTauLoose_idDecayMode_[0]));
        loaded_selectedTauLoose_idDecayMode_ = true;
    }
    return v_selectedTauLoose_idDecayMode_;
}
const vector<float> &Nano::selectedTauLoose_idDecayModeNewDMs() {
    if (!loaded_selectedTauLoose_idDecayModeNewDMs_) {
        if (!b_selectedTauLoose_idDecayModeNewDMs_) throw std::runtime_error("selectedTauLoose_idDecayModeNewDMs branch doesn't exist");
        int bytes = b_selectedTauLoose_idDecayModeNewDMs_->GetEntry(index);
        v_selectedTauLoose_idDecayModeNewDMs_ = vector<float>(selectedTauLoose_idDecayModeNewDMs_,selectedTauLoose_idDecayModeNewDMs_+bytes/sizeof(selectedTauLoose_idDecayModeNewDMs_[0]));
        loaded_selectedTauLoose_idDecayModeNewDMs_ = true;
    }
    return v_selectedTauLoose_idDecayModeNewDMs_;
}
const vector<float> &Nano::selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe() {
    if (!loaded_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe_) {
        if (!b_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe_) throw std::runtime_error("selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe branch doesn't exist");
        int bytes = b_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe_->GetEntry(index);
        v_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe_ = vector<float>(selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe_,selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe_+bytes/sizeof(selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe_[0]));
        loaded_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe_ = true;
    }
    return v_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe_;
}
const vector<float> &Nano::selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet() {
    if (!loaded_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet_) {
        if (!b_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet_) throw std::runtime_error("selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet branch doesn't exist");
        int bytes = b_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet_->GetEntry(index);
        v_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet_ = vector<float>(selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet_,selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet_+bytes/sizeof(selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet_[0]));
        loaded_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet_ = true;
    }
    return v_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet_;
}
const vector<float> &Nano::selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu() {
    if (!loaded_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu_) {
        if (!b_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu_) throw std::runtime_error("selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu branch doesn't exist");
        int bytes = b_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu_->GetEntry(index);
        v_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu_ = vector<float>(selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu_,selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu_+bytes/sizeof(selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu_[0]));
        loaded_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu_ = true;
    }
    return v_selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu_;
}
const vector<float> &Nano::selectedTauLoose_idMVAnewDM2017v2() {
    if (!loaded_selectedTauLoose_idMVAnewDM2017v2_) {
        if (!b_selectedTauLoose_idMVAnewDM2017v2_) throw std::runtime_error("selectedTauLoose_idMVAnewDM2017v2 branch doesn't exist");
        int bytes = b_selectedTauLoose_idMVAnewDM2017v2_->GetEntry(index);
        v_selectedTauLoose_idMVAnewDM2017v2_ = vector<float>(selectedTauLoose_idMVAnewDM2017v2_,selectedTauLoose_idMVAnewDM2017v2_+bytes/sizeof(selectedTauLoose_idMVAnewDM2017v2_[0]));
        loaded_selectedTauLoose_idMVAnewDM2017v2_ = true;
    }
    return v_selectedTauLoose_idMVAnewDM2017v2_;
}
const vector<float> &Nano::selectedTauLoose_idMVAoldDM() {
    if (!loaded_selectedTauLoose_idMVAoldDM_) {
        if (!b_selectedTauLoose_idMVAoldDM_) throw std::runtime_error("selectedTauLoose_idMVAoldDM branch doesn't exist");
        int bytes = b_selectedTauLoose_idMVAoldDM_->GetEntry(index);
        v_selectedTauLoose_idMVAoldDM_ = vector<float>(selectedTauLoose_idMVAoldDM_,selectedTauLoose_idMVAoldDM_+bytes/sizeof(selectedTauLoose_idMVAoldDM_[0]));
        loaded_selectedTauLoose_idMVAoldDM_ = true;
    }
    return v_selectedTauLoose_idMVAoldDM_;
}
const vector<float> &Nano::selectedTauLoose_idMVAoldDM2017v1() {
    if (!loaded_selectedTauLoose_idMVAoldDM2017v1_) {
        if (!b_selectedTauLoose_idMVAoldDM2017v1_) throw std::runtime_error("selectedTauLoose_idMVAoldDM2017v1 branch doesn't exist");
        int bytes = b_selectedTauLoose_idMVAoldDM2017v1_->GetEntry(index);
        v_selectedTauLoose_idMVAoldDM2017v1_ = vector<float>(selectedTauLoose_idMVAoldDM2017v1_,selectedTauLoose_idMVAoldDM2017v1_+bytes/sizeof(selectedTauLoose_idMVAoldDM2017v1_[0]));
        loaded_selectedTauLoose_idMVAoldDM2017v1_ = true;
    }
    return v_selectedTauLoose_idMVAoldDM2017v1_;
}
const vector<float> &Nano::selectedTauLoose_idMVAoldDM2017v2() {
    if (!loaded_selectedTauLoose_idMVAoldDM2017v2_) {
        if (!b_selectedTauLoose_idMVAoldDM2017v2_) throw std::runtime_error("selectedTauLoose_idMVAoldDM2017v2 branch doesn't exist");
        int bytes = b_selectedTauLoose_idMVAoldDM2017v2_->GetEntry(index);
        v_selectedTauLoose_idMVAoldDM2017v2_ = vector<float>(selectedTauLoose_idMVAoldDM2017v2_,selectedTauLoose_idMVAoldDM2017v2_+bytes/sizeof(selectedTauLoose_idMVAoldDM2017v2_[0]));
        loaded_selectedTauLoose_idMVAoldDM2017v2_ = true;
    }
    return v_selectedTauLoose_idMVAoldDM2017v2_;
}
const vector<float> &Nano::selectedTauLoose_idMVAoldDMdR032017v2() {
    if (!loaded_selectedTauLoose_idMVAoldDMdR032017v2_) {
        if (!b_selectedTauLoose_idMVAoldDMdR032017v2_) throw std::runtime_error("selectedTauLoose_idMVAoldDMdR032017v2 branch doesn't exist");
        int bytes = b_selectedTauLoose_idMVAoldDMdR032017v2_->GetEntry(index);
        v_selectedTauLoose_idMVAoldDMdR032017v2_ = vector<float>(selectedTauLoose_idMVAoldDMdR032017v2_,selectedTauLoose_idMVAoldDMdR032017v2_+bytes/sizeof(selectedTauLoose_idMVAoldDMdR032017v2_[0]));
        loaded_selectedTauLoose_idMVAoldDMdR032017v2_ = true;
    }
    return v_selectedTauLoose_idMVAoldDMdR032017v2_;
}
const vector<float> &Nano::selectedTauLoose_jetIdx() {
    if (!loaded_selectedTauLoose_jetIdx_) {
        if (!b_selectedTauLoose_jetIdx_) throw std::runtime_error("selectedTauLoose_jetIdx branch doesn't exist");
        int bytes = b_selectedTauLoose_jetIdx_->GetEntry(index);
        v_selectedTauLoose_jetIdx_ = vector<float>(selectedTauLoose_jetIdx_,selectedTauLoose_jetIdx_+bytes/sizeof(selectedTauLoose_jetIdx_[0]));
        loaded_selectedTauLoose_jetIdx_ = true;
    }
    return v_selectedTauLoose_jetIdx_;
}
const vector<float> &Nano::selectedTauLoose_leadTkDeltaEta() {
    if (!loaded_selectedTauLoose_leadTkDeltaEta_) {
        if (!b_selectedTauLoose_leadTkDeltaEta_) throw std::runtime_error("selectedTauLoose_leadTkDeltaEta branch doesn't exist");
        int bytes = b_selectedTauLoose_leadTkDeltaEta_->GetEntry(index);
        v_selectedTauLoose_leadTkDeltaEta_ = vector<float>(selectedTauLoose_leadTkDeltaEta_,selectedTauLoose_leadTkDeltaEta_+bytes/sizeof(selectedTauLoose_leadTkDeltaEta_[0]));
        loaded_selectedTauLoose_leadTkDeltaEta_ = true;
    }
    return v_selectedTauLoose_leadTkDeltaEta_;
}
const vector<float> &Nano::selectedTauLoose_leadTkDeltaPhi() {
    if (!loaded_selectedTauLoose_leadTkDeltaPhi_) {
        if (!b_selectedTauLoose_leadTkDeltaPhi_) throw std::runtime_error("selectedTauLoose_leadTkDeltaPhi branch doesn't exist");
        int bytes = b_selectedTauLoose_leadTkDeltaPhi_->GetEntry(index);
        v_selectedTauLoose_leadTkDeltaPhi_ = vector<float>(selectedTauLoose_leadTkDeltaPhi_,selectedTauLoose_leadTkDeltaPhi_+bytes/sizeof(selectedTauLoose_leadTkDeltaPhi_[0]));
        loaded_selectedTauLoose_leadTkDeltaPhi_ = true;
    }
    return v_selectedTauLoose_leadTkDeltaPhi_;
}
const vector<float> &Nano::selectedTauLoose_leadTkPtOverselectedTauLoosePt() {
    if (!loaded_selectedTauLoose_leadTkPtOverselectedTauLoosePt_) {
        if (!b_selectedTauLoose_leadTkPtOverselectedTauLoosePt_) throw std::runtime_error("selectedTauLoose_leadTkPtOverselectedTauLoosePt branch doesn't exist");
        int bytes = b_selectedTauLoose_leadTkPtOverselectedTauLoosePt_->GetEntry(index);
        v_selectedTauLoose_leadTkPtOverselectedTauLoosePt_ = vector<float>(selectedTauLoose_leadTkPtOverselectedTauLoosePt_,selectedTauLoose_leadTkPtOverselectedTauLoosePt_+bytes/sizeof(selectedTauLoose_leadTkPtOverselectedTauLoosePt_[0]));
        loaded_selectedTauLoose_leadTkPtOverselectedTauLoosePt_ = true;
    }
    return v_selectedTauLoose_leadTkPtOverselectedTauLoosePt_;
}
const vector<float> &Nano::selectedTauLoose_mSVFit() {
    if (!loaded_selectedTauLoose_mSVFit_) {
        if (!b_selectedTauLoose_mSVFit_) throw std::runtime_error("selectedTauLoose_mSVFit branch doesn't exist");
        int bytes = b_selectedTauLoose_mSVFit_->GetEntry(index);
        v_selectedTauLoose_mSVFit_ = vector<float>(selectedTauLoose_mSVFit_,selectedTauLoose_mSVFit_+bytes/sizeof(selectedTauLoose_mSVFit_[0]));
        loaded_selectedTauLoose_mSVFit_ = true;
    }
    return v_selectedTauLoose_mSVFit_;
}
const vector<float> &Nano::selectedTauLoose_mass() {
    if (!loaded_selectedTauLoose_mass_) {
        if (!b_selectedTauLoose_mass_) throw std::runtime_error("selectedTauLoose_mass branch doesn't exist");
        int bytes = b_selectedTauLoose_mass_->GetEntry(index);
        v_selectedTauLoose_mass_ = vector<float>(selectedTauLoose_mass_,selectedTauLoose_mass_+bytes/sizeof(selectedTauLoose_mass_[0]));
        loaded_selectedTauLoose_mass_ = true;
    }
    return v_selectedTauLoose_mass_;
}
const vector<float> &Nano::selectedTauLoose_neutralIso() {
    if (!loaded_selectedTauLoose_neutralIso_) {
        if (!b_selectedTauLoose_neutralIso_) throw std::runtime_error("selectedTauLoose_neutralIso branch doesn't exist");
        int bytes = b_selectedTauLoose_neutralIso_->GetEntry(index);
        v_selectedTauLoose_neutralIso_ = vector<float>(selectedTauLoose_neutralIso_,selectedTauLoose_neutralIso_+bytes/sizeof(selectedTauLoose_neutralIso_[0]));
        loaded_selectedTauLoose_neutralIso_ = true;
    }
    return v_selectedTauLoose_neutralIso_;
}
const vector<LorentzVector> &Nano::selectedTauLoose_p4() {
    if (!loaded_selectedTauLoose_p4_) {
        v_selectedTauLoose_p4_.clear();
        vector<float> pts = Nano::selectedTauLoose_pt();
        vector<float> etas = Nano::selectedTauLoose_eta();
        vector<float> phis = Nano::selectedTauLoose_phi();
        vector<float> masses = Nano::selectedTauLoose_mass();
        for (unsigned int i=0; i < pts.size(); i++) {
            v_selectedTauLoose_p4_.push_back(LorentzVector(pts[i],etas[i],phis[i],masses[i]));
        }
        loaded_selectedTauLoose_p4_ = true;
    }
    return v_selectedTauLoose_p4_;
}
const vector<float> &Nano::selectedTauLoose_phi() {
    if (!loaded_selectedTauLoose_phi_) {
        if (!b_selectedTauLoose_phi_) throw std::runtime_error("selectedTauLoose_phi branch doesn't exist");
        int bytes = b_selectedTauLoose_phi_->GetEntry(index);
        v_selectedTauLoose_phi_ = vector<float>(selectedTauLoose_phi_,selectedTauLoose_phi_+bytes/sizeof(selectedTauLoose_phi_[0]));
        loaded_selectedTauLoose_phi_ = true;
    }
    return v_selectedTauLoose_phi_;
}
const vector<float> &Nano::selectedTauLoose_phiSVFit() {
    if (!loaded_selectedTauLoose_phiSVFit_) {
        if (!b_selectedTauLoose_phiSVFit_) throw std::runtime_error("selectedTauLoose_phiSVFit branch doesn't exist");
        int bytes = b_selectedTauLoose_phiSVFit_->GetEntry(index);
        v_selectedTauLoose_phiSVFit_ = vector<float>(selectedTauLoose_phiSVFit_,selectedTauLoose_phiSVFit_+bytes/sizeof(selectedTauLoose_phiSVFit_[0]));
        loaded_selectedTauLoose_phiSVFit_ = true;
    }
    return v_selectedTauLoose_phiSVFit_;
}
const vector<float> &Nano::selectedTauLoose_photonsOutsideSignalCone() {
    if (!loaded_selectedTauLoose_photonsOutsideSignalCone_) {
        if (!b_selectedTauLoose_photonsOutsideSignalCone_) throw std::runtime_error("selectedTauLoose_photonsOutsideSignalCone branch doesn't exist");
        int bytes = b_selectedTauLoose_photonsOutsideSignalCone_->GetEntry(index);
        v_selectedTauLoose_photonsOutsideSignalCone_ = vector<float>(selectedTauLoose_photonsOutsideSignalCone_,selectedTauLoose_photonsOutsideSignalCone_+bytes/sizeof(selectedTauLoose_photonsOutsideSignalCone_[0]));
        loaded_selectedTauLoose_photonsOutsideSignalCone_ = true;
    }
    return v_selectedTauLoose_photonsOutsideSignalCone_;
}
const vector<float> &Nano::selectedTauLoose_pt() {
    if (!loaded_selectedTauLoose_pt_) {
        if (!b_selectedTauLoose_pt_) throw std::runtime_error("selectedTauLoose_pt branch doesn't exist");
        int bytes = b_selectedTauLoose_pt_->GetEntry(index);
        v_selectedTauLoose_pt_ = vector<float>(selectedTauLoose_pt_,selectedTauLoose_pt_+bytes/sizeof(selectedTauLoose_pt_[0]));
        loaded_selectedTauLoose_pt_ = true;
    }
    return v_selectedTauLoose_pt_;
}
const vector<float> &Nano::selectedTauLoose_ptSVFit() {
    if (!loaded_selectedTauLoose_ptSVFit_) {
        if (!b_selectedTauLoose_ptSVFit_) throw std::runtime_error("selectedTauLoose_ptSVFit branch doesn't exist");
        int bytes = b_selectedTauLoose_ptSVFit_->GetEntry(index);
        v_selectedTauLoose_ptSVFit_ = vector<float>(selectedTauLoose_ptSVFit_,selectedTauLoose_ptSVFit_+bytes/sizeof(selectedTauLoose_ptSVFit_[0]));
        loaded_selectedTauLoose_ptSVFit_ = true;
    }
    return v_selectedTauLoose_ptSVFit_;
}
const vector<float> &Nano::selectedTauLoose_puCorr() {
    if (!loaded_selectedTauLoose_puCorr_) {
        if (!b_selectedTauLoose_puCorr_) throw std::runtime_error("selectedTauLoose_puCorr branch doesn't exist");
        int bytes = b_selectedTauLoose_puCorr_->GetEntry(index);
        v_selectedTauLoose_puCorr_ = vector<float>(selectedTauLoose_puCorr_,selectedTauLoose_puCorr_+bytes/sizeof(selectedTauLoose_puCorr_[0]));
        loaded_selectedTauLoose_puCorr_ = true;
    }
    return v_selectedTauLoose_puCorr_;
}
const vector<float> &Nano::selectedTauLoose_rawAntiEle() {
    if (!loaded_selectedTauLoose_rawAntiEle_) {
        if (!b_selectedTauLoose_rawAntiEle_) throw std::runtime_error("selectedTauLoose_rawAntiEle branch doesn't exist");
        int bytes = b_selectedTauLoose_rawAntiEle_->GetEntry(index);
        v_selectedTauLoose_rawAntiEle_ = vector<float>(selectedTauLoose_rawAntiEle_,selectedTauLoose_rawAntiEle_+bytes/sizeof(selectedTauLoose_rawAntiEle_[0]));
        loaded_selectedTauLoose_rawAntiEle_ = true;
    }
    return v_selectedTauLoose_rawAntiEle_;
}
const vector<float> &Nano::selectedTauLoose_rawAntiEle2018() {
    if (!loaded_selectedTauLoose_rawAntiEle2018_) {
        if (!b_selectedTauLoose_rawAntiEle2018_) throw std::runtime_error("selectedTauLoose_rawAntiEle2018 branch doesn't exist");
        int bytes = b_selectedTauLoose_rawAntiEle2018_->GetEntry(index);
        v_selectedTauLoose_rawAntiEle2018_ = vector<float>(selectedTauLoose_rawAntiEle2018_,selectedTauLoose_rawAntiEle2018_+bytes/sizeof(selectedTauLoose_rawAntiEle2018_[0]));
        loaded_selectedTauLoose_rawAntiEle2018_ = true;
    }
    return v_selectedTauLoose_rawAntiEle2018_;
}
const vector<float> &Nano::selectedTauLoose_rawAntiEleCat() {
    if (!loaded_selectedTauLoose_rawAntiEleCat_) {
        if (!b_selectedTauLoose_rawAntiEleCat_) throw std::runtime_error("selectedTauLoose_rawAntiEleCat branch doesn't exist");
        int bytes = b_selectedTauLoose_rawAntiEleCat_->GetEntry(index);
        v_selectedTauLoose_rawAntiEleCat_ = vector<float>(selectedTauLoose_rawAntiEleCat_,selectedTauLoose_rawAntiEleCat_+bytes/sizeof(selectedTauLoose_rawAntiEleCat_[0]));
        loaded_selectedTauLoose_rawAntiEleCat_ = true;
    }
    return v_selectedTauLoose_rawAntiEleCat_;
}
const vector<float> &Nano::selectedTauLoose_rawAntiEleCat2018() {
    if (!loaded_selectedTauLoose_rawAntiEleCat2018_) {
        if (!b_selectedTauLoose_rawAntiEleCat2018_) throw std::runtime_error("selectedTauLoose_rawAntiEleCat2018 branch doesn't exist");
        int bytes = b_selectedTauLoose_rawAntiEleCat2018_->GetEntry(index);
        v_selectedTauLoose_rawAntiEleCat2018_ = vector<float>(selectedTauLoose_rawAntiEleCat2018_,selectedTauLoose_rawAntiEleCat2018_+bytes/sizeof(selectedTauLoose_rawAntiEleCat2018_[0]));
        loaded_selectedTauLoose_rawAntiEleCat2018_ = true;
    }
    return v_selectedTauLoose_rawAntiEleCat2018_;
}
const vector<float> &Nano::selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe() {
    if (!loaded_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe_) {
        if (!b_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe_) throw std::runtime_error("selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe branch doesn't exist");
        int bytes = b_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe_->GetEntry(index);
        v_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe_ = vector<float>(selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe_,selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe_+bytes/sizeof(selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe_[0]));
        loaded_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe_ = true;
    }
    return v_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe_;
}
const vector<float> &Nano::selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet() {
    if (!loaded_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet_) {
        if (!b_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet_) throw std::runtime_error("selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet branch doesn't exist");
        int bytes = b_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet_->GetEntry(index);
        v_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet_ = vector<float>(selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet_,selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet_+bytes/sizeof(selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet_[0]));
        loaded_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet_ = true;
    }
    return v_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet_;
}
const vector<float> &Nano::selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu() {
    if (!loaded_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu_) {
        if (!b_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu_) throw std::runtime_error("selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu branch doesn't exist");
        int bytes = b_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu_->GetEntry(index);
        v_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu_ = vector<float>(selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu_,selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu_+bytes/sizeof(selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu_[0]));
        loaded_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu_ = true;
    }
    return v_selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu_;
}
const vector<float> &Nano::selectedTauLoose_rawIso() {
    if (!loaded_selectedTauLoose_rawIso_) {
        if (!b_selectedTauLoose_rawIso_) throw std::runtime_error("selectedTauLoose_rawIso branch doesn't exist");
        int bytes = b_selectedTauLoose_rawIso_->GetEntry(index);
        v_selectedTauLoose_rawIso_ = vector<float>(selectedTauLoose_rawIso_,selectedTauLoose_rawIso_+bytes/sizeof(selectedTauLoose_rawIso_[0]));
        loaded_selectedTauLoose_rawIso_ = true;
    }
    return v_selectedTauLoose_rawIso_;
}
const vector<float> &Nano::selectedTauLoose_rawIsodR03() {
    if (!loaded_selectedTauLoose_rawIsodR03_) {
        if (!b_selectedTauLoose_rawIsodR03_) throw std::runtime_error("selectedTauLoose_rawIsodR03 branch doesn't exist");
        int bytes = b_selectedTauLoose_rawIsodR03_->GetEntry(index);
        v_selectedTauLoose_rawIsodR03_ = vector<float>(selectedTauLoose_rawIsodR03_,selectedTauLoose_rawIsodR03_+bytes/sizeof(selectedTauLoose_rawIsodR03_[0]));
        loaded_selectedTauLoose_rawIsodR03_ = true;
    }
    return v_selectedTauLoose_rawIsodR03_;
}
const vector<float> &Nano::selectedTauLoose_rawMVAnewDM2017v2() {
    if (!loaded_selectedTauLoose_rawMVAnewDM2017v2_) {
        if (!b_selectedTauLoose_rawMVAnewDM2017v2_) throw std::runtime_error("selectedTauLoose_rawMVAnewDM2017v2 branch doesn't exist");
        int bytes = b_selectedTauLoose_rawMVAnewDM2017v2_->GetEntry(index);
        v_selectedTauLoose_rawMVAnewDM2017v2_ = vector<float>(selectedTauLoose_rawMVAnewDM2017v2_,selectedTauLoose_rawMVAnewDM2017v2_+bytes/sizeof(selectedTauLoose_rawMVAnewDM2017v2_[0]));
        loaded_selectedTauLoose_rawMVAnewDM2017v2_ = true;
    }
    return v_selectedTauLoose_rawMVAnewDM2017v2_;
}
const vector<float> &Nano::selectedTauLoose_rawMVAoldDM() {
    if (!loaded_selectedTauLoose_rawMVAoldDM_) {
        if (!b_selectedTauLoose_rawMVAoldDM_) throw std::runtime_error("selectedTauLoose_rawMVAoldDM branch doesn't exist");
        int bytes = b_selectedTauLoose_rawMVAoldDM_->GetEntry(index);
        v_selectedTauLoose_rawMVAoldDM_ = vector<float>(selectedTauLoose_rawMVAoldDM_,selectedTauLoose_rawMVAoldDM_+bytes/sizeof(selectedTauLoose_rawMVAoldDM_[0]));
        loaded_selectedTauLoose_rawMVAoldDM_ = true;
    }
    return v_selectedTauLoose_rawMVAoldDM_;
}
const vector<float> &Nano::selectedTauLoose_rawMVAoldDM2017v1() {
    if (!loaded_selectedTauLoose_rawMVAoldDM2017v1_) {
        if (!b_selectedTauLoose_rawMVAoldDM2017v1_) throw std::runtime_error("selectedTauLoose_rawMVAoldDM2017v1 branch doesn't exist");
        int bytes = b_selectedTauLoose_rawMVAoldDM2017v1_->GetEntry(index);
        v_selectedTauLoose_rawMVAoldDM2017v1_ = vector<float>(selectedTauLoose_rawMVAoldDM2017v1_,selectedTauLoose_rawMVAoldDM2017v1_+bytes/sizeof(selectedTauLoose_rawMVAoldDM2017v1_[0]));
        loaded_selectedTauLoose_rawMVAoldDM2017v1_ = true;
    }
    return v_selectedTauLoose_rawMVAoldDM2017v1_;
}
const vector<float> &Nano::selectedTauLoose_rawMVAoldDM2017v2() {
    if (!loaded_selectedTauLoose_rawMVAoldDM2017v2_) {
        if (!b_selectedTauLoose_rawMVAoldDM2017v2_) throw std::runtime_error("selectedTauLoose_rawMVAoldDM2017v2 branch doesn't exist");
        int bytes = b_selectedTauLoose_rawMVAoldDM2017v2_->GetEntry(index);
        v_selectedTauLoose_rawMVAoldDM2017v2_ = vector<float>(selectedTauLoose_rawMVAoldDM2017v2_,selectedTauLoose_rawMVAoldDM2017v2_+bytes/sizeof(selectedTauLoose_rawMVAoldDM2017v2_[0]));
        loaded_selectedTauLoose_rawMVAoldDM2017v2_ = true;
    }
    return v_selectedTauLoose_rawMVAoldDM2017v2_;
}
const vector<float> &Nano::selectedTauLoose_rawMVAoldDMdR032017v2() {
    if (!loaded_selectedTauLoose_rawMVAoldDMdR032017v2_) {
        if (!b_selectedTauLoose_rawMVAoldDMdR032017v2_) throw std::runtime_error("selectedTauLoose_rawMVAoldDMdR032017v2 branch doesn't exist");
        int bytes = b_selectedTauLoose_rawMVAoldDMdR032017v2_->GetEntry(index);
        v_selectedTauLoose_rawMVAoldDMdR032017v2_ = vector<float>(selectedTauLoose_rawMVAoldDMdR032017v2_,selectedTauLoose_rawMVAoldDMdR032017v2_+bytes/sizeof(selectedTauLoose_rawMVAoldDMdR032017v2_[0]));
        loaded_selectedTauLoose_rawMVAoldDMdR032017v2_ = true;
    }
    return v_selectedTauLoose_rawMVAoldDMdR032017v2_;
}
const vector<int> &Nano::tauHidxLoose() {
    if (!loaded_tauHidxLoose_) {
        if (!b_tauHidxLoose_) throw std::runtime_error("tauHidxLoose branch doesn't exist");
        int bytes = b_tauHidxLoose_->GetEntry(index);
        v_tauHidxLoose_ = vector<int>(tauHidxLoose_,tauHidxLoose_+bytes/sizeof(tauHidxLoose_[0]));
        loaded_tauHidxLoose_ = true;
    }
    return v_tauHidxLoose_;
}

namespace tas {
    const float &CaloMET_phi() { return nt.CaloMET_phi(); }
    const float &CaloMET_pt() { return nt.CaloMET_pt(); }
    const float &CaloMET_sumEt() { return nt.CaloMET_sumEt(); }
    const int &Category() { return nt.Category(); }
    const int &Category_lveto() { return nt.Category_lveto(); }
    const int &Category_pairsLoose() { return nt.Category_pairsLoose(); }
    const int &Category_tauselLoose() { return nt.Category_tauselLoose(); }
    const float &ChsMET_phi() { return nt.ChsMET_phi(); }
    const float &ChsMET_pt() { return nt.ChsMET_pt(); }
    const float &ChsMET_sumEt() { return nt.ChsMET_sumEt(); }
    const vector<float> &CorrT1METJet_area() { return nt.CorrT1METJet_area(); }
    const vector<float> &CorrT1METJet_eta() { return nt.CorrT1METJet_eta(); }
    const vector<float> &CorrT1METJet_muonSubtrFactor() { return nt.CorrT1METJet_muonSubtrFactor(); }
    const vector<float> &CorrT1METJet_phi() { return nt.CorrT1METJet_phi(); }
    const vector<float> &CorrT1METJet_rawPt() { return nt.CorrT1METJet_rawPt(); }
    const vector<int> &Electron_charge() { return nt.Electron_charge(); }
    const vector<UChar_t> &Electron_cleanmask() { return nt.Electron_cleanmask(); }
    const vector<bool> &Electron_convVeto() { return nt.Electron_convVeto(); }
    const vector<int> &Electron_cutBased() { return nt.Electron_cutBased(); }
    const vector<int> &Electron_cutBased_Fall17_V1() { return nt.Electron_cutBased_Fall17_V1(); }
    const vector<bool> &Electron_cutBased_HEEP() { return nt.Electron_cutBased_HEEP(); }
    const vector<int> &Electron_cutBased_HLTPreSel() { return nt.Electron_cutBased_HLTPreSel(); }
    const vector<int> &Electron_cutBased_Spring15() { return nt.Electron_cutBased_Spring15(); }
    const vector<int> &Electron_cutBased_Sum16() { return nt.Electron_cutBased_Sum16(); }
    const vector<float> &Electron_deltaEtaSC() { return nt.Electron_deltaEtaSC(); }
    const vector<float> &Electron_dr03EcalRecHitSumEt() { return nt.Electron_dr03EcalRecHitSumEt(); }
    const vector<float> &Electron_dr03HcalDepth1TowerSumEt() { return nt.Electron_dr03HcalDepth1TowerSumEt(); }
    const vector<float> &Electron_dr03TkSumPt() { return nt.Electron_dr03TkSumPt(); }
    const vector<float> &Electron_dr03TkSumPtHEEP() { return nt.Electron_dr03TkSumPtHEEP(); }
    const vector<float> &Electron_dxy() { return nt.Electron_dxy(); }
    const vector<float> &Electron_dxyErr() { return nt.Electron_dxyErr(); }
    const vector<float> &Electron_dz() { return nt.Electron_dz(); }
    const vector<float> &Electron_dzErr() { return nt.Electron_dzErr(); }
    const vector<float> &Electron_eCorr() { return nt.Electron_eCorr(); }
    const vector<float> &Electron_eInvMinusPInv() { return nt.Electron_eInvMinusPInv(); }
    const vector<float> &Electron_energyErr() { return nt.Electron_energyErr(); }
    const vector<float> &Electron_eta() { return nt.Electron_eta(); }
    const vector<UChar_t> &Electron_genPartFlav() { return nt.Electron_genPartFlav(); }
    const vector<int> &Electron_genPartIdx() { return nt.Electron_genPartIdx(); }
    const vector<float> &Electron_hoe() { return nt.Electron_hoe(); }
    const vector<float> &Electron_ip3d() { return nt.Electron_ip3d(); }
    const vector<bool> &Electron_isPFcand() { return nt.Electron_isPFcand(); }
    const vector<int> &Electron_jetIdx() { return nt.Electron_jetIdx(); }
    const vector<float> &Electron_jetPtRelv2() { return nt.Electron_jetPtRelv2(); }
    const vector<float> &Electron_jetRelIso() { return nt.Electron_jetRelIso(); }
    const vector<UChar_t> &Electron_lostHits() { return nt.Electron_lostHits(); }
    const vector<float> &Electron_mass() { return nt.Electron_mass(); }
    const vector<float> &Electron_miniPFRelIso_all() { return nt.Electron_miniPFRelIso_all(); }
    const vector<float> &Electron_miniPFRelIso_chg() { return nt.Electron_miniPFRelIso_chg(); }
    const vector<float> &Electron_mvaFall17V1Iso() { return nt.Electron_mvaFall17V1Iso(); }
    const vector<bool> &Electron_mvaFall17V1Iso_WP80() { return nt.Electron_mvaFall17V1Iso_WP80(); }
    const vector<bool> &Electron_mvaFall17V1Iso_WP90() { return nt.Electron_mvaFall17V1Iso_WP90(); }
    const vector<bool> &Electron_mvaFall17V1Iso_WPL() { return nt.Electron_mvaFall17V1Iso_WPL(); }
    const vector<float> &Electron_mvaFall17V1noIso() { return nt.Electron_mvaFall17V1noIso(); }
    const vector<bool> &Electron_mvaFall17V1noIso_WP80() { return nt.Electron_mvaFall17V1noIso_WP80(); }
    const vector<bool> &Electron_mvaFall17V1noIso_WP90() { return nt.Electron_mvaFall17V1noIso_WP90(); }
    const vector<bool> &Electron_mvaFall17V1noIso_WPL() { return nt.Electron_mvaFall17V1noIso_WPL(); }
    const vector<float> &Electron_mvaFall17V2Iso() { return nt.Electron_mvaFall17V2Iso(); }
    const vector<bool> &Electron_mvaFall17V2Iso_WP80() { return nt.Electron_mvaFall17V2Iso_WP80(); }
    const vector<bool> &Electron_mvaFall17V2Iso_WP90() { return nt.Electron_mvaFall17V2Iso_WP90(); }
    const vector<bool> &Electron_mvaFall17V2Iso_WPL() { return nt.Electron_mvaFall17V2Iso_WPL(); }
    const vector<float> &Electron_mvaFall17V2noIso() { return nt.Electron_mvaFall17V2noIso(); }
    const vector<bool> &Electron_mvaFall17V2noIso_WP80() { return nt.Electron_mvaFall17V2noIso_WP80(); }
    const vector<bool> &Electron_mvaFall17V2noIso_WP90() { return nt.Electron_mvaFall17V2noIso_WP90(); }
    const vector<bool> &Electron_mvaFall17V2noIso_WPL() { return nt.Electron_mvaFall17V2noIso_WPL(); }
    const vector<float> &Electron_mvaSpring16GP() { return nt.Electron_mvaSpring16GP(); }
    const vector<bool> &Electron_mvaSpring16GP_WP80() { return nt.Electron_mvaSpring16GP_WP80(); }
    const vector<bool> &Electron_mvaSpring16GP_WP90() { return nt.Electron_mvaSpring16GP_WP90(); }
    const vector<float> &Electron_mvaSpring16HZZ() { return nt.Electron_mvaSpring16HZZ(); }
    const vector<bool> &Electron_mvaSpring16HZZ_WPL() { return nt.Electron_mvaSpring16HZZ_WPL(); }
    const vector<float> &Electron_mvaTTH() { return nt.Electron_mvaTTH(); }
    const vector<LorentzVector> &Electron_p4() { return nt.Electron_p4(); }
    const vector<int> &Electron_pdgId() { return nt.Electron_pdgId(); }
    const vector<float> &Electron_pfRelIso03_all() { return nt.Electron_pfRelIso03_all(); }
    const vector<float> &Electron_pfRelIso03_chg() { return nt.Electron_pfRelIso03_chg(); }
    const vector<float> &Electron_phi() { return nt.Electron_phi(); }
    const vector<int> &Electron_photonIdx() { return nt.Electron_photonIdx(); }
    const vector<float> &Electron_pt() { return nt.Electron_pt(); }
    const vector<float> &Electron_r9() { return nt.Electron_r9(); }
    const vector<float> &Electron_scEtOverPt() { return nt.Electron_scEtOverPt(); }
    const vector<UChar_t> &Electron_seedGain() { return nt.Electron_seedGain(); }
    const vector<float> &Electron_sieie() { return nt.Electron_sieie(); }
    const vector<float> &Electron_sip3d() { return nt.Electron_sip3d(); }
    const vector<int> &Electron_tightCharge() { return nt.Electron_tightCharge(); }
    const vector<int> &Electron_vidNestedWPBitmap() { return nt.Electron_vidNestedWPBitmap(); }
    const vector<int> &Electron_vidNestedWPBitmapHEEP() { return nt.Electron_vidNestedWPBitmapHEEP(); }
    const vector<int> &Electron_vidNestedWPBitmapSpring15() { return nt.Electron_vidNestedWPBitmapSpring15(); }
    const vector<int> &Electron_vidNestedWPBitmapSum16() { return nt.Electron_vidNestedWPBitmapSum16(); }
    const bool &Flag_BadChargedCandidateFilter() { return nt.Flag_BadChargedCandidateFilter(); }
    const bool &Flag_BadChargedCandidateSummer16Filter() { return nt.Flag_BadChargedCandidateSummer16Filter(); }
    const bool &Flag_BadPFMuonFilter() { return nt.Flag_BadPFMuonFilter(); }
    const bool &Flag_BadPFMuonSummer16Filter() { return nt.Flag_BadPFMuonSummer16Filter(); }
    const bool &Flag_CSCTightHalo2015Filter() { return nt.Flag_CSCTightHalo2015Filter(); }
    const bool &Flag_CSCTightHaloFilter() { return nt.Flag_CSCTightHaloFilter(); }
    const bool &Flag_CSCTightHaloTrkMuUnvetoFilter() { return nt.Flag_CSCTightHaloTrkMuUnvetoFilter(); }
    const bool &Flag_EcalDeadCellBoundaryEnergyFilter() { return nt.Flag_EcalDeadCellBoundaryEnergyFilter(); }
    const bool &Flag_EcalDeadCellTriggerPrimitiveFilter() { return nt.Flag_EcalDeadCellTriggerPrimitiveFilter(); }
    const bool &Flag_HBHENoiseFilter() { return nt.Flag_HBHENoiseFilter(); }
    const bool &Flag_HBHENoiseIsoFilter() { return nt.Flag_HBHENoiseIsoFilter(); }
    const bool &Flag_HcalStripHaloFilter() { return nt.Flag_HcalStripHaloFilter(); }
    const bool &Flag_METFilters() { return nt.Flag_METFilters(); }
    const bool &Flag_chargedHadronTrackResolutionFilter() { return nt.Flag_chargedHadronTrackResolutionFilter(); }
    const bool &Flag_ecalBadCalibFilter() { return nt.Flag_ecalBadCalibFilter(); }
    const bool &Flag_ecalBadCalibFilterV2() { return nt.Flag_ecalBadCalibFilterV2(); }
    const bool &Flag_ecalLaserCorrFilter() { return nt.Flag_ecalLaserCorrFilter(); }
    const bool &Flag_eeBadScFilter() { return nt.Flag_eeBadScFilter(); }
    const bool &Flag_globalSuperTightHalo2016Filter() { return nt.Flag_globalSuperTightHalo2016Filter(); }
    const bool &Flag_globalTightHalo2016Filter() { return nt.Flag_globalTightHalo2016Filter(); }
    const bool &Flag_goodVertices() { return nt.Flag_goodVertices(); }
    const bool &Flag_hcalLaserEventFilter() { return nt.Flag_hcalLaserEventFilter(); }
    const bool &Flag_muonBadTrackFilter() { return nt.Flag_muonBadTrackFilter(); }
    const bool &Flag_trkPOGFilters() { return nt.Flag_trkPOGFilters(); }
    const bool &Flag_trkPOG_logErrorTooManyClusters() { return nt.Flag_trkPOG_logErrorTooManyClusters(); }
    const bool &Flag_trkPOG_manystripclus53X() { return nt.Flag_trkPOG_manystripclus53X(); }
    const bool &Flag_trkPOG_toomanystripclus53X() { return nt.Flag_trkPOG_toomanystripclus53X(); }
    const vector<float> &FsrPhoton_dROverEt2() { return nt.FsrPhoton_dROverEt2(); }
    const vector<float> &FsrPhoton_eta() { return nt.FsrPhoton_eta(); }
    const vector<int> &FsrPhoton_muonIdx() { return nt.FsrPhoton_muonIdx(); }
    const vector<float> &FsrPhoton_phi() { return nt.FsrPhoton_phi(); }
    const vector<float> &FsrPhoton_pt() { return nt.FsrPhoton_pt(); }
    const vector<float> &FsrPhoton_relIso03() { return nt.FsrPhoton_relIso03(); }
    const vector<float> &GenDressedLepton_eta() { return nt.GenDressedLepton_eta(); }
    const vector<bool> &GenDressedLepton_hasTauAnc() { return nt.GenDressedLepton_hasTauAnc(); }
    const vector<float> &GenDressedLepton_mass() { return nt.GenDressedLepton_mass(); }
    const vector<LorentzVector> &GenDressedLepton_p4() { return nt.GenDressedLepton_p4(); }
    const vector<int> &GenDressedLepton_pdgId() { return nt.GenDressedLepton_pdgId(); }
    const vector<float> &GenDressedLepton_phi() { return nt.GenDressedLepton_phi(); }
    const vector<float> &GenDressedLepton_pt() { return nt.GenDressedLepton_pt(); }
    const vector<float> &GenIsolatedPhoton_eta() { return nt.GenIsolatedPhoton_eta(); }
    const vector<float> &GenIsolatedPhoton_mass() { return nt.GenIsolatedPhoton_mass(); }
    const vector<LorentzVector> &GenIsolatedPhoton_p4() { return nt.GenIsolatedPhoton_p4(); }
    const vector<float> &GenIsolatedPhoton_phi() { return nt.GenIsolatedPhoton_phi(); }
    const vector<float> &GenIsolatedPhoton_pt() { return nt.GenIsolatedPhoton_pt(); }
    const vector<float> &GenJetAK8_eta() { return nt.GenJetAK8_eta(); }
    const vector<UChar_t> &GenJetAK8_hadronFlavour() { return nt.GenJetAK8_hadronFlavour(); }
    const vector<float> &GenJetAK8_mass() { return nt.GenJetAK8_mass(); }
    const vector<LorentzVector> &GenJetAK8_p4() { return nt.GenJetAK8_p4(); }
    const vector<int> &GenJetAK8_partonFlavour() { return nt.GenJetAK8_partonFlavour(); }
    const vector<float> &GenJetAK8_phi() { return nt.GenJetAK8_phi(); }
    const vector<float> &GenJetAK8_pt() { return nt.GenJetAK8_pt(); }
    const vector<float> &GenJet_eta() { return nt.GenJet_eta(); }
    const vector<UChar_t> &GenJet_hadronFlavour() { return nt.GenJet_hadronFlavour(); }
    const vector<float> &GenJet_mass() { return nt.GenJet_mass(); }
    const vector<LorentzVector> &GenJet_p4() { return nt.GenJet_p4(); }
    const vector<int> &GenJet_partonFlavour() { return nt.GenJet_partonFlavour(); }
    const vector<float> &GenJet_phi() { return nt.GenJet_phi(); }
    const vector<float> &GenJet_pt() { return nt.GenJet_pt(); }
    const float &GenMET_phi() { return nt.GenMET_phi(); }
    const float &GenMET_pt() { return nt.GenMET_pt(); }
    const vector<float> &GenPart_eta() { return nt.GenPart_eta(); }
    const vector<int> &GenPart_genPartIdxMother() { return nt.GenPart_genPartIdxMother(); }
    const vector<float> &GenPart_mass() { return nt.GenPart_mass(); }
    const vector<LorentzVector> &GenPart_p4() { return nt.GenPart_p4(); }
    const vector<int> &GenPart_pdgId() { return nt.GenPart_pdgId(); }
    const vector<float> &GenPart_phi() { return nt.GenPart_phi(); }
    const vector<float> &GenPart_pt() { return nt.GenPart_pt(); }
    const vector<int> &GenPart_status() { return nt.GenPart_status(); }
    const vector<int> &GenPart_statusFlags() { return nt.GenPart_statusFlags(); }
    const vector<int> &GenVisTau_charge() { return nt.GenVisTau_charge(); }
    const vector<float> &GenVisTau_eta() { return nt.GenVisTau_eta(); }
    const vector<int> &GenVisTau_genPartIdxMother() { return nt.GenVisTau_genPartIdxMother(); }
    const vector<float> &GenVisTau_mass() { return nt.GenVisTau_mass(); }
    const vector<LorentzVector> &GenVisTau_p4() { return nt.GenVisTau_p4(); }
    const vector<float> &GenVisTau_phi() { return nt.GenVisTau_phi(); }
    const vector<float> &GenVisTau_pt() { return nt.GenVisTau_pt(); }
    const vector<int> &GenVisTau_status() { return nt.GenVisTau_status(); }
    const float &Generator_binvar() { return nt.Generator_binvar(); }
    const int &Generator_id1() { return nt.Generator_id1(); }
    const int &Generator_id2() { return nt.Generator_id2(); }
    const float &Generator_scalePDF() { return nt.Generator_scalePDF(); }
    const float &Generator_weight() { return nt.Generator_weight(); }
    const float &Generator_x1() { return nt.Generator_x1(); }
    const float &Generator_x2() { return nt.Generator_x2(); }
    const float &Generator_xpdf1() { return nt.Generator_xpdf1(); }
    const float &Generator_xpdf2() { return nt.Generator_xpdf2(); }
    const bool &HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55() { return nt.HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55(); }
    const bool &HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55() { return nt.HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55(); }
    const bool &HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55() { return nt.HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55(); }
    const bool &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55() { return nt.HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55(); }
    const bool &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55() { return nt.HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55(); }
    const bool &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55() { return nt.HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55(); }
    const bool &HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55() { return nt.HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55(); }
    const bool &HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55() { return nt.HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55(); }
    const bool &HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto() { return nt.HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto(); }
    const bool &HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55() { return nt.HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55(); }
    const bool &HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70() { return nt.HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70(); }
    const bool &HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90() { return nt.HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90(); }
    const bool &HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55() { return nt.HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55(); }
    const bool &HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90() { return nt.HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90(); }
    const bool &HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95() { return nt.HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95(); }
    const bool &HLT_DoubleMu20_7_Mass0to30_Photon23() { return nt.HLT_DoubleMu20_7_Mass0to30_Photon23(); }
    const bool &HLT_DoublePhoton33_CaloIdL() { return nt.HLT_DoublePhoton33_CaloIdL(); }
    const bool &HLT_DoublePhoton60() { return nt.HLT_DoublePhoton60(); }
    const bool &HLT_DoublePhoton70() { return nt.HLT_DoublePhoton70(); }
    const bool &HLT_DoublePhoton85() { return nt.HLT_DoublePhoton85(); }
    const bool &HLT_HISinglePhoton10() { return nt.HLT_HISinglePhoton10(); }
    const bool &HLT_HISinglePhoton10_Eta3p1ForPPRef() { return nt.HLT_HISinglePhoton10_Eta3p1ForPPRef(); }
    const bool &HLT_HISinglePhoton15() { return nt.HLT_HISinglePhoton15(); }
    const bool &HLT_HISinglePhoton20() { return nt.HLT_HISinglePhoton20(); }
    const bool &HLT_HISinglePhoton20_Eta3p1ForPPRef() { return nt.HLT_HISinglePhoton20_Eta3p1ForPPRef(); }
    const bool &HLT_HISinglePhoton30_Eta3p1ForPPRef() { return nt.HLT_HISinglePhoton30_Eta3p1ForPPRef(); }
    const bool &HLT_HISinglePhoton40() { return nt.HLT_HISinglePhoton40(); }
    const bool &HLT_HISinglePhoton40_Eta3p1ForPPRef() { return nt.HLT_HISinglePhoton40_Eta3p1ForPPRef(); }
    const bool &HLT_HISinglePhoton50_Eta3p1ForPPRef() { return nt.HLT_HISinglePhoton50_Eta3p1ForPPRef(); }
    const bool &HLT_HISinglePhoton60() { return nt.HLT_HISinglePhoton60(); }
    const bool &HLT_HISinglePhoton60_Eta3p1ForPPRef() { return nt.HLT_HISinglePhoton60_Eta3p1ForPPRef(); }
    const bool &HLT_Mu12_DoublePhoton20() { return nt.HLT_Mu12_DoublePhoton20(); }
    const bool &HLT_Mu12_Photon25_CaloIdL() { return nt.HLT_Mu12_Photon25_CaloIdL(); }
    const bool &HLT_Mu12_Photon25_CaloIdL_L1ISO() { return nt.HLT_Mu12_Photon25_CaloIdL_L1ISO(); }
    const bool &HLT_Mu12_Photon25_CaloIdL_L1OR() { return nt.HLT_Mu12_Photon25_CaloIdL_L1OR(); }
    const bool &HLT_Mu17_Photon22_CaloIdL_L1ISO() { return nt.HLT_Mu17_Photon22_CaloIdL_L1ISO(); }
    const bool &HLT_Mu17_Photon30_CaloIdL_L1ISO() { return nt.HLT_Mu17_Photon30_CaloIdL_L1ISO(); }
    const bool &HLT_Mu17_Photon30_IsoCaloId() { return nt.HLT_Mu17_Photon30_IsoCaloId(); }
    const bool &HLT_Mu17_Photon35_CaloIdL_L1ISO() { return nt.HLT_Mu17_Photon35_CaloIdL_L1ISO(); }
    const bool &HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL() { return nt.HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL(); }
    const bool &HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL() { return nt.HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL(); }
    const bool &HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL() { return nt.HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL(); }
    const bool &HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL() { return nt.HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL(); }
    const bool &HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL() { return nt.HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL(); }
    const bool &HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL() { return nt.HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL(); }
    const bool &HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL() { return nt.HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL(); }
    const bool &HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL() { return nt.HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL(); }
    const bool &HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL() { return nt.HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL(); }
    const bool &HLT_Photon100EBHE10() { return nt.HLT_Photon100EBHE10(); }
    const bool &HLT_Photon100EB_TightID_TightIso() { return nt.HLT_Photon100EB_TightID_TightIso(); }
    const bool &HLT_Photon100EEHE10() { return nt.HLT_Photon100EEHE10(); }
    const bool &HLT_Photon100EE_TightID_TightIso() { return nt.HLT_Photon100EE_TightID_TightIso(); }
    const bool &HLT_Photon110EB_TightID_TightIso() { return nt.HLT_Photon110EB_TightID_TightIso(); }
    const bool &HLT_Photon120() { return nt.HLT_Photon120(); }
    const bool &HLT_Photon120EB_TightID_TightIso() { return nt.HLT_Photon120EB_TightID_TightIso(); }
    const bool &HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40() { return nt.HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40(); }
    const bool &HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF() { return nt.HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF(); }
    const bool &HLT_Photon120_R9Id90_HE10_IsoM() { return nt.HLT_Photon120_R9Id90_HE10_IsoM(); }
    const bool &HLT_Photon125() { return nt.HLT_Photon125(); }
    const bool &HLT_Photon135_PFMET100() { return nt.HLT_Photon135_PFMET100(); }
    const bool &HLT_Photon150() { return nt.HLT_Photon150(); }
    const bool &HLT_Photon165_HE10() { return nt.HLT_Photon165_HE10(); }
    const bool &HLT_Photon165_R9Id90_HE10_IsoM() { return nt.HLT_Photon165_R9Id90_HE10_IsoM(); }
    const bool &HLT_Photon175() { return nt.HLT_Photon175(); }
    const bool &HLT_Photon20() { return nt.HLT_Photon20(); }
    const bool &HLT_Photon200() { return nt.HLT_Photon200(); }
    const bool &HLT_Photon20_CaloIdVL_IsoL() { return nt.HLT_Photon20_CaloIdVL_IsoL(); }
    const bool &HLT_Photon20_HoverELoose() { return nt.HLT_Photon20_HoverELoose(); }
    const bool &HLT_Photon22() { return nt.HLT_Photon22(); }
    const bool &HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40() { return nt.HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40(); }
    const bool &HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF() { return nt.HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF(); }
    const bool &HLT_Photon22_R9Id90_HE10_IsoM() { return nt.HLT_Photon22_R9Id90_HE10_IsoM(); }
    const bool &HLT_Photon25() { return nt.HLT_Photon25(); }
    const bool &HLT_Photon250_NoHE() { return nt.HLT_Photon250_NoHE(); }
    const bool &HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60() { return nt.HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60(); }
    const bool &HLT_Photon30() { return nt.HLT_Photon30(); }
    const bool &HLT_Photon300_NoHE() { return nt.HLT_Photon300_NoHE(); }
    const bool &HLT_Photon30_HoverELoose() { return nt.HLT_Photon30_HoverELoose(); }
    const bool &HLT_Photon30_R9Id90_HE10_IsoM() { return nt.HLT_Photon30_R9Id90_HE10_IsoM(); }
    const bool &HLT_Photon33() { return nt.HLT_Photon33(); }
    const bool &HLT_Photon35_TwoProngs35() { return nt.HLT_Photon35_TwoProngs35(); }
    const bool &HLT_Photon36() { return nt.HLT_Photon36(); }
    const bool &HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15() { return nt.HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15(); }
    const bool &HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40() { return nt.HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40(); }
    const bool &HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF() { return nt.HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF(); }
    const bool &HLT_Photon36_R9Id90_HE10_IsoM() { return nt.HLT_Photon36_R9Id90_HE10_IsoM(); }
    const bool &HLT_Photon40_HoverELoose() { return nt.HLT_Photon40_HoverELoose(); }
    const bool &HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15() { return nt.HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15(); }
    const bool &HLT_Photon50() { return nt.HLT_Photon50(); }
    const bool &HLT_Photon500() { return nt.HLT_Photon500(); }
    const bool &HLT_Photon50_HoverELoose() { return nt.HLT_Photon50_HoverELoose(); }
    const bool &HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40() { return nt.HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40(); }
    const bool &HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF() { return nt.HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF(); }
    const bool &HLT_Photon50_R9Id90_HE10_IsoM() { return nt.HLT_Photon50_R9Id90_HE10_IsoM(); }
    const bool &HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50() { return nt.HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50(); }
    const bool &HLT_Photon600() { return nt.HLT_Photon600(); }
    const bool &HLT_Photon60_HoverELoose() { return nt.HLT_Photon60_HoverELoose(); }
    const bool &HLT_Photon60_R9Id90_CaloIdL_IsoL() { return nt.HLT_Photon60_R9Id90_CaloIdL_IsoL(); }
    const bool &HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL() { return nt.HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL(); }
    const bool &HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15() { return nt.HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15(); }
    const bool &HLT_Photon75() { return nt.HLT_Photon75(); }
    const bool &HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40() { return nt.HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40(); }
    const bool &HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF() { return nt.HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF(); }
    const bool &HLT_Photon75_R9Id90_HE10_IsoM() { return nt.HLT_Photon75_R9Id90_HE10_IsoM(); }
    const bool &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3() { return nt.HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3(); }
    const bool &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3() { return nt.HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3(); }
    const bool &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3() { return nt.HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3(); }
    const bool &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3() { return nt.HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3(); }
    const bool &HLT_Photon90() { return nt.HLT_Photon90(); }
    const bool &HLT_Photon90_CaloIdL_HT300() { return nt.HLT_Photon90_CaloIdL_HT300(); }
    const bool &HLT_Photon90_CaloIdL_PFHT500() { return nt.HLT_Photon90_CaloIdL_PFHT500(); }
    const bool &HLT_Photon90_CaloIdL_PFHT600() { return nt.HLT_Photon90_CaloIdL_PFHT600(); }
    const bool &HLT_Photon90_CaloIdL_PFHT700() { return nt.HLT_Photon90_CaloIdL_PFHT700(); }
    const bool &HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40() { return nt.HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40(); }
    const bool &HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF() { return nt.HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF(); }
    const bool &HLT_Photon90_R9Id90_HE10_IsoM() { return nt.HLT_Photon90_R9Id90_HE10_IsoM(); }
    const bool &HLT_SinglePhoton10_Eta3p1ForPPRef() { return nt.HLT_SinglePhoton10_Eta3p1ForPPRef(); }
    const bool &HLT_SinglePhoton20_Eta3p1ForPPRef() { return nt.HLT_SinglePhoton20_Eta3p1ForPPRef(); }
    const bool &HLT_SinglePhoton30_Eta3p1ForPPRef() { return nt.HLT_SinglePhoton30_Eta3p1ForPPRef(); }
    const bool &HLT_TriplePhoton_20_20_20_CaloIdLV2() { return nt.HLT_TriplePhoton_20_20_20_CaloIdLV2(); }
    const bool &HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL() { return nt.HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL(); }
    const bool &HLT_TriplePhoton_30_30_10_CaloIdLV2() { return nt.HLT_TriplePhoton_30_30_10_CaloIdLV2(); }
    const bool &HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL() { return nt.HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL(); }
    const bool &HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL() { return nt.HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL(); }
    const float &HTXS_Higgs_pt() { return nt.HTXS_Higgs_pt(); }
    const float &HTXS_Higgs_y() { return nt.HTXS_Higgs_y(); }
    const UChar_t &HTXS_njets25() { return nt.HTXS_njets25(); }
    const UChar_t &HTXS_njets30() { return nt.HTXS_njets30(); }
    const int &HTXS_stage1_1_cat_pTjet25GeV() { return nt.HTXS_stage1_1_cat_pTjet25GeV(); }
    const int &HTXS_stage1_1_cat_pTjet30GeV() { return nt.HTXS_stage1_1_cat_pTjet30GeV(); }
    const int &HTXS_stage1_1_fine_cat_pTjet25GeV() { return nt.HTXS_stage1_1_fine_cat_pTjet25GeV(); }
    const int &HTXS_stage1_1_fine_cat_pTjet30GeV() { return nt.HTXS_stage1_1_fine_cat_pTjet30GeV(); }
    const int &HTXS_stage1_2_cat_pTjet25GeV() { return nt.HTXS_stage1_2_cat_pTjet25GeV(); }
    const int &HTXS_stage1_2_cat_pTjet30GeV() { return nt.HTXS_stage1_2_cat_pTjet30GeV(); }
    const int &HTXS_stage1_2_fine_cat_pTjet25GeV() { return nt.HTXS_stage1_2_fine_cat_pTjet25GeV(); }
    const int &HTXS_stage1_2_fine_cat_pTjet30GeV() { return nt.HTXS_stage1_2_fine_cat_pTjet30GeV(); }
    const int &HTXS_stage_0() { return nt.HTXS_stage_0(); }
    const int &HTXS_stage_1_pTjet25() { return nt.HTXS_stage_1_pTjet25(); }
    const int &HTXS_stage_1_pTjet30() { return nt.HTXS_stage_1_pTjet30(); }
    const vector<float> &IsoTrack_dxy() { return nt.IsoTrack_dxy(); }
    const vector<float> &IsoTrack_dz() { return nt.IsoTrack_dz(); }
    const vector<float> &IsoTrack_eta() { return nt.IsoTrack_eta(); }
    const vector<int> &IsoTrack_fromPV() { return nt.IsoTrack_fromPV(); }
    const vector<bool> &IsoTrack_isFromLostTrack() { return nt.IsoTrack_isFromLostTrack(); }
    const vector<bool> &IsoTrack_isHighPurityTrack() { return nt.IsoTrack_isHighPurityTrack(); }
    const vector<bool> &IsoTrack_isPFcand() { return nt.IsoTrack_isPFcand(); }
    const vector<float> &IsoTrack_miniPFRelIso_all() { return nt.IsoTrack_miniPFRelIso_all(); }
    const vector<float> &IsoTrack_miniPFRelIso_chg() { return nt.IsoTrack_miniPFRelIso_chg(); }
    const vector<int> &IsoTrack_pdgId() { return nt.IsoTrack_pdgId(); }
    const vector<float> &IsoTrack_pfRelIso03_all() { return nt.IsoTrack_pfRelIso03_all(); }
    const vector<float> &IsoTrack_pfRelIso03_chg() { return nt.IsoTrack_pfRelIso03_chg(); }
    const vector<float> &IsoTrack_phi() { return nt.IsoTrack_phi(); }
    const vector<float> &IsoTrack_pt() { return nt.IsoTrack_pt(); }
    const vector<bool> &Jet_Filter() { return nt.Jet_Filter(); }
    const vector<bool> &Jet_FilterLoose() { return nt.Jet_FilterLoose(); }
    const vector<float> &Jet_area() { return nt.Jet_area(); }
    const vector<float> &Jet_bRegCorr() { return nt.Jet_bRegCorr(); }
    const vector<float> &Jet_bRegRes() { return nt.Jet_bRegRes(); }
    const vector<float> &Jet_btagCMVA() { return nt.Jet_btagCMVA(); }
    const vector<float> &Jet_btagCSVV2() { return nt.Jet_btagCSVV2(); }
    const vector<float> &Jet_btagDeepB() { return nt.Jet_btagDeepB(); }
    const vector<float> &Jet_btagDeepC() { return nt.Jet_btagDeepC(); }
    const vector<float> &Jet_btagDeepFlavB() { return nt.Jet_btagDeepFlavB(); }
    const vector<float> &Jet_btagDeepFlavC() { return nt.Jet_btagDeepFlavC(); }
    const vector<float> &Jet_cRegCorr() { return nt.Jet_cRegCorr(); }
    const vector<float> &Jet_cRegRes() { return nt.Jet_cRegRes(); }
    const vector<float> &Jet_chEmEF() { return nt.Jet_chEmEF(); }
    const vector<float> &Jet_chFPV0EF() { return nt.Jet_chFPV0EF(); }
    const vector<float> &Jet_chFPV1EF() { return nt.Jet_chFPV1EF(); }
    const vector<float> &Jet_chFPV2EF() { return nt.Jet_chFPV2EF(); }
    const vector<float> &Jet_chFPV3EF() { return nt.Jet_chFPV3EF(); }
    const vector<float> &Jet_chHEF() { return nt.Jet_chHEF(); }
    const vector<UChar_t> &Jet_cleanmask() { return nt.Jet_cleanmask(); }
    const vector<float> &Jet_corr_JEC() { return nt.Jet_corr_JEC(); }
    const vector<float> &Jet_corr_JER() { return nt.Jet_corr_JER(); }
    const vector<int> &Jet_electronIdx1() { return nt.Jet_electronIdx1(); }
    const vector<int> &Jet_electronIdx2() { return nt.Jet_electronIdx2(); }
    const vector<float> &Jet_eta() { return nt.Jet_eta(); }
    const vector<int> &Jet_genJetIdx() { return nt.Jet_genJetIdx(); }
    const vector<int> &Jet_hadronFlavour() { return nt.Jet_hadronFlavour(); }
    const vector<int> &Jet_jetId() { return nt.Jet_jetId(); }
    const vector<float> &Jet_mass() { return nt.Jet_mass(); }
    const vector<float> &Jet_mass_jerDown() { return nt.Jet_mass_jerDown(); }
    const vector<float> &Jet_mass_jerUp() { return nt.Jet_mass_jerUp(); }
    const vector<float> &Jet_mass_jesTotalDown() { return nt.Jet_mass_jesTotalDown(); }
    const vector<float> &Jet_mass_jesTotalUp() { return nt.Jet_mass_jesTotalUp(); }
    const vector<float> &Jet_mass_nom() { return nt.Jet_mass_nom(); }
    const vector<float> &Jet_mass_raw() { return nt.Jet_mass_raw(); }
    const vector<float> &Jet_muEF() { return nt.Jet_muEF(); }
    const vector<int> &Jet_muonIdx1() { return nt.Jet_muonIdx1(); }
    const vector<int> &Jet_muonIdx2() { return nt.Jet_muonIdx2(); }
    const vector<float> &Jet_muonSubtrFactor() { return nt.Jet_muonSubtrFactor(); }
    const vector<int> &Jet_nConstituents() { return nt.Jet_nConstituents(); }
    const vector<int> &Jet_nElectrons() { return nt.Jet_nElectrons(); }
    const vector<int> &Jet_nMuons() { return nt.Jet_nMuons(); }
    const vector<float> &Jet_neEmEF() { return nt.Jet_neEmEF(); }
    const vector<float> &Jet_neHEF() { return nt.Jet_neHEF(); }
    const vector<LorentzVector> &Jet_p4() { return nt.Jet_p4(); }
    const vector<int> &Jet_partonFlavour() { return nt.Jet_partonFlavour(); }
    const vector<float> &Jet_phi() { return nt.Jet_phi(); }
    const vector<float> &Jet_pt() { return nt.Jet_pt(); }
    const vector<float> &Jet_pt_jerDown() { return nt.Jet_pt_jerDown(); }
    const vector<float> &Jet_pt_jerUp() { return nt.Jet_pt_jerUp(); }
    const vector<float> &Jet_pt_jesTotalDown() { return nt.Jet_pt_jesTotalDown(); }
    const vector<float> &Jet_pt_jesTotalUp() { return nt.Jet_pt_jesTotalUp(); }
    const vector<float> &Jet_pt_nom() { return nt.Jet_pt_nom(); }
    const vector<float> &Jet_pt_raw() { return nt.Jet_pt_raw(); }
    const vector<int> &Jet_puId() { return nt.Jet_puId(); }
    const vector<float> &Jet_puIdDisc() { return nt.Jet_puIdDisc(); }
    const vector<float> &Jet_qgl() { return nt.Jet_qgl(); }
    const vector<float> &Jet_rawFactor() { return nt.Jet_rawFactor(); }
    const vector<float> &LHEPart_eta() { return nt.LHEPart_eta(); }
    const vector<float> &LHEPart_incomingpz() { return nt.LHEPart_incomingpz(); }
    const vector<float> &LHEPart_mass() { return nt.LHEPart_mass(); }
    const vector<LorentzVector> &LHEPart_p4() { return nt.LHEPart_p4(); }
    const vector<int> &LHEPart_pdgId() { return nt.LHEPart_pdgId(); }
    const vector<float> &LHEPart_phi() { return nt.LHEPart_phi(); }
    const vector<float> &LHEPart_pt() { return nt.LHEPart_pt(); }
    const vector<int> &LHEPart_spin() { return nt.LHEPart_spin(); }
    const vector<int> &LHEPart_status() { return nt.LHEPart_status(); }
    const vector<float> &LHEPdfWeight() { return nt.LHEPdfWeight(); }
    const vector<float> &LHEReweightingWeight() { return nt.LHEReweightingWeight(); }
    const vector<float> &LHEScaleWeight() { return nt.LHEScaleWeight(); }
    const float &LHEWeight_originalXWGTUP() { return nt.LHEWeight_originalXWGTUP(); }
    const float &LHE_AlphaS() { return nt.LHE_AlphaS(); }
    const float &LHE_HT() { return nt.LHE_HT(); }
    const float &LHE_HTIncoming() { return nt.LHE_HTIncoming(); }
    const UChar_t &LHE_Nb() { return nt.LHE_Nb(); }
    const UChar_t &LHE_Nc() { return nt.LHE_Nc(); }
    const UChar_t &LHE_Nglu() { return nt.LHE_Nglu(); }
    const UChar_t &LHE_Njets() { return nt.LHE_Njets(); }
    const UChar_t &LHE_NpLO() { return nt.LHE_NpLO(); }
    const UChar_t &LHE_NpNLO() { return nt.LHE_NpNLO(); }
    const UChar_t &LHE_Nuds() { return nt.LHE_Nuds(); }
    const float &LHE_Vpt() { return nt.LHE_Vpt(); }
    const float &METFixEE2017_MetUnclustEnUpDeltaX() { return nt.METFixEE2017_MetUnclustEnUpDeltaX(); }
    const float &METFixEE2017_MetUnclustEnUpDeltaY() { return nt.METFixEE2017_MetUnclustEnUpDeltaY(); }
    const float &METFixEE2017_covXX() { return nt.METFixEE2017_covXX(); }
    const float &METFixEE2017_covXY() { return nt.METFixEE2017_covXY(); }
    const float &METFixEE2017_covYY() { return nt.METFixEE2017_covYY(); }
    const float &METFixEE2017_phi() { return nt.METFixEE2017_phi(); }
    const float &METFixEE2017_pt() { return nt.METFixEE2017_pt(); }
    const float &METFixEE2017_significance() { return nt.METFixEE2017_significance(); }
    const float &METFixEE2017_sumEt() { return nt.METFixEE2017_sumEt(); }
    const float &METFixEE2017_sumPtUnclustered() { return nt.METFixEE2017_sumPtUnclustered(); }
    const float &MET_MetUnclustEnUpDeltaX() { return nt.MET_MetUnclustEnUpDeltaX(); }
    const float &MET_MetUnclustEnUpDeltaY() { return nt.MET_MetUnclustEnUpDeltaY(); }
    const float &MET_T1Smear_phi() { return nt.MET_T1Smear_phi(); }
    const float &MET_T1Smear_phi_jerDown() { return nt.MET_T1Smear_phi_jerDown(); }
    const float &MET_T1Smear_phi_jerUp() { return nt.MET_T1Smear_phi_jerUp(); }
    const float &MET_T1Smear_phi_jesTotalDown() { return nt.MET_T1Smear_phi_jesTotalDown(); }
    const float &MET_T1Smear_phi_jesTotalUp() { return nt.MET_T1Smear_phi_jesTotalUp(); }
    const float &MET_T1Smear_pt() { return nt.MET_T1Smear_pt(); }
    const float &MET_T1Smear_pt_jerDown() { return nt.MET_T1Smear_pt_jerDown(); }
    const float &MET_T1Smear_pt_jerUp() { return nt.MET_T1Smear_pt_jerUp(); }
    const float &MET_T1Smear_pt_jesTotalDown() { return nt.MET_T1Smear_pt_jesTotalDown(); }
    const float &MET_T1Smear_pt_jesTotalUp() { return nt.MET_T1Smear_pt_jesTotalUp(); }
    const float &MET_T1_phi() { return nt.MET_T1_phi(); }
    const float &MET_T1_phi_jerDown() { return nt.MET_T1_phi_jerDown(); }
    const float &MET_T1_phi_jerUp() { return nt.MET_T1_phi_jerUp(); }
    const float &MET_T1_phi_jesTotalDown() { return nt.MET_T1_phi_jesTotalDown(); }
    const float &MET_T1_phi_jesTotalUp() { return nt.MET_T1_phi_jesTotalUp(); }
    const float &MET_T1_pt() { return nt.MET_T1_pt(); }
    const float &MET_T1_pt_jerDown() { return nt.MET_T1_pt_jerDown(); }
    const float &MET_T1_pt_jerUp() { return nt.MET_T1_pt_jerUp(); }
    const float &MET_T1_pt_jesTotalDown() { return nt.MET_T1_pt_jesTotalDown(); }
    const float &MET_T1_pt_jesTotalUp() { return nt.MET_T1_pt_jesTotalUp(); }
    const float &MET_covXX() { return nt.MET_covXX(); }
    const float &MET_covXY() { return nt.MET_covXY(); }
    const float &MET_covYY() { return nt.MET_covYY(); }
    const float &MET_fiducialGenPhi() { return nt.MET_fiducialGenPhi(); }
    const float &MET_fiducialGenPt() { return nt.MET_fiducialGenPt(); }
    const float &MET_phi() { return nt.MET_phi(); }
    const float &MET_phi_unclustEnDown() { return nt.MET_phi_unclustEnDown(); }
    const float &MET_phi_unclustEnUp() { return nt.MET_phi_unclustEnUp(); }
    const float &MET_pt() { return nt.MET_pt(); }
    const float &MET_pt_unclustEnDown() { return nt.MET_pt_unclustEnDown(); }
    const float &MET_pt_unclustEnUp() { return nt.MET_pt_unclustEnUp(); }
    const float &MET_significance() { return nt.MET_significance(); }
    const float &MET_sumEt() { return nt.MET_sumEt(); }
    const float &MET_sumPtUnclustered() { return nt.MET_sumPtUnclustered(); }
    const vector<int> &Muon_charge() { return nt.Muon_charge(); }
    const vector<UChar_t> &Muon_cleanmask() { return nt.Muon_cleanmask(); }
    const vector<float> &Muon_correctedDown_pt() { return nt.Muon_correctedDown_pt(); }
    const vector<float> &Muon_correctedUp_pt() { return nt.Muon_correctedUp_pt(); }
    const vector<float> &Muon_corrected_pt() { return nt.Muon_corrected_pt(); }
    const vector<float> &Muon_dxy() { return nt.Muon_dxy(); }
    const vector<float> &Muon_dxyErr() { return nt.Muon_dxyErr(); }
    const vector<float> &Muon_dxybs() { return nt.Muon_dxybs(); }
    const vector<float> &Muon_dz() { return nt.Muon_dz(); }
    const vector<float> &Muon_dzErr() { return nt.Muon_dzErr(); }
    const vector<float> &Muon_eta() { return nt.Muon_eta(); }
    const vector<int> &Muon_fsrPhotonIdx() { return nt.Muon_fsrPhotonIdx(); }
    const vector<UChar_t> &Muon_genPartFlav() { return nt.Muon_genPartFlav(); }
    const vector<int> &Muon_genPartIdx() { return nt.Muon_genPartIdx(); }
    const vector<UChar_t> &Muon_highPtId() { return nt.Muon_highPtId(); }
    const vector<bool> &Muon_highPurity() { return nt.Muon_highPurity(); }
    const vector<bool> &Muon_inTimeMuon() { return nt.Muon_inTimeMuon(); }
    const vector<float> &Muon_ip3d() { return nt.Muon_ip3d(); }
    const vector<bool> &Muon_isGlobal() { return nt.Muon_isGlobal(); }
    const vector<bool> &Muon_isPFcand() { return nt.Muon_isPFcand(); }
    const vector<bool> &Muon_isTracker() { return nt.Muon_isTracker(); }
    const vector<int> &Muon_jetIdx() { return nt.Muon_jetIdx(); }
    const vector<float> &Muon_jetPtRelv2() { return nt.Muon_jetPtRelv2(); }
    const vector<float> &Muon_jetRelIso() { return nt.Muon_jetRelIso(); }
    const vector<bool> &Muon_looseId() { return nt.Muon_looseId(); }
    const vector<float> &Muon_mass() { return nt.Muon_mass(); }
    const vector<bool> &Muon_mediumId() { return nt.Muon_mediumId(); }
    const vector<bool> &Muon_mediumPromptId() { return nt.Muon_mediumPromptId(); }
    const vector<UChar_t> &Muon_miniIsoId() { return nt.Muon_miniIsoId(); }
    const vector<float> &Muon_miniPFRelIso_all() { return nt.Muon_miniPFRelIso_all(); }
    const vector<float> &Muon_miniPFRelIso_chg() { return nt.Muon_miniPFRelIso_chg(); }
    const vector<UChar_t> &Muon_multiIsoId() { return nt.Muon_multiIsoId(); }
    const vector<UChar_t> &Muon_mvaId() { return nt.Muon_mvaId(); }
    const vector<float> &Muon_mvaLowPt() { return nt.Muon_mvaLowPt(); }
    const vector<float> &Muon_mvaTTH() { return nt.Muon_mvaTTH(); }
    const vector<int> &Muon_nStations() { return nt.Muon_nStations(); }
    const vector<int> &Muon_nTrackerLayers() { return nt.Muon_nTrackerLayers(); }
    const vector<LorentzVector> &Muon_p4() { return nt.Muon_p4(); }
    const vector<int> &Muon_pdgId() { return nt.Muon_pdgId(); }
    const vector<UChar_t> &Muon_pfIsoId() { return nt.Muon_pfIsoId(); }
    const vector<float> &Muon_pfRelIso03_all() { return nt.Muon_pfRelIso03_all(); }
    const vector<float> &Muon_pfRelIso03_chg() { return nt.Muon_pfRelIso03_chg(); }
    const vector<float> &Muon_pfRelIso04_all() { return nt.Muon_pfRelIso04_all(); }
    const vector<float> &Muon_phi() { return nt.Muon_phi(); }
    const vector<float> &Muon_pt() { return nt.Muon_pt(); }
    const vector<float> &Muon_ptErr() { return nt.Muon_ptErr(); }
    const vector<float> &Muon_segmentComp() { return nt.Muon_segmentComp(); }
    const vector<float> &Muon_sip3d() { return nt.Muon_sip3d(); }
    const vector<bool> &Muon_softId() { return nt.Muon_softId(); }
    const vector<float> &Muon_softMva() { return nt.Muon_softMva(); }
    const vector<bool> &Muon_softMvaId() { return nt.Muon_softMvaId(); }
    const vector<int> &Muon_tightCharge() { return nt.Muon_tightCharge(); }
    const vector<bool> &Muon_tightId() { return nt.Muon_tightId(); }
    const vector<UChar_t> &Muon_tkIsoId() { return nt.Muon_tkIsoId(); }
    const vector<float> &Muon_tkRelIso() { return nt.Muon_tkRelIso(); }
    const vector<bool> &Muon_triggerIdLoose() { return nt.Muon_triggerIdLoose(); }
    const vector<float> &Muon_tunepRelPt() { return nt.Muon_tunepRelPt(); }
    const vector<float> &OtherPV_z() { return nt.OtherPV_z(); }
    const vector<float> &PSWeight() { return nt.PSWeight(); }
    const float &PV_chi2() { return nt.PV_chi2(); }
    const float &PV_ndof() { return nt.PV_ndof(); }
    const int &PV_npvs() { return nt.PV_npvs(); }
    const int &PV_npvsGood() { return nt.PV_npvsGood(); }
    const float &PV_score() { return nt.PV_score(); }
    const float &PV_x() { return nt.PV_x(); }
    const float &PV_y() { return nt.PV_y(); }
    const float &PV_z() { return nt.PV_z(); }
    const vector<int> &Photon_charge() { return nt.Photon_charge(); }
    const vector<float> &Photon_chargedHadronIso() { return nt.Photon_chargedHadronIso(); }
    const vector<UChar_t> &Photon_cleanmask() { return nt.Photon_cleanmask(); }
    const vector<int> &Photon_cutBased() { return nt.Photon_cutBased(); }
    const vector<int> &Photon_cutBased_Fall17V1Bitmap() { return nt.Photon_cutBased_Fall17V1Bitmap(); }
    const vector<int> &Photon_cutBased_Spring16V2p2() { return nt.Photon_cutBased_Spring16V2p2(); }
    const vector<float> &Photon_eCorr() { return nt.Photon_eCorr(); }
    const vector<int> &Photon_electronIdx() { return nt.Photon_electronIdx(); }
    const vector<bool> &Photon_electronVeto() { return nt.Photon_electronVeto(); }
    const vector<float> &Photon_energyErr() { return nt.Photon_energyErr(); }
    const vector<float> &Photon_eta() { return nt.Photon_eta(); }
    const vector<UChar_t> &Photon_genPartFlav() { return nt.Photon_genPartFlav(); }
    const vector<int> &Photon_genPartIdx() { return nt.Photon_genPartIdx(); }
    const vector<float> &Photon_hoe() { return nt.Photon_hoe(); }
    const vector<bool> &Photon_isScEtaEB() { return nt.Photon_isScEtaEB(); }
    const vector<bool> &Photon_isScEtaEE() { return nt.Photon_isScEtaEE(); }
    const vector<int> &Photon_jetIdx() { return nt.Photon_jetIdx(); }
    const vector<float> &Photon_mass() { return nt.Photon_mass(); }
    const vector<float> &Photon_mvaID() { return nt.Photon_mvaID(); }
    const vector<float> &Photon_mvaID_Fall17V1p1() { return nt.Photon_mvaID_Fall17V1p1(); }
    const vector<float> &Photon_mvaID_Spring16nonTrigV1() { return nt.Photon_mvaID_Spring16nonTrigV1(); }
    const vector<bool> &Photon_mvaID_WP80() { return nt.Photon_mvaID_WP80(); }
    const vector<bool> &Photon_mvaID_WP90() { return nt.Photon_mvaID_WP90(); }
    const vector<LorentzVector> &Photon_p4() { return nt.Photon_p4(); }
    const vector<int> &Photon_pdgId() { return nt.Photon_pdgId(); }
    const vector<float> &Photon_pfRelIso03_all() { return nt.Photon_pfRelIso03_all(); }
    const vector<float> &Photon_pfRelIso03_chg() { return nt.Photon_pfRelIso03_chg(); }
    const vector<float> &Photon_phi() { return nt.Photon_phi(); }
    const vector<float> &Photon_photonIso() { return nt.Photon_photonIso(); }
    const vector<bool> &Photon_pixelSeed() { return nt.Photon_pixelSeed(); }
    const vector<float> &Photon_pt() { return nt.Photon_pt(); }
    const vector<float> &Photon_pt_FNUDown() { return nt.Photon_pt_FNUDown(); }
    const vector<float> &Photon_pt_FNUUp() { return nt.Photon_pt_FNUUp(); }
    const vector<float> &Photon_pt_MCScaleDown() { return nt.Photon_pt_MCScaleDown(); }
    const vector<float> &Photon_pt_MCScaleGainDown() { return nt.Photon_pt_MCScaleGainDown(); }
    const vector<float> &Photon_pt_MCScaleGainUp() { return nt.Photon_pt_MCScaleGainUp(); }
    const vector<float> &Photon_pt_MCScaleUp() { return nt.Photon_pt_MCScaleUp(); }
    const vector<float> &Photon_pt_MCSmearDown() { return nt.Photon_pt_MCSmearDown(); }
    const vector<float> &Photon_pt_MCSmearUp() { return nt.Photon_pt_MCSmearUp(); }
    const vector<float> &Photon_pt_MaterialDown() { return nt.Photon_pt_MaterialDown(); }
    const vector<float> &Photon_pt_MaterialUp() { return nt.Photon_pt_MaterialUp(); }
    const vector<float> &Photon_pt_ShowerShapeDown() { return nt.Photon_pt_ShowerShapeDown(); }
    const vector<float> &Photon_pt_ShowerShapeUp() { return nt.Photon_pt_ShowerShapeUp(); }
    const vector<float> &Photon_r9() { return nt.Photon_r9(); }
    const vector<UChar_t> &Photon_seedGain() { return nt.Photon_seedGain(); }
    const vector<float> &Photon_sieie() { return nt.Photon_sieie(); }
    const vector<float> &Photon_trkSumPtHollowConeDR03() { return nt.Photon_trkSumPtHollowConeDR03(); }
    const vector<int> &Photon_vidNestedWPBitmap() { return nt.Photon_vidNestedWPBitmap(); }
    const vector<int> &Photon_vidNestedWPBitmap_Spring16V2p2() { return nt.Photon_vidNestedWPBitmap_Spring16V2p2(); }
    const float &Pileup_gpudensity() { return nt.Pileup_gpudensity(); }
    const int &Pileup_nPU() { return nt.Pileup_nPU(); }
    const float &Pileup_nTrueInt() { return nt.Pileup_nTrueInt(); }
    const float &Pileup_pudensity() { return nt.Pileup_pudensity(); }
    const int &Pileup_sumEOOT() { return nt.Pileup_sumEOOT(); }
    const int &Pileup_sumLOOT() { return nt.Pileup_sumLOOT(); }
    const float &PrefireWeight() { return nt.PrefireWeight(); }
    const float &PrefireWeight_Down() { return nt.PrefireWeight_Down(); }
    const float &PrefireWeight_Up() { return nt.PrefireWeight_Up(); }
    const float &PuppiMET_phi() { return nt.PuppiMET_phi(); }
    const float &PuppiMET_phiJERUp() { return nt.PuppiMET_phiJERUp(); }
    const float &PuppiMET_phiJESUp() { return nt.PuppiMET_phiJESUp(); }
    const float &PuppiMET_pt() { return nt.PuppiMET_pt(); }
    const float &PuppiMET_ptJERUp() { return nt.PuppiMET_ptJERUp(); }
    const float &PuppiMET_ptJESUp() { return nt.PuppiMET_ptJESUp(); }
    const float &PuppiMET_sumEt() { return nt.PuppiMET_sumEt(); }
    const float &RawMET_phi() { return nt.RawMET_phi(); }
    const float &RawMET_pt() { return nt.RawMET_pt(); }
    const float &RawMET_sumEt() { return nt.RawMET_sumEt(); }
    const float &RawPuppiMET_phi() { return nt.RawPuppiMET_phi(); }
    const float &RawPuppiMET_pt() { return nt.RawPuppiMET_pt(); }
    const float &RawPuppiMET_sumEt() { return nt.RawPuppiMET_sumEt(); }
    const vector<float> &SV_chi2() { return nt.SV_chi2(); }
    const vector<float> &SV_dlen() { return nt.SV_dlen(); }
    const vector<float> &SV_dlenSig() { return nt.SV_dlenSig(); }
    const vector<float> &SV_dxy() { return nt.SV_dxy(); }
    const vector<float> &SV_dxySig() { return nt.SV_dxySig(); }
    const vector<float> &SV_eta() { return nt.SV_eta(); }
    const vector<float> &SV_mass() { return nt.SV_mass(); }
    const vector<float> &SV_ndof() { return nt.SV_ndof(); }
    const vector<LorentzVector> &SV_p4() { return nt.SV_p4(); }
    const vector<float> &SV_pAngle() { return nt.SV_pAngle(); }
    const vector<float> &SV_phi() { return nt.SV_phi(); }
    const vector<float> &SV_pt() { return nt.SV_pt(); }
    const vector<float> &SV_x() { return nt.SV_x(); }
    const vector<float> &SV_y() { return nt.SV_y(); }
    const vector<float> &SV_z() { return nt.SV_z(); }
    const float &SoftActivityJetHT() { return nt.SoftActivityJetHT(); }
    const float &SoftActivityJetHT10() { return nt.SoftActivityJetHT10(); }
    const float &SoftActivityJetHT2() { return nt.SoftActivityJetHT2(); }
    const float &SoftActivityJetHT5() { return nt.SoftActivityJetHT5(); }
    const int &SoftActivityJetNjets10() { return nt.SoftActivityJetNjets10(); }
    const int &SoftActivityJetNjets2() { return nt.SoftActivityJetNjets2(); }
    const int &SoftActivityJetNjets5() { return nt.SoftActivityJetNjets5(); }
    const vector<float> &SoftActivityJet_eta() { return nt.SoftActivityJet_eta(); }
    const vector<float> &SoftActivityJet_phi() { return nt.SoftActivityJet_phi(); }
    const vector<float> &SoftActivityJet_pt() { return nt.SoftActivityJet_pt(); }
    const vector<float> &SubGenJetAK8_eta() { return nt.SubGenJetAK8_eta(); }
    const vector<float> &SubGenJetAK8_mass() { return nt.SubGenJetAK8_mass(); }
    const vector<LorentzVector> &SubGenJetAK8_p4() { return nt.SubGenJetAK8_p4(); }
    const vector<float> &SubGenJetAK8_phi() { return nt.SubGenJetAK8_phi(); }
    const vector<float> &SubGenJetAK8_pt() { return nt.SubGenJetAK8_pt(); }
    const vector<float> &SubJet_btagCMVA() { return nt.SubJet_btagCMVA(); }
    const vector<float> &SubJet_btagCSVV2() { return nt.SubJet_btagCSVV2(); }
    const vector<float> &SubJet_btagDeepB() { return nt.SubJet_btagDeepB(); }
    const vector<float> &SubJet_eta() { return nt.SubJet_eta(); }
    const vector<float> &SubJet_mass() { return nt.SubJet_mass(); }
    const vector<float> &SubJet_n2b1() { return nt.SubJet_n2b1(); }
    const vector<float> &SubJet_n3b1() { return nt.SubJet_n3b1(); }
    const vector<UChar_t> &SubJet_nBHadrons() { return nt.SubJet_nBHadrons(); }
    const vector<UChar_t> &SubJet_nCHadrons() { return nt.SubJet_nCHadrons(); }
    const vector<LorentzVector> &SubJet_p4() { return nt.SubJet_p4(); }
    const vector<float> &SubJet_phi() { return nt.SubJet_phi(); }
    const vector<float> &SubJet_pt() { return nt.SubJet_pt(); }
    const vector<float> &SubJet_rawFactor() { return nt.SubJet_rawFactor(); }
    const vector<float> &SubJet_tau1() { return nt.SubJet_tau1(); }
    const vector<float> &SubJet_tau2() { return nt.SubJet_tau2(); }
    const vector<float> &SubJet_tau3() { return nt.SubJet_tau3(); }
    const vector<float> &SubJet_tau4() { return nt.SubJet_tau4(); }
    const vector<bool> &Tau_Filter() { return nt.Tau_Filter(); }
    const vector<int> &Tau_charge() { return nt.Tau_charge(); }
    const vector<float> &Tau_chargedIso() { return nt.Tau_chargedIso(); }
    const vector<UChar_t> &Tau_cleanmask() { return nt.Tau_cleanmask(); }
    const vector<int> &Tau_decayMode() { return nt.Tau_decayMode(); }
    const vector<float> &Tau_dxy() { return nt.Tau_dxy(); }
    const vector<float> &Tau_dz() { return nt.Tau_dz(); }
    const vector<float> &Tau_eta() { return nt.Tau_eta(); }
    const vector<UChar_t> &Tau_genPartFlav() { return nt.Tau_genPartFlav(); }
    const vector<int> &Tau_genPartIdx() { return nt.Tau_genPartIdx(); }
    const vector<UChar_t> &Tau_idAntiEle() { return nt.Tau_idAntiEle(); }
    const vector<UChar_t> &Tau_idAntiEle2018() { return nt.Tau_idAntiEle2018(); }
    const vector<UChar_t> &Tau_idAntiMu() { return nt.Tau_idAntiMu(); }
    const vector<bool> &Tau_idDecayMode() { return nt.Tau_idDecayMode(); }
    const vector<bool> &Tau_idDecayModeNewDMs() { return nt.Tau_idDecayModeNewDMs(); }
    const vector<UChar_t> &Tau_idDeepTau2017v2p1VSe() { return nt.Tau_idDeepTau2017v2p1VSe(); }
    const vector<UChar_t> &Tau_idDeepTau2017v2p1VSjet() { return nt.Tau_idDeepTau2017v2p1VSjet(); }
    const vector<UChar_t> &Tau_idDeepTau2017v2p1VSmu() { return nt.Tau_idDeepTau2017v2p1VSmu(); }
    const vector<UChar_t> &Tau_idMVAnewDM2017v2() { return nt.Tau_idMVAnewDM2017v2(); }
    const vector<UChar_t> &Tau_idMVAoldDM() { return nt.Tau_idMVAoldDM(); }
    const vector<UChar_t> &Tau_idMVAoldDM2017v1() { return nt.Tau_idMVAoldDM2017v1(); }
    const vector<UChar_t> &Tau_idMVAoldDM2017v2() { return nt.Tau_idMVAoldDM2017v2(); }
    const vector<UChar_t> &Tau_idMVAoldDMdR032017v2() { return nt.Tau_idMVAoldDMdR032017v2(); }
    const vector<int> &Tau_jetIdx() { return nt.Tau_jetIdx(); }
    const vector<float> &Tau_leadTkDeltaEta() { return nt.Tau_leadTkDeltaEta(); }
    const vector<float> &Tau_leadTkDeltaPhi() { return nt.Tau_leadTkDeltaPhi(); }
    const vector<float> &Tau_leadTkPtOverTauPt() { return nt.Tau_leadTkPtOverTauPt(); }
    const vector<float> &Tau_mass() { return nt.Tau_mass(); }
    const vector<float> &Tau_neutralIso() { return nt.Tau_neutralIso(); }
    const vector<LorentzVector> &Tau_p4() { return nt.Tau_p4(); }
    const vector<float> &Tau_phi() { return nt.Tau_phi(); }
    const vector<float> &Tau_photonsOutsideSignalCone() { return nt.Tau_photonsOutsideSignalCone(); }
    const vector<float> &Tau_pt() { return nt.Tau_pt(); }
    const vector<float> &Tau_puCorr() { return nt.Tau_puCorr(); }
    const vector<float> &Tau_rawAntiEle() { return nt.Tau_rawAntiEle(); }
    const vector<float> &Tau_rawAntiEle2018() { return nt.Tau_rawAntiEle2018(); }
    const vector<int> &Tau_rawAntiEleCat() { return nt.Tau_rawAntiEleCat(); }
    const vector<int> &Tau_rawAntiEleCat2018() { return nt.Tau_rawAntiEleCat2018(); }
    const vector<float> &Tau_rawDeepTau2017v2p1VSe() { return nt.Tau_rawDeepTau2017v2p1VSe(); }
    const vector<float> &Tau_rawDeepTau2017v2p1VSjet() { return nt.Tau_rawDeepTau2017v2p1VSjet(); }
    const vector<float> &Tau_rawDeepTau2017v2p1VSmu() { return nt.Tau_rawDeepTau2017v2p1VSmu(); }
    const vector<float> &Tau_rawIso() { return nt.Tau_rawIso(); }
    const vector<float> &Tau_rawIsodR03() { return nt.Tau_rawIsodR03(); }
    const vector<float> &Tau_rawMVAnewDM2017v2() { return nt.Tau_rawMVAnewDM2017v2(); }
    const vector<float> &Tau_rawMVAoldDM() { return nt.Tau_rawMVAoldDM(); }
    const vector<float> &Tau_rawMVAoldDM2017v1() { return nt.Tau_rawMVAoldDM2017v1(); }
    const vector<float> &Tau_rawMVAoldDM2017v2() { return nt.Tau_rawMVAoldDM2017v2(); }
    const vector<float> &Tau_rawMVAoldDMdR032017v2() { return nt.Tau_rawMVAoldDMdR032017v2(); }
    const float &TkMET_phi() { return nt.TkMET_phi(); }
    const float &TkMET_pt() { return nt.TkMET_pt(); }
    const float &TkMET_sumEt() { return nt.TkMET_sumEt(); }
    const vector<float> &TrigObj_eta() { return nt.TrigObj_eta(); }
    const vector<int> &TrigObj_filterBits() { return nt.TrigObj_filterBits(); }
    const vector<int> &TrigObj_id() { return nt.TrigObj_id(); }
    const vector<int> &TrigObj_l1charge() { return nt.TrigObj_l1charge(); }
    const vector<int> &TrigObj_l1iso() { return nt.TrigObj_l1iso(); }
    const vector<float> &TrigObj_l1pt() { return nt.TrigObj_l1pt(); }
    const vector<float> &TrigObj_l1pt_2() { return nt.TrigObj_l1pt_2(); }
    const vector<float> &TrigObj_l2pt() { return nt.TrigObj_l2pt(); }
    const vector<float> &TrigObj_phi() { return nt.TrigObj_phi(); }
    const vector<float> &TrigObj_pt() { return nt.TrigObj_pt(); }
    const float &btagWeight_CMVA() { return nt.btagWeight_CMVA(); }
    const float &btagWeight_CSVV2() { return nt.btagWeight_CSVV2(); }
    const float &btagWeight_DeepCSVB() { return nt.btagWeight_DeepCSVB(); }
    const float &dPhi_ggtautauLoose() { return nt.dPhi_ggtautauLoose(); }
    const float &dPhi_ggtautauSVFitLoose() { return nt.dPhi_ggtautauSVFitLoose(); }
    const float &dR_ggtautauLoose() { return nt.dR_ggtautauLoose(); }
    const float &dR_ggtautauSVFitLoose() { return nt.dR_ggtautauSVFitLoose(); }
    const float &dR_tautauLoose() { return nt.dR_tautauLoose(); }
    const float &dR_tautauSVFitLoose() { return nt.dR_tautauSVFitLoose(); }
    const vector<int> &eleHidx() { return nt.eleHidx(); }
    const float &eta_tautauLoose() { return nt.eta_tautauLoose(); }
    const float &eta_tautauSVFitLoose() { return nt.eta_tautauSVFitLoose(); }
    const float &evWeight_electronVeto() { return nt.evWeight_electronVeto(); }
    const float &evWeight_electronVetoDown() { return nt.evWeight_electronVetoDown(); }
    const float &evWeight_electronVetoUp() { return nt.evWeight_electronVetoUp(); }
    const float &evWeight_looseMva() { return nt.evWeight_looseMva(); }
    const float &evWeight_looseMvaDown() { return nt.evWeight_looseMvaDown(); }
    const float &evWeight_looseMvaUp() { return nt.evWeight_looseMvaUp(); }
    const float &evWeight_presel() { return nt.evWeight_presel(); }
    const float &evWeight_preselDown() { return nt.evWeight_preselDown(); }
    const float &evWeight_preselUp() { return nt.evWeight_preselUp(); }
    const ULong64_t &event() { return nt.event(); }
    const float &fixedGridRhoAll() { return nt.fixedGridRhoAll(); }
    const float &fixedGridRhoFastjetAll() { return nt.fixedGridRhoFastjetAll(); }
    const float &fixedGridRhoFastjetCentral() { return nt.fixedGridRhoFastjetCentral(); }
    const float &fixedGridRhoFastjetCentralCalo() { return nt.fixedGridRhoFastjetCentralCalo(); }
    const float &fixedGridRhoFastjetCentralChargedPileUp() { return nt.fixedGridRhoFastjetCentralChargedPileUp(); }
    const float &fixedGridRhoFastjetCentralNeutral() { return nt.fixedGridRhoFastjetCentralNeutral(); }
    const vector<int> &gHidx() { return nt.gHidx(); }
    const int &genTtbarId() { return nt.genTtbarId(); }
    const float &genWeight() { return nt.genWeight(); }
    const float &gg_eta() { return nt.gg_eta(); }
    const float &gg_mass() { return nt.gg_mass(); }
    const LorentzVector &gg_p4() { return nt.gg_p4(); }
    const float &gg_phi() { return nt.gg_phi(); }
    const float &gg_pt() { return nt.gg_pt(); }
    const UInt_t &luminosityBlock() { return nt.luminosityBlock(); }
    const float &m_tautauLoose() { return nt.m_tautauLoose(); }
    const float &m_tautauSVFitLoose() { return nt.m_tautauSVFitLoose(); }
    const vector<int> &muHidx() { return nt.muHidx(); }
    const UInt_t &nCorrT1METJet() { return nt.nCorrT1METJet(); }
    const UInt_t &nElectron() { return nt.nElectron(); }
    const UInt_t &nFsrPhoton() { return nt.nFsrPhoton(); }
    const UInt_t &nGenDressedLepton() { return nt.nGenDressedLepton(); }
    const UInt_t &nGenIsolatedPhoton() { return nt.nGenIsolatedPhoton(); }
    const UInt_t &nGenJet() { return nt.nGenJet(); }
    const UInt_t &nGenJetAK8() { return nt.nGenJetAK8(); }
    const UInt_t &nGenPart() { return nt.nGenPart(); }
    const UInt_t &nGenVisTau() { return nt.nGenVisTau(); }
    const UInt_t &nIsoTrack() { return nt.nIsoTrack(); }
    const UInt_t &nJet() { return nt.nJet(); }
    const UInt_t &nLHEPart() { return nt.nLHEPart(); }
    const UInt_t &nLHEPdfWeight() { return nt.nLHEPdfWeight(); }
    const UInt_t &nLHEReweightingWeight() { return nt.nLHEReweightingWeight(); }
    const UInt_t &nLHEScaleWeight() { return nt.nLHEScaleWeight(); }
    const UInt_t &nMuon() { return nt.nMuon(); }
    const UInt_t &nOtherPV() { return nt.nOtherPV(); }
    const UInt_t &nPSWeight() { return nt.nPSWeight(); }
    const UInt_t &nPhoton() { return nt.nPhoton(); }
    const UInt_t &nSV() { return nt.nSV(); }
    const UInt_t &nSoftActivityJet() { return nt.nSoftActivityJet(); }
    const UInt_t &nSubGenJetAK8() { return nt.nSubGenJetAK8(); }
    const UInt_t &nSubJet() { return nt.nSubJet(); }
    const UInt_t &nTau() { return nt.nTau(); }
    const UInt_t &nTrigObj() { return nt.nTrigObj(); }
    const int &nselectedElectron() { return nt.nselectedElectron(); }
    const int &nselectedMuon() { return nt.nselectedMuon(); }
    const int &nselectedTauLoose() { return nt.nselectedTauLoose(); }
    const Char_t &passedDigammaPair() { return nt.passedDigammaPair(); }
    const Char_t &passedGoodPhotons() { return nt.passedGoodPhotons(); }
    const Char_t &passedHPhotons() { return nt.passedHPhotons(); }
    const float &phi_tautauLoose() { return nt.phi_tautauLoose(); }
    const float &phi_tautauSVFitLoose() { return nt.phi_tautauSVFitLoose(); }
    const float &pt_tautauLoose() { return nt.pt_tautauLoose(); }
    const float &pt_tautauSVFitLoose() { return nt.pt_tautauSVFitLoose(); }
    const float &puWeight() { return nt.puWeight(); }
    const float &puWeightDown() { return nt.puWeightDown(); }
    const float &puWeightUp() { return nt.puWeightUp(); }
    const UInt_t &run() { return nt.run(); }
    const vector<float> &selectedElectron_charge() { return nt.selectedElectron_charge(); }
    const vector<float> &selectedElectron_cleanmask() { return nt.selectedElectron_cleanmask(); }
    const vector<float> &selectedElectron_convVeto() { return nt.selectedElectron_convVeto(); }
    const vector<float> &selectedElectron_cutBased() { return nt.selectedElectron_cutBased(); }
    const vector<float> &selectedElectron_cutBased_Fall17_V1() { return nt.selectedElectron_cutBased_Fall17_V1(); }
    const vector<float> &selectedElectron_cutBased_HEEP() { return nt.selectedElectron_cutBased_HEEP(); }
    const vector<float> &selectedElectron_cutBased_HLTPreSel() { return nt.selectedElectron_cutBased_HLTPreSel(); }
    const vector<float> &selectedElectron_cutBased_Spring15() { return nt.selectedElectron_cutBased_Spring15(); }
    const vector<float> &selectedElectron_cutBased_Sum16() { return nt.selectedElectron_cutBased_Sum16(); }
    const vector<float> &selectedElectron_deltaEtaSC() { return nt.selectedElectron_deltaEtaSC(); }
    const vector<float> &selectedElectron_dr03EcalRecHitSumEt() { return nt.selectedElectron_dr03EcalRecHitSumEt(); }
    const vector<float> &selectedElectron_dr03HcalDepth1TowerSumEt() { return nt.selectedElectron_dr03HcalDepth1TowerSumEt(); }
    const vector<float> &selectedElectron_dr03TkSumPt() { return nt.selectedElectron_dr03TkSumPt(); }
    const vector<float> &selectedElectron_dr03TkSumPtHEEP() { return nt.selectedElectron_dr03TkSumPtHEEP(); }
    const vector<float> &selectedElectron_dxy() { return nt.selectedElectron_dxy(); }
    const vector<float> &selectedElectron_dxyErr() { return nt.selectedElectron_dxyErr(); }
    const vector<float> &selectedElectron_dz() { return nt.selectedElectron_dz(); }
    const vector<float> &selectedElectron_dzErr() { return nt.selectedElectron_dzErr(); }
    const vector<float> &selectedElectron_eCorr() { return nt.selectedElectron_eCorr(); }
    const vector<float> &selectedElectron_eInvMinusPInv() { return nt.selectedElectron_eInvMinusPInv(); }
    const vector<float> &selectedElectron_energyErr() { return nt.selectedElectron_energyErr(); }
    const vector<float> &selectedElectron_eta() { return nt.selectedElectron_eta(); }
    const vector<float> &selectedElectron_etaSVFit() { return nt.selectedElectron_etaSVFit(); }
    const vector<float> &selectedElectron_genPartFlav() { return nt.selectedElectron_genPartFlav(); }
    const vector<float> &selectedElectron_genPartIdx() { return nt.selectedElectron_genPartIdx(); }
    const vector<float> &selectedElectron_hoe() { return nt.selectedElectron_hoe(); }
    const vector<float> &selectedElectron_ip3d() { return nt.selectedElectron_ip3d(); }
    const vector<float> &selectedElectron_isPFcand() { return nt.selectedElectron_isPFcand(); }
    const vector<float> &selectedElectron_jetIdx() { return nt.selectedElectron_jetIdx(); }
    const vector<float> &selectedElectron_jetPtRelv2() { return nt.selectedElectron_jetPtRelv2(); }
    const vector<float> &selectedElectron_jetRelIso() { return nt.selectedElectron_jetRelIso(); }
    const vector<float> &selectedElectron_lostHits() { return nt.selectedElectron_lostHits(); }
    const vector<float> &selectedElectron_mSVFit() { return nt.selectedElectron_mSVFit(); }
    const vector<float> &selectedElectron_mass() { return nt.selectedElectron_mass(); }
    const vector<float> &selectedElectron_miniPFRelIso_all() { return nt.selectedElectron_miniPFRelIso_all(); }
    const vector<float> &selectedElectron_miniPFRelIso_chg() { return nt.selectedElectron_miniPFRelIso_chg(); }
    const vector<float> &selectedElectron_mvaFall17V1Iso() { return nt.selectedElectron_mvaFall17V1Iso(); }
    const vector<float> &selectedElectron_mvaFall17V1Iso_WP80() { return nt.selectedElectron_mvaFall17V1Iso_WP80(); }
    const vector<float> &selectedElectron_mvaFall17V1Iso_WP90() { return nt.selectedElectron_mvaFall17V1Iso_WP90(); }
    const vector<float> &selectedElectron_mvaFall17V1Iso_WPL() { return nt.selectedElectron_mvaFall17V1Iso_WPL(); }
    const vector<float> &selectedElectron_mvaFall17V1noIso() { return nt.selectedElectron_mvaFall17V1noIso(); }
    const vector<float> &selectedElectron_mvaFall17V1noIso_WP80() { return nt.selectedElectron_mvaFall17V1noIso_WP80(); }
    const vector<float> &selectedElectron_mvaFall17V1noIso_WP90() { return nt.selectedElectron_mvaFall17V1noIso_WP90(); }
    const vector<float> &selectedElectron_mvaFall17V1noIso_WPL() { return nt.selectedElectron_mvaFall17V1noIso_WPL(); }
    const vector<float> &selectedElectron_mvaFall17V2Iso() { return nt.selectedElectron_mvaFall17V2Iso(); }
    const vector<float> &selectedElectron_mvaFall17V2Iso_WP80() { return nt.selectedElectron_mvaFall17V2Iso_WP80(); }
    const vector<float> &selectedElectron_mvaFall17V2Iso_WP90() { return nt.selectedElectron_mvaFall17V2Iso_WP90(); }
    const vector<float> &selectedElectron_mvaFall17V2Iso_WPL() { return nt.selectedElectron_mvaFall17V2Iso_WPL(); }
    const vector<float> &selectedElectron_mvaFall17V2noIso() { return nt.selectedElectron_mvaFall17V2noIso(); }
    const vector<float> &selectedElectron_mvaFall17V2noIso_WP80() { return nt.selectedElectron_mvaFall17V2noIso_WP80(); }
    const vector<float> &selectedElectron_mvaFall17V2noIso_WP90() { return nt.selectedElectron_mvaFall17V2noIso_WP90(); }
    const vector<float> &selectedElectron_mvaFall17V2noIso_WPL() { return nt.selectedElectron_mvaFall17V2noIso_WPL(); }
    const vector<float> &selectedElectron_mvaSpring16GP() { return nt.selectedElectron_mvaSpring16GP(); }
    const vector<float> &selectedElectron_mvaSpring16GP_WP80() { return nt.selectedElectron_mvaSpring16GP_WP80(); }
    const vector<float> &selectedElectron_mvaSpring16GP_WP90() { return nt.selectedElectron_mvaSpring16GP_WP90(); }
    const vector<float> &selectedElectron_mvaSpring16HZZ() { return nt.selectedElectron_mvaSpring16HZZ(); }
    const vector<float> &selectedElectron_mvaSpring16HZZ_WPL() { return nt.selectedElectron_mvaSpring16HZZ_WPL(); }
    const vector<float> &selectedElectron_mvaTTH() { return nt.selectedElectron_mvaTTH(); }
    const vector<LorentzVector> &selectedElectron_p4() { return nt.selectedElectron_p4(); }
    const vector<float> &selectedElectron_pdgId() { return nt.selectedElectron_pdgId(); }
    const vector<float> &selectedElectron_pfRelIso03_all() { return nt.selectedElectron_pfRelIso03_all(); }
    const vector<float> &selectedElectron_pfRelIso03_chg() { return nt.selectedElectron_pfRelIso03_chg(); }
    const vector<float> &selectedElectron_phi() { return nt.selectedElectron_phi(); }
    const vector<float> &selectedElectron_phiSVFit() { return nt.selectedElectron_phiSVFit(); }
    const vector<float> &selectedElectron_photonIdx() { return nt.selectedElectron_photonIdx(); }
    const vector<float> &selectedElectron_pt() { return nt.selectedElectron_pt(); }
    const vector<float> &selectedElectron_ptSVFit() { return nt.selectedElectron_ptSVFit(); }
    const vector<float> &selectedElectron_r9() { return nt.selectedElectron_r9(); }
    const vector<float> &selectedElectron_scEtOverPt() { return nt.selectedElectron_scEtOverPt(); }
    const vector<float> &selectedElectron_seedGain() { return nt.selectedElectron_seedGain(); }
    const vector<float> &selectedElectron_sieie() { return nt.selectedElectron_sieie(); }
    const vector<float> &selectedElectron_sip3d() { return nt.selectedElectron_sip3d(); }
    const vector<float> &selectedElectron_tightCharge() { return nt.selectedElectron_tightCharge(); }
    const vector<float> &selectedElectron_vidNestedWPBitmap() { return nt.selectedElectron_vidNestedWPBitmap(); }
    const vector<float> &selectedElectron_vidNestedWPBitmapHEEP() { return nt.selectedElectron_vidNestedWPBitmapHEEP(); }
    const vector<float> &selectedElectron_vidNestedWPBitmapSpring15() { return nt.selectedElectron_vidNestedWPBitmapSpring15(); }
    const vector<float> &selectedElectron_vidNestedWPBitmapSum16() { return nt.selectedElectron_vidNestedWPBitmapSum16(); }
    const vector<float> &selectedMuon_charge() { return nt.selectedMuon_charge(); }
    const vector<float> &selectedMuon_cleanmask() { return nt.selectedMuon_cleanmask(); }
    const vector<float> &selectedMuon_dxy() { return nt.selectedMuon_dxy(); }
    const vector<float> &selectedMuon_dxyErr() { return nt.selectedMuon_dxyErr(); }
    const vector<float> &selectedMuon_dxybs() { return nt.selectedMuon_dxybs(); }
    const vector<float> &selectedMuon_dz() { return nt.selectedMuon_dz(); }
    const vector<float> &selectedMuon_dzErr() { return nt.selectedMuon_dzErr(); }
    const vector<float> &selectedMuon_eta() { return nt.selectedMuon_eta(); }
    const vector<float> &selectedMuon_etaSVFit() { return nt.selectedMuon_etaSVFit(); }
    const vector<float> &selectedMuon_fsrPhotonIdx() { return nt.selectedMuon_fsrPhotonIdx(); }
    const vector<float> &selectedMuon_genPartFlav() { return nt.selectedMuon_genPartFlav(); }
    const vector<float> &selectedMuon_genPartIdx() { return nt.selectedMuon_genPartIdx(); }
    const vector<float> &selectedMuon_highPtId() { return nt.selectedMuon_highPtId(); }
    const vector<float> &selectedMuon_highPurity() { return nt.selectedMuon_highPurity(); }
    const vector<float> &selectedMuon_inTimeselectedMuon() { return nt.selectedMuon_inTimeselectedMuon(); }
    const vector<float> &selectedMuon_ip3d() { return nt.selectedMuon_ip3d(); }
    const vector<float> &selectedMuon_isGlobal() { return nt.selectedMuon_isGlobal(); }
    const vector<float> &selectedMuon_isPFcand() { return nt.selectedMuon_isPFcand(); }
    const vector<float> &selectedMuon_isTracker() { return nt.selectedMuon_isTracker(); }
    const vector<float> &selectedMuon_jetIdx() { return nt.selectedMuon_jetIdx(); }
    const vector<float> &selectedMuon_jetPtRelv2() { return nt.selectedMuon_jetPtRelv2(); }
    const vector<float> &selectedMuon_jetRelIso() { return nt.selectedMuon_jetRelIso(); }
    const vector<float> &selectedMuon_looseId() { return nt.selectedMuon_looseId(); }
    const vector<float> &selectedMuon_mSVFit() { return nt.selectedMuon_mSVFit(); }
    const vector<float> &selectedMuon_mass() { return nt.selectedMuon_mass(); }
    const vector<float> &selectedMuon_mediumId() { return nt.selectedMuon_mediumId(); }
    const vector<float> &selectedMuon_mediumPromptId() { return nt.selectedMuon_mediumPromptId(); }
    const vector<float> &selectedMuon_miniIsoId() { return nt.selectedMuon_miniIsoId(); }
    const vector<float> &selectedMuon_miniPFRelIso_all() { return nt.selectedMuon_miniPFRelIso_all(); }
    const vector<float> &selectedMuon_miniPFRelIso_chg() { return nt.selectedMuon_miniPFRelIso_chg(); }
    const vector<float> &selectedMuon_multiIsoId() { return nt.selectedMuon_multiIsoId(); }
    const vector<float> &selectedMuon_mvaId() { return nt.selectedMuon_mvaId(); }
    const vector<float> &selectedMuon_mvaLowPt() { return nt.selectedMuon_mvaLowPt(); }
    const vector<float> &selectedMuon_mvaTTH() { return nt.selectedMuon_mvaTTH(); }
    const vector<float> &selectedMuon_nStations() { return nt.selectedMuon_nStations(); }
    const vector<float> &selectedMuon_nTrackerLayers() { return nt.selectedMuon_nTrackerLayers(); }
    const vector<LorentzVector> &selectedMuon_p4() { return nt.selectedMuon_p4(); }
    const vector<float> &selectedMuon_pdgId() { return nt.selectedMuon_pdgId(); }
    const vector<float> &selectedMuon_pfIsoId() { return nt.selectedMuon_pfIsoId(); }
    const vector<float> &selectedMuon_pfRelIso03_all() { return nt.selectedMuon_pfRelIso03_all(); }
    const vector<float> &selectedMuon_pfRelIso03_chg() { return nt.selectedMuon_pfRelIso03_chg(); }
    const vector<float> &selectedMuon_pfRelIso04_all() { return nt.selectedMuon_pfRelIso04_all(); }
    const vector<float> &selectedMuon_phi() { return nt.selectedMuon_phi(); }
    const vector<float> &selectedMuon_phiSVFit() { return nt.selectedMuon_phiSVFit(); }
    const vector<float> &selectedMuon_pt() { return nt.selectedMuon_pt(); }
    const vector<float> &selectedMuon_ptErr() { return nt.selectedMuon_ptErr(); }
    const vector<float> &selectedMuon_ptSVFit() { return nt.selectedMuon_ptSVFit(); }
    const vector<float> &selectedMuon_segmentComp() { return nt.selectedMuon_segmentComp(); }
    const vector<float> &selectedMuon_sip3d() { return nt.selectedMuon_sip3d(); }
    const vector<float> &selectedMuon_softId() { return nt.selectedMuon_softId(); }
    const vector<float> &selectedMuon_softMva() { return nt.selectedMuon_softMva(); }
    const vector<float> &selectedMuon_softMvaId() { return nt.selectedMuon_softMvaId(); }
    const vector<float> &selectedMuon_tightCharge() { return nt.selectedMuon_tightCharge(); }
    const vector<float> &selectedMuon_tightId() { return nt.selectedMuon_tightId(); }
    const vector<float> &selectedMuon_tkIsoId() { return nt.selectedMuon_tkIsoId(); }
    const vector<float> &selectedMuon_tkRelIso() { return nt.selectedMuon_tkRelIso(); }
    const vector<float> &selectedMuon_triggerIdLoose() { return nt.selectedMuon_triggerIdLoose(); }
    const vector<float> &selectedMuon_tunepRelPt() { return nt.selectedMuon_tunepRelPt(); }
    const vector<float> &selectedPhoton_charge() { return nt.selectedPhoton_charge(); }
    const vector<float> &selectedPhoton_chargedHadronIso() { return nt.selectedPhoton_chargedHadronIso(); }
    const vector<float> &selectedPhoton_cleanmask() { return nt.selectedPhoton_cleanmask(); }
    const vector<float> &selectedPhoton_cutBased() { return nt.selectedPhoton_cutBased(); }
    const vector<float> &selectedPhoton_cutBased_Fall17V1Bitmap() { return nt.selectedPhoton_cutBased_Fall17V1Bitmap(); }
    const vector<float> &selectedPhoton_cutBased_Spring16V2p2() { return nt.selectedPhoton_cutBased_Spring16V2p2(); }
    const vector<float> &selectedPhoton_eCorr() { return nt.selectedPhoton_eCorr(); }
    const vector<float> &selectedPhoton_electronIdx() { return nt.selectedPhoton_electronIdx(); }
    const vector<float> &selectedPhoton_electronVeto() { return nt.selectedPhoton_electronVeto(); }
    const vector<float> &selectedPhoton_energyErr() { return nt.selectedPhoton_energyErr(); }
    const vector<float> &selectedPhoton_eta() { return nt.selectedPhoton_eta(); }
    const vector<float> &selectedPhoton_genPartFlav() { return nt.selectedPhoton_genPartFlav(); }
    const vector<float> &selectedPhoton_genPartIdx() { return nt.selectedPhoton_genPartIdx(); }
    const vector<float> &selectedPhoton_hoe() { return nt.selectedPhoton_hoe(); }
    const vector<float> &selectedPhoton_isScEtaEB() { return nt.selectedPhoton_isScEtaEB(); }
    const vector<float> &selectedPhoton_isScEtaEE() { return nt.selectedPhoton_isScEtaEE(); }
    const vector<float> &selectedPhoton_jetIdx() { return nt.selectedPhoton_jetIdx(); }
    const vector<float> &selectedPhoton_mass() { return nt.selectedPhoton_mass(); }
    const vector<float> &selectedPhoton_mvaID() { return nt.selectedPhoton_mvaID(); }
    const vector<float> &selectedPhoton_mvaID_Fall17V1p1() { return nt.selectedPhoton_mvaID_Fall17V1p1(); }
    const vector<float> &selectedPhoton_mvaID_Spring16nonTrigV1() { return nt.selectedPhoton_mvaID_Spring16nonTrigV1(); }
    const vector<float> &selectedPhoton_mvaID_WP80() { return nt.selectedPhoton_mvaID_WP80(); }
    const vector<float> &selectedPhoton_mvaID_WP90() { return nt.selectedPhoton_mvaID_WP90(); }
    const vector<LorentzVector> &selectedPhoton_p4() { return nt.selectedPhoton_p4(); }
    const vector<float> &selectedPhoton_pdgId() { return nt.selectedPhoton_pdgId(); }
    const vector<float> &selectedPhoton_pfRelIso03_all() { return nt.selectedPhoton_pfRelIso03_all(); }
    const vector<float> &selectedPhoton_pfRelIso03_chg() { return nt.selectedPhoton_pfRelIso03_chg(); }
    const vector<float> &selectedPhoton_phi() { return nt.selectedPhoton_phi(); }
    const vector<float> &selectedPhoton_photonIso() { return nt.selectedPhoton_photonIso(); }
    const vector<float> &selectedPhoton_pixelSeed() { return nt.selectedPhoton_pixelSeed(); }
    const vector<float> &selectedPhoton_pt() { return nt.selectedPhoton_pt(); }
    const vector<float> &selectedPhoton_r9() { return nt.selectedPhoton_r9(); }
    const vector<float> &selectedPhoton_seedGain() { return nt.selectedPhoton_seedGain(); }
    const vector<float> &selectedPhoton_sieie() { return nt.selectedPhoton_sieie(); }
    const vector<float> &selectedPhoton_trkSumPtHollowConeDR03() { return nt.selectedPhoton_trkSumPtHollowConeDR03(); }
    const vector<float> &selectedPhoton_vidNestedWPBitmap() { return nt.selectedPhoton_vidNestedWPBitmap(); }
    const vector<float> &selectedPhoton_vidNestedWPBitmap_Spring16V2p2() { return nt.selectedPhoton_vidNestedWPBitmap_Spring16V2p2(); }
    const vector<float> &selectedTauLoose_charge() { return nt.selectedTauLoose_charge(); }
    const vector<float> &selectedTauLoose_chargedIso() { return nt.selectedTauLoose_chargedIso(); }
    const vector<float> &selectedTauLoose_cleanmask() { return nt.selectedTauLoose_cleanmask(); }
    const vector<float> &selectedTauLoose_decayMode() { return nt.selectedTauLoose_decayMode(); }
    const vector<float> &selectedTauLoose_dxy() { return nt.selectedTauLoose_dxy(); }
    const vector<float> &selectedTauLoose_dz() { return nt.selectedTauLoose_dz(); }
    const vector<float> &selectedTauLoose_eta() { return nt.selectedTauLoose_eta(); }
    const vector<float> &selectedTauLoose_etaSVFit() { return nt.selectedTauLoose_etaSVFit(); }
    const vector<float> &selectedTauLoose_genPartFlav() { return nt.selectedTauLoose_genPartFlav(); }
    const vector<float> &selectedTauLoose_genPartIdx() { return nt.selectedTauLoose_genPartIdx(); }
    const vector<float> &selectedTauLoose_idAntiEle() { return nt.selectedTauLoose_idAntiEle(); }
    const vector<float> &selectedTauLoose_idAntiEle2018() { return nt.selectedTauLoose_idAntiEle2018(); }
    const vector<float> &selectedTauLoose_idAntiMu() { return nt.selectedTauLoose_idAntiMu(); }
    const vector<float> &selectedTauLoose_idDecayMode() { return nt.selectedTauLoose_idDecayMode(); }
    const vector<float> &selectedTauLoose_idDecayModeNewDMs() { return nt.selectedTauLoose_idDecayModeNewDMs(); }
    const vector<float> &selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe() { return nt.selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe(); }
    const vector<float> &selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet() { return nt.selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet(); }
    const vector<float> &selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu() { return nt.selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu(); }
    const vector<float> &selectedTauLoose_idMVAnewDM2017v2() { return nt.selectedTauLoose_idMVAnewDM2017v2(); }
    const vector<float> &selectedTauLoose_idMVAoldDM() { return nt.selectedTauLoose_idMVAoldDM(); }
    const vector<float> &selectedTauLoose_idMVAoldDM2017v1() { return nt.selectedTauLoose_idMVAoldDM2017v1(); }
    const vector<float> &selectedTauLoose_idMVAoldDM2017v2() { return nt.selectedTauLoose_idMVAoldDM2017v2(); }
    const vector<float> &selectedTauLoose_idMVAoldDMdR032017v2() { return nt.selectedTauLoose_idMVAoldDMdR032017v2(); }
    const vector<float> &selectedTauLoose_jetIdx() { return nt.selectedTauLoose_jetIdx(); }
    const vector<float> &selectedTauLoose_leadTkDeltaEta() { return nt.selectedTauLoose_leadTkDeltaEta(); }
    const vector<float> &selectedTauLoose_leadTkDeltaPhi() { return nt.selectedTauLoose_leadTkDeltaPhi(); }
    const vector<float> &selectedTauLoose_leadTkPtOverselectedTauLoosePt() { return nt.selectedTauLoose_leadTkPtOverselectedTauLoosePt(); }
    const vector<float> &selectedTauLoose_mSVFit() { return nt.selectedTauLoose_mSVFit(); }
    const vector<float> &selectedTauLoose_mass() { return nt.selectedTauLoose_mass(); }
    const vector<float> &selectedTauLoose_neutralIso() { return nt.selectedTauLoose_neutralIso(); }
    const vector<LorentzVector> &selectedTauLoose_p4() { return nt.selectedTauLoose_p4(); }
    const vector<float> &selectedTauLoose_phi() { return nt.selectedTauLoose_phi(); }
    const vector<float> &selectedTauLoose_phiSVFit() { return nt.selectedTauLoose_phiSVFit(); }
    const vector<float> &selectedTauLoose_photonsOutsideSignalCone() { return nt.selectedTauLoose_photonsOutsideSignalCone(); }
    const vector<float> &selectedTauLoose_pt() { return nt.selectedTauLoose_pt(); }
    const vector<float> &selectedTauLoose_ptSVFit() { return nt.selectedTauLoose_ptSVFit(); }
    const vector<float> &selectedTauLoose_puCorr() { return nt.selectedTauLoose_puCorr(); }
    const vector<float> &selectedTauLoose_rawAntiEle() { return nt.selectedTauLoose_rawAntiEle(); }
    const vector<float> &selectedTauLoose_rawAntiEle2018() { return nt.selectedTauLoose_rawAntiEle2018(); }
    const vector<float> &selectedTauLoose_rawAntiEleCat() { return nt.selectedTauLoose_rawAntiEleCat(); }
    const vector<float> &selectedTauLoose_rawAntiEleCat2018() { return nt.selectedTauLoose_rawAntiEleCat2018(); }
    const vector<float> &selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe() { return nt.selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe(); }
    const vector<float> &selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet() { return nt.selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet(); }
    const vector<float> &selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu() { return nt.selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu(); }
    const vector<float> &selectedTauLoose_rawIso() { return nt.selectedTauLoose_rawIso(); }
    const vector<float> &selectedTauLoose_rawIsodR03() { return nt.selectedTauLoose_rawIsodR03(); }
    const vector<float> &selectedTauLoose_rawMVAnewDM2017v2() { return nt.selectedTauLoose_rawMVAnewDM2017v2(); }
    const vector<float> &selectedTauLoose_rawMVAoldDM() { return nt.selectedTauLoose_rawMVAoldDM(); }
    const vector<float> &selectedTauLoose_rawMVAoldDM2017v1() { return nt.selectedTauLoose_rawMVAoldDM2017v1(); }
    const vector<float> &selectedTauLoose_rawMVAoldDM2017v2() { return nt.selectedTauLoose_rawMVAoldDM2017v2(); }
    const vector<float> &selectedTauLoose_rawMVAoldDMdR032017v2() { return nt.selectedTauLoose_rawMVAoldDMdR032017v2(); }
    const vector<int> &tauHidxLoose() { return nt.tauHidxLoose(); }
    const Int_t &year() { return nt.year(); }
    Bool_t isData() { return nt.isData(); }
    vector<float> GetVF(const string &name) {
        if (name == "CorrT1METJet_area") return nt.CorrT1METJet_area();
        else if (name == "CorrT1METJet_eta") return nt.CorrT1METJet_eta();
        else if (name == "CorrT1METJet_muonSubtrFactor") return nt.CorrT1METJet_muonSubtrFactor();
        else if (name == "CorrT1METJet_phi") return nt.CorrT1METJet_phi();
        else if (name == "CorrT1METJet_rawPt") return nt.CorrT1METJet_rawPt();
        else if (name == "Electron_deltaEtaSC") return nt.Electron_deltaEtaSC();
        else if (name == "Electron_dr03EcalRecHitSumEt") return nt.Electron_dr03EcalRecHitSumEt();
        else if (name == "Electron_dr03HcalDepth1TowerSumEt") return nt.Electron_dr03HcalDepth1TowerSumEt();
        else if (name == "Electron_dr03TkSumPt") return nt.Electron_dr03TkSumPt();
        else if (name == "Electron_dr03TkSumPtHEEP") return nt.Electron_dr03TkSumPtHEEP();
        else if (name == "Electron_dxy") return nt.Electron_dxy();
        else if (name == "Electron_dxyErr") return nt.Electron_dxyErr();
        else if (name == "Electron_dz") return nt.Electron_dz();
        else if (name == "Electron_dzErr") return nt.Electron_dzErr();
        else if (name == "Electron_eCorr") return nt.Electron_eCorr();
        else if (name == "Electron_eInvMinusPInv") return nt.Electron_eInvMinusPInv();
        else if (name == "Electron_energyErr") return nt.Electron_energyErr();
        else if (name == "Electron_eta") return nt.Electron_eta();
        else if (name == "Electron_hoe") return nt.Electron_hoe();
        else if (name == "Electron_ip3d") return nt.Electron_ip3d();
        else if (name == "Electron_jetPtRelv2") return nt.Electron_jetPtRelv2();
        else if (name == "Electron_jetRelIso") return nt.Electron_jetRelIso();
        else if (name == "Electron_mass") return nt.Electron_mass();
        else if (name == "Electron_miniPFRelIso_all") return nt.Electron_miniPFRelIso_all();
        else if (name == "Electron_miniPFRelIso_chg") return nt.Electron_miniPFRelIso_chg();
        else if (name == "Electron_mvaFall17V1Iso") return nt.Electron_mvaFall17V1Iso();
        else if (name == "Electron_mvaFall17V1noIso") return nt.Electron_mvaFall17V1noIso();
        else if (name == "Electron_mvaFall17V2Iso") return nt.Electron_mvaFall17V2Iso();
        else if (name == "Electron_mvaFall17V2noIso") return nt.Electron_mvaFall17V2noIso();
        else if (name == "Electron_mvaSpring16GP") return nt.Electron_mvaSpring16GP();
        else if (name == "Electron_mvaSpring16HZZ") return nt.Electron_mvaSpring16HZZ();
        else if (name == "Electron_mvaTTH") return nt.Electron_mvaTTH();
        else if (name == "Electron_pfRelIso03_all") return nt.Electron_pfRelIso03_all();
        else if (name == "Electron_pfRelIso03_chg") return nt.Electron_pfRelIso03_chg();
        else if (name == "Electron_phi") return nt.Electron_phi();
        else if (name == "Electron_pt") return nt.Electron_pt();
        else if (name == "Electron_r9") return nt.Electron_r9();
        else if (name == "Electron_scEtOverPt") return nt.Electron_scEtOverPt();
        else if (name == "Electron_sieie") return nt.Electron_sieie();
        else if (name == "Electron_sip3d") return nt.Electron_sip3d();
        else if (name == "FsrPhoton_dROverEt2") return nt.FsrPhoton_dROverEt2();
        else if (name == "FsrPhoton_eta") return nt.FsrPhoton_eta();
        else if (name == "FsrPhoton_phi") return nt.FsrPhoton_phi();
        else if (name == "FsrPhoton_pt") return nt.FsrPhoton_pt();
        else if (name == "FsrPhoton_relIso03") return nt.FsrPhoton_relIso03();
        else if (name == "GenDressedLepton_eta") return nt.GenDressedLepton_eta();
        else if (name == "GenDressedLepton_mass") return nt.GenDressedLepton_mass();
        else if (name == "GenDressedLepton_phi") return nt.GenDressedLepton_phi();
        else if (name == "GenDressedLepton_pt") return nt.GenDressedLepton_pt();
        else if (name == "GenIsolatedPhoton_eta") return nt.GenIsolatedPhoton_eta();
        else if (name == "GenIsolatedPhoton_mass") return nt.GenIsolatedPhoton_mass();
        else if (name == "GenIsolatedPhoton_phi") return nt.GenIsolatedPhoton_phi();
        else if (name == "GenIsolatedPhoton_pt") return nt.GenIsolatedPhoton_pt();
        else if (name == "GenJetAK8_eta") return nt.GenJetAK8_eta();
        else if (name == "GenJetAK8_mass") return nt.GenJetAK8_mass();
        else if (name == "GenJetAK8_phi") return nt.GenJetAK8_phi();
        else if (name == "GenJetAK8_pt") return nt.GenJetAK8_pt();
        else if (name == "GenJet_eta") return nt.GenJet_eta();
        else if (name == "GenJet_mass") return nt.GenJet_mass();
        else if (name == "GenJet_phi") return nt.GenJet_phi();
        else if (name == "GenJet_pt") return nt.GenJet_pt();
        else if (name == "GenPart_eta") return nt.GenPart_eta();
        else if (name == "GenPart_mass") return nt.GenPart_mass();
        else if (name == "GenPart_phi") return nt.GenPart_phi();
        else if (name == "GenPart_pt") return nt.GenPart_pt();
        else if (name == "GenVisTau_eta") return nt.GenVisTau_eta();
        else if (name == "GenVisTau_mass") return nt.GenVisTau_mass();
        else if (name == "GenVisTau_phi") return nt.GenVisTau_phi();
        else if (name == "GenVisTau_pt") return nt.GenVisTau_pt();
        else if (name == "IsoTrack_dxy") return nt.IsoTrack_dxy();
        else if (name == "IsoTrack_dz") return nt.IsoTrack_dz();
        else if (name == "IsoTrack_eta") return nt.IsoTrack_eta();
        else if (name == "IsoTrack_miniPFRelIso_all") return nt.IsoTrack_miniPFRelIso_all();
        else if (name == "IsoTrack_miniPFRelIso_chg") return nt.IsoTrack_miniPFRelIso_chg();
        else if (name == "IsoTrack_pfRelIso03_all") return nt.IsoTrack_pfRelIso03_all();
        else if (name == "IsoTrack_pfRelIso03_chg") return nt.IsoTrack_pfRelIso03_chg();
        else if (name == "IsoTrack_phi") return nt.IsoTrack_phi();
        else if (name == "IsoTrack_pt") return nt.IsoTrack_pt();
        else if (name == "Jet_area") return nt.Jet_area();
        else if (name == "Jet_bRegCorr") return nt.Jet_bRegCorr();
        else if (name == "Jet_bRegRes") return nt.Jet_bRegRes();
        else if (name == "Jet_btagCMVA") return nt.Jet_btagCMVA();
        else if (name == "Jet_btagCSVV2") return nt.Jet_btagCSVV2();
        else if (name == "Jet_btagDeepB") return nt.Jet_btagDeepB();
        else if (name == "Jet_btagDeepC") return nt.Jet_btagDeepC();
        else if (name == "Jet_btagDeepFlavB") return nt.Jet_btagDeepFlavB();
        else if (name == "Jet_btagDeepFlavC") return nt.Jet_btagDeepFlavC();
        else if (name == "Jet_cRegCorr") return nt.Jet_cRegCorr();
        else if (name == "Jet_cRegRes") return nt.Jet_cRegRes();
        else if (name == "Jet_chEmEF") return nt.Jet_chEmEF();
        else if (name == "Jet_chFPV0EF") return nt.Jet_chFPV0EF();
        else if (name == "Jet_chFPV1EF") return nt.Jet_chFPV1EF();
        else if (name == "Jet_chFPV2EF") return nt.Jet_chFPV2EF();
        else if (name == "Jet_chFPV3EF") return nt.Jet_chFPV3EF();
        else if (name == "Jet_chHEF") return nt.Jet_chHEF();
        else if (name == "Jet_corr_JEC") return nt.Jet_corr_JEC();
        else if (name == "Jet_corr_JER") return nt.Jet_corr_JER();
        else if (name == "Jet_eta") return nt.Jet_eta();
        else if (name == "Jet_mass") return nt.Jet_mass();
        else if (name == "Jet_mass_jerDown") return nt.Jet_mass_jerDown();
        else if (name == "Jet_mass_jerUp") return nt.Jet_mass_jerUp();
        else if (name == "Jet_mass_jesTotalDown") return nt.Jet_mass_jesTotalDown();
        else if (name == "Jet_mass_jesTotalUp") return nt.Jet_mass_jesTotalUp();
        else if (name == "Jet_mass_nom") return nt.Jet_mass_nom();
        else if (name == "Jet_mass_raw") return nt.Jet_mass_raw();
        else if (name == "Jet_muEF") return nt.Jet_muEF();
        else if (name == "Jet_muonSubtrFactor") return nt.Jet_muonSubtrFactor();
        else if (name == "Jet_neEmEF") return nt.Jet_neEmEF();
        else if (name == "Jet_neHEF") return nt.Jet_neHEF();
        else if (name == "Jet_phi") return nt.Jet_phi();
        else if (name == "Jet_pt") return nt.Jet_pt();
        else if (name == "Jet_pt_jerDown") return nt.Jet_pt_jerDown();
        else if (name == "Jet_pt_jerUp") return nt.Jet_pt_jerUp();
        else if (name == "Jet_pt_jesTotalDown") return nt.Jet_pt_jesTotalDown();
        else if (name == "Jet_pt_jesTotalUp") return nt.Jet_pt_jesTotalUp();
        else if (name == "Jet_pt_nom") return nt.Jet_pt_nom();
        else if (name == "Jet_pt_raw") return nt.Jet_pt_raw();
        else if (name == "Jet_puIdDisc") return nt.Jet_puIdDisc();
        else if (name == "Jet_qgl") return nt.Jet_qgl();
        else if (name == "Jet_rawFactor") return nt.Jet_rawFactor();
        else if (name == "LHEPart_eta") return nt.LHEPart_eta();
        else if (name == "LHEPart_incomingpz") return nt.LHEPart_incomingpz();
        else if (name == "LHEPart_mass") return nt.LHEPart_mass();
        else if (name == "LHEPart_phi") return nt.LHEPart_phi();
        else if (name == "LHEPart_pt") return nt.LHEPart_pt();
        else if (name == "LHEPdfWeight") return nt.LHEPdfWeight();
        else if (name == "LHEReweightingWeight") return nt.LHEReweightingWeight();
        else if (name == "LHEScaleWeight") return nt.LHEScaleWeight();
        else if (name == "Muon_correctedDown_pt") return nt.Muon_correctedDown_pt();
        else if (name == "Muon_correctedUp_pt") return nt.Muon_correctedUp_pt();
        else if (name == "Muon_corrected_pt") return nt.Muon_corrected_pt();
        else if (name == "Muon_dxy") return nt.Muon_dxy();
        else if (name == "Muon_dxyErr") return nt.Muon_dxyErr();
        else if (name == "Muon_dxybs") return nt.Muon_dxybs();
        else if (name == "Muon_dz") return nt.Muon_dz();
        else if (name == "Muon_dzErr") return nt.Muon_dzErr();
        else if (name == "Muon_eta") return nt.Muon_eta();
        else if (name == "Muon_ip3d") return nt.Muon_ip3d();
        else if (name == "Muon_jetPtRelv2") return nt.Muon_jetPtRelv2();
        else if (name == "Muon_jetRelIso") return nt.Muon_jetRelIso();
        else if (name == "Muon_mass") return nt.Muon_mass();
        else if (name == "Muon_miniPFRelIso_all") return nt.Muon_miniPFRelIso_all();
        else if (name == "Muon_miniPFRelIso_chg") return nt.Muon_miniPFRelIso_chg();
        else if (name == "Muon_mvaLowPt") return nt.Muon_mvaLowPt();
        else if (name == "Muon_mvaTTH") return nt.Muon_mvaTTH();
        else if (name == "Muon_pfRelIso03_all") return nt.Muon_pfRelIso03_all();
        else if (name == "Muon_pfRelIso03_chg") return nt.Muon_pfRelIso03_chg();
        else if (name == "Muon_pfRelIso04_all") return nt.Muon_pfRelIso04_all();
        else if (name == "Muon_phi") return nt.Muon_phi();
        else if (name == "Muon_pt") return nt.Muon_pt();
        else if (name == "Muon_ptErr") return nt.Muon_ptErr();
        else if (name == "Muon_segmentComp") return nt.Muon_segmentComp();
        else if (name == "Muon_sip3d") return nt.Muon_sip3d();
        else if (name == "Muon_softMva") return nt.Muon_softMva();
        else if (name == "Muon_tkRelIso") return nt.Muon_tkRelIso();
        else if (name == "Muon_tunepRelPt") return nt.Muon_tunepRelPt();
        else if (name == "OtherPV_z") return nt.OtherPV_z();
        else if (name == "PSWeight") return nt.PSWeight();
        else if (name == "Photon_chargedHadronIso") return nt.Photon_chargedHadronIso();
        else if (name == "Photon_eCorr") return nt.Photon_eCorr();
        else if (name == "Photon_energyErr") return nt.Photon_energyErr();
        else if (name == "Photon_eta") return nt.Photon_eta();
        else if (name == "Photon_hoe") return nt.Photon_hoe();
        else if (name == "Photon_mass") return nt.Photon_mass();
        else if (name == "Photon_mvaID") return nt.Photon_mvaID();
        else if (name == "Photon_mvaID_Fall17V1p1") return nt.Photon_mvaID_Fall17V1p1();
        else if (name == "Photon_mvaID_Spring16nonTrigV1") return nt.Photon_mvaID_Spring16nonTrigV1();
        else if (name == "Photon_pfRelIso03_all") return nt.Photon_pfRelIso03_all();
        else if (name == "Photon_pfRelIso03_chg") return nt.Photon_pfRelIso03_chg();
        else if (name == "Photon_phi") return nt.Photon_phi();
        else if (name == "Photon_photonIso") return nt.Photon_photonIso();
        else if (name == "Photon_pt") return nt.Photon_pt();
        else if (name == "Photon_pt_FNUDown") return nt.Photon_pt_FNUDown();
        else if (name == "Photon_pt_FNUUp") return nt.Photon_pt_FNUUp();
        else if (name == "Photon_pt_MCScaleDown") return nt.Photon_pt_MCScaleDown();
        else if (name == "Photon_pt_MCScaleGainDown") return nt.Photon_pt_MCScaleGainDown();
        else if (name == "Photon_pt_MCScaleGainUp") return nt.Photon_pt_MCScaleGainUp();
        else if (name == "Photon_pt_MCScaleUp") return nt.Photon_pt_MCScaleUp();
        else if (name == "Photon_pt_MCSmearDown") return nt.Photon_pt_MCSmearDown();
        else if (name == "Photon_pt_MCSmearUp") return nt.Photon_pt_MCSmearUp();
        else if (name == "Photon_pt_MaterialDown") return nt.Photon_pt_MaterialDown();
        else if (name == "Photon_pt_MaterialUp") return nt.Photon_pt_MaterialUp();
        else if (name == "Photon_pt_ShowerShapeDown") return nt.Photon_pt_ShowerShapeDown();
        else if (name == "Photon_pt_ShowerShapeUp") return nt.Photon_pt_ShowerShapeUp();
        else if (name == "Photon_r9") return nt.Photon_r9();
        else if (name == "Photon_sieie") return nt.Photon_sieie();
        else if (name == "Photon_trkSumPtHollowConeDR03") return nt.Photon_trkSumPtHollowConeDR03();
        else if (name == "SV_chi2") return nt.SV_chi2();
        else if (name == "SV_dlen") return nt.SV_dlen();
        else if (name == "SV_dlenSig") return nt.SV_dlenSig();
        else if (name == "SV_dxy") return nt.SV_dxy();
        else if (name == "SV_dxySig") return nt.SV_dxySig();
        else if (name == "SV_eta") return nt.SV_eta();
        else if (name == "SV_mass") return nt.SV_mass();
        else if (name == "SV_ndof") return nt.SV_ndof();
        else if (name == "SV_pAngle") return nt.SV_pAngle();
        else if (name == "SV_phi") return nt.SV_phi();
        else if (name == "SV_pt") return nt.SV_pt();
        else if (name == "SV_x") return nt.SV_x();
        else if (name == "SV_y") return nt.SV_y();
        else if (name == "SV_z") return nt.SV_z();
        else if (name == "SoftActivityJet_eta") return nt.SoftActivityJet_eta();
        else if (name == "SoftActivityJet_phi") return nt.SoftActivityJet_phi();
        else if (name == "SoftActivityJet_pt") return nt.SoftActivityJet_pt();
        else if (name == "SubGenJetAK8_eta") return nt.SubGenJetAK8_eta();
        else if (name == "SubGenJetAK8_mass") return nt.SubGenJetAK8_mass();
        else if (name == "SubGenJetAK8_phi") return nt.SubGenJetAK8_phi();
        else if (name == "SubGenJetAK8_pt") return nt.SubGenJetAK8_pt();
        else if (name == "SubJet_btagCMVA") return nt.SubJet_btagCMVA();
        else if (name == "SubJet_btagCSVV2") return nt.SubJet_btagCSVV2();
        else if (name == "SubJet_btagDeepB") return nt.SubJet_btagDeepB();
        else if (name == "SubJet_eta") return nt.SubJet_eta();
        else if (name == "SubJet_mass") return nt.SubJet_mass();
        else if (name == "SubJet_n2b1") return nt.SubJet_n2b1();
        else if (name == "SubJet_n3b1") return nt.SubJet_n3b1();
        else if (name == "SubJet_phi") return nt.SubJet_phi();
        else if (name == "SubJet_pt") return nt.SubJet_pt();
        else if (name == "SubJet_rawFactor") return nt.SubJet_rawFactor();
        else if (name == "SubJet_tau1") return nt.SubJet_tau1();
        else if (name == "SubJet_tau2") return nt.SubJet_tau2();
        else if (name == "SubJet_tau3") return nt.SubJet_tau3();
        else if (name == "SubJet_tau4") return nt.SubJet_tau4();
        else if (name == "Tau_chargedIso") return nt.Tau_chargedIso();
        else if (name == "Tau_dxy") return nt.Tau_dxy();
        else if (name == "Tau_dz") return nt.Tau_dz();
        else if (name == "Tau_eta") return nt.Tau_eta();
        else if (name == "Tau_leadTkDeltaEta") return nt.Tau_leadTkDeltaEta();
        else if (name == "Tau_leadTkDeltaPhi") return nt.Tau_leadTkDeltaPhi();
        else if (name == "Tau_leadTkPtOverTauPt") return nt.Tau_leadTkPtOverTauPt();
        else if (name == "Tau_mass") return nt.Tau_mass();
        else if (name == "Tau_neutralIso") return nt.Tau_neutralIso();
        else if (name == "Tau_phi") return nt.Tau_phi();
        else if (name == "Tau_photonsOutsideSignalCone") return nt.Tau_photonsOutsideSignalCone();
        else if (name == "Tau_pt") return nt.Tau_pt();
        else if (name == "Tau_puCorr") return nt.Tau_puCorr();
        else if (name == "Tau_rawAntiEle") return nt.Tau_rawAntiEle();
        else if (name == "Tau_rawAntiEle2018") return nt.Tau_rawAntiEle2018();
        else if (name == "Tau_rawDeepTau2017v2p1VSe") return nt.Tau_rawDeepTau2017v2p1VSe();
        else if (name == "Tau_rawDeepTau2017v2p1VSjet") return nt.Tau_rawDeepTau2017v2p1VSjet();
        else if (name == "Tau_rawDeepTau2017v2p1VSmu") return nt.Tau_rawDeepTau2017v2p1VSmu();
        else if (name == "Tau_rawIso") return nt.Tau_rawIso();
        else if (name == "Tau_rawIsodR03") return nt.Tau_rawIsodR03();
        else if (name == "Tau_rawMVAnewDM2017v2") return nt.Tau_rawMVAnewDM2017v2();
        else if (name == "Tau_rawMVAoldDM") return nt.Tau_rawMVAoldDM();
        else if (name == "Tau_rawMVAoldDM2017v1") return nt.Tau_rawMVAoldDM2017v1();
        else if (name == "Tau_rawMVAoldDM2017v2") return nt.Tau_rawMVAoldDM2017v2();
        else if (name == "Tau_rawMVAoldDMdR032017v2") return nt.Tau_rawMVAoldDMdR032017v2();
        else if (name == "TrigObj_eta") return nt.TrigObj_eta();
        else if (name == "TrigObj_l1pt") return nt.TrigObj_l1pt();
        else if (name == "TrigObj_l1pt_2") return nt.TrigObj_l1pt_2();
        else if (name == "TrigObj_l2pt") return nt.TrigObj_l2pt();
        else if (name == "TrigObj_phi") return nt.TrigObj_phi();
        else if (name == "TrigObj_pt") return nt.TrigObj_pt();
        else if (name == "selectedElectron_charge") return nt.selectedElectron_charge();
        else if (name == "selectedElectron_cleanmask") return nt.selectedElectron_cleanmask();
        else if (name == "selectedElectron_convVeto") return nt.selectedElectron_convVeto();
        else if (name == "selectedElectron_cutBased") return nt.selectedElectron_cutBased();
        else if (name == "selectedElectron_cutBased_Fall17_V1") return nt.selectedElectron_cutBased_Fall17_V1();
        else if (name == "selectedElectron_cutBased_HEEP") return nt.selectedElectron_cutBased_HEEP();
        else if (name == "selectedElectron_cutBased_HLTPreSel") return nt.selectedElectron_cutBased_HLTPreSel();
        else if (name == "selectedElectron_cutBased_Spring15") return nt.selectedElectron_cutBased_Spring15();
        else if (name == "selectedElectron_cutBased_Sum16") return nt.selectedElectron_cutBased_Sum16();
        else if (name == "selectedElectron_deltaEtaSC") return nt.selectedElectron_deltaEtaSC();
        else if (name == "selectedElectron_dr03EcalRecHitSumEt") return nt.selectedElectron_dr03EcalRecHitSumEt();
        else if (name == "selectedElectron_dr03HcalDepth1TowerSumEt") return nt.selectedElectron_dr03HcalDepth1TowerSumEt();
        else if (name == "selectedElectron_dr03TkSumPt") return nt.selectedElectron_dr03TkSumPt();
        else if (name == "selectedElectron_dr03TkSumPtHEEP") return nt.selectedElectron_dr03TkSumPtHEEP();
        else if (name == "selectedElectron_dxy") return nt.selectedElectron_dxy();
        else if (name == "selectedElectron_dxyErr") return nt.selectedElectron_dxyErr();
        else if (name == "selectedElectron_dz") return nt.selectedElectron_dz();
        else if (name == "selectedElectron_dzErr") return nt.selectedElectron_dzErr();
        else if (name == "selectedElectron_eCorr") return nt.selectedElectron_eCorr();
        else if (name == "selectedElectron_eInvMinusPInv") return nt.selectedElectron_eInvMinusPInv();
        else if (name == "selectedElectron_energyErr") return nt.selectedElectron_energyErr();
        else if (name == "selectedElectron_eta") return nt.selectedElectron_eta();
        else if (name == "selectedElectron_etaSVFit") return nt.selectedElectron_etaSVFit();
        else if (name == "selectedElectron_genPartFlav") return nt.selectedElectron_genPartFlav();
        else if (name == "selectedElectron_genPartIdx") return nt.selectedElectron_genPartIdx();
        else if (name == "selectedElectron_hoe") return nt.selectedElectron_hoe();
        else if (name == "selectedElectron_ip3d") return nt.selectedElectron_ip3d();
        else if (name == "selectedElectron_isPFcand") return nt.selectedElectron_isPFcand();
        else if (name == "selectedElectron_jetIdx") return nt.selectedElectron_jetIdx();
        else if (name == "selectedElectron_jetPtRelv2") return nt.selectedElectron_jetPtRelv2();
        else if (name == "selectedElectron_jetRelIso") return nt.selectedElectron_jetRelIso();
        else if (name == "selectedElectron_lostHits") return nt.selectedElectron_lostHits();
        else if (name == "selectedElectron_mSVFit") return nt.selectedElectron_mSVFit();
        else if (name == "selectedElectron_mass") return nt.selectedElectron_mass();
        else if (name == "selectedElectron_miniPFRelIso_all") return nt.selectedElectron_miniPFRelIso_all();
        else if (name == "selectedElectron_miniPFRelIso_chg") return nt.selectedElectron_miniPFRelIso_chg();
        else if (name == "selectedElectron_mvaFall17V1Iso") return nt.selectedElectron_mvaFall17V1Iso();
        else if (name == "selectedElectron_mvaFall17V1Iso_WP80") return nt.selectedElectron_mvaFall17V1Iso_WP80();
        else if (name == "selectedElectron_mvaFall17V1Iso_WP90") return nt.selectedElectron_mvaFall17V1Iso_WP90();
        else if (name == "selectedElectron_mvaFall17V1Iso_WPL") return nt.selectedElectron_mvaFall17V1Iso_WPL();
        else if (name == "selectedElectron_mvaFall17V1noIso") return nt.selectedElectron_mvaFall17V1noIso();
        else if (name == "selectedElectron_mvaFall17V1noIso_WP80") return nt.selectedElectron_mvaFall17V1noIso_WP80();
        else if (name == "selectedElectron_mvaFall17V1noIso_WP90") return nt.selectedElectron_mvaFall17V1noIso_WP90();
        else if (name == "selectedElectron_mvaFall17V1noIso_WPL") return nt.selectedElectron_mvaFall17V1noIso_WPL();
        else if (name == "selectedElectron_mvaFall17V2Iso") return nt.selectedElectron_mvaFall17V2Iso();
        else if (name == "selectedElectron_mvaFall17V2Iso_WP80") return nt.selectedElectron_mvaFall17V2Iso_WP80();
        else if (name == "selectedElectron_mvaFall17V2Iso_WP90") return nt.selectedElectron_mvaFall17V2Iso_WP90();
        else if (name == "selectedElectron_mvaFall17V2Iso_WPL") return nt.selectedElectron_mvaFall17V2Iso_WPL();
        else if (name == "selectedElectron_mvaFall17V2noIso") return nt.selectedElectron_mvaFall17V2noIso();
        else if (name == "selectedElectron_mvaFall17V2noIso_WP80") return nt.selectedElectron_mvaFall17V2noIso_WP80();
        else if (name == "selectedElectron_mvaFall17V2noIso_WP90") return nt.selectedElectron_mvaFall17V2noIso_WP90();
        else if (name == "selectedElectron_mvaFall17V2noIso_WPL") return nt.selectedElectron_mvaFall17V2noIso_WPL();
        else if (name == "selectedElectron_mvaSpring16GP") return nt.selectedElectron_mvaSpring16GP();
        else if (name == "selectedElectron_mvaSpring16GP_WP80") return nt.selectedElectron_mvaSpring16GP_WP80();
        else if (name == "selectedElectron_mvaSpring16GP_WP90") return nt.selectedElectron_mvaSpring16GP_WP90();
        else if (name == "selectedElectron_mvaSpring16HZZ") return nt.selectedElectron_mvaSpring16HZZ();
        else if (name == "selectedElectron_mvaSpring16HZZ_WPL") return nt.selectedElectron_mvaSpring16HZZ_WPL();
        else if (name == "selectedElectron_mvaTTH") return nt.selectedElectron_mvaTTH();
        else if (name == "selectedElectron_pdgId") return nt.selectedElectron_pdgId();
        else if (name == "selectedElectron_pfRelIso03_all") return nt.selectedElectron_pfRelIso03_all();
        else if (name == "selectedElectron_pfRelIso03_chg") return nt.selectedElectron_pfRelIso03_chg();
        else if (name == "selectedElectron_phi") return nt.selectedElectron_phi();
        else if (name == "selectedElectron_phiSVFit") return nt.selectedElectron_phiSVFit();
        else if (name == "selectedElectron_photonIdx") return nt.selectedElectron_photonIdx();
        else if (name == "selectedElectron_pt") return nt.selectedElectron_pt();
        else if (name == "selectedElectron_ptSVFit") return nt.selectedElectron_ptSVFit();
        else if (name == "selectedElectron_r9") return nt.selectedElectron_r9();
        else if (name == "selectedElectron_scEtOverPt") return nt.selectedElectron_scEtOverPt();
        else if (name == "selectedElectron_seedGain") return nt.selectedElectron_seedGain();
        else if (name == "selectedElectron_sieie") return nt.selectedElectron_sieie();
        else if (name == "selectedElectron_sip3d") return nt.selectedElectron_sip3d();
        else if (name == "selectedElectron_tightCharge") return nt.selectedElectron_tightCharge();
        else if (name == "selectedElectron_vidNestedWPBitmap") return nt.selectedElectron_vidNestedWPBitmap();
        else if (name == "selectedElectron_vidNestedWPBitmapHEEP") return nt.selectedElectron_vidNestedWPBitmapHEEP();
        else if (name == "selectedElectron_vidNestedWPBitmapSpring15") return nt.selectedElectron_vidNestedWPBitmapSpring15();
        else if (name == "selectedElectron_vidNestedWPBitmapSum16") return nt.selectedElectron_vidNestedWPBitmapSum16();
        else if (name == "selectedMuon_charge") return nt.selectedMuon_charge();
        else if (name == "selectedMuon_cleanmask") return nt.selectedMuon_cleanmask();
        else if (name == "selectedMuon_dxy") return nt.selectedMuon_dxy();
        else if (name == "selectedMuon_dxyErr") return nt.selectedMuon_dxyErr();
        else if (name == "selectedMuon_dxybs") return nt.selectedMuon_dxybs();
        else if (name == "selectedMuon_dz") return nt.selectedMuon_dz();
        else if (name == "selectedMuon_dzErr") return nt.selectedMuon_dzErr();
        else if (name == "selectedMuon_eta") return nt.selectedMuon_eta();
        else if (name == "selectedMuon_etaSVFit") return nt.selectedMuon_etaSVFit();
        else if (name == "selectedMuon_fsrPhotonIdx") return nt.selectedMuon_fsrPhotonIdx();
        else if (name == "selectedMuon_genPartFlav") return nt.selectedMuon_genPartFlav();
        else if (name == "selectedMuon_genPartIdx") return nt.selectedMuon_genPartIdx();
        else if (name == "selectedMuon_highPtId") return nt.selectedMuon_highPtId();
        else if (name == "selectedMuon_highPurity") return nt.selectedMuon_highPurity();
        else if (name == "selectedMuon_inTimeselectedMuon") return nt.selectedMuon_inTimeselectedMuon();
        else if (name == "selectedMuon_ip3d") return nt.selectedMuon_ip3d();
        else if (name == "selectedMuon_isGlobal") return nt.selectedMuon_isGlobal();
        else if (name == "selectedMuon_isPFcand") return nt.selectedMuon_isPFcand();
        else if (name == "selectedMuon_isTracker") return nt.selectedMuon_isTracker();
        else if (name == "selectedMuon_jetIdx") return nt.selectedMuon_jetIdx();
        else if (name == "selectedMuon_jetPtRelv2") return nt.selectedMuon_jetPtRelv2();
        else if (name == "selectedMuon_jetRelIso") return nt.selectedMuon_jetRelIso();
        else if (name == "selectedMuon_looseId") return nt.selectedMuon_looseId();
        else if (name == "selectedMuon_mSVFit") return nt.selectedMuon_mSVFit();
        else if (name == "selectedMuon_mass") return nt.selectedMuon_mass();
        else if (name == "selectedMuon_mediumId") return nt.selectedMuon_mediumId();
        else if (name == "selectedMuon_mediumPromptId") return nt.selectedMuon_mediumPromptId();
        else if (name == "selectedMuon_miniIsoId") return nt.selectedMuon_miniIsoId();
        else if (name == "selectedMuon_miniPFRelIso_all") return nt.selectedMuon_miniPFRelIso_all();
        else if (name == "selectedMuon_miniPFRelIso_chg") return nt.selectedMuon_miniPFRelIso_chg();
        else if (name == "selectedMuon_multiIsoId") return nt.selectedMuon_multiIsoId();
        else if (name == "selectedMuon_mvaId") return nt.selectedMuon_mvaId();
        else if (name == "selectedMuon_mvaLowPt") return nt.selectedMuon_mvaLowPt();
        else if (name == "selectedMuon_mvaTTH") return nt.selectedMuon_mvaTTH();
        else if (name == "selectedMuon_nStations") return nt.selectedMuon_nStations();
        else if (name == "selectedMuon_nTrackerLayers") return nt.selectedMuon_nTrackerLayers();
        else if (name == "selectedMuon_pdgId") return nt.selectedMuon_pdgId();
        else if (name == "selectedMuon_pfIsoId") return nt.selectedMuon_pfIsoId();
        else if (name == "selectedMuon_pfRelIso03_all") return nt.selectedMuon_pfRelIso03_all();
        else if (name == "selectedMuon_pfRelIso03_chg") return nt.selectedMuon_pfRelIso03_chg();
        else if (name == "selectedMuon_pfRelIso04_all") return nt.selectedMuon_pfRelIso04_all();
        else if (name == "selectedMuon_phi") return nt.selectedMuon_phi();
        else if (name == "selectedMuon_phiSVFit") return nt.selectedMuon_phiSVFit();
        else if (name == "selectedMuon_pt") return nt.selectedMuon_pt();
        else if (name == "selectedMuon_ptErr") return nt.selectedMuon_ptErr();
        else if (name == "selectedMuon_ptSVFit") return nt.selectedMuon_ptSVFit();
        else if (name == "selectedMuon_segmentComp") return nt.selectedMuon_segmentComp();
        else if (name == "selectedMuon_sip3d") return nt.selectedMuon_sip3d();
        else if (name == "selectedMuon_softId") return nt.selectedMuon_softId();
        else if (name == "selectedMuon_softMva") return nt.selectedMuon_softMva();
        else if (name == "selectedMuon_softMvaId") return nt.selectedMuon_softMvaId();
        else if (name == "selectedMuon_tightCharge") return nt.selectedMuon_tightCharge();
        else if (name == "selectedMuon_tightId") return nt.selectedMuon_tightId();
        else if (name == "selectedMuon_tkIsoId") return nt.selectedMuon_tkIsoId();
        else if (name == "selectedMuon_tkRelIso") return nt.selectedMuon_tkRelIso();
        else if (name == "selectedMuon_triggerIdLoose") return nt.selectedMuon_triggerIdLoose();
        else if (name == "selectedMuon_tunepRelPt") return nt.selectedMuon_tunepRelPt();
        else if (name == "selectedPhoton_charge") return nt.selectedPhoton_charge();
        else if (name == "selectedPhoton_chargedHadronIso") return nt.selectedPhoton_chargedHadronIso();
        else if (name == "selectedPhoton_cleanmask") return nt.selectedPhoton_cleanmask();
        else if (name == "selectedPhoton_cutBased") return nt.selectedPhoton_cutBased();
        else if (name == "selectedPhoton_cutBased_Fall17V1Bitmap") return nt.selectedPhoton_cutBased_Fall17V1Bitmap();
        else if (name == "selectedPhoton_cutBased_Spring16V2p2") return nt.selectedPhoton_cutBased_Spring16V2p2();
        else if (name == "selectedPhoton_eCorr") return nt.selectedPhoton_eCorr();
        else if (name == "selectedPhoton_electronIdx") return nt.selectedPhoton_electronIdx();
        else if (name == "selectedPhoton_electronVeto") return nt.selectedPhoton_electronVeto();
        else if (name == "selectedPhoton_energyErr") return nt.selectedPhoton_energyErr();
        else if (name == "selectedPhoton_eta") return nt.selectedPhoton_eta();
        else if (name == "selectedPhoton_genPartFlav") return nt.selectedPhoton_genPartFlav();
        else if (name == "selectedPhoton_genPartIdx") return nt.selectedPhoton_genPartIdx();
        else if (name == "selectedPhoton_hoe") return nt.selectedPhoton_hoe();
        else if (name == "selectedPhoton_isScEtaEB") return nt.selectedPhoton_isScEtaEB();
        else if (name == "selectedPhoton_isScEtaEE") return nt.selectedPhoton_isScEtaEE();
        else if (name == "selectedPhoton_jetIdx") return nt.selectedPhoton_jetIdx();
        else if (name == "selectedPhoton_mass") return nt.selectedPhoton_mass();
        else if (name == "selectedPhoton_mvaID") return nt.selectedPhoton_mvaID();
        else if (name == "selectedPhoton_mvaID_Fall17V1p1") return nt.selectedPhoton_mvaID_Fall17V1p1();
        else if (name == "selectedPhoton_mvaID_Spring16nonTrigV1") return nt.selectedPhoton_mvaID_Spring16nonTrigV1();
        else if (name == "selectedPhoton_mvaID_WP80") return nt.selectedPhoton_mvaID_WP80();
        else if (name == "selectedPhoton_mvaID_WP90") return nt.selectedPhoton_mvaID_WP90();
        else if (name == "selectedPhoton_pdgId") return nt.selectedPhoton_pdgId();
        else if (name == "selectedPhoton_pfRelIso03_all") return nt.selectedPhoton_pfRelIso03_all();
        else if (name == "selectedPhoton_pfRelIso03_chg") return nt.selectedPhoton_pfRelIso03_chg();
        else if (name == "selectedPhoton_phi") return nt.selectedPhoton_phi();
        else if (name == "selectedPhoton_photonIso") return nt.selectedPhoton_photonIso();
        else if (name == "selectedPhoton_pixelSeed") return nt.selectedPhoton_pixelSeed();
        else if (name == "selectedPhoton_pt") return nt.selectedPhoton_pt();
        else if (name == "selectedPhoton_r9") return nt.selectedPhoton_r9();
        else if (name == "selectedPhoton_seedGain") return nt.selectedPhoton_seedGain();
        else if (name == "selectedPhoton_sieie") return nt.selectedPhoton_sieie();
        else if (name == "selectedPhoton_trkSumPtHollowConeDR03") return nt.selectedPhoton_trkSumPtHollowConeDR03();
        else if (name == "selectedPhoton_vidNestedWPBitmap") return nt.selectedPhoton_vidNestedWPBitmap();
        else if (name == "selectedPhoton_vidNestedWPBitmap_Spring16V2p2") return nt.selectedPhoton_vidNestedWPBitmap_Spring16V2p2();
        else if (name == "selectedTauLoose_charge") return nt.selectedTauLoose_charge();
        else if (name == "selectedTauLoose_chargedIso") return nt.selectedTauLoose_chargedIso();
        else if (name == "selectedTauLoose_cleanmask") return nt.selectedTauLoose_cleanmask();
        else if (name == "selectedTauLoose_decayMode") return nt.selectedTauLoose_decayMode();
        else if (name == "selectedTauLoose_dxy") return nt.selectedTauLoose_dxy();
        else if (name == "selectedTauLoose_dz") return nt.selectedTauLoose_dz();
        else if (name == "selectedTauLoose_eta") return nt.selectedTauLoose_eta();
        else if (name == "selectedTauLoose_etaSVFit") return nt.selectedTauLoose_etaSVFit();
        else if (name == "selectedTauLoose_genPartFlav") return nt.selectedTauLoose_genPartFlav();
        else if (name == "selectedTauLoose_genPartIdx") return nt.selectedTauLoose_genPartIdx();
        else if (name == "selectedTauLoose_idAntiEle") return nt.selectedTauLoose_idAntiEle();
        else if (name == "selectedTauLoose_idAntiEle2018") return nt.selectedTauLoose_idAntiEle2018();
        else if (name == "selectedTauLoose_idAntiMu") return nt.selectedTauLoose_idAntiMu();
        else if (name == "selectedTauLoose_idDecayMode") return nt.selectedTauLoose_idDecayMode();
        else if (name == "selectedTauLoose_idDecayModeNewDMs") return nt.selectedTauLoose_idDecayModeNewDMs();
        else if (name == "selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe") return nt.selectedTauLoose_idDeepselectedTauLoose2017v2p1VSe();
        else if (name == "selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet") return nt.selectedTauLoose_idDeepselectedTauLoose2017v2p1VSjet();
        else if (name == "selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu") return nt.selectedTauLoose_idDeepselectedTauLoose2017v2p1VSmu();
        else if (name == "selectedTauLoose_idMVAnewDM2017v2") return nt.selectedTauLoose_idMVAnewDM2017v2();
        else if (name == "selectedTauLoose_idMVAoldDM") return nt.selectedTauLoose_idMVAoldDM();
        else if (name == "selectedTauLoose_idMVAoldDM2017v1") return nt.selectedTauLoose_idMVAoldDM2017v1();
        else if (name == "selectedTauLoose_idMVAoldDM2017v2") return nt.selectedTauLoose_idMVAoldDM2017v2();
        else if (name == "selectedTauLoose_idMVAoldDMdR032017v2") return nt.selectedTauLoose_idMVAoldDMdR032017v2();
        else if (name == "selectedTauLoose_jetIdx") return nt.selectedTauLoose_jetIdx();
        else if (name == "selectedTauLoose_leadTkDeltaEta") return nt.selectedTauLoose_leadTkDeltaEta();
        else if (name == "selectedTauLoose_leadTkDeltaPhi") return nt.selectedTauLoose_leadTkDeltaPhi();
        else if (name == "selectedTauLoose_leadTkPtOverselectedTauLoosePt") return nt.selectedTauLoose_leadTkPtOverselectedTauLoosePt();
        else if (name == "selectedTauLoose_mSVFit") return nt.selectedTauLoose_mSVFit();
        else if (name == "selectedTauLoose_mass") return nt.selectedTauLoose_mass();
        else if (name == "selectedTauLoose_neutralIso") return nt.selectedTauLoose_neutralIso();
        else if (name == "selectedTauLoose_phi") return nt.selectedTauLoose_phi();
        else if (name == "selectedTauLoose_phiSVFit") return nt.selectedTauLoose_phiSVFit();
        else if (name == "selectedTauLoose_photonsOutsideSignalCone") return nt.selectedTauLoose_photonsOutsideSignalCone();
        else if (name == "selectedTauLoose_pt") return nt.selectedTauLoose_pt();
        else if (name == "selectedTauLoose_ptSVFit") return nt.selectedTauLoose_ptSVFit();
        else if (name == "selectedTauLoose_puCorr") return nt.selectedTauLoose_puCorr();
        else if (name == "selectedTauLoose_rawAntiEle") return nt.selectedTauLoose_rawAntiEle();
        else if (name == "selectedTauLoose_rawAntiEle2018") return nt.selectedTauLoose_rawAntiEle2018();
        else if (name == "selectedTauLoose_rawAntiEleCat") return nt.selectedTauLoose_rawAntiEleCat();
        else if (name == "selectedTauLoose_rawAntiEleCat2018") return nt.selectedTauLoose_rawAntiEleCat2018();
        else if (name == "selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe") return nt.selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSe();
        else if (name == "selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet") return nt.selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSjet();
        else if (name == "selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu") return nt.selectedTauLoose_rawDeepselectedTauLoose2017v2p1VSmu();
        else if (name == "selectedTauLoose_rawIso") return nt.selectedTauLoose_rawIso();
        else if (name == "selectedTauLoose_rawIsodR03") return nt.selectedTauLoose_rawIsodR03();
        else if (name == "selectedTauLoose_rawMVAnewDM2017v2") return nt.selectedTauLoose_rawMVAnewDM2017v2();
        else if (name == "selectedTauLoose_rawMVAoldDM") return nt.selectedTauLoose_rawMVAoldDM();
        else if (name == "selectedTauLoose_rawMVAoldDM2017v1") return nt.selectedTauLoose_rawMVAoldDM2017v1();
        else if (name == "selectedTauLoose_rawMVAoldDM2017v2") return nt.selectedTauLoose_rawMVAoldDM2017v2();
        return vector<float>();
    }
    Char_t GetC(const string &name) {
        if (name == "passedDigammaPair") return nt.passedDigammaPair();
        else if (name == "passedGoodPhotons") return nt.passedGoodPhotons();
        return Char_t();
    }
    LorentzVector GetLV(const string &name) {
        if (name == "gg_p4") return nt.gg_p4();
        return LorentzVector();
    }
    int GetI(const string &name) {
        if (name == "Category") return nt.Category();
        else if (name == "Category_lveto") return nt.Category_lveto();
        else if (name == "Category_pairsLoose") return nt.Category_pairsLoose();
        else if (name == "Category_tauselLoose") return nt.Category_tauselLoose();
        else if (name == "Generator_id1") return nt.Generator_id1();
        else if (name == "Generator_id2") return nt.Generator_id2();
        else if (name == "HTXS_stage1_1_cat_pTjet25GeV") return nt.HTXS_stage1_1_cat_pTjet25GeV();
        else if (name == "HTXS_stage1_1_cat_pTjet30GeV") return nt.HTXS_stage1_1_cat_pTjet30GeV();
        else if (name == "HTXS_stage1_1_fine_cat_pTjet25GeV") return nt.HTXS_stage1_1_fine_cat_pTjet25GeV();
        else if (name == "HTXS_stage1_1_fine_cat_pTjet30GeV") return nt.HTXS_stage1_1_fine_cat_pTjet30GeV();
        else if (name == "HTXS_stage1_2_cat_pTjet25GeV") return nt.HTXS_stage1_2_cat_pTjet25GeV();
        else if (name == "HTXS_stage1_2_cat_pTjet30GeV") return nt.HTXS_stage1_2_cat_pTjet30GeV();
        else if (name == "HTXS_stage1_2_fine_cat_pTjet25GeV") return nt.HTXS_stage1_2_fine_cat_pTjet25GeV();
        else if (name == "HTXS_stage1_2_fine_cat_pTjet30GeV") return nt.HTXS_stage1_2_fine_cat_pTjet30GeV();
        else if (name == "HTXS_stage_0") return nt.HTXS_stage_0();
        else if (name == "HTXS_stage_1_pTjet25") return nt.HTXS_stage_1_pTjet25();
        else if (name == "HTXS_stage_1_pTjet30") return nt.HTXS_stage_1_pTjet30();
        else if (name == "PV_npvs") return nt.PV_npvs();
        else if (name == "PV_npvsGood") return nt.PV_npvsGood();
        else if (name == "Pileup_nPU") return nt.Pileup_nPU();
        else if (name == "Pileup_sumEOOT") return nt.Pileup_sumEOOT();
        else if (name == "Pileup_sumLOOT") return nt.Pileup_sumLOOT();
        else if (name == "SoftActivityJetNjets10") return nt.SoftActivityJetNjets10();
        else if (name == "SoftActivityJetNjets2") return nt.SoftActivityJetNjets2();
        else if (name == "SoftActivityJetNjets5") return nt.SoftActivityJetNjets5();
        else if (name == "genTtbarId") return nt.genTtbarId();
        else if (name == "nselectedElectron") return nt.nselectedElectron();
        else if (name == "nselectedMuon") return nt.nselectedMuon();
        return int();
    }
    float GetF(const string &name) {
        if (name == "CaloMET_phi") return nt.CaloMET_phi();
        else if (name == "CaloMET_pt") return nt.CaloMET_pt();
        else if (name == "CaloMET_sumEt") return nt.CaloMET_sumEt();
        else if (name == "ChsMET_phi") return nt.ChsMET_phi();
        else if (name == "ChsMET_pt") return nt.ChsMET_pt();
        else if (name == "ChsMET_sumEt") return nt.ChsMET_sumEt();
        else if (name == "GenMET_phi") return nt.GenMET_phi();
        else if (name == "GenMET_pt") return nt.GenMET_pt();
        else if (name == "Generator_binvar") return nt.Generator_binvar();
        else if (name == "Generator_scalePDF") return nt.Generator_scalePDF();
        else if (name == "Generator_weight") return nt.Generator_weight();
        else if (name == "Generator_x1") return nt.Generator_x1();
        else if (name == "Generator_x2") return nt.Generator_x2();
        else if (name == "Generator_xpdf1") return nt.Generator_xpdf1();
        else if (name == "Generator_xpdf2") return nt.Generator_xpdf2();
        else if (name == "HTXS_Higgs_pt") return nt.HTXS_Higgs_pt();
        else if (name == "HTXS_Higgs_y") return nt.HTXS_Higgs_y();
        else if (name == "LHEWeight_originalXWGTUP") return nt.LHEWeight_originalXWGTUP();
        else if (name == "LHE_AlphaS") return nt.LHE_AlphaS();
        else if (name == "LHE_HT") return nt.LHE_HT();
        else if (name == "LHE_HTIncoming") return nt.LHE_HTIncoming();
        else if (name == "LHE_Vpt") return nt.LHE_Vpt();
        else if (name == "METFixEE2017_MetUnclustEnUpDeltaX") return nt.METFixEE2017_MetUnclustEnUpDeltaX();
        else if (name == "METFixEE2017_MetUnclustEnUpDeltaY") return nt.METFixEE2017_MetUnclustEnUpDeltaY();
        else if (name == "METFixEE2017_covXX") return nt.METFixEE2017_covXX();
        else if (name == "METFixEE2017_covXY") return nt.METFixEE2017_covXY();
        else if (name == "METFixEE2017_covYY") return nt.METFixEE2017_covYY();
        else if (name == "METFixEE2017_phi") return nt.METFixEE2017_phi();
        else if (name == "METFixEE2017_pt") return nt.METFixEE2017_pt();
        else if (name == "METFixEE2017_significance") return nt.METFixEE2017_significance();
        else if (name == "METFixEE2017_sumEt") return nt.METFixEE2017_sumEt();
        else if (name == "METFixEE2017_sumPtUnclustered") return nt.METFixEE2017_sumPtUnclustered();
        else if (name == "MET_MetUnclustEnUpDeltaX") return nt.MET_MetUnclustEnUpDeltaX();
        else if (name == "MET_MetUnclustEnUpDeltaY") return nt.MET_MetUnclustEnUpDeltaY();
        else if (name == "MET_T1Smear_phi") return nt.MET_T1Smear_phi();
        else if (name == "MET_T1Smear_phi_jerDown") return nt.MET_T1Smear_phi_jerDown();
        else if (name == "MET_T1Smear_phi_jerUp") return nt.MET_T1Smear_phi_jerUp();
        else if (name == "MET_T1Smear_phi_jesTotalDown") return nt.MET_T1Smear_phi_jesTotalDown();
        else if (name == "MET_T1Smear_phi_jesTotalUp") return nt.MET_T1Smear_phi_jesTotalUp();
        else if (name == "MET_T1Smear_pt") return nt.MET_T1Smear_pt();
        else if (name == "MET_T1Smear_pt_jerDown") return nt.MET_T1Smear_pt_jerDown();
        else if (name == "MET_T1Smear_pt_jerUp") return nt.MET_T1Smear_pt_jerUp();
        else if (name == "MET_T1Smear_pt_jesTotalDown") return nt.MET_T1Smear_pt_jesTotalDown();
        else if (name == "MET_T1Smear_pt_jesTotalUp") return nt.MET_T1Smear_pt_jesTotalUp();
        else if (name == "MET_T1_phi") return nt.MET_T1_phi();
        else if (name == "MET_T1_phi_jerDown") return nt.MET_T1_phi_jerDown();
        else if (name == "MET_T1_phi_jerUp") return nt.MET_T1_phi_jerUp();
        else if (name == "MET_T1_phi_jesTotalDown") return nt.MET_T1_phi_jesTotalDown();
        else if (name == "MET_T1_phi_jesTotalUp") return nt.MET_T1_phi_jesTotalUp();
        else if (name == "MET_T1_pt") return nt.MET_T1_pt();
        else if (name == "MET_T1_pt_jerDown") return nt.MET_T1_pt_jerDown();
        else if (name == "MET_T1_pt_jerUp") return nt.MET_T1_pt_jerUp();
        else if (name == "MET_T1_pt_jesTotalDown") return nt.MET_T1_pt_jesTotalDown();
        else if (name == "MET_T1_pt_jesTotalUp") return nt.MET_T1_pt_jesTotalUp();
        else if (name == "MET_covXX") return nt.MET_covXX();
        else if (name == "MET_covXY") return nt.MET_covXY();
        else if (name == "MET_covYY") return nt.MET_covYY();
        else if (name == "MET_fiducialGenPhi") return nt.MET_fiducialGenPhi();
        else if (name == "MET_fiducialGenPt") return nt.MET_fiducialGenPt();
        else if (name == "MET_phi") return nt.MET_phi();
        else if (name == "MET_phi_unclustEnDown") return nt.MET_phi_unclustEnDown();
        else if (name == "MET_phi_unclustEnUp") return nt.MET_phi_unclustEnUp();
        else if (name == "MET_pt") return nt.MET_pt();
        else if (name == "MET_pt_unclustEnDown") return nt.MET_pt_unclustEnDown();
        else if (name == "MET_pt_unclustEnUp") return nt.MET_pt_unclustEnUp();
        else if (name == "MET_significance") return nt.MET_significance();
        else if (name == "MET_sumEt") return nt.MET_sumEt();
        else if (name == "MET_sumPtUnclustered") return nt.MET_sumPtUnclustered();
        else if (name == "PV_chi2") return nt.PV_chi2();
        else if (name == "PV_ndof") return nt.PV_ndof();
        else if (name == "PV_score") return nt.PV_score();
        else if (name == "PV_x") return nt.PV_x();
        else if (name == "PV_y") return nt.PV_y();
        else if (name == "PV_z") return nt.PV_z();
        else if (name == "Pileup_gpudensity") return nt.Pileup_gpudensity();
        else if (name == "Pileup_nTrueInt") return nt.Pileup_nTrueInt();
        else if (name == "Pileup_pudensity") return nt.Pileup_pudensity();
        else if (name == "PrefireWeight") return nt.PrefireWeight();
        else if (name == "PrefireWeight_Down") return nt.PrefireWeight_Down();
        else if (name == "PrefireWeight_Up") return nt.PrefireWeight_Up();
        else if (name == "PuppiMET_phi") return nt.PuppiMET_phi();
        else if (name == "PuppiMET_phiJERUp") return nt.PuppiMET_phiJERUp();
        else if (name == "PuppiMET_phiJESUp") return nt.PuppiMET_phiJESUp();
        else if (name == "PuppiMET_pt") return nt.PuppiMET_pt();
        else if (name == "PuppiMET_ptJERUp") return nt.PuppiMET_ptJERUp();
        else if (name == "PuppiMET_ptJESUp") return nt.PuppiMET_ptJESUp();
        else if (name == "PuppiMET_sumEt") return nt.PuppiMET_sumEt();
        else if (name == "RawMET_phi") return nt.RawMET_phi();
        else if (name == "RawMET_pt") return nt.RawMET_pt();
        else if (name == "RawMET_sumEt") return nt.RawMET_sumEt();
        else if (name == "RawPuppiMET_phi") return nt.RawPuppiMET_phi();
        else if (name == "RawPuppiMET_pt") return nt.RawPuppiMET_pt();
        else if (name == "RawPuppiMET_sumEt") return nt.RawPuppiMET_sumEt();
        else if (name == "SoftActivityJetHT") return nt.SoftActivityJetHT();
        else if (name == "SoftActivityJetHT10") return nt.SoftActivityJetHT10();
        else if (name == "SoftActivityJetHT2") return nt.SoftActivityJetHT2();
        else if (name == "SoftActivityJetHT5") return nt.SoftActivityJetHT5();
        else if (name == "TkMET_phi") return nt.TkMET_phi();
        else if (name == "TkMET_pt") return nt.TkMET_pt();
        else if (name == "TkMET_sumEt") return nt.TkMET_sumEt();
        else if (name == "btagWeight_CMVA") return nt.btagWeight_CMVA();
        else if (name == "btagWeight_CSVV2") return nt.btagWeight_CSVV2();
        else if (name == "btagWeight_DeepCSVB") return nt.btagWeight_DeepCSVB();
        else if (name == "dPhi_ggtautauLoose") return nt.dPhi_ggtautauLoose();
        else if (name == "dPhi_ggtautauSVFitLoose") return nt.dPhi_ggtautauSVFitLoose();
        else if (name == "dR_ggtautauLoose") return nt.dR_ggtautauLoose();
        else if (name == "dR_ggtautauSVFitLoose") return nt.dR_ggtautauSVFitLoose();
        else if (name == "dR_tautauLoose") return nt.dR_tautauLoose();
        else if (name == "dR_tautauSVFitLoose") return nt.dR_tautauSVFitLoose();
        else if (name == "eta_tautauLoose") return nt.eta_tautauLoose();
        else if (name == "eta_tautauSVFitLoose") return nt.eta_tautauSVFitLoose();
        else if (name == "evWeight_electronVeto") return nt.evWeight_electronVeto();
        else if (name == "evWeight_electronVetoDown") return nt.evWeight_electronVetoDown();
        else if (name == "evWeight_electronVetoUp") return nt.evWeight_electronVetoUp();
        else if (name == "evWeight_looseMva") return nt.evWeight_looseMva();
        else if (name == "evWeight_looseMvaDown") return nt.evWeight_looseMvaDown();
        else if (name == "evWeight_looseMvaUp") return nt.evWeight_looseMvaUp();
        else if (name == "evWeight_presel") return nt.evWeight_presel();
        else if (name == "evWeight_preselDown") return nt.evWeight_preselDown();
        else if (name == "evWeight_preselUp") return nt.evWeight_preselUp();
        else if (name == "fixedGridRhoAll") return nt.fixedGridRhoAll();
        else if (name == "fixedGridRhoFastjetAll") return nt.fixedGridRhoFastjetAll();
        else if (name == "fixedGridRhoFastjetCentral") return nt.fixedGridRhoFastjetCentral();
        else if (name == "fixedGridRhoFastjetCentralCalo") return nt.fixedGridRhoFastjetCentralCalo();
        else if (name == "fixedGridRhoFastjetCentralChargedPileUp") return nt.fixedGridRhoFastjetCentralChargedPileUp();
        else if (name == "fixedGridRhoFastjetCentralNeutral") return nt.fixedGridRhoFastjetCentralNeutral();
        else if (name == "genWeight") return nt.genWeight();
        else if (name == "gg_eta") return nt.gg_eta();
        else if (name == "gg_mass") return nt.gg_mass();
        else if (name == "gg_phi") return nt.gg_phi();
        else if (name == "gg_pt") return nt.gg_pt();
        else if (name == "m_tautauLoose") return nt.m_tautauLoose();
        else if (name == "m_tautauSVFitLoose") return nt.m_tautauSVFitLoose();
        else if (name == "phi_tautauLoose") return nt.phi_tautauLoose();
        else if (name == "phi_tautauSVFitLoose") return nt.phi_tautauSVFitLoose();
        else if (name == "pt_tautauLoose") return nt.pt_tautauLoose();
        else if (name == "pt_tautauSVFitLoose") return nt.pt_tautauSVFitLoose();
        else if (name == "puWeight") return nt.puWeight();
        else if (name == "puWeightDown") return nt.puWeightDown();
        return float();
    }
    vector<int> GetVI(const string &name) {
        if (name == "Electron_charge") return nt.Electron_charge();
        else if (name == "Electron_cutBased") return nt.Electron_cutBased();
        else if (name == "Electron_cutBased_Fall17_V1") return nt.Electron_cutBased_Fall17_V1();
        else if (name == "Electron_cutBased_HLTPreSel") return nt.Electron_cutBased_HLTPreSel();
        else if (name == "Electron_cutBased_Spring15") return nt.Electron_cutBased_Spring15();
        else if (name == "Electron_cutBased_Sum16") return nt.Electron_cutBased_Sum16();
        else if (name == "Electron_genPartIdx") return nt.Electron_genPartIdx();
        else if (name == "Electron_jetIdx") return nt.Electron_jetIdx();
        else if (name == "Electron_pdgId") return nt.Electron_pdgId();
        else if (name == "Electron_photonIdx") return nt.Electron_photonIdx();
        else if (name == "Electron_tightCharge") return nt.Electron_tightCharge();
        else if (name == "Electron_vidNestedWPBitmap") return nt.Electron_vidNestedWPBitmap();
        else if (name == "Electron_vidNestedWPBitmapHEEP") return nt.Electron_vidNestedWPBitmapHEEP();
        else if (name == "Electron_vidNestedWPBitmapSpring15") return nt.Electron_vidNestedWPBitmapSpring15();
        else if (name == "Electron_vidNestedWPBitmapSum16") return nt.Electron_vidNestedWPBitmapSum16();
        else if (name == "FsrPhoton_muonIdx") return nt.FsrPhoton_muonIdx();
        else if (name == "GenDressedLepton_pdgId") return nt.GenDressedLepton_pdgId();
        else if (name == "GenJetAK8_partonFlavour") return nt.GenJetAK8_partonFlavour();
        else if (name == "GenJet_partonFlavour") return nt.GenJet_partonFlavour();
        else if (name == "GenPart_genPartIdxMother") return nt.GenPart_genPartIdxMother();
        else if (name == "GenPart_pdgId") return nt.GenPart_pdgId();
        else if (name == "GenPart_status") return nt.GenPart_status();
        else if (name == "GenPart_statusFlags") return nt.GenPart_statusFlags();
        else if (name == "GenVisTau_charge") return nt.GenVisTau_charge();
        else if (name == "GenVisTau_genPartIdxMother") return nt.GenVisTau_genPartIdxMother();
        else if (name == "GenVisTau_status") return nt.GenVisTau_status();
        else if (name == "IsoTrack_fromPV") return nt.IsoTrack_fromPV();
        else if (name == "IsoTrack_pdgId") return nt.IsoTrack_pdgId();
        else if (name == "Jet_electronIdx1") return nt.Jet_electronIdx1();
        else if (name == "Jet_electronIdx2") return nt.Jet_electronIdx2();
        else if (name == "Jet_genJetIdx") return nt.Jet_genJetIdx();
        else if (name == "Jet_hadronFlavour") return nt.Jet_hadronFlavour();
        else if (name == "Jet_jetId") return nt.Jet_jetId();
        else if (name == "Jet_muonIdx1") return nt.Jet_muonIdx1();
        else if (name == "Jet_muonIdx2") return nt.Jet_muonIdx2();
        else if (name == "Jet_nConstituents") return nt.Jet_nConstituents();
        else if (name == "Jet_nElectrons") return nt.Jet_nElectrons();
        else if (name == "Jet_nMuons") return nt.Jet_nMuons();
        else if (name == "Jet_partonFlavour") return nt.Jet_partonFlavour();
        else if (name == "Jet_puId") return nt.Jet_puId();
        else if (name == "LHEPart_pdgId") return nt.LHEPart_pdgId();
        else if (name == "LHEPart_spin") return nt.LHEPart_spin();
        else if (name == "LHEPart_status") return nt.LHEPart_status();
        else if (name == "Muon_charge") return nt.Muon_charge();
        else if (name == "Muon_fsrPhotonIdx") return nt.Muon_fsrPhotonIdx();
        else if (name == "Muon_genPartIdx") return nt.Muon_genPartIdx();
        else if (name == "Muon_jetIdx") return nt.Muon_jetIdx();
        else if (name == "Muon_nStations") return nt.Muon_nStations();
        else if (name == "Muon_nTrackerLayers") return nt.Muon_nTrackerLayers();
        else if (name == "Muon_pdgId") return nt.Muon_pdgId();
        else if (name == "Muon_tightCharge") return nt.Muon_tightCharge();
        else if (name == "Photon_charge") return nt.Photon_charge();
        else if (name == "Photon_cutBased") return nt.Photon_cutBased();
        else if (name == "Photon_cutBased_Fall17V1Bitmap") return nt.Photon_cutBased_Fall17V1Bitmap();
        else if (name == "Photon_cutBased_Spring16V2p2") return nt.Photon_cutBased_Spring16V2p2();
        else if (name == "Photon_electronIdx") return nt.Photon_electronIdx();
        else if (name == "Photon_genPartIdx") return nt.Photon_genPartIdx();
        else if (name == "Photon_jetIdx") return nt.Photon_jetIdx();
        else if (name == "Photon_pdgId") return nt.Photon_pdgId();
        else if (name == "Photon_vidNestedWPBitmap") return nt.Photon_vidNestedWPBitmap();
        else if (name == "Photon_vidNestedWPBitmap_Spring16V2p2") return nt.Photon_vidNestedWPBitmap_Spring16V2p2();
        else if (name == "Tau_charge") return nt.Tau_charge();
        else if (name == "Tau_decayMode") return nt.Tau_decayMode();
        else if (name == "Tau_genPartIdx") return nt.Tau_genPartIdx();
        else if (name == "Tau_jetIdx") return nt.Tau_jetIdx();
        else if (name == "Tau_rawAntiEleCat") return nt.Tau_rawAntiEleCat();
        else if (name == "Tau_rawAntiEleCat2018") return nt.Tau_rawAntiEleCat2018();
        else if (name == "TrigObj_filterBits") return nt.TrigObj_filterBits();
        else if (name == "TrigObj_id") return nt.TrigObj_id();
        else if (name == "TrigObj_l1charge") return nt.TrigObj_l1charge();
        else if (name == "TrigObj_l1iso") return nt.TrigObj_l1iso();
        else if (name == "eleHidx") return nt.eleHidx();
        else if (name == "gHidx") return nt.gHidx();
        else if (name == "muHidx") return nt.muHidx();
        return vector<int>();
    }
    vector<LorentzVector> GetVLV(const string &name) {
        if (name == "Electron_p4") return nt.Electron_p4();
        else if (name == "GenDressedLepton_p4") return nt.GenDressedLepton_p4();
        else if (name == "GenIsolatedPhoton_p4") return nt.GenIsolatedPhoton_p4();
        else if (name == "GenJetAK8_p4") return nt.GenJetAK8_p4();
        else if (name == "GenJet_p4") return nt.GenJet_p4();
        else if (name == "GenPart_p4") return nt.GenPart_p4();
        else if (name == "GenVisTau_p4") return nt.GenVisTau_p4();
        else if (name == "Jet_p4") return nt.Jet_p4();
        else if (name == "LHEPart_p4") return nt.LHEPart_p4();
        else if (name == "Muon_p4") return nt.Muon_p4();
        else if (name == "Photon_p4") return nt.Photon_p4();
        else if (name == "SV_p4") return nt.SV_p4();
        else if (name == "SubGenJetAK8_p4") return nt.SubGenJetAK8_p4();
        else if (name == "SubJet_p4") return nt.SubJet_p4();
        else if (name == "Tau_p4") return nt.Tau_p4();
        else if (name == "selectedElectron_p4") return nt.selectedElectron_p4();
        else if (name == "selectedMuon_p4") return nt.selectedMuon_p4();
        else if (name == "selectedPhoton_p4") return nt.selectedPhoton_p4();
        return vector<LorentzVector>();
    }
    bool GetB(const string &name) {
        if (name == "Flag_BadChargedCandidateFilter") return nt.Flag_BadChargedCandidateFilter();
        else if (name == "Flag_BadChargedCandidateSummer16Filter") return nt.Flag_BadChargedCandidateSummer16Filter();
        else if (name == "Flag_BadPFMuonFilter") return nt.Flag_BadPFMuonFilter();
        else if (name == "Flag_BadPFMuonSummer16Filter") return nt.Flag_BadPFMuonSummer16Filter();
        else if (name == "Flag_CSCTightHalo2015Filter") return nt.Flag_CSCTightHalo2015Filter();
        else if (name == "Flag_CSCTightHaloFilter") return nt.Flag_CSCTightHaloFilter();
        else if (name == "Flag_CSCTightHaloTrkMuUnvetoFilter") return nt.Flag_CSCTightHaloTrkMuUnvetoFilter();
        else if (name == "Flag_EcalDeadCellBoundaryEnergyFilter") return nt.Flag_EcalDeadCellBoundaryEnergyFilter();
        else if (name == "Flag_EcalDeadCellTriggerPrimitiveFilter") return nt.Flag_EcalDeadCellTriggerPrimitiveFilter();
        else if (name == "Flag_HBHENoiseFilter") return nt.Flag_HBHENoiseFilter();
        else if (name == "Flag_HBHENoiseIsoFilter") return nt.Flag_HBHENoiseIsoFilter();
        else if (name == "Flag_HcalStripHaloFilter") return nt.Flag_HcalStripHaloFilter();
        else if (name == "Flag_METFilters") return nt.Flag_METFilters();
        else if (name == "Flag_chargedHadronTrackResolutionFilter") return nt.Flag_chargedHadronTrackResolutionFilter();
        else if (name == "Flag_ecalBadCalibFilter") return nt.Flag_ecalBadCalibFilter();
        else if (name == "Flag_ecalBadCalibFilterV2") return nt.Flag_ecalBadCalibFilterV2();
        else if (name == "Flag_ecalLaserCorrFilter") return nt.Flag_ecalLaserCorrFilter();
        else if (name == "Flag_eeBadScFilter") return nt.Flag_eeBadScFilter();
        else if (name == "Flag_globalSuperTightHalo2016Filter") return nt.Flag_globalSuperTightHalo2016Filter();
        else if (name == "Flag_globalTightHalo2016Filter") return nt.Flag_globalTightHalo2016Filter();
        else if (name == "Flag_goodVertices") return nt.Flag_goodVertices();
        else if (name == "Flag_hcalLaserEventFilter") return nt.Flag_hcalLaserEventFilter();
        else if (name == "Flag_muonBadTrackFilter") return nt.Flag_muonBadTrackFilter();
        else if (name == "Flag_trkPOGFilters") return nt.Flag_trkPOGFilters();
        else if (name == "Flag_trkPOG_logErrorTooManyClusters") return nt.Flag_trkPOG_logErrorTooManyClusters();
        else if (name == "Flag_trkPOG_manystripclus53X") return nt.Flag_trkPOG_manystripclus53X();
        else if (name == "Flag_trkPOG_toomanystripclus53X") return nt.Flag_trkPOG_toomanystripclus53X();
        else if (name == "HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55") return nt.HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55();
        else if (name == "HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55") return nt.HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55();
        else if (name == "HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55") return nt.HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55();
        else if (name == "HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55") return nt.HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55();
        else if (name == "HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55") return nt.HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55();
        else if (name == "HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55") return nt.HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55();
        else if (name == "HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55") return nt.HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55();
        else if (name == "HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55") return nt.HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55();
        else if (name == "HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto") return nt.HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto();
        else if (name == "HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55") return nt.HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55();
        else if (name == "HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70") return nt.HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70();
        else if (name == "HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90") return nt.HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90();
        else if (name == "HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55") return nt.HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55();
        else if (name == "HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90") return nt.HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90();
        else if (name == "HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95") return nt.HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95();
        else if (name == "HLT_DoubleMu20_7_Mass0to30_Photon23") return nt.HLT_DoubleMu20_7_Mass0to30_Photon23();
        else if (name == "HLT_DoublePhoton33_CaloIdL") return nt.HLT_DoublePhoton33_CaloIdL();
        else if (name == "HLT_DoublePhoton60") return nt.HLT_DoublePhoton60();
        else if (name == "HLT_DoublePhoton70") return nt.HLT_DoublePhoton70();
        else if (name == "HLT_DoublePhoton85") return nt.HLT_DoublePhoton85();
        else if (name == "HLT_HISinglePhoton10") return nt.HLT_HISinglePhoton10();
        else if (name == "HLT_HISinglePhoton10_Eta3p1ForPPRef") return nt.HLT_HISinglePhoton10_Eta3p1ForPPRef();
        else if (name == "HLT_HISinglePhoton15") return nt.HLT_HISinglePhoton15();
        else if (name == "HLT_HISinglePhoton20") return nt.HLT_HISinglePhoton20();
        else if (name == "HLT_HISinglePhoton20_Eta3p1ForPPRef") return nt.HLT_HISinglePhoton20_Eta3p1ForPPRef();
        else if (name == "HLT_HISinglePhoton30_Eta3p1ForPPRef") return nt.HLT_HISinglePhoton30_Eta3p1ForPPRef();
        else if (name == "HLT_HISinglePhoton40") return nt.HLT_HISinglePhoton40();
        else if (name == "HLT_HISinglePhoton40_Eta3p1ForPPRef") return nt.HLT_HISinglePhoton40_Eta3p1ForPPRef();
        else if (name == "HLT_HISinglePhoton50_Eta3p1ForPPRef") return nt.HLT_HISinglePhoton50_Eta3p1ForPPRef();
        else if (name == "HLT_HISinglePhoton60") return nt.HLT_HISinglePhoton60();
        else if (name == "HLT_HISinglePhoton60_Eta3p1ForPPRef") return nt.HLT_HISinglePhoton60_Eta3p1ForPPRef();
        else if (name == "HLT_Mu12_DoublePhoton20") return nt.HLT_Mu12_DoublePhoton20();
        else if (name == "HLT_Mu12_Photon25_CaloIdL") return nt.HLT_Mu12_Photon25_CaloIdL();
        else if (name == "HLT_Mu12_Photon25_CaloIdL_L1ISO") return nt.HLT_Mu12_Photon25_CaloIdL_L1ISO();
        else if (name == "HLT_Mu12_Photon25_CaloIdL_L1OR") return nt.HLT_Mu12_Photon25_CaloIdL_L1OR();
        else if (name == "HLT_Mu17_Photon22_CaloIdL_L1ISO") return nt.HLT_Mu17_Photon22_CaloIdL_L1ISO();
        else if (name == "HLT_Mu17_Photon30_CaloIdL_L1ISO") return nt.HLT_Mu17_Photon30_CaloIdL_L1ISO();
        else if (name == "HLT_Mu17_Photon30_IsoCaloId") return nt.HLT_Mu17_Photon30_IsoCaloId();
        else if (name == "HLT_Mu17_Photon35_CaloIdL_L1ISO") return nt.HLT_Mu17_Photon35_CaloIdL_L1ISO();
        else if (name == "HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL") return nt.HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL();
        else if (name == "HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL") return nt.HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL();
        else if (name == "HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL") return nt.HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL();
        else if (name == "HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL") return nt.HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL();
        else if (name == "HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL") return nt.HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL();
        else if (name == "HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL") return nt.HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL();
        else if (name == "HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL") return nt.HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL();
        else if (name == "HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL") return nt.HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL();
        else if (name == "HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL") return nt.HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL();
        else if (name == "HLT_Photon100EBHE10") return nt.HLT_Photon100EBHE10();
        else if (name == "HLT_Photon100EB_TightID_TightIso") return nt.HLT_Photon100EB_TightID_TightIso();
        else if (name == "HLT_Photon100EEHE10") return nt.HLT_Photon100EEHE10();
        else if (name == "HLT_Photon100EE_TightID_TightIso") return nt.HLT_Photon100EE_TightID_TightIso();
        else if (name == "HLT_Photon110EB_TightID_TightIso") return nt.HLT_Photon110EB_TightID_TightIso();
        else if (name == "HLT_Photon120") return nt.HLT_Photon120();
        else if (name == "HLT_Photon120EB_TightID_TightIso") return nt.HLT_Photon120EB_TightID_TightIso();
        else if (name == "HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40") return nt.HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40();
        else if (name == "HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF") return nt.HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF();
        else if (name == "HLT_Photon120_R9Id90_HE10_IsoM") return nt.HLT_Photon120_R9Id90_HE10_IsoM();
        else if (name == "HLT_Photon125") return nt.HLT_Photon125();
        else if (name == "HLT_Photon135_PFMET100") return nt.HLT_Photon135_PFMET100();
        else if (name == "HLT_Photon150") return nt.HLT_Photon150();
        else if (name == "HLT_Photon165_HE10") return nt.HLT_Photon165_HE10();
        else if (name == "HLT_Photon165_R9Id90_HE10_IsoM") return nt.HLT_Photon165_R9Id90_HE10_IsoM();
        else if (name == "HLT_Photon175") return nt.HLT_Photon175();
        else if (name == "HLT_Photon20") return nt.HLT_Photon20();
        else if (name == "HLT_Photon200") return nt.HLT_Photon200();
        else if (name == "HLT_Photon20_CaloIdVL_IsoL") return nt.HLT_Photon20_CaloIdVL_IsoL();
        else if (name == "HLT_Photon20_HoverELoose") return nt.HLT_Photon20_HoverELoose();
        else if (name == "HLT_Photon22") return nt.HLT_Photon22();
        else if (name == "HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40") return nt.HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40();
        else if (name == "HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF") return nt.HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF();
        else if (name == "HLT_Photon22_R9Id90_HE10_IsoM") return nt.HLT_Photon22_R9Id90_HE10_IsoM();
        else if (name == "HLT_Photon25") return nt.HLT_Photon25();
        else if (name == "HLT_Photon250_NoHE") return nt.HLT_Photon250_NoHE();
        else if (name == "HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60") return nt.HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60();
        else if (name == "HLT_Photon30") return nt.HLT_Photon30();
        else if (name == "HLT_Photon300_NoHE") return nt.HLT_Photon300_NoHE();
        else if (name == "HLT_Photon30_HoverELoose") return nt.HLT_Photon30_HoverELoose();
        else if (name == "HLT_Photon30_R9Id90_HE10_IsoM") return nt.HLT_Photon30_R9Id90_HE10_IsoM();
        else if (name == "HLT_Photon33") return nt.HLT_Photon33();
        else if (name == "HLT_Photon35_TwoProngs35") return nt.HLT_Photon35_TwoProngs35();
        else if (name == "HLT_Photon36") return nt.HLT_Photon36();
        else if (name == "HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15") return nt.HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15();
        else if (name == "HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40") return nt.HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40();
        else if (name == "HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF") return nt.HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF();
        else if (name == "HLT_Photon36_R9Id90_HE10_IsoM") return nt.HLT_Photon36_R9Id90_HE10_IsoM();
        else if (name == "HLT_Photon40_HoverELoose") return nt.HLT_Photon40_HoverELoose();
        else if (name == "HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15") return nt.HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15();
        else if (name == "HLT_Photon50") return nt.HLT_Photon50();
        else if (name == "HLT_Photon500") return nt.HLT_Photon500();
        else if (name == "HLT_Photon50_HoverELoose") return nt.HLT_Photon50_HoverELoose();
        else if (name == "HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40") return nt.HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40();
        else if (name == "HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF") return nt.HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF();
        else if (name == "HLT_Photon50_R9Id90_HE10_IsoM") return nt.HLT_Photon50_R9Id90_HE10_IsoM();
        else if (name == "HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50") return nt.HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50();
        else if (name == "HLT_Photon600") return nt.HLT_Photon600();
        else if (name == "HLT_Photon60_HoverELoose") return nt.HLT_Photon60_HoverELoose();
        else if (name == "HLT_Photon60_R9Id90_CaloIdL_IsoL") return nt.HLT_Photon60_R9Id90_CaloIdL_IsoL();
        else if (name == "HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL") return nt.HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL();
        else if (name == "HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15") return nt.HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15();
        else if (name == "HLT_Photon75") return nt.HLT_Photon75();
        else if (name == "HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40") return nt.HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40();
        else if (name == "HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF") return nt.HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF();
        else if (name == "HLT_Photon75_R9Id90_HE10_IsoM") return nt.HLT_Photon75_R9Id90_HE10_IsoM();
        else if (name == "HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3") return nt.HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3();
        else if (name == "HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3") return nt.HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3();
        else if (name == "HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3") return nt.HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3();
        else if (name == "HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3") return nt.HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3();
        else if (name == "HLT_Photon90") return nt.HLT_Photon90();
        else if (name == "HLT_Photon90_CaloIdL_HT300") return nt.HLT_Photon90_CaloIdL_HT300();
        else if (name == "HLT_Photon90_CaloIdL_PFHT500") return nt.HLT_Photon90_CaloIdL_PFHT500();
        else if (name == "HLT_Photon90_CaloIdL_PFHT600") return nt.HLT_Photon90_CaloIdL_PFHT600();
        else if (name == "HLT_Photon90_CaloIdL_PFHT700") return nt.HLT_Photon90_CaloIdL_PFHT700();
        else if (name == "HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40") return nt.HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40();
        else if (name == "HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF") return nt.HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF();
        else if (name == "HLT_Photon90_R9Id90_HE10_IsoM") return nt.HLT_Photon90_R9Id90_HE10_IsoM();
        else if (name == "HLT_SinglePhoton10_Eta3p1ForPPRef") return nt.HLT_SinglePhoton10_Eta3p1ForPPRef();
        else if (name == "HLT_SinglePhoton20_Eta3p1ForPPRef") return nt.HLT_SinglePhoton20_Eta3p1ForPPRef();
        else if (name == "HLT_SinglePhoton30_Eta3p1ForPPRef") return nt.HLT_SinglePhoton30_Eta3p1ForPPRef();
        else if (name == "HLT_TriplePhoton_20_20_20_CaloIdLV2") return nt.HLT_TriplePhoton_20_20_20_CaloIdLV2();
        else if (name == "HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL") return nt.HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL();
        else if (name == "HLT_TriplePhoton_30_30_10_CaloIdLV2") return nt.HLT_TriplePhoton_30_30_10_CaloIdLV2();
        else if (name == "HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL") return nt.HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL();
        return bool();
    }
    vector<bool> GetVB(const string &name) {
        if (name == "Electron_convVeto") return nt.Electron_convVeto();
        else if (name == "Electron_cutBased_HEEP") return nt.Electron_cutBased_HEEP();
        else if (name == "Electron_isPFcand") return nt.Electron_isPFcand();
        else if (name == "Electron_mvaFall17V1Iso_WP80") return nt.Electron_mvaFall17V1Iso_WP80();
        else if (name == "Electron_mvaFall17V1Iso_WP90") return nt.Electron_mvaFall17V1Iso_WP90();
        else if (name == "Electron_mvaFall17V1Iso_WPL") return nt.Electron_mvaFall17V1Iso_WPL();
        else if (name == "Electron_mvaFall17V1noIso_WP80") return nt.Electron_mvaFall17V1noIso_WP80();
        else if (name == "Electron_mvaFall17V1noIso_WP90") return nt.Electron_mvaFall17V1noIso_WP90();
        else if (name == "Electron_mvaFall17V1noIso_WPL") return nt.Electron_mvaFall17V1noIso_WPL();
        else if (name == "Electron_mvaFall17V2Iso_WP80") return nt.Electron_mvaFall17V2Iso_WP80();
        else if (name == "Electron_mvaFall17V2Iso_WP90") return nt.Electron_mvaFall17V2Iso_WP90();
        else if (name == "Electron_mvaFall17V2Iso_WPL") return nt.Electron_mvaFall17V2Iso_WPL();
        else if (name == "Electron_mvaFall17V2noIso_WP80") return nt.Electron_mvaFall17V2noIso_WP80();
        else if (name == "Electron_mvaFall17V2noIso_WP90") return nt.Electron_mvaFall17V2noIso_WP90();
        else if (name == "Electron_mvaFall17V2noIso_WPL") return nt.Electron_mvaFall17V2noIso_WPL();
        else if (name == "Electron_mvaSpring16GP_WP80") return nt.Electron_mvaSpring16GP_WP80();
        else if (name == "Electron_mvaSpring16GP_WP90") return nt.Electron_mvaSpring16GP_WP90();
        else if (name == "Electron_mvaSpring16HZZ_WPL") return nt.Electron_mvaSpring16HZZ_WPL();
        else if (name == "GenDressedLepton_hasTauAnc") return nt.GenDressedLepton_hasTauAnc();
        else if (name == "IsoTrack_isFromLostTrack") return nt.IsoTrack_isFromLostTrack();
        else if (name == "IsoTrack_isHighPurityTrack") return nt.IsoTrack_isHighPurityTrack();
        else if (name == "IsoTrack_isPFcand") return nt.IsoTrack_isPFcand();
        else if (name == "Jet_Filter") return nt.Jet_Filter();
        else if (name == "Jet_FilterLoose") return nt.Jet_FilterLoose();
        else if (name == "Muon_highPurity") return nt.Muon_highPurity();
        else if (name == "Muon_inTimeMuon") return nt.Muon_inTimeMuon();
        else if (name == "Muon_isGlobal") return nt.Muon_isGlobal();
        else if (name == "Muon_isPFcand") return nt.Muon_isPFcand();
        else if (name == "Muon_isTracker") return nt.Muon_isTracker();
        else if (name == "Muon_looseId") return nt.Muon_looseId();
        else if (name == "Muon_mediumId") return nt.Muon_mediumId();
        else if (name == "Muon_mediumPromptId") return nt.Muon_mediumPromptId();
        else if (name == "Muon_softId") return nt.Muon_softId();
        else if (name == "Muon_softMvaId") return nt.Muon_softMvaId();
        else if (name == "Muon_tightId") return nt.Muon_tightId();
        else if (name == "Muon_triggerIdLoose") return nt.Muon_triggerIdLoose();
        else if (name == "Photon_electronVeto") return nt.Photon_electronVeto();
        else if (name == "Photon_isScEtaEB") return nt.Photon_isScEtaEB();
        else if (name == "Photon_isScEtaEE") return nt.Photon_isScEtaEE();
        else if (name == "Photon_mvaID_WP80") return nt.Photon_mvaID_WP80();
        else if (name == "Photon_mvaID_WP90") return nt.Photon_mvaID_WP90();
        else if (name == "Photon_pixelSeed") return nt.Photon_pixelSeed();
        else if (name == "Tau_Filter") return nt.Tau_Filter();
        else if (name == "Tau_idDecayMode") return nt.Tau_idDecayMode();
        return vector<bool>();
    }
}
