#include <iostream>
#include "Header.h"

int main()
{
	setlocale(LC_ALL, "rus");

	Fraction num1{ getFraction() };
	Fraction num2{ getFraction() };

	std::cout << num1.num << '/' << num1.denum << " * " << num2.num << '/' << num2.denum << " = " << multiply(num1, num2) << '\n';

	return EXIT_SUCCESS;
}