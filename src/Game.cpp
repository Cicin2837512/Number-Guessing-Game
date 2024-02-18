#include "Game.h"
#include <iostream>
#include <random>
using std::cout, std::cin, std::string;

void Game::newGame() {

	// The welcome message is the first thing the program should do
	cout << "Welcome player!\nI have chosen a number between 1 and 100.\nTry guessing my number:\n\n";


	// Let's generate the random number (plot twist: I haven't actually chosen it, it's randomly generated)
	static constexpr int MIN_NUMBER = 1;
	static constexpr int MAX_NUMBER = 100;
	
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> distribution(MIN_NUMBER, MAX_NUMBER);

	randomNumber = distribution(gen);


	// Now, the player is actually going to guess
	gameplay();


	// Finally, let's ask if the game should start again or stop
	playAgain();

}

void Game::gameplay() {
	
	// The main part of the game - guessing, this do while loop just goes on and on until your guess is right
	do {
		
		cin >> guessedNumber;

		if (guessedNumber > randomNumber) {
			
			cout << "Too high!\n\n";
		} else if (guessedNumber < randomNumber) {

			cout << "Too low!\n\n";
		}

	} while (guessedNumber != randomNumber);


	// After you guessed the right number, the code will continue from here
	cout << "Congratulations! The number was " << randomNumber << "!\n";

}

void Game::playAgain() {
	
	// Let's ask the player if he want's to play again
	cout << "Would you like to play again? [y/n]: ";
	cin >> playAgainAnswer;


	// If yes, then it will start over, if no, then the program will end
	while (playAgainAnswer != "y" && playAgainAnswer != "Y" && playAgainAnswer != "n" && playAgainAnswer != "N") {

		cout << "\nType 'y' or 'n': ";
		cin >> playAgainAnswer;
	}

	if (playAgainAnswer == "y" || playAgainAnswer == "Y") {
		cout << "\n\n";
	} else {
		gameIsRunning = false;
	}

}

bool Game::getGameIsRunning() {
	
	// Just return the value of "gameIsRunning"
	return gameIsRunning;
}
