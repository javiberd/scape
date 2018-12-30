#include "player.h"
#include "../common/common.h"

Player::Player(int xIn, int yIn) :
		Entity(xIn, yIn) {

}

void Player::move(Matrix &board, Direction direction) {
	int xTemp = x;
	int yTemp = y;
	switch(direction){
	case North:
		xTemp--;
		break;
	case NorthEast:
		xTemp--;
		yTemp++;
		break;
	case East:
		yTemp++;
		break;
	case SouthEast:
		xTemp++;
		yTemp--;
		break;
	case South:
		xTemp++;
		break;
	case SouthWest:
		xTemp++;
		yTemp--;
		break;
	case West:
		yTemp--;
		break;
	case NorthWest:
		xTemp--;
		yTemp--;
		break;
	}
	if (inMatrix(xTemp, yTemp, board.size1())) {
		x = xTemp;
		y = yTemp;
	}
	return;
}



