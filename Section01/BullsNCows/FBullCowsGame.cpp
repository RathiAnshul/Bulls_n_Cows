#include "FBullCowsGame.h"

using int32 = int;

FBullCowGame::FBullCowGame() {	Reset(); }
int32 FBullCowGame::GetMaxTries() const {	return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const {	return MyCurrentTries; }

void FBullCowGame::Reset()
{
	constexpr int32 MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;
	
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