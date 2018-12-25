#ifndef SCAPE_SRC_MODEL_ARTURITO_H_
#define SCAPE_SRC_MODEL_ARTURITO_H_

#include "entity.h"

class Arturito: public Entity {

public:
	void move(int x, int y, Matrix &board);

};

#endif /* SCAPE_SRC_MODEL_ARTURITO_H_ */
