#include "player.h"
#include "../common/common.h"

void Player::move(Direction direction) {
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
	if (inMatrix(xTemp, yTemp, length_board)) {
		x = xTemp;
		y = yTemp;
	}
	return;
}



