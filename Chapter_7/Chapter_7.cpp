#include <iostream>
#include "Header.h"

int main()
{
    setlocale(LC_ALL, "rus");
    
    std::cout << "Введите число >> ";
    int x{};
    std::cin >> x;

    std::cout << "Введите второе число >> ";
    int y{};
    std::cin >> y;

    std::cout << "Введите оператор (+, -, *, /, или %) >> ";
    char o{};
    std::cin >> o;

    std::cout << x << ' ' << o << ' ' << y << " = " << calculate(x, y, o) << '\n';

    return 0;
}