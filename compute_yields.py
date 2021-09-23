import ROOT as r
import sys

process_ids = {}

process_ids["Data"] = 0
process_ids["HH_ggTauTau"] = -1
process_ids["HH_ggZZ"] = -2
process_ids["HH_ggWW_dileptonic"] = -3
process_ids["HH_ggWW_semileptonic"] = -4
process_ids["HH_ggZZ_4l"] = -5
process_ids["HH_ggZZ_2l2q"] = -6
process_ids["DiPhoton"] = 3
process_ids["GJets"] = 8
process_ids["TTGG"] = 7
process_ids["TTGamma"] = 6
process_ids["TTbar"] = 5
process_ids["VH"] = 9
process_ids["WGamma"] = 4
process_ids["ZGamma"] = 2
process_ids["ttH"] = 10
process_ids["ggH"] = 11
process_ids["VBFH"] = 12

f = r.TFile(sys.argv[1])
t = f.Get("t")
histograms_overall = {}
histograms_1tau1lep = {}
histograms_0tau2lep = {}
histograms_2tau0lep = {}
histograms_1tau0lep = {}
histograms_1tau1iso = {}
for process in process_ids.keys():
    histograms_overall[process] = r.TH1D("mgg_{}".format(process), "", 100,100,400)
    histograms_1tau1lep[process] = r.TH1D("mgg_1tau1lep_{}".format(process), "", 100,100,400)
    histograms_0tau2lep[process] = r.TH1D("mgg_0tau2lep_{}".format(process), "", 100,100,400)
    histograms_2tau0lep[process] = r.TH1D("mgg_2tau0lep_{}".format(process), "", 100,100,400)
    histograms_1tau0lep[process] = r.TH1D("mgg_1tau0lep_{}".format(process), "", 100,100,400)
    histograms_1tau1iso[process] = r.TH1D("mgg_1tau1iso_{}".format(process), "", 100,100,400)

    t.Project("mgg_{}".format(process), "mgg", "weight*(process_id == {})".format(process_ids[process]))
    t.Project("mgg_1tau1lep_{}".format(process), "mgg", "weight*(process_id == {} && (Category == 1 || Category == 2))".format(process_ids[process]))
    t.Project("mgg_0tau2lep_{}".format(process), "mgg", "weight*(process_id == {} && (Category >= 4 && Category <= 6))".format(process_ids[process]))
    t.Project("mgg_2tau0lep_{}".format(process), "mgg", "weight*(process_id == {} && Category == 3)".format(process_ids[process]))
    t.Project("mgg_1tau0lep_{}".format(process), "mgg", "weight*(process_id == {} && Category == 8)".format(process_ids[process]))
    t.Project("mgg_1tau1iso_{}".format(process), "mgg", "weight*(process_id == {} && Category == 7)".format(process_ids[process]))

for histograms in [histograms_overall, histograms_1tau1lep, histograms_0tau2lep, histograms_2tau0lep, histograms_1tau0lep, histograms_1tau1iso]:
    histograms["TT"] = histograms["TTbar"].Clone("mgg_TT")
    histograms["TT"].Add(histograms["TTGG"])
    histograms["TT"].Add(histograms["TTGamma"])

print("|Process|inclusive|1tau0lep|1tau0lep_iso|1tau1lep|2tau0lep|0tau2lep")
print("|---|---|---|---|---|---|")
for process in histograms_overall.keys():
    if "TT" in process and process != "TT":
        continue
    print("|{}|{:0.2f}|{:0.2f}|{:0.2f}|{:0.2f}|{:0.2f}|{:0.2f}|".format(process, histograms_overall[process].Integral(0,-1),  histograms_1tau0lep[process].Integral(0,-1), histograms_1tau1iso[process].Integral(0,-1), histograms_1tau1lep[process].Integral(0,-1), histograms_2tau0lep[process].Integral(0,-1), histograms_0tau2lep[process].Integral(0,-1)))



