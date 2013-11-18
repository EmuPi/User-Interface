#include <SDL/SDL.h>
#include <iostream>

class gui{
	private:
		int width;
		int height; 
		SDL_Surface* screen;
		
		
	public:
		bool running;
		int init();
		void update();
		void draw();
};
