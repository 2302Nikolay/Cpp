#ifndef HEADER_H
#define HEADER_H

/// @brief Представляет дробь
struct Fraction
{
    /// @brief Числитель
    int num{};
    
	/// @brief Знаменатель
	int denum{};
};

/// @brief Запрашивает у пользователя значение дроби
/// @return Вовзращает структуру, представляющую дробь
Fraction getFraction();

/// @brief Умножает дроби
/// @param num1 Первая дробь
/// @param num2 Вторая дробь
/// @return Результат умножения дробей
double multiply(Fraction num1, Fraction num2);

#endif
