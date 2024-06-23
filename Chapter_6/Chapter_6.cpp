#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	std::cout << "Введите число >> ";
	int smaller{};
	std::cin >> smaller;

	std::cout << "Введите большее число >> ";
	int larger{};
	std::cin >> larger;

	if (smaller > larger)
	{
		std::cout << "Меняем местами переменные... \n";
		int temp{ larger };
		larger = smaller;
		smaller = temp;
	}

	std::cout << "Значение меньшего: " << smaller << '\n';
	std::cout << "Значение большего: " << larger << '\n';

	return EXIT_SUCCESS;
}