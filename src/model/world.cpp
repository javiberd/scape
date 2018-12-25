#include "world.h"

World::World(const World &world) {
	this->board = world.board;
	this->player = world.player;
}

World::World(std::shared_ptr<Player> playerIn, int length_board) : player(playerIn) {
	board = Matrix(length_board, length_board);
}

void World::movePlayer(Direction direction) {
	(*player).move(board, direction);
}

void World::moveEntities() {
	for (Matrix::iterator1 it = board.begin1(); it != board.end1(); ++it) {
		(*it).get()->move(board);
	}
}

bool World::gameOver() {
	return board((*player).getX(), (*player).getY()) != nullptr;
}

void World::notifyAll() {

}

void World::addObserver() {

}
