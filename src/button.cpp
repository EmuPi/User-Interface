#include"button.h"

void button::loadFont(){
	TTF_Font * font = TTF_OpenFont("fonts/Raleway-Light.otf", 12);
}

button::button(char* txt){
	text = txt;
}
