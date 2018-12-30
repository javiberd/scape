#ifndef SCAPE_SRC_MODEL_ARTURITO_H_
#define SCAPE_SRC_MODEL_ARTURITO_H_

#include "entity.h"

class Arturito: public Entity {

public:
	Arturito(int xIn, int yIn);

	void move(Matrix &board) override;

};

#endif /* SCAPE_SRC_MODEL_ARTURITO_H_ */
