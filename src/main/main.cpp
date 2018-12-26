#include "../gui/gui.h"
#include "../controller/controller.h"
#include "../model/world.h"

int main() {
	Gui gui;
	std::srand(std::time(nullptr));
	gui.start();
}
