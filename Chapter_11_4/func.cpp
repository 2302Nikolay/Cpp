#include <utility>
#include <iostream>
#include <random>
#include <ctime>
#include <algorithm>
#include "Config.h"

std::pair<int, int>  getUserNumbers()
{
    std::pair<int, int> pair{};
    std::cout << "Введите стартовое значение >> ";
    std::cin >> pair.first;
    std::cout << "Введите количестов загадываемых чисел >> ";
    std::cin >> pair.second;
    std::cout << '\n';

    return pair;
}

int generateRandomNum(int min, int max)
{
    static std::mt19937 mt{static_cast<std::mt19937::result_type>(std::time(nullptr))};
    return std::uniform_int_distribution{min, max}(mt);
}

std::vector<int> generateNum(int start, int count, int rand_mult)
{
    std::vector<int> arr_nums(static_cast<std::vector<int>::size_type>(count));

    for (auto& num : arr_nums)
    {
        num = ((start * start) * rand_mult);
        ++start;
    }

    std::cout << "Числа загаданы с множителем: " << rand_mult << '\n';

    return arr_nums;
}

int getGuess()
{
    int guess{};
    std::cout << "Введите чиссло >> ";
    std::cin >> guess;
    return guess;
}

bool checkNum(std::vector<int>& array, int guess)
{
    auto found{std::find(array.begin(), array.end(), guess)};


    if (found == array.end() | array.empty())
    {

        return false;
    }
    else
    {
        array.erase(found);
        return true;
    }
}

int findCloses(std::vector<int>& array, int guess)
{
    return *std::min_element(array.begin(), array.end(), [=](int a, int b)
    {
        return (std::abs(a - guess) < std::abs(b - guess));
    });
}

void printGood(std::vector<int>::size_type size)
{
    (size == 0) ? (std::cout << "Верно! Вы выиграли!\n") : (std::cout << "Верно! Осталось отгадать " << size << " чисел...\n");
}

void printBad(std::vector<int>& arr, int guess)
{
    int closes{findCloses(arr, guess)};

    (std::abs(closes - guess) <= project_configuration::maximumWrongAnswer) ? (std::cout << "Ответ не верный! В следующий раз попробуйте число " << closes << '\n') : (std::cout << "Ответ не верный!\n"); //////////////////////////////////////// !!!
}

bool play(std::vector<int>& array)
{
    int guess{getGuess()};

    
    if (checkNum(array, guess))
    {
        printGood(array.size());
        return !array.empty();
    }
    else
    {
        printBad(array, guess);
        return false;
    }
}
