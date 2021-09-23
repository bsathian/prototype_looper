import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
import uproot
import awkward as ak
from yahist import Hist1D
from yahist.utils import plot_stack
import mplhep as hep
import sys
from tqdm import tqdm
import os

plt.style.use([hep.style.CMS, hep.style.firamath])

t = uproot.open(sys.argv[1])["t"]
print("Reading DF")
master_df = t.arrays(library = "pd")
print("DF read!")

process_ids = {}
process_ids["Data"] = 0

process_ids["HH_ggTauTau"] = -1
process_ids["HH_ggZZ"] = -2
process_ids["HH_ggZZ_4l"] = -5
process_ids["HH_ggZZ_2l2q"] = -6
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

is_resonant = {}

is_resonant["Data"] = False
is_resonant["DiPhoton"] = False
is_resonant["GJets"] = False
is_resonant["HH_ggTauTau"] = True
is_resonant["HH_ggZZ"] = True
is_resonant["HH_ggWW_dileptonic"] = True
is_resonant["HH_ggWW_semileptonic"] = True
is_resonant["HH_ggZZ_4l"] = True
is_resonant["HH_ggZZ_2l2q"] = True
is_resonant["TTGG"] = False
is_resonant["TTGamma"] = False
is_resonant["TTbar"] = False
is_resonant["VH"] = True
is_resonant["WGamma"] = False
is_resonant["ZGamma"] = False
is_resonant["ttH"] = True
is_resonant["ggH"] = True
is_resonant["VBFH"] = True

colors = {}
colors["Data"] = "k"
colors["DiPhoton"] = "C0"
colors["GJets"] = "C1"
colors["HH_ggTauTau"] = "k"
colors["HH_ggZZ"] = "b"
colors["HH_ggWW"] = "g"
colors["TTbar"] = "C3"
colors["VH"] = "C4"
colors["WGamma"] = "C5"
colors["ZGamma"] = "C6"
colors["ttH"] = "C7"
colors["ggH"] = "C8"
colors["VBFH"] = "C2"


def compute_nonresonant_processes(quantity, category_data):
    df = category_data["toFill"]
    hists = {}
    for process, process_id in process_ids.items():
        if is_resonant[process] and "HH_gg" not in process:
            continue
        toFill = df.loc[df["process_id"] == process_id, quantity] # select by process, then select the quantity
        weight = df.loc[df["process_id"] == process_id, "weight"]
        if process in colors:
            hists[process] = Hist1D(toFill.values, bins=category_data["binning"], label=process, weights=weight, color=colors[process])
        else:
            hists[process] = Hist1D(toFill.values, bins=category_data["binning"], label=process, weights=weight)

    hists["TTbar"] += hists["TTGamma"] + hists["TTGG"]
    background_stack = [hist for process, hist in hists.items() if "HH_gg" not in process and process != "Data" and "TTG" not in process]
    background_stack = sorted(background_stack, key=lambda x: x.integral)

    # signal stuff
    hists["HH_ggZZ"] += hists["HH_ggZZ"] + hists["HH_ggZZ_4l"] + hists["HH_ggZZ_2l2q"]
    hists["HH_ggWW"] = hists["HH_ggWW_dileptonic"] + hists["HH_ggWW_semileptonic"]

    signal_hists = {}
    signal_hists["HH_ggTauTau"] = hists["HH_ggTauTau"]
    signal_hists["HH_ggZZ"] = hists["HH_ggZZ"]
    signal_hists["HH_ggWW"] = hists["HH_ggWW"]

    return background_stack, signal_hists

def compute_resonant_processes(quantity, category_data):
    df = category_data["toFill"]
    hists = {}
    for process, process_id in process_ids.items():
        if not is_resonant[process]:
            continue
        toFill = df.loc[df["process_id"] == process_id, quantity] # select by process, then select the quantity
        weight = df.loc[df["process_id"] == process_id, "weight"]
        if process in colors:
            hists[process] = Hist1D(toFill.values, bins=category_data["binning"], label=process, weights=weight, color=colors[process])
        else:
            hists[process] = Hist1D(toFill.values, bins=category_data["binning"], label=process, weights=weight)

    background_stack = [hist for process, hist in hists.items() if "HH_gg" not in process and process != "Data"]
    background_stack = sorted(background_stack, key=lambda x: x.integral)

    # signal stuff
    hists["HH_ggZZ"] += hists["HH_ggZZ"] + hists["HH_ggZZ_4l"] + hists["HH_ggZZ_2l2q"]
    hists["HH_ggWW"] = hists["HH_ggWW_dileptonic"] + hists["HH_ggWW_semileptonic"]

    signal_hists = {}
    signal_hists["HH_ggTauTau"] = hists["HH_ggTauTau"]
    signal_hists["HH_ggZZ"] = hists["HH_ggZZ"]
    signal_hists["HH_ggWW"] = hists["HH_ggWW"]

    return background_stack, signal_hists


