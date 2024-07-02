#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	setlocale(LC_ALL, "rus");

	std::cout << "Введите имя >> ";
	std::string name{};
	std::getline(std::cin >> std::ws, name);

	std::cout << "Введите возраст >> ";
	int age{};
	std::cin >> age;

	int letters{ static_cast<int>(name.length()) };
	double agePerLetter{ static_cast<double>(age) / letters };
	std::cout << "Вы прожили " << agePerLetter << " лет для каждой буквы своего имени.\n";

	return EXIT_SUCCESS;
}