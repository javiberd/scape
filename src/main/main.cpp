#include "../gui/gui.h"
#include "../controller/controller.h"
#include "../model/world.h"

int main() {
	std::srand(std::time(nullptr));
	World world;
	Controller controller(world);
	Gui gui(controller);
	world.addObserver((std::shared_ptr<Observer>) &gui);
	gui.start();
}
