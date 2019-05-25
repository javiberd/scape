#include "../gui/gui.h"
#include "../controller/controller.h"
#include "../model/world.h"

int main() {
	// Sets the seed of the random number generator
	std::srand(std::time(nullptr));
	// Initialization of main objects
	World world;
	Controller controller(world);
	Gui gui(controller);
	world.addObserver(std::make_shared<Gui>(gui));
	// This is for updating the graphic view with the
	// starting board
	world.notifyAll();
}
