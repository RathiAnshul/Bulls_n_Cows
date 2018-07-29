#include "stdafx.h"
#include "FBullCowsGame.h"

int FBullCowGame::GetMaxTries() {	return MyMaxTries; }
int FBullCowGame::GetCurrentTry() {	return MyCurrentTries; }

void FBullCowGame::Reset()
{
	return;
}

bool FBullCowGame::IsGameWon()
{
	return false;
}

bool FBullCowGame::CheckGuessValidaity(std::string)
{
	return false;
}