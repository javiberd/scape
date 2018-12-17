#ifndef SRC_PLAYER_H_
#define SRC_PLAYER_H_

#include "../common/direction.h"
#include "entity.h"

class Player {
private:
	int x;
	int y;
	int length_board;
public:
	void move(Direction direction);
};

#endif
