#include <iostream>

int main() {
	for (int i = 1; i < 100; i++) {
		if (i % 15 == 0) {
			std::cout << i << " FizzBuzz\n";
		}
		else if (i % 3 == 0) {
			std::cout << i << " Fizz\n";
		}
		else if (i % 5 == 0) {
			std::cout << i << " Buzz\n";
		}
	}

	std::cin.ignore(std::cin.rdbuf()->in_avail() + 1);
	return 0;
}