#include "gui.h"

gui::gui(){
	std::cout << "Initializing";
	
	//Set up variables
	width = 640;
	height = 480;
	running = true;
	
	//Init SDL
	SDL_Init(SDL_INIT_VIDEO);
	screen = SDL_SetVideoMode(width, height, 0, SDL_HWSURFACE | SDL_DOUBLEBUF); //Change 0 to 1 for fullscreen (do before deploying)
	
	//Init SDL_ttf
	TTF_Init();
	
	//Create buttons
	//button Game = button("games");
}

void gui::update(){
	while(SDL_PollEvent(&event)) {
		switch(event.type)
		{
			case SDL_QUIT:
				running = false;
				break;
		}
	}
}

void gui::draw(){
	button myButton = button((char*)"hello");
	myButton.draw(screen);
	SDL_Flip(screen);
}

void gui::close(){
	SDL_Quit();
}
