#include <iostream>
#include "Header.h"

Fraction getFraction()
{
	Fraction temp{};
	std::cout << "Введите числитель >> ";
	std::cin >> temp.num;
	std::cout << "Введите знаменатель >> ";
	std::cin >> temp.denum;
	std::cout << '\n';
	return temp;
}

double multiply(Fraction num1, Fraction num2)
{
	return (static_cast<double>(num1.num * num2.num) / (num1.denum * num2.denum));
}