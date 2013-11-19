#include "main.h"

int main(int argc, char **argv)
{
	gui piGui = gui();

	
	while(piGui.running)
	{
		piGui.update();
		piGui.draw();
	}
	
	piGui.close();
}
