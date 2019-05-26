#include "gui.h"
#include <thread>

#include <iostream>

Gui::Gui(Controller &controllerIn, World &world) : controller(controllerIn) {
	world.addObserver(std::make_shared<Gui>(*this));
}

void Gui::update(const std::shared_ptr<Player> player, const Matrix &board, bool gameOver) {
	nana::drawing drawing(form);

	drawing.clear();

	drawPlayer(drawing, player);
	drawBoardAndEntities(drawing, board);

	this->gameOver = gameOver;
	form.events().key_press([this] (const nana::arg_keyboard& ei) {
		switch (char(ei.key)) {
			case 'S':
			if (!this->gameOver) {
				this->controller.step(Direction::South);
			}
			break;
			case 'W':
			if (!this->gameOver) {
				this->controller.step(Direction::North);
			}
			break;
			case 'D':
			if (!this->gameOver) {
				this->controller.step(Direction::East);
			}
			break;
			case 'A':
			if (!this->gameOver) {
				this->controller.step(Direction::West);
			}
			break;
			case char(32):
			if (this->gameOver) {
				this->controller.restart();
			}
			break;
			default:
			break;
		}
	});

	drawing.update();
	form.show();
	nana::exec();
}

void Gui::drawPlayer(nana::drawing &drawing, const std::shared_ptr<Player> player) {
	drawing.draw([player](nana::paint::graphics& graph) {
		graph.rectangle(nana::rectangle{SQUARE_SIZE * (*player).getY(), SQUARE_SIZE * (*player).getX(), SQUARE_SIZE -1 , SQUARE_SIZE -1}, true, nana::colors::blue);
	});
}

void Gui::drawBoardAndEntities(nana::drawing &drawing, const Matrix &board) {
	for (unsigned int i = 0; i < board.size1(); i++) {
		for (unsigned int j = 0; j < board.size2(); j++) {
			if (board(i,j) != nullptr) {
				// Draw occupied occupied positions of the board
				drawing.draw([i, j](nana::paint::graphics& graph) {
					graph.rectangle(nana::rectangle{SQUARE_SIZE * int(j), SQUARE_SIZE * int(i), SQUARE_SIZE -1 , SQUARE_SIZE -1}, true, nana::colors::red);
				});
			}
			// Draw board grid
			drawing.draw([i, j](nana::paint::graphics& graph) {
				graph.rectangle(nana::rectangle{SQUARE_SIZE * int(j), SQUARE_SIZE * int(i), SQUARE_SIZE, SQUARE_SIZE}, false, nana::colors::black);
			});
		}
	}

}
