#pragma once
#include <string>

class FBullCowGame
{
//How our Game thinks
public:
	void Reset(); //To Make This Return A Rich Value
	int GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuessValidaity(std::string); //To Make This Return A Rich Value

// Leave this for a while.
private:
	int MyCurrentTries = 1;
	int MyMaxTries = 5;
};