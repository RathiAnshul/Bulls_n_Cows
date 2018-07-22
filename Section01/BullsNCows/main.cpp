#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
void PrintInfo();
void PlayGame();
string GetGuess();

// Game Entry Point
int main()
{
	PrintInfo ();
	PlayGame();
	//Exiting game here
	return 0;
}

// Introduced the game
void PrintInfo()
{
	constexpr int WORD_LENGTH = 9;

	cout << "Welcome to Bulls & Cows" << endl;
	cout << "It's a fun word Game." << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram word I am thinking of right now ?" << endl;
	return;
}

// Actual game play
void PlayGame()
{
	constexpr int LIMIT = 5;
	for (int count = 1; count <= LIMIT; count++)
	{
		string Guess = GetGuess();
		cout << "You guess was : " << Guess << endl;
		cout << endl;
	}
}

// Getting Input from the player
string GetGuess()
{	
	cout << "\nEnter your answer here : " << endl;
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}