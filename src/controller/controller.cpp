#include "controller.h"

Controller::Controller (World &world) : world(world) {

}

void Controller::step(Direction direction) {
	world.movePlayer(direction);
	world.moveEntities();
}
