#include <iostream>
#include "Point2d.h"

int main()
{
    setlocale(LC_ALL, "rus");
    
    Point2d first{};
    Point2d second{3.0, 4.0};
    first.print();
    second.print();

    std::cout << "Дистанция между двумя точками: " 
              << first.distanceTo(second) << '\n';

    std::cout << "Дистанция между двумя точками: " 
              << distanceFrom(first, second) << '\n';
    
    return 0;
}