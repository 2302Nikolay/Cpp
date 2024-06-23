#ifndef HEADER_H
#define HEADER_H

/// <summary>
/// Ускорение свободного падения
/// </summary>
constexpr double g_force{ 9.8 };

/// <summary>
/// Время от начла падения
/// </summary>
constexpr int nul{ 0 }, one{ 1 }, two{ 2 }, three{ 3 }, four{ 4 }, five{ 5 }, six{ 6 }, seven{ 7 }, nine{ 9 }, ten{ 10 };

/// <summary>
/// Получает введённую пользователем высоту
/// </summary>
/// <returns>Высота башни, введённая пльзователем</returns>
double getHeight();

/// <summary>
/// Рассчитывает высоту от земли через определённое время после начала падения
/// Расчёт по формуле: S=gt^2/2, где S - расстояние падения (метры), g - ускорение свободного паения (9,8 м/с^2),
/// t - время падения (секунды)
/// </summary>
/// <param name="height">Высота башни</param>
/// <param name="time">Время в падении</param>
/// <returns>Высота через заданное время падения (метры)</returns>
double calcHeight(double height, int time);

/// <summary>
/// Выводит в консоль высоту на которой находится мыч в определённое время
/// </summary>
/// <param name="hight">Высота от земли (метры)</param>
/// <param name="time">Время после начала падения (секунды)</param>
void printRes(double hight, int time);

/// <summary>
/// Вычисляет (через функцию calcHight) и печатает (через функцию printRes) расстояние
///  до земли через заданное время падения
/// </summary>
/// <param name="hight">Высота башни</param>
/// <param name="time">Время падения</param>
void getRes(double hight, int time);

#endif
