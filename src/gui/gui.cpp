#include "gui.h"
#include <thread>

#include <iostream>

Gui::Gui(Controller &controllerIn) : controller(controllerIn) {

}

void Gui::update(const std::shared_ptr<Player> player, const Matrix &board) {
	nana::drawing dw(form);

	dw.clear();

	// Draw player
	int x = (*player).getX();
	int y = (*player).getY();
	std::cout << "x " << x << "y " << y << std::endl;
	dw.draw([x, y](nana::paint::graphics& graph) {
		graph.rectangle(nana::rectangle{50 * y, 50 * x, 49, 49}, true, nana::colors::blue);
	});

	// Draw board
	for (unsigned int i = 0; i < board.size1(); i++) {
		for (unsigned int j = 0; j < board.size2(); j++) {
			if (board(i,j) != nullptr) {
				dw.draw([i, j](nana::paint::graphics& graph) {
					graph.rectangle(nana::rectangle{50 * int(j), 50 * int(i), 49, 49}, true, nana::colors::red);
				});
			}
		}
	}

	// Events
	form.events().key_press([this] (const nana::arg_keyboard& ei) {
		switch (char(ei.key)) {
			case 'S':
			this->controller.step(Direction::South);
			break;
			case 'W':
			this->controller.step(Direction::North);
			break;
			case 'D':
			this->controller.step(Direction::East);
			break;
			case 'A':
			this->controller.step(Direction::West);
			break;
			default:
			break;
		}
	});

	dw.update();
	form.show();
	nana::exec();
}
