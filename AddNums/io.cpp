#include <iostream>

int readNumber()
{
	int num{};
	std::cout << "Enter a integer: ";
	std::cin >> num;
	return num;
}

void writeAnswer(int answer)
{
	std::cout << "The sum is: " << answer << "\n";
}
