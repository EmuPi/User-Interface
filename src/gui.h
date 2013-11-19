#pragma once

#include <SDL/SDL.h>
#include<SDL/SDL_ttf.h>
#include <iostream>
#include "button.h"

class gui{
	private:
		int width;
		int height; 
		SDL_Surface* screen;
		SDL_Event event;
		
	public:
		bool running;
		gui();
		void update();
		void draw();
		void close();
};
