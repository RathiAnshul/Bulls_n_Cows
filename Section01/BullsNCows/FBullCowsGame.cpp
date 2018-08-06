#include "FBullCowsGame.h"

using int32 = int;

FBullCowGame::FBullCowGame() {	Reset(); }
int32 FBullCowGame::GetMaxTries() const {	return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const {	return MyCurrentTries; }

void FBullCowGame::Reset()
{
	constexpr int32 MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;
	const Fstring HIDDEN_WORD = "planet";
	MyHiddenWord = HIDDEN_WORD;

	MyCurrentTries = 1;
	return;
}

bool FBullCowGame::IsGameWon() const
{
	return false;
}

bool FBullCowGame::CheckGuessValidaity(Fstring)
{
	return false;
}

//Valiedating guess, counting BULLS & COWS & increimentiong it
FBullCowCount FBullCowGame::SubmitGuess(Fstring Guess)
{
	MyCurrentTries++;
	FBullCowCount BullCowCount;

	int32 HiddenWordLength = MyHiddenWord.length();
	for (int32 MHWChar=0; MHWChar<HiddenWordLength; MHWChar++)
	{
		for (int32 GChar = 0; GChar < HiddenWordLength; GChar++)
		{
			if (Guess[GChar] == MyHiddenWord[MHWChar])
			{
				if (MHWChar = GChar)
				{
					BullCowCount.Bulls++;
				}
				else
				{
					BullCowCount.Cows++;
				}
			}
		}
	}

	//Loop through all letters in word.
		//compares lettes agains the words.
			//if they match then.
				//if they are in same place.
					//increment bulls
				//if they not.
					//increment cows.
	return BullCowCount;
}