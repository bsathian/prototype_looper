import h5py
import pandas
import json
import numpy as np
import random
import uproot

from helpers import utils

class PrepHelper():
    """
        preprocessing, sample labeling, etc and then write them
    to an output hdf5 file to be used for BDT/DNN training
    """

    def __init__(self, **kwargs):
        self.input = kwargs.get("input")
        self.output = kwargs.get("output")
        self.debug = kwargs.get("debug")
        self.config_file = kwargs.get("config")
        self.tree_name = kwargs.get("tree_name", "t")
        self.gjets_data = kwargs.get("gjets_data", "t")
        self.save_new_df = kwargs.get("save_new_df", False)
        if self.debug > 0:
            print("[PrepHelper] Creating PrepHelper instance with options:")
            print("\n".join(["{0}={1!r}".format(a, b) for a, b in kwargs.items()]))

        self.make_process_id_map()

        with open(self.config_file, "r") as f_in:
            self.config = json.load(f_in)

#        self.df = pandas.read_pickle(self.input)
        if ".root" in self.input:
            t = uproot.open(self.input)[self.tree_name]
            self.df = t.arrays(self.config["training_features"] + self.config["branches"] + ["Category"], library="pd")
        else:
            self.df = pandas.read_pickle(self.input)
        if self.debug > 0:
            print("[PrepHelper] Loaded file %s, containing %d events" % (self.input, len(self.df)))

        if self.gjets_data:
            if self.debug > 0:
                print("[PrepHelper] Data driven estimation for Gamma + Jets")
            if ".root" in self.gjets_data:
                t = uproot.open(self.gjets_data)[self.tree_name]
                self.gjets_df = t.arrays(self.config["training_features"] + self.config["branches"] + ["Category"], library="pd")
            else:
                self.gjets_df = pandas.read_pickle(self.gjets_data)
            if self.debug > 0:
                print("[PrepHelper] Loaded G+Jets data driven estimation file {}, containing {} events".format(self.gjets_data, len(self.gjets_df)))
        else:
            self.gjets_df = None

    def run(self):
        self.prepare_samples()
        self.preprocess() # scale sig/bkg yields, preprocess individual features, etc
        self.prepare_features()
        self.make_train_test_validation_split()
        self.write_hdf5()
        return

    def apply_preselections(self):
        self.df["weight"] *= 100

    def make_process_id_map(self):

        self.process_id_map = {}
        self.process_id_map["HH_ggTauTau"] = -1
        self.process_id_map["HH_ggZZ"] = -2
        self.process_id_map["HH_ggZZ_4l"] = -5
        self.process_id_map["HH_ggZZ_2l2q"] = -6
        self.process_id_map["HH_ggWW_dileptonic"] = -3
        self.process_id_map["HH_ggWW_semileptonic"] = -4

        self.process_id_map["DiPhoton"] = 3
        self.process_id_map["GJets"] = 8
        self.process_id_map["TTGG"] = 7
        self.process_id_map["TTGamma"] = 6
        self.process_id_map["TTbar"] = 5
        self.process_id_map["VH"] = 9
        self.process_id_map["WGamma"] = 4
        self.process_id_map["ZGamma"] = 2
        self.process_id_map["ttH"] = 10
        self.process_id_map["ggH"] = 11
        self.process_id_map["VBFH"] = 12

        if self.debug > 0:
            print("[PrepHelper] process_id map: ", self.process_id_map)
        return

    def preprocess(self):
        if self.config["preprocess"]["scale_signal"]: # scale signal yield to bkg yield
            self.df.loc[self.df["label"] == 1, "weight"] *= self.n_background_weighted / self.n_signal_weighted
            self.n_signal_reweighted = self.df["weight"][self.df["label"] == 1].sum()

            if self.debug > 0:
                print("[PrepHelper] After scaling signal yield, total weighted signal/background events are %.6f/%.6f" % (self.n_signal_reweighted, self.n_background_weighted))


        # Onehot encoding
        if "Category" in self.df.columns and "Category_onehot_1" not in self.df.columns:
            for i in self.df["Category"].astype(int).unique():
                self.df["Category_onehot_{}".format(i)] = np.zeros(len(self.df))
                self.df.loc[self.df["Category"] == i, "Category_onehot_{}".format(i)] = 1

            self.config["training_features"] = self.config["training_features"] + ["Category_onehot_{}".format(i) for i in self.df["Category"].astype(int).unique()]
        return
    def prepare_samples(self):
        """
        Select only the needed samples from the dataframe,
        then assign labels to signals/backgrounds
        """
        # If separate gjets_df found, remove GJets MC from self.df and append self.gjets_df with the appropriate process id
        if self.gjets_df is not None:
            if self.debug > 0:
                print("[PrepHelper] appending gjets df to main df")
            self.df = self.df.loc[self.df["process_id"] != self.process_id_map["GJets"]] # removes process_id = 8
            self.gjets_df["process_id"] = self.process_id_map["GJets"] # assign new process id to data driven background
            self.df = self.df.append(self.gjets_df, ignore_index=True) # Appended!
            merged_file_name = self.input.split(".")
            merged_file_name = ".".join(merged_file_name[:-1]) + "_with_gjets." + ".".join(merged_file_name[-1:])
            if self.save_new_df:
                if self.debug > 0:
                    print("[PrepHelper] Saving merged dataframe to {}".format(merged_file_name))
                if ".root" in self.input:
                    with uproot.recreate(merged_file_name) as f:
                        f["t"] = self.df
                else:
                    self.df.to_pickle(merged_file_name)
        # The existing machinery will take over from here!

        self.process_ids = []
        for process in self.config["signal"] + self.config["background"]:
           self.process_ids.append(self.process_id_map[process])

        self.df = self.df[self.df["process_id"].isin(self.process_ids)]

        #applying preselections
        self.apply_preselections()

        if self.debug > 0:
            print("[PrepHelper] After selecting for signals and backgrounds, dataframe contains %d events" % (len(self.df)))

        label = list(np.zeros(len(self.df)))

        self.df["label"] = label
        self.df = self.df.reset_index(drop = True) # reassign indices so we can do test/train/val splits more easily later

        # Assign signal events label of 1
        for process in self.config["signal"]:
            self.df.loc[self.df["process_id"] == self.process_id_map[process], "label"] = 1

        self.n_signal = len(self.df[self.df["label"] == 1])
        self.n_signal_weighted = self.df["weight"][self.df["label"] == 1].sum()

        self.n_background = len(self.df[self.df["label"] == 0])
        self.n_background_weighted = self.df["weight"][self.df["label"] == 0].sum()

        if self.debug > 0:
            print("[PrepHelper] After labeling, have %d signal events (%.6f weighted) and %d background events (%.6f weighted)" % (self.n_signal, self.n_signal_weighted, self.n_background, self.n_background_weighted))

        return

    def prepare_features(self):
        self.X = self.df[self.config["training_features"]]
        self.y = self.df["label"]
        self.weight = self.df["weight"]

    def make_train_test_validation_split(self):
        """
        In order to have a consistent way of identifying test/train/validation events
        in multiple places throughout the workflow (training MVAs, zipping MVA score back
        into dataframe, optimizing SRs), use the following convention:
        To assign an event to test/train/val, take the decimal digits of its mgg value.
        E.g. 125.342682 -> 342682
            digits % 3 == 0 : train
            digits % 3 == 1 : test
            digits % 3 == 2 : validation

        Different test/train splits can be selected later in training for e.g.
        optimizing hyperparameters, but this ensures consistency in knowing what is
        train/test/validation throughout the workflow
        """

        self.df, idx_train, idx_test, idx_validation = utils.make_train_test_validation_split(self.df)

        self.X_train = self.X.iloc[idx_train]
        self.y_train = self.y.iloc[idx_train]
        self.weight_train = self.weight.iloc[idx_train]
        self.X_test = self.X.iloc[idx_test]
        self.y_test = self.y.iloc[idx_test]
        self.weight_test = self.weight.iloc[idx_test]
        self.X_validation = self.X.iloc[idx_validation]
        self.y_validation = self.y.iloc[idx_validation]
        self.weight_validation = self.weight.iloc[idx_validation]

        self.df.iloc[idx_train, self.df.columns.get_loc("train_label")] = 0
        self.df.iloc[idx_test, self.df.columns.get_loc("train_label")] = 1
        self.df.iloc[idx_validation, self.df.columns.get_loc("train_label")] = 2

        self.n_train = len(self.df[self.df["train_label"] == 0])
        self.n_test = len(self.df[self.df["train_label"] == 1])
        self.n_validation = len(self.df[self.df["train_label"] == 2])

        if self.debug > 0:
            print("[PrepHelper] Have %d/%d/%d events in train/test/validation splits" % (self.n_train, self.n_test, self.n_validation))

        return

    def write_hdf5(self):
        self.X_train.to_hdf(self.output, "X_train")
        self.y_train.to_hdf(self.output, "y_train")
        self.weight_train.to_hdf(self.output, "weight_train")
        self.X_test.to_hdf(self.output, "X_test")
        self.y_test.to_hdf(self.output, "y_test")
        self.weight_test.to_hdf(self.output, "weight_test")

        return
