#include <iostream>
#include <string>
#include <ctime>

void Initialize();

bool PlayAgain();
void StartGame();
int RandomRange(int min, int max);

constexpr int STARTINT = 50;

int main() {

	Initialize();

	do
	{
		StartGame();
	} while (PlayAgain());

	return 0;
}

void StartGame()
{
	
}

void Initialize(){
	srand(time(0));
}

bool PlayAgain()
{
	std::string BPlayAgain;
	std::cout << "Do you want to play again? (y/n): \n";
	std::cin >> BPlayAgain;
	if (BPlayAgain == "y" || BPlayAgain == "Y") {
		return true;
	}
	return false;
}

int RandomRange(int min, int max) {
	return rand() % max + min;
}
