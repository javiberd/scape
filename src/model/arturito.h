#ifndef SRC_ARTURITO_H_
#define SRC_ARTURITO_H_

#include "entity.h"

class Arturito: public Entity {

public:
	void move(int x, int y, boost::numeric::ublas::matrix<std::unique_ptr<Entity> > &board);
};

#endif /* SRC_ARTURITO_H_ */
