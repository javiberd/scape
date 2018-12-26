#ifndef SCAPE_SRC_MODEL_OBSERVER_H_
#define SCAPE_SRC_MODEL_OBSERVER_H_

#include "entity.h"
#include "player.h"

typedef boost::numeric::ublas::matrix<std::shared_ptr<Entity> > Matrix;

class Observer {

public:
	Observer() {}

	virtual ~Observer() {};

	virtual void update(const std::shared_ptr<Player> player, const Matrix &board) = 0;

};
#endif /* SCAPE_SRC_MODEL_OBSERVER_H_ */