def plot_processes_category_split(quantity, data):

    for Category in range(8):
        category_data = data.copy()
        if Category > 0:
            category_data["toFill"] = category_data["toFill"].loc[category_data["toFill"]["Category"] == Category]

        nonres_stack, nonres_signal_hists = compute_nonresonant_processes(quantity, category_data)
        fig, ax = plt.subplots()
        plot_stack(nonres_stack, ax=ax, histtype="stepfilled")

        for process, signal_hist in nonres_signal_hists.items():
            signal_hist.plot(color=colors[process], label=process)
        if Category > 0:
            plt.title(category_data["title"] + " Non-resonant backgrounds Category {}".format(Category))
        else:
            plt.title(category_data["title"] + " Non-resonant backgrounds")

        if "yscale" in category_data and category_data["yscale"] == "log":
            ax.set_yscale("log")
        if "xlabel" in category_data:
            plt.xlabel(category_data["xlabel"])
        else:
            plt.xlabel(category_data["title"])

        ax.legend(fontsize=10)
        if Category > 0:
            os.system("mkdir -p cat_{}".format(Category))
            plt.savefig("cat_{}/{}_cat_{}_nonresonant.pdf".format(Category, quantity, Category))
        else:
            os.system("mkdir -p overall")
            plt.savefig("overall/{}_overall_nonresonant.pdf".format(quantity))
        plt.close()

        res_stack, res_signal_hists = compute_resonant_processes(quantity, category_data)
        fig, ax = plt.subplots()
        plot_stack(res_stack, ax=ax, histtype="stepfilled")

        for process, signal_hist in res_signal_hists.items():
            signal_hist.plot(color=colors[process], label=process)
        if Category > 0:
            plt.title(category_data["title"] + " Resonant backgrounds Category {}".format(Category))
        else:
            plt.title(data["title"] + " Resonant backgrounds")
        ax.set_yscale("log")
        ax.legend(fontsize=10)

        if "yscale" in category_data and category_data["yscale"] == "log":
            ax.set_yscale("log")
        if "xlabel" in category_data:
            plt.xlabel(category_data["xlabel"])
        else:
            plt.xlabel(category_data["title"])

        if Category > 0:
            plt.savefig("cat_{}/{}_cat_{}_resonant.pdf".format(Category, quantity, Category))
        else:
            plt.savefig("overall/{}_overall_resonant.pdf".format(quantity))
        plt.close()

        overall_stack = res_stack + nonres_stack
        overall_stack = sorted(overall_stack, key=lambda x: x.integral)
        fig, ax = plt.subplots()
        plot_stack(overall_stack, ax=ax, histtype="stepfilled")
        for process,signal_hist in res_signal_hists.items():
            signal_hist.plot(color=colors[process], label=process)

        if Category > 0:
            plt.title(category_data["title"] + " all backgrounds Category {}".format(Category))
        else:
            plt.title(data["title"] + " all backgrounds")
        ax.set_yscale("log")
        ax.legend(fontsize=10)

        if "yscale" in category_data and category_data["yscale"] == "log":
            ax.set_yscale("log")
        if "xlabel" in category_data:
            plt.xlabel(category_data["xlabel"])
        else:
            plt.xlabel(category_data["title"])

        if Category > 0:
            plt.savefig("cat_{}/{}_cat_{}_all.pdf".format(Category, quantity, Category))
        else:
            plt.savefig("overall/{}_overall_all.pdf".format(quantity))
        plt.close()


