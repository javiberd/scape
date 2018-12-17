#include "world.h"

World::World(const World &world) {
	this->board = world.board;
	this->player = world.player;
}

World::World(Player &player, int length_board) : player(&player) {

}

void World::movePlayer(Direction direction) {

}

void World::moveEntities() {

}

void World::notifyAll() {

}

void World::addObserver() {

}
