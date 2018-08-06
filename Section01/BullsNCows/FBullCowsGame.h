#pragma once
#include <string>

using Fstring = std::string;
using int32 = int;

struct FBullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

class FBullCowGame
{
	FBullCowGame(); //Using Constructor

//How our Game thinks
public:
	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset(); //To Make This Return A Rich Value
	bool CheckGuessValidaity(Fstring); //To Make This Return A Rich Value

	FBullCowCount SubmitGuess(Fstring);

// Leave this for a while.
// See Constructor.
private:
	int32 MyCurrentTries;
	int32 MyMaxTries;
	Fstring MyHiddenWord;
};