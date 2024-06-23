#include <iostream>

int calculate(int x, int y, char o)
{
    switch (o)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    case '%':
        return x % y;
    default:
        std::cout << "Ошибка! Неизвестный символ!\n";
        return 0;
    }
}

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