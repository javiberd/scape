#include "controller.h"

Controller::Controller (World &world) : world(world) {

}

void Controller::start() {
	world.notifyAll();
}

void Controller::restart() {
	world.restart();
}

void Controller::step(Direction direction) {
	world.step(direction);
}
