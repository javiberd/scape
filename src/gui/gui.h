#ifndef SCAPE_SRC_GUI_GUI_H_
#define SCAPE_SRC_GUI_GUI_H_

#include "../model/observer.h"
#include "../controller/controller.h"
#include <nana/gui.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/button.hpp>

class Gui : public Observer {

private:
	nana::form form;

public:
	Gui();
	~Gui() {};
	void start();
	void update();

};

#endif /* SCAPE_SRC_GUI_GUI_H_ */
