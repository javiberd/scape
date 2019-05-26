#include "../gui/gui.h"
#include "../controller/controller.h"
#include "../model/world.h"

int main() {
	// Sets the seed of the random number generator
	std::srand(std::time(nullptr));
	// Initialization of main objects
	World world;
	Controller controller(world);
	Gui gui(controller, world);
	// This is for updating the graphic view with the
	// starting board
	controller.start();
}
