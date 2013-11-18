#include "main.h"

int main(int argc, char **argv)
{
	gui piGui;
	
	if(piGui.init() != 0){
		return 1;
	}
	
	while(piGui.running)
	{
		piGui.update();
		piGui.draw();
	}
}
