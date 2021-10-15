import uproot
import pandas as pd
import sys

df = pd.read_pickle(sys.argv[1])
with uproot.recreate(sys.argv[2]) as f:
    print("opened File")
    df["weight"] *= 3
    f["t"] = df

