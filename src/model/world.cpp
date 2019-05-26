#include "world.h"
#include "arturito.h"
#include "../common/common.h"

World::World() {
	initialize();
}

World::World(const World &world) {
	this->board = world.board;
	this->player = world.player;
}

void World::initialize() {
	board = Matrix(DEFAULT_BOARD_LENGTH, DEFAULT_BOARD_LENGTH);
	player = std::make_shared<Player>(Player(0, 0));
	board(DEFAULT_BOARD_LENGTH - 1, DEFAULT_BOARD_LENGTH - 1) =
			std::make_shared<Arturito>(
					Arturito(DEFAULT_BOARD_LENGTH - 1, DEFAULT_BOARD_LENGTH - 1));
}

void World::restart() {
	initialize();
	notifyAll();
}

void World::step(Direction direction) {
	movePlayer(direction);
	moveEntities();
	notifyAll();
}

void World::movePlayer(Direction direction) {
	(*player).move(board, direction);
}

void World::moveEntities() {
	for (Matrix::iterator1 it1 = board.begin1(); it1 != board.end1(); ++it1) {
		for (Matrix::iterator2 it2 = it1.begin(); it2 != it1.end(); ++it2) {
			if (*it2 != nullptr) {
				(*it2).get()->move(board);
			}
		}
	}
}

bool World::gameOver() {
	return board((*player).getX(), (*player).getY()) != nullptr;
}

void World::notifyAll() {
	for (std::shared_ptr<Observer> o: observers) {
		(*o).update(player, board, gameOver());
	}
}

void World::addObserver(std::shared_ptr<Observer> observer) {
	observers.insert(observer);
}
