#include <iostream>

int getNum()
{
	std::cout << "Введите число >> ";
	int num{};
	std::cin >> num;
	return num;
}

bool isEven(int num)
{
	return ((num % 2 != 0) ? false : true);
}