﻿#include <iostream>
#include <iterator>

int main()
{
	setlocale(LC_ALL, "rus");

	constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };

	for (int i{ 0 }; i < std::size(array); ++i)
	{
		std::cout << array[i] << ' ';
	}
	std::cout << '\n';
	return EXIT_SUCCESS;
}