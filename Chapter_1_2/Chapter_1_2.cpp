#include <iostream>  // для std::cout и std::cin

int main()
{
    // запрашиваем у пользователя число
    std::cout << "Enter a number: ";
    // определяем переменную x для хранения пользовательского ввода (и инициализируем ее нулем)
    int x{ };
    // получаем число с клавиатуры и сохраняем его в переменной x
    std::cin >> x;
    std::cout << "You entered " << x << '\n';
    return 0;
}