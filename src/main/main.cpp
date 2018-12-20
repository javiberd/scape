#include "../gui/gui.h"
#include "../controller/controller.h"
#include "../model/world.h"

#include <nana/gui.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/button.hpp>

int main() {
	Gui gui;
	std::srand(std::time(nullptr));
	gui.start();
}
