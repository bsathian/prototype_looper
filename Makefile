all:
	make -f TauAnalysis/ClassicSVfit/Makefile -j 4 && \
	g++ -g main.cc `root-config --cflags --glibs` -lGenVector -I./ TauAnalysis/ClassicSVfit/lib/libTauAnalysis_ClassicSVfit.so -o looper.exe
clean:
	rm -f TauAnalysis/ClassicSVfit/lib/*.so \
		looper.exe

