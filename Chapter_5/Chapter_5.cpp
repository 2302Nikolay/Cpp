#include <iostream>
#include "Header.h"

int main()
{
	setlocale(LC_ALL, "rus");

	int num{ getNum() };

	std::cout << ((isEven(num)) ? "Число четное!\n" : "Число не четное!\n");

	return EXIT_SUCCESS;
}