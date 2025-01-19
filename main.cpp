#include <iostream>

void printAuto(auto input, bool isEndline = false) {
	if (isEndline == false) {
		std::cout << input;
	}
	else if (isEndline == true) {
		std::cout << input << std::endl;
	}
}

int main()
{
	printAuto("Hello, World!");
	return 0;
}