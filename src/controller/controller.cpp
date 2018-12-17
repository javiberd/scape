#include "controller.h"

Controller::Controller (const World &world, Observer &observer) : world(world) {}
//Controller::Controller (const World &world, Observer &observer) : world(world), observers() {
//	this->observers.push_back(&observer);
//}

void Controller::step(Direction direction) {
	this->world.movePlayer(direction);
}
