#pragma once

#include<SDL/SDL_ttf.h>
#include<string.h>
#include<iostream>

using namespace std;

class button{
	private:
		static TTF_Font* font;
		static SDL_Color textColor;
		char* text;
		SDL_Surface* textSurface;
	public:
		button(char* txt);
		void draw(SDL_Surface * screen);
};
		

