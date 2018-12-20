#include "common.h"
#include <cstdlib>
#include <ctime>

bool inMatrix(int x, int y, int n) {
	return x >= 0 && y >= 0 && x < n && y < n;
}

int randomNumber(int a, int b) {
	return a + (std::rand() % (b - a));
}

bool randomBool() {
	return randomNumber(0, 2) == 1 ? true : false;
}
