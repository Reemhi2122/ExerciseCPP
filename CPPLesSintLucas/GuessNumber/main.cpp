#include <iostream>
#include <ctime>

void Initialize();
void PickNumber();

int main() {

	Initialize();
	PickNumber();
	
	return 0;
}

void Initialize() {
	srand(time(0));
}

void PickNumber() {
	std::cout << "Pick a number between 1 and 1000.\n";
	cout << "Your number: ";

}