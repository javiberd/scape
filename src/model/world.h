#ifndef SCAPE_SRC_MODEL_WORLD_H_
#define SCAPE_SRC_MODEL_WORLD_H_

#include "observable.h"
#include "player.h"

class World: public Observable {
private:
	std::shared_ptr<Player> player;
	boost::numeric::ublas::matrix<std::shared_ptr<Entity> > board;
public:
	World() {};
	World(const World& world);
	World(Player &player, int length_board);
	void movePlayer(Direction);
	void moveEntities();
	void notifyAll();
	void addObserver();
};

#endif /* SCAPE_SRC_MODEL_WORLD_H_ */