# dictionary
plotter_data = {}
plotter_data["mgg"] = {"binning": "40,100,180", "toFill": master_df, "title": "Di-Photon Mass", "yscale": "log", "xlabel":"Di-Photon mass [GeV]"}
plotter_data["g1_ptmgg"] = {"binning": "50,0,10", "toFill": master_df, "title": "Leading photon pt/mgg", "yscale": "log", "xlabel":"Leading photon pt/mgg"}
plotter_data["g2_ptmgg"] = {"binning": "30,0,6", "toFill": master_df, "title": "Subleading photon pt/mgg", "yscale": "log", "xlabel":"Subleading photon pt/mgg"}
plotter_data["g1_pt"] = {"binning":"50,0,500", "toFill": master_df, "title":"Leading photon pt", "yscale":"log", "xlabel":"Leading photon pt [GeV]"}
plotter_data["g1_eta"] = {"binning":"100,-2.5,2.5", "toFill": master_df, "title":"Leading photon $\eta$", "yscale":"log"}
plotter_data["g1_phi"] = {"binning":"100,-3.15,3.15", "toFill": master_df, "title":"Leading photon $\phi$", "yscale":"log"}
plotter_data["g2_pt"] = {"binning":"50,0,500", "toFill": master_df, "title":"Subleading photon pt", "yscale":"log", "xlabel":"Subleading photon pt [GeV]"}
plotter_data["g2_eta"] = {"binning":"100,-2.5,2.5", "toFill": master_df, "title":"Subleading photon $\eta$", "yscale":"log"}
plotter_data["g2_phi"] = {"binning":"100,-3.15,3.15", "toFill": master_df, "title":"Subleading photon $\phi$", "yscale":"log"}
plotter_data["n_bjets"] = {"binning":"10,0,10", "toFill": master_df, "title":"B-jet multiplicity", "yscale":"log"}
plotter_data["n_jets"] = {"binning":"10,0,10", "toFill": master_df, "title":"Jet multiplicity", "yscale":"log"}

plotter_data["MET_pt"] = {"binning":"50,0,500", "toFill": master_df, "title":"MET pt", "yscale":"log", "xlabel": "MET pt [GeV]"}
plotter_data["MET_phi"] = {"binning":"50,-3.15,3.15", "toFill": master_df, "title":"MET $\phi$", "yscale":"log", "xlabel": "MET $\phi$"}
plotter_data["gg_dR"] = {"binning":"50,0,10", "toFill": master_df, "title": "DiPhoton $\Delta$R", "yscale": "log"}

plotter_data["lep1_pt"] = {"binning": "25,0,100", "toFill": master_df, "title": "Leading Lepton Pt", "yscale": "log", "xlabel": "Leading Lepton Pt [GeV]"}
plotter_data["lep1_eta"] = {"binning": "100,-2.5,2.5", "toFill": master_df, "title": "Leading Lepton $\eta$", "yscale": "log", "xlabel": "Leading Lepton $\eta$"}
plotter_data["lep1_phi"] = {"binning": "100,-3.15,3.15", "toFill": master_df, "title": "Leading Lepton $\phi$", "yscale": "log", "xlabel": "Leading Lepton $\phi$"}

plotter_data["lep2_pt"] = {"binning": "25,0,100", "toFill": master_df, "title": "Subleading Lepton Pt", "yscale": "log", "xlabel": "Subleading Lepton Pt [GeV]"}
plotter_data["lep2_eta"] = {"binning": "100,-2.5,2.5", "toFill": master_df, "title": "Subleading Lepton $\eta$", "yscale": "log", "xlabel": "Subleading Lepton $\eta$"}
plotter_data["lep1_phi"] = {"binning": "100,-3.15,3.15", "toFill": master_df, "title": "Subleading Lepton $\phi$", "yscale": "log", "xlabel": "Subleading Lepton $\phi$"}
plotter_data["lep12_dR"] = {"binning":"50,0,10", "toFill":master_df, "title":"Dilepton $\DeltaR", "yscale":"log"}
plotter_data["gg_cosTheta_helicity_flashgg"] = {"binning":"50,-1,1", "toFill": master_df, "title":"Helicity angle", "yscale": "log"}
plotter_data["gg_tt_CS"] = {"binning":"50,-1,1", "toFill": master_df, "title":"Collins-Soper angle", "yscale": "log"}
plotter_data["m_tautau_SVFit"] = {"binning": "50,0,300", "toFill": master_df, "title": "Di-tau SVFit mass", "yscale": "log","xlabel":"Di-tau SVFit mass [GeV]"}
plotter_data["pt_tautau_SVFit"] = {"binning": "50,0,200", "toFill": master_df, "title": "Di-tau SVFit pt", "yscale": "log", "xlabel":"Di-tau SVFit pt [GeV]"}
plotter_data["eta_tautau_SVFit"] = {"binning": "50,-2.4,2.4", "toFill": master_df, "title": "Di-tau SVFit $\eta$", "yscale": "log"}
plotter_data["phi_tautau_SVFit"] = {"binning": "50,-3.15,3.15", "toFill": master_df, "title": "Di-tau SVFit $\phi$", "yscale": "log"}

for process, data in tqdm(plotter_data.items()):
    print("Process = ", process)
    plot_processes_category_split(process, data)

for Category in list(range(1,8)):
    os.system("cd cat_{} && sh ~/niceplots/niceplots.sh  && cd -".format(Category))
os.system("cd overall && sh ~/niceplots/niceplots.sh  && cd -".format(Category))

os.system("chmod -R 755 .")

