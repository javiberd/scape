#include "gui.h"

Gui::Gui() {
	// Define a label and display a text.
	nana::label lab{form, "Hello Luna, te quiero</>"};
	lab.format(true);

    //Define a button and answer the click event.
	nana::button btn{form, "Quit"};
	btn.events().click([&]{
	        this->form.close();
	});

	//Layout management
	form.div("vert <><<><weight=80% text><>><><weight=24<><button><>><>");
	form["text"]<<lab;
	form["button"] << btn;
	form.collocate();
}


void Gui::start() {
//
//	nana::drawing dw(form);

//	dw.draw([](nana::paint::graphics& graph) {
//		graph.rectangle(nana::rectangle{10, 10, 15, 30}, true, nana::colors::red);
//	});

//	dw.update();

//	int matrix[5][5] = {
//			0, 1, 0, 1, 0,
//			1, 1, 1, 0, 1,
//			0, 1, 0, 1, 0,
//			1, 1, 1, 0, 1,
//			0, 1, 0, 1, 0};
//
//	for (unsigned int i = 0; i < 5; i++) {
//			for (unsigned int j = 0; j < 5; j++) {
//				if (matrix[i][j] == 1) {
//					dw.draw([i, j](nana::paint::graphics& graph) {
//						graph.rectangle(nana::rectangle{50 * i, 50 * j, 49, 49}, true, nana::colors::red);
//					});
//				}
//			}
//		}

	//Show the form
	form.show();

	//Start to event loop process, it blocks until the form is closed.
	nana::exec();
}

void Gui::update(const std::shared_ptr<Player> player, const Matrix &board) {
	nana::drawing dw(form);

	// Draw player
	int x = (*player).getX();
	int y = (*player).getY();
	dw.draw([x, y](nana::paint::graphics& graph) {
		graph.rectangle(nana::rectangle{50 * x, 50 * y, 49, 49}, true, nana::colors::blue);
	});

	// Draw board
	for (unsigned int i = 0; i < board.size1(); i++) {
		for (unsigned int j = 0; j < board.size2(); j++) {
			if (board(i,j) != nullptr) {
				dw.draw([i, j](nana::paint::graphics& graph) {
					graph.rectangle(nana::rectangle{50 * i, 50 * j, 49, 49}, true, nana::colors::red);
				});
			}
		}
	}
}
