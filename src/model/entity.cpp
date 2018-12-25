/*
 *      Author: Javier Berdecio Trigueros
 */

#include "entity.h"


Entity::Entity(int xIn, int yIn) : x(xIn), y(yIn) {

}

int Entity::getX() {
	return x;
}

int Entity::getY() {
	return y;
}
