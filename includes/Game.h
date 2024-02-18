#pragma once
#include <string>

class Game {
public:
	int randomNumber;				// the number to guess
	int guessedNumber;				// the number the player guessed
	std::string playAgainAnswer;	// the character the player puts in whe asked if he wants to play again
	bool gameIsRunning;				// the boolean that is used for telling if the game is on or off
	void newGame();					// this method generates the random number, and then starts gameplay() and playAgain()
	void gameplay();				// this is the guessing part of the game itself
	void playAgain();				// this asks the player if he wants to play again
	bool getGameIsRunning();		// this just returns the value of gameIsRunning
};
