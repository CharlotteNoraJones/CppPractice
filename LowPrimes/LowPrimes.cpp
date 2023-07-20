#include <iostream>

bool isPrimeLow(int x) {
    return (x == 2 || x == 3 || x == 5 || x == 7);
}

int main()
{
    int x{};
    std::cout << "Enter a number between 0 and 9: ";
    std::cin >> x;
    if (isPrimeLow(x))
        std::cout << "This number is prime.\n";
    else
        std::cout << "This number is not prime.\n";
}