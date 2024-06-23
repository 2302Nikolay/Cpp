#include <iostream>

namespace Animals
{
	enum Animals
	{
		chicken,
		dog,
		cat,
		elephant,
		duck,
		snake,
		max_animals
	};
}

int main()
{
	setlocale(LC_ALL, "rus");

	int legs_number[Animals::max_animals]{ 2, 4, 4, 4, 2, 0 };
	std::cout << "Курица: " << legs_number[Animals::chicken] << " лап(ы)\n";
	std::cout << "Собака: " << legs_number[Animals::dog] << " лап(ы)\n";
	std::cout << "Кот: \t" << legs_number[Animals::cat] << " лап(ы)\n";
	std::cout << "Слон: \t" << legs_number[Animals::elephant] << " лап(ы)\n";
	std::cout << "Утка: \t" << legs_number[Animals::duck] << " лап(ы)\n";
	std::cout << "Змея: \t" << legs_number[Animals::snake] << " лап(ы)\n";

	return EXIT_SUCCESS;
}