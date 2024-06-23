#ifndef HEADER_H
#define HEADER_H
/// <summary>
/// Прглашает пользователя ввести число типа double.
/// </summary>
/// <returns>Введённое пользователем число</returns>
double getNum();

/// <summary>
/// Предлагает пользователю ввести оператор +, -, * или /
/// </summary>
/// <returns>Введённый пользователем символ (предположительно +, -, * или /)</returns>
char getChar();

/// <summary>
/// Печатает в консоль результат операции
/// </summary>
/// <param name="a">Первый операнд</param>
/// <param name="b">Второй операнд</param>
/// <param name="ch">Символ операции (+, -, * или /)</param>
void getRes(double a, double b, char ch);
#endif