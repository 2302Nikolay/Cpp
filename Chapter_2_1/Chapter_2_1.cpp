#include <iostream>
#include <iterator>
#include <utility>

int main()
{
	setlocale(LC_ALL, "rus");
	
	int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
	constexpr int length{ static_cast<int>(std::size(array)) };

	for (int i{ 0 }; i < length - 1; ++i)
	{
		int endArr{ length - i };
		bool swap{ false };

		for (int j{ 0 }; j < length - 1; ++j)
		{
			if (array[j] > array[j + 1])
			{
				std::swap(array[j], array[j + 1]);
				swap = true;
			}
		}

		if (!swap)
			break;

		for (int it{ 0 }; it < length; ++it)
		{
			std::cout << array[it] << ' ';
		}
		std::cout << '\n';
	}

	return 0;
}