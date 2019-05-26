#ifndef SCAPE_SRC_MODEL_WORLD_H_
#define SCAPE_SRC_MODEL_WORLD_H_

#include "observable.h"
#include "observer.h"
#include "player.h"
#include "entity.h"

#include <set>

typedef boost::numeric::ublas::matrix<std::shared_ptr<Entity> > Matrix;

class World: public Observable {

private:
	static const int DEFAULT_BOARD_LENGTH = 10;
	std::shared_ptr<Player> player;
	Matrix board;
	std::set<std::shared_ptr<Observer> > observers;

public:
	World();

	World(const World& world);

	void restart();

	void step(Direction direction);

	void notifyAll() override;

	void addObserver(std::shared_ptr<Observer> observer) override;

private:
	void initialize();

	bool gameOver();

	void movePlayer(Direction direction);

	void moveEntities();

};

#endif /* SCAPE_SRC_MODEL_WORLD_H_ */
