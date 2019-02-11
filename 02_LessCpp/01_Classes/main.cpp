#include <iostream>

int main() {

	std::cout << "Press enter to exit...\n";
	std::cin.ignore(std::cin.rdbuf()->in_avail() +1);
	return 0;
}