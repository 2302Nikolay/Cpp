#include <iostream>

struct Fraction
{
	int num{};
	int denum{};
};

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

int main()
{
	setlocale(LC_ALL, "rus");

	Fraction num1{ getFraction() };
	Fraction num2{ getFraction() };

	std::cout << num1.num << '/' << num1.denum << " * " << num2.num << '/' << num2.denum << " = " << multiply(num1, num2) << '\n';

	return EXIT_SUCCESS;
}