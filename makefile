CC=g++
CCLIBS=-lSDL -lSDL_ttf

all:
	$(CC) src/*.cpp -o emupigui $(CCLIBS)
