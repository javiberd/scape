#ifndef SCAPE_SRC_MODEL_PLAYER_H_
#define SCAPE_SRC_MODEL_PLAYER_H_

#include "entity.h"

class Player : public Entity {

public:
	void move(Matrix &board, Direction direction);

};

#endif /* SCAPE_SRC_MODEL_PLAYER_H_ */
