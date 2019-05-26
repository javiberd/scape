#ifndef SCAPE_SRC_GUI_GUI_H_
#define SCAPE_SRC_GUI_GUI_H_

#include "../model/observer.h"
#include "../controller/controller.h"
#include <nana/gui.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/button.hpp>

class Gui : public Observer {

private:
	static const int SQUARE_SIZE = 50;
	Controller &controller;
	nana::form form;
	bool gameOver;

public:
	Gui(Controller &controllerIn, World &world);

	~Gui() {};

	void update(const std::shared_ptr<Player> player, const Matrix &board, bool gameOver) override;

private:
	static void drawPlayer(nana::drawing &drawing, const std::shared_ptr<Player> player);
	static void drawBoardAndEntities(nana::drawing &drawing, const Matrix &board);

};

#endif /* SCAPE_SRC_GUI_GUI_H_ */
