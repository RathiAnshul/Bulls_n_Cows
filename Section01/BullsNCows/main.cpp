#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	// Introduced the game

	constexpr int WORD_LENGTH = 5;

	cout << "Welcome to Bulls & Cows" << endl;
	cout << "It's a fun word Game." << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram word I am thinking of right now ?" << endl;
	cout << "\nEnter your answer here : " << endl;

	// Getting Input from the player

	string Guess = "";

	cin >> Guess;
	cout << "You entered the word : \n\n" << Guess << endl;
	cout << "\nEnter your answer here : " << endl;
	cin >> Guess;
	cout << "You entered the word : \n\n" << Guess << endl;

	// Keep guessing the input from the player

	cout << endl;
	return 0;
}