#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	int a{};
	int b{};

	std::cout << "Введите число a >> ";
	std::cin >> a;

	std::cout << "Введите число b >> ";
	std::cin >> b;


	std::cout << a << "+" << b << "=" << a + b << '\n';
	std::cout << a << "-" << b << "=" << a - b << '\n';

	return EXIT_SUCCESS;
}