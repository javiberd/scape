#ifndef SCAPE_SRC_MODEL_PLAYER_H_
#define SCAPE_SRC_MODEL_PLAYER_H_

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

#endif /* SCAPE_SRC_MODEL_PLAYER_H_ */
