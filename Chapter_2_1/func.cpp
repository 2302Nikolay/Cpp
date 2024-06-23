#include <iostream>
int readNumber()
{
	int x{};
	std::cout << "Введите число >> ";
	std::cin >> x;
	return x;
}

void writeAnswer(int a)
{
	std::cout << "Ответ: " << a << '\n';
}