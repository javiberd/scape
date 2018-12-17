#ifndef SRC_GUI_GUI_H_
#define SRC_GUI_GUI_H_

#include "../model/observer.h"
#include "../controller/controller.h"
#include <nana/gui.hpp>

class Gui : public Observer {
private:
	nana::form form;

public:
	Gui();
	~Gui();
	void update();
};

#endif /* SRC_GUI_GUI_H_ */
