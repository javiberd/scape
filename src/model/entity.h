#ifndef SCAPE_SRC_MODEL_ENTITY_H_
#define SCAPE_SRC_MODEL_ENTITY_H_

#include <boost/numeric/ublas/matrix.hpp>
#include "../common/direction.h"

class Entity {

protected:
	int x;
	int y;

public:
	typedef boost::numeric::ublas::matrix<std::shared_ptr<Entity> > Matrix;

	Entity(int xIn, int yIn);

	virtual ~Entity() {};

	virtual void move(Matrix &board) {};

	virtual void move(Matrix &board, Direction direction) {};

	int getX();

	int getY();

};

#endif /* SCAPE_SRC_MODEL_ENTITY_H_ */
