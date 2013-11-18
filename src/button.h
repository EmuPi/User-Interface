#include<SDL/SDL_ttf.h>
#include<string.h>

using namespace std;

class button{
	private:
		static TTF_Font* font;
		char* text;
	public:
		button(char* txt);
		void loadFont();
		
};
		

