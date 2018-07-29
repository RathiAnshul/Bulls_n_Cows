#include <iostream>
#include <conio.h>
#include <string>
#include "FBullCowsGame.h"

void PrintInfo();
void PlayGame();
bool AskToPlayAgain();
std::string GetGuess();

FBullCowGame BCGame; //Instantiate A New Game

// Game Entry Point
int main()
{
	bool bPlayAgain = false;	
	do
	{
		PrintInfo();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	}
	while
		(bPlayAgain);

	//Exiting game here
	return 0;
}

// Introduced the game
void PrintInfo()
{
	constexpr int WORD_LENGTH = 9;

	std::cout << "Welcome to Bulls & Cows" << std::endl;
	std::cout << "It's a fun word Game." << std::endl;
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram word I am thinking of right now ?" << std::endl;
	return;
}

// Actual game play
void PlayGame()
{
	int MaxTries = BCGame.GetMaxTries();
	std::cout << MaxTries << std::endl;

	for (int count = 1; count <= MaxTries; count++)
	{
		std::string Guess = GetGuess();
		std::cout << "You guess was : " << Guess << std::endl;
		std::cout << std::endl;
	}
}

// Getting Input from the player
std::string GetGuess()
{	
	int CurrentTry = BCGame.GetCurrentTry();
	
	std::cout << "\n Try "<< CurrentTry <<": Enter your answer here : " << std::endl;
	std::string Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}

// Asking if player want's to continue?
bool AskToPlayAgain()
{
	std::cout << "Do you want to play again?";
	std::string Response = "";
	std::getline(std::cin, Response);
  return ((Response[0] == 'y') || (Response[0] =='Y'));
	std::cout << std::endl;
}