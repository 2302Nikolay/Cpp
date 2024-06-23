#include <iostream>
#include <algorithm>
#include <iterator>

int main()
{
    setlocale(LC_ALL, "rus");
    
    std::cout << "Сколько имён вы хотите ввести >> ";
    std::size_t size{};
    std::cin >> size;

    auto* arr{ new std::string[size]{} };

    for (int i{ 0 }; i < size; ++i)
    {
        std::cout << "Введите имя >> ";
        std::cin >> *(arr + i);
    }

    std::sort(arr, arr + size);

    std::cout << "Отсортированный массив: \n";
    for (int i{ 0 }; i < size; ++i)
    {
        std::cout << *(arr + i) << '\n';
    }

    return 0;
}