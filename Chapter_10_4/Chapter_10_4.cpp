#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	std::string names[]{ "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };

	std::cout << "Введите имя >> ";
	std::string userName{};
	std::cin >> userName;

	bool found{ false };
	for (auto & name : names)
	{
		if (name == userName)
		{
			found = true;
			break;
		}
	}

	(found) ? (std::cout << "Имя есть в списке!\n") : (std::cout << "Имени нет в списке!\n");

	return EXIT_SUCCESS;
}