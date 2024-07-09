#pragma once

/// @brief Бинарный поиск элемента в массиве
/// @param array Массив для поиска
/// @param target Элемент для поиска в массиве
/// @param min Индекс нижней границы массива
/// @param max Индекс верхней границы массива
/// @return Индекс целевого элемента, если Target найден, иначе -1
int binarySearchIteration(const int *array, int target, int min, int max);

/// @brief Рекурсивная функция бинарного поиска элемента в массиве
/// @param array Массив для поиска
/// @param target Элемент для поиска в массиве
/// @param min Индекс нижней границы массива
/// @param max Индекс верхней границы массива
/// @return Индекс целевого элемента, если Target найден, иначе -1
int binarySearchRecursion(const int *array, int target, int min, int max);