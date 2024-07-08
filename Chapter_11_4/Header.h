#ifndef HEADER_H
#define HEADER_H

#include <utility>
#include <vector>


/// @brief Просит пользователя ввести два числа, стартовое значение и
/// количество генерируемых чисел 
/// @return Пара, где:
/// first - cтартовое значение, 
/// second - количество генерируемых чисел 
std::pair<int, int> getUserNumbers();

/// @brief Генерирует случайное число в диапазоне между min и max
/// @param min Нижняя граница диапазона
/// @param max Верхняя граница диапазона
/// @return Случайное целое число
int generateRandomNum(int min, int max);

/// @brief Генерирует числы в диапазоне по правилу (число^2)*rand_mult
/// @param start Началное значение диапазона
/// @param count Количество генерируемых чисел
/// @param rand_mult Число на которое умножается кввадрат каждого элемента диапазона
/// @return Массив из чисел, сгенерированный по правилу
std::vector<int> generateNum(int start, int count, int rand_mult);

/// @brief Получает от пользователя число для дальнейшей проверки на наличие его в массиве
/// @return Полученное от пользователя число для проверки
int getGuess();

/// @brief Проверяет наличие в массиве загаданного пользователем числа, если оно есть - удаляет из массива
/// @param array Массив с генерированными ранее числами
/// @param guess Загаданное пользователем число
/// @return true - если число есть, false - если число отсутcвует
bool checkNum(std::vector<int>& array, int guess);

/// @brief Главная функция игры. Вызывается метод для получение предсказанного пользователем числа, проверяется
/// наличие числа в массиве загаданных чисел, вызываются методы правильного и неверного ответов.
/// @param array Массив с загданными числами
/// @return true - ответ верный, false - ответ верный и элементы в массиве закончились, либо ответ не верный
bool play(std::vector<int>& array);

/// @brief Печатает сообщения о правильном ответе
/// @param size Размер массива с загаданными числами
void printGood(std::vector<int>::size_type size);

/// @brief Печатает сообщение о неправильном ответ и если ответ близок к правильному,
/// печатает правильный
/// @param arr Массив с загаданными числами
/// @param guess Введённый пользователем ответ
void printBad(std::vector<int>& arr, int guess);

/// @brief Находит ближайшее к введённому пользователем числу из загаданных в масиве
/// @param array Массив загаданных чисел
/// @param guess Введённый пользователем ответ
/// @return Ближайшее правильное число к введённому пользователем
int findCloses(std::vector<int>& array, int guess);

#endif