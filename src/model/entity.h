#ifndef SRC_ENTITY_H_
#define SRC_ENTITY_H_

#include <boost/numeric/ublas/matrix.hpp>

class Entity {
public:
	Entity() {}

	virtual ~Entity() {}

	virtual void move(int x, int y, boost::numeric::ublas::matrix<std::shared_ptr<Entity> > &board) = 0;
};

#endif
