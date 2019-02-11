#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

const int GUESSTIME = 5;

void Initialize();
int RandomRange(int min, int max);
void playGame();
void CheckPlayAgain();
bool ValidGuess(char guess, int randNum);

int main() 
{
	Initialize();
	playGame();

	return 0;
}

void playGame() {

	cout << "Guess the random number between 1 and 6!\n";

	int randNum = RandomRange(1,6);
	char guess;

	for (int i = 0; i < GUESSTIME; i++)
	{
		cout << "Your Guess: ";
		std::cin >> guess;

		if (ValidGuess(guess, randNum)) {
			if (std::stoi(&guess) == randNum) {
				cout << "You got it! \n";
				break;
			} else {
				cout << "Wrong\n";
			}
		} else {
			cout << "this guess is not valid! Pick a number between 1 and 6.\n";
		}
	}
	CheckPlayAgain();
}

bool ValidGuess(const char guess, int randNum) {
	if (!isdigit(guess)) { return false; }
	int curGuess = atoi(&guess);

	if (curGuess > 7 || curGuess < 0) {
		return false;
	}
	return true;
}

void CheckPlayAgain() {
	string playAgain;
	cout << "Do you want to play again (y/n)? ";
	std::cin >> playAgain;

	if (playAgain == "Y" || playAgain == "y") {
		system("cls");
		playGame();
	}
	else {
		cout << "Press enter to exit...\n";
		std::cin.ignore(std::cin.rdbuf()->in_avail() + 1);
	}
}

void Initialize() {
	srand(time(0));
}

int RandomRange(int min, int max) {
	return rand() % max + min;
}