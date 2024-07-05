#include <iostream>
#include "Header.h"

int main()
{
    std::pair<int, int> num{getNum()};                  // Получаем от пользователя пару чисел

    char oper{getOper()};                               // Получаем от пользователя символ операции

    ArithmeticFunction af{getArithmeticFunction(oper)}; // Получаем ссылку на соотвествующую символу операции функцию

    std::cout << "Результат: " << af(num) << '\n';      // Вывод результата

    return 0;
}