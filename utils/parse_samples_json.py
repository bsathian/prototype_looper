import json
import glob

years = [2016, 2017, 2018]
f = json.load(open("samples.json"))

samples = f.keys()
for year in years:
    writeFile = open("samples_{}.txt".format(year), "w")
    for sample in samples:
        print(sample)
        temp = f[sample][str(year)]
        writeFile.write("ds:{}\n".format(sample))
        if "Data" not in sample:
            writeFile.write("scale1fb:{}\n".format(temp["metadata"]["scale1fb"]))
        for path in temp["paths"]:
            fullPaths = glob.glob(path + "/*/*/*/")
            for fullPath in fullPaths:
                writeFile.write(fullPath + "\n")
    writeFile.close()
