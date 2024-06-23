#include <iostream>

int main()
{
	int count{ 5 };
	while (count >= 1)
	{
		int num{ count };
		while (num >= 1)
		{
			std::cout << num-- << ' ';
		}
		std::cout << '\n';
		--count;
	}

	return EXIT_SUCCESS;
}