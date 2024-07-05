#pragma once

#include <functional>

/// @brief Псевдоним ссылки на функцию std::function<int(std::pair<int, int>)>
using ArithmeticFunction = std::function<int(std::pair<int, int>)>;

/// @brief Суммирует два числа
/// @param num Принимает пару чисел для суммирования
/// @return Результат суммирования
int add(std::pair<int, int> num);

/// @brief Вычитает два числа
/// @param num Принимает пару чисел для вычитания
/// @return Результат вычитания
int substract(std::pair<int, int> num);

/// @brief Умножает два числа
/// @param num Принимает пару чисел для умножения
/// @return Результат умножения
int multiply(std::pair<int, int> num);

/// @brief Делит два числа
/// @param num Принимает пару чисел для деления
/// @return Результат деления
int division(std::pair<int, int> num);

/// @brief Принимает символ [+, -, *, /] и возвращает сылку на соответствующую функцию.
/// @details
/// Принимает символ [+, -, *, /] и возвращает ссылку на одну из функций [Символ | Функция]:
///    + | &add
///    - | &substract
///    * | &multiply
///    / | &division
/// @param oper Символ [+, -, *, /]
/// @return Ссылка на одну из функций функцию [&add, &substract, &multiply, &division]
ArithmeticFunction getArithmeticFunction(char oper);

/// @brief Запрос пары целых чисел у пользователя
/// @return Полученная от пользователя пара целых чисел
std::pair<int, int> getNum();

/// @brief Запрос символа операции у пользователя
/// @return Полученный от пользователя символ операции
char getOper();