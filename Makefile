all:
	g++ main.cc `root-config --cflags --glibs` -o looper.exe
