#include <iostream>
#include "Header.h"

int main()
{
    
    std::cout << "Вопрос 1: \n";
    for(int i{0}; i <= 7; ++i)
    {
        std::cout << factorial(i) << ' ';
    }
    std::cout << "\n\n" << "Вопрос 2: \n" << sumNum(93427) << '\n';
    std::cout << '\n' << "Вопрос 3: \n";
    binaryRepres(125);
    std::cout << '\n';

    return 0;
}