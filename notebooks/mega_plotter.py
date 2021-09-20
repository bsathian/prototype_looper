import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
import uproot
import awkward as ak
from yahist import Hist1D
from yahist.utils import plot_stack
import mplhep as hep
plt.style.use([hep.style.CMS, hep.style.firamath])

t = uproot.open("../output.root")["t"]
df = t.arrays(library = "pd")

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
            hists[process] = Hist1D(toFill.values, bins=mgg_binning, label=process, weights=weight)

    hists["TTbar"] += hists["TTGamma"] + hists["TTGG"]
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
            hists[process] = Hist1D(toFill.values, bins=mgg_binning, label=process, weights=weight)

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
            signal_hists.plot(color=colors[process], label=process)

        plt.title(data["title"] + " Non-resonant backgrounds")
        ax.set_yscale("log")
        ax.legend(fontsize=10)
        if Category > 0:
            plt.savefig("{}_cat_{}_nonresonant.pdf".format(quantity, Category))
        else:
            plt.savefig("{}_overall_nonresonant.pdf".format(quantity))

        res_stack, res_signal_hists = compute_resonant_processes(quantity, category_data)
        fig, ax = plt.subplots()
        plot_stack(res_stack, ax=ax, histtype="stepfilled")

        for process, signal_hist in res_signal_hists.items():
            signal_hists.plot(color=colors[process], label=process)

        plt.title(data["title"] + " Resonant backgrounds")
        ax.set_yscale("log")
        ax.legend(fontsize=10)
        if Category > 0:
            plt.savefig("{}_cat_{}_resonant.pdf".format(quantity, Category))
        else:
            plt.savefig("{}_overall_resonant.pdf".format(quantity))

        overall_stack = res_stack + nonres_stack
        overall_stack = sorted(overall_stack, key=lambda x: x.integral)
        fig, ax = plt.subplots()
        plot_stack(overall_stack, ax=ax, histtype="stepfilled")
        plt.title(data["title"] + "all backgrounds")
        ax.set_yscale("log")
        ax.legend(fontsize=10)
        if Category > 0:
            plt.savefig("{}_cat_{}_all.pdf".format(quantity, Category))
        else:
            plt.savefig("{}_overall_all.pdf".format(quantity))


# dictionary
plotter_data = {}
plotter_data["mgg"] = {"binning": "40,100,180", "toFill": df, "title": "Di-Photon Mass", "yscale": "log"}
plot_processes_category_split("mgg", plotter_data["mgg"])
