#ifndef SCAPE_SRC_CONTROLLER_CONTROLLER_H_
#define SCAPE_SRC_CONTROLLER_CONTROLLER_H_

#include "../model/world.h"
#include "../model/observer.h"

class Controller {

private:
	World &world;

public:
	Controller(World &world);

	void start();

	void restart();

	void step(Direction direction);

};

#endif /* SCAPE_SRC_CONTROLLER_CONTROLLER_H_ */
