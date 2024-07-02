#ifndef HEADER_H
#define HEADER_H
/// <summary>
/// Получает от пользователя число double.
/// </summary>
/// <returns>Введенное пользователем число</returns>
double getNum();

/// <summary>
/// Просит ввести пользователя один из символов +, -, * или /
/// </summary>
/// <returns>Введенный пользователем симсол операциии +, -, * или /)</returns>
char getChar();

/// <summary>
/// Возвращает результат операции
/// </summary>
/// <param name="a">Первый операнд</param>
/// <param name="b">Второй операнд</param>
/// <param name="ch">Результат операции (+, -, * или /)</param>
void getRes(double a, double b, char ch);
#endif