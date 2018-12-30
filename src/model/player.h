#ifndef SCAPE_SRC_MODEL_PLAYER_H_
#define SCAPE_SRC_MODEL_PLAYER_H_

#include "entity.h"

class Player : public Entity {

public:
	Player(int xIn, int yIn);

	void move(Matrix &board, Direction direction) override;

};

#endif /* SCAPE_SRC_MODEL_PLAYER_H_ */
