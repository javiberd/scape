#ifndef SRC_CONTROLLER_CONTROLLER_H_
#define SRC_CONTROLLER_CONTROLLER_H_

#include "../model/world.h"
#include "../model/observer.h"

class Controller {
private:
	World world;
	std::vector<Observer*> observers;

public:
	Controller(const World &world, Observer &observer);

	void step(Direction direction);
};

#endif
