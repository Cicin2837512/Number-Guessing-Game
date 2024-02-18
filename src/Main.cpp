#include "Game.h"

int main() {
	Game game;
	do {
		game.newGame();
	} while (game.getGameIsRunning());
	return 0;
}
