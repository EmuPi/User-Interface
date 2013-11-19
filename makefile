CC=g++
CCLIBS=-lSDL -lSDL_ttf

all:
	$(CC) src/*.cpp -std=c++11 -o emupigui $(CCLIBS)
