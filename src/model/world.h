#ifndef SCAPE_SRC_MODEL_WORLD_H_
#define SCAPE_SRC_MODEL_WORLD_H_

#include "observable.h"
#include "player.h"
#include "entity.h"

typedef boost::numeric::ublas::matrix<std::shared_ptr<Entity> > Matrix;

class World: public Observable {

private:
	std::shared_ptr<Player> player;
	Matrix board;

public:
	World() {};

	World(const World& world);

	World(std::shared_ptr<Player> player, int length_board);

	void movePlayer(Direction);

	void moveEntities();

	bool gameOver();

	void notifyAll();

	void addObserver();

};

#endif /* SCAPE_SRC_MODEL_WORLD_H_ */
