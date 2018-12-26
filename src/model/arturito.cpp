#include "arturito.h"
#include "../common/common.h"

void Arturito::move(boost::numeric::ublas::matrix<std::shared_ptr<Entity> > &board) {
	int xAdd, yAdd;
	do {
		xAdd = randomBool() ? 1 : -1;
		yAdd = randomBool() ? 1 : -1;
	} while (!inMatrix(x + xAdd, y + yAdd, board.size1()));
	board (x + xAdd, y + yAdd) = board (x, y);
	board (x, y) = nullptr;
	x = x + xAdd;
	y = y + yAdd;
}
