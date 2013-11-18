#include "gui.h"

int gui::init(){
	std::cout << "initing";
	width = 640;
	height = 480;
	SDL_Init(SDL_INIT_VIDEO);
	screen = SDL_SetVideoMode(width, height, 0, SDL_HWSURFACE | SDL_DOUBLEBUF);//Change 0 to 1 for fullscreen (do before deploying)
	running = true;
	return 0;
}

void gui::update(){
	std::cout << "updating";
}

void gui::draw(){
	std::cout << "drawing";
}
