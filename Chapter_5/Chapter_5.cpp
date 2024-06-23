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

int main()
{
	setlocale(LC_ALL, "rus");

	int num{ getNum() };

	std::cout << ((isEven(num)) ? "Число четное!\n" : "Число не четное!\n");

	return EXIT_SUCCESS;
}