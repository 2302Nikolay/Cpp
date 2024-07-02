#include <iostream>

int readNumber()
{
	std::cout << "Введите число:";
	int x{};
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "Результат деления: " << x << "\n";
}