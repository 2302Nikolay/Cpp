#include <iostream>
#include <iterator>
#include <limits>

int main()
{
	setlocale(LC_ALL, "rus");

	int num{};
	do
	{
		std::cout << "Введите число из диапазона от 1 до 9 >> ";
		std::cin >> num;
		if (std::cin.fail())
			std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	} while (num < 1 || num >9);

	constexpr int arr[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };

	for (int i{ 0 }; i < std::size(arr); ++i)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
	return EXIT_SUCCESS;
}