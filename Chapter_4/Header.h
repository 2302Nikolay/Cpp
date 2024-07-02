#ifndef HEADER_H
#define HEADER_H

/// <summary>
/// Ускорение свободного падения
/// </summary>
constexpr double g_force{ 9.8 };

/// <summary>
/// Время после начала падения
/// </summary>
constexpr int nul{ 0 }, one{ 1 }, two{ 2 }, three{ 3 }, four{ 4 }, five{ 5 }, six{ 6 }, seven{ 7 }, nine{ 9 }, ten{ 10 };

/// <summary>
/// Получает от пользователя высоту башни
/// </summary>
/// <returns>Введённое пользователем значение высоты</returns>
double getHeight();

/// <summary>
/// Рассчитывает по формуле: S=gt^2/2, где S - расстояние до земли (метры), g - ускорение свободного падения (9,8 м/с^2),
/// t - время после начала падения (секунды)
/// </summary>
/// <param name="height">Высота башни/param>
/// <param name="time">Время после начала падения</param>
/// <returns>Высота через время падения (метры)</returns>
double calcHeight(double height, int time);

/// <summary>
/// Выводит в консоль результат расчета высоты 
/// через определённое время после начала падения
/// </summary>
/// <param name="hight">Высота от земли (метры)</param>
/// <param name="time">Время в падении (секунды)</param>
void printRes(double hight, int time);

/// <summary>
/// Расчитывает высоту (функция calcHight) и печатает результат (функция printRes) 
/// </summary>
/// <param name="hight">Высота в метрах</param>
/// <param name="time">Время в секундах</param>
void getRes(double hight, int time);

#endif
