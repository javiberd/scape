#include "world.h"
#include "arturito.h"
#include "../common/common.h"

World::World() {
	board = Matrix(DEFAULT_BOARD_LENGTH, DEFAULT_BOARD_LENGTH);
	player = std::make_shared<Player>(Player(0, 0));
	board(DEFAULT_BOARD_LENGTH - 1, DEFAULT_BOARD_LENGTH - 1) =
			std::make_shared<Entity>(
					Arturito(DEFAULT_BOARD_LENGTH - 1, DEFAULT_BOARD_LENGTH - 1));
}

World::World(const World &world) {
	this->board = world.board;
	this->player = world.player;
}

void World::movePlayer(Direction direction) {
	(*player).move(board, direction);
	notifyAll();
}

void World::moveEntities() {
	for (Matrix::iterator1 it = board.begin1(); it != board.end1(); ++it) {
		(*it).get()->move(board);
	}
	notifyAll();
}

bool World::gameOver() {
	return board((*player).getX(), (*player).getY()) != nullptr;
}

void World::notifyAll() {
	for (std::shared_ptr<Observer> o: observers) {
		(*o).update(player, board);
	}
}

void World::addObserver(std::shared_ptr<Observer> observer) {
	observers.insert(observer);
}
