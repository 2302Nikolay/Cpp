#include <iostream>

double getNum()
{
	std::cout << "¬ведите число >> ";
	double num{};
	std::cin >> num;
	return num;
}

char getChar()
{
	std::cout << "¬ведите оператор (+, -, *, /) >> ";
	char ch{};
	std::cin >> ch;
	return ch;
}

void getRes(double a, double b, char ch)
{
	if (ch == '+')
		std::cout << a << ch << b << '=' << a + b << '\n';
	else if (ch == '-')
		std::cout << a << ch << b << '=' << a - b << '\n';
	else if (ch == '*')
		std::cout << a << ch << b << '=' << a * b << '\n';
	else if (ch == '/')
		std::cout << a << ch << b << '=' << a / b << '\n';
}