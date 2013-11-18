CC=g++
CCLIBS=-lSDL

all:
	$(CC) src/*.cpp -o emupigui $(CCLIBS)
