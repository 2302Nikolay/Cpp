#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	
	std::cout << "Введите целое число: ";

	int num{ 0 };
	std::cin >> num;

	std::cout << "Удвоенное число " << num << " это: " << num * 2 << '\n';
	std::cout << "Утроенное число " << num << " это: " << num * 3 << '\n';

	return 0;
}