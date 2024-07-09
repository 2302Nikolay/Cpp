#ifndef CONF_H
#define CONF_H

#include <vector>
#include <string>

namespace project_configuration
{
    /// @brief Минимальное значение для генерации множителя
    extern int multiplierMin;
    /// @brief Максимальное значение для генерации множетеля
    extern int multiplierMax;
    /// @brief Допустимая ошибка для подсказки
    extern int maximumWrongAnswer;
}

/// @brief Парсит аргументы командной строки
/// @param argv Массив аргументов коммандной строки
/// @param size Размер массива аргументов командной строки
/// @return true - введены аргументы -mMin и/или -mMax, при этом -mMin <= -mMax
/// false - введены аргументы -mMin и/или -mMax, при этом -mMin >= -mMax, или введён аргумент -h / --help
bool parseCmdLine(char* argv[], int size);

#endif