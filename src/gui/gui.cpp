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
	//Show the form
	form.show();

	//Start to event loop process, it blocks until the form is closed.
	nana::exec();
}

void Gui::update(const std::shared_ptr<Player> player, const Matrix &board) {

}
