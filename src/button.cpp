#include"button.h"

TTF_Font * button::font = TTF_OpenFont("Raleway-Light.otf", 12);
SDL_Color button::textColor = { 255, 255, 255 };

button::button(char* txt){
	textSurface = TTF_RenderText_Blended (TTF_OpenFont("Raleway-Light.otf", 14), txt, textColor);
	textSurface->refcount++; 
}

void button::draw(SDL_Surface * screen){
	SDL_BlitSurface(textSurface, NULL, screen, NULL);
}
