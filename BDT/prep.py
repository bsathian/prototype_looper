import argparse

from helpers import prep_helper

"""
This script writes events to an hdf5 file for BDT/DNN training.
"""

parser = argparse.ArgumentParser()
parser.add_argument(
    "--input",
    help = "path to input dataframe",
    type = str,
    default = "output.root"
)
parser.add_argument(
    "--debug",
    help = "debug level",
    type = int,
    default = 1
)
parser.add_argument(
    "--config",
    help = "json file with config options",
    type = str,
    default = "data/HH_ggTauTau_BaselineBDT.json"
)
parser.add_argument(
    "--output",
    help = "name of output hdf5 file",
    type = str,
    default = "output/test.hdf5"
)

parser.add_argument(
        "--tree_name",
        help = "Name of the TTree (default = t)",
        type = str,
        default = "t"
        )
parser.add_argument(
        "--gjets_data",
        help="Path of data driven G+Jets file, leave blank if MC only",
        type=str,
        default=None
        )
parser.add_argument(
        "--save_new_df",
        help="Save appended DF",
        action="store_true",
        )
args = parser.parse_args()

prepper = prep_helper.PrepHelper(**vars(args))
prepper.run()
