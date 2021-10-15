import ROOT as r
import sys
import ctypes
import numpy as np

process_ids = {}

process_ids["Data"] = 0
process_ids["HH_ggTauTau"] = -1
process_ids["HH_ggWW_dileptonic"] = -3
process_ids["HH_ggWW_semileptonic"] = -4
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

integrals_overall = {}
integrals_1tau1lep = {}
integrals_0tau2lep = {}
integrals_2tau0lep = {}
integrals_1tau0lep = {}
integrals_1tau1iso = {}

errors_overall = {}
errors_1tau1lep = {}
errors_0tau2lep = {}
errors_2tau0lep = {}
errors_1tau0lep = {}
errors_1tau1iso = {}


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

temp = ctypes.c_double(0)
for process in histograms_overall.keys():
    integrals_overall[process] = histograms_overall[process].IntegralAndError(0,-1, temp)
    print(temp.value)
    errors_overall[process] = temp.value
    integrals_1tau1lep[process] = histograms_1tau1lep[process].IntegralAndError(0,-1, temp)
    errors_1tau1lep[process] = temp.value
    integrals_0tau2lep[process] = histograms_0tau2lep[process].IntegralAndError(0,-1, temp)
    errors_0tau2lep[process] = temp.value
    integrals_2tau0lep[process] = histograms_2tau0lep[process].IntegralAndError(0,-1, temp)
    errors_2tau0lep[process] = temp.value
    integrals_1tau0lep[process] = histograms_1tau0lep[process].IntegralAndError(0,-1, temp)
    errors_1tau0lep[process] = temp.value
    integrals_1tau1iso[process] = histograms_1tau1iso[process].IntegralAndError(0,-1, temp)
    errors_1tau1iso[process] = temp.value

integrals_overall["background"] = 0
integrals_1tau1lep["background"] = 0
integrals_0tau2lep["background"] = 0
integrals_2tau0lep["background"] = 0
integrals_1tau0lep["background"] = 0
integrals_1tau1iso["background"] = 0

errors_overall["background"] = 0
errors_1tau1lep["background"] = 0
errors_0tau2lep["background"] = 0
errors_2tau0lep["background"] = 0
errors_1tau0lep["background"] = 0
errors_1tau1iso["background"] = 0

integrals_overall["signal"] = 0
integrals_1tau1lep["signal"] = 0
integrals_0tau2lep["signal"] = 0
integrals_2tau0lep["signal"] = 0
integrals_1tau0lep["signal"] = 0
integrals_1tau1iso["signal"] = 0

errors_overall["signal"] = 0
errors_1tau1lep["signal"] = 0
errors_0tau2lep["signal"] = 0
errors_2tau0lep["signal"] = 0
errors_1tau0lep["signal"] = 0
errors_1tau1iso["signal"] = 0


for process in  histograms_overall.keys():
    if ("TT" in process and process != "TT") or "Data" in process :
        continue
    if "HH_gg" not in process:
        integrals_overall["background"] += integrals_overall[process]
        errors_overall["background"] = np.sqrt(errors_overall["background"] ** 2 + errors_overall[process]** 2)

        integrals_1tau1lep["background"] += integrals_1tau1lep[process]
        errors_1tau1lep["background"] = np.sqrt(errors_1tau1lep["background"] ** 2 + errors_1tau1lep[process]** 2)

        integrals_0tau2lep["background"] += integrals_0tau2lep[process]
        errors_0tau2lep["background"] = np.sqrt(errors_0tau2lep["background"] ** 2 + errors_0tau2lep[process]** 2)

        integrals_2tau0lep["background"] += integrals_2tau0lep[process]
        errors_2tau0lep["background"] = np.sqrt(errors_2tau0lep["background"] ** 2 + errors_2tau0lep[process]** 2)

        integrals_1tau0lep["background"] += integrals_1tau0lep[process]
        errors_1tau0lep["background"] = np.sqrt(errors_1tau0lep["background"] ** 2 + errors_1tau0lep[process]** 2)

        integrals_1tau1iso["background"] += integrals_1tau1iso[process]
        errors_1tau1iso["background"] = np.sqrt(errors_1tau1iso["background"] ** 2 + errors_1tau1iso[process]** 2)

    else:
        integrals_overall["signal"] += integrals_overall[process]
        errors_overall["signal"] = np.sqrt(errors_overall["signal"] ** 2 + errors_overall[process]** 2)

        integrals_1tau1lep["signal"] += integrals_1tau1lep[process]
        errors_1tau1lep["signal"] = np.sqrt(errors_1tau1lep["signal"] ** 2 + errors_1tau1lep[process]** 2)

        integrals_0tau2lep["signal"] += integrals_0tau2lep[process]
        errors_0tau2lep["signal"] = np.sqrt(errors_0tau2lep["signal"] ** 2 + errors_0tau2lep[process]** 2)

        integrals_2tau0lep["signal"] += integrals_2tau0lep[process]
        errors_2tau0lep["signal"] = np.sqrt(errors_2tau0lep["signal"] ** 2 + errors_2tau0lep[process]** 2)

        integrals_1tau0lep["signal"] += integrals_1tau0lep[process]
        errors_1tau0lep["signal"] = np.sqrt(errors_1tau0lep["signal"] ** 2 + errors_1tau0lep[process]** 2)

        integrals_1tau1iso["signal"] += integrals_1tau1iso[process]
        errors_1tau1iso["signal"] = np.sqrt(errors_1tau1iso["signal"] ** 2 + errors_1tau1iso[process]** 2)


print("|Process|inclusive|1tau0lep|1tau0lep_iso|1tau1lep|2tau0lep|0tau2lep|")
print("|---|---|---|---|---|---|---|")
for process in integrals_overall.keys():
    if "TT" in process and process != "TT":
        continue
    print("|{}|{:0.2} $\pm$ {:0.2}|{:0.2} $\pm$ {:0.2}|{:0.2} $\pm$ {:0.2}|{:0.2} $\pm$ {:0.2}|{:0.2} $\pm$ {:0.2}|{:0.2} $\pm$ {:0.2}|".format(process, integrals_overall[process],  errors_overall[process], integrals_1tau0lep[process], errors_1tau0lep[process], integrals_1tau1iso[process], errors_1tau1iso[process], integrals_1tau1lep[process], errors_1tau1lep[process], integrals_2tau0lep[process], errors_2tau0lep[process], integrals_0tau2lep[process],
        errors_0tau2lep[process]))





