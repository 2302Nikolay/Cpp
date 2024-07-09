#include <iostream>
#include <chrono>
#include "Header.h"


int main()
{
    constexpr int array[]{ 3, 6, 8, 12, 14, 17, 20, 21, 26, 32, 36, 37, 42, 44, 48 };
    constexpr int numTestValues{9};
    constexpr int testValues[numTestValues]{0, 3, 12, 13, 22, 26, 43, 44, 49};
    int expectedValues[numTestValues]{-1, 0, 3, -1, -1, 8, -1, 13, -1};

    for (int count{0}; count < numTestValues; ++count)
    {
        auto start{std::chrono::steady_clock::now()};
        int index{binarySearchIteration(array, testValues[count], 0, static_cast<int>(std::size(array) - 1))};
        auto stop{std::chrono::steady_clock::now()};
        auto start2{std::chrono::steady_clock::now()};
        int index2{binarySearchRecursion(array, testValues[count], 0, static_cast<int>(std::size(array) - 1))};
        auto stop2{std::chrono::steady_clock::now()};
        
        std::cout << "Iteration: \n";
        (index == expectedValues[count])
            ? 
            (std::cout << "test value " << testValues[count] << " \x1b[32m passed\x1b[0m\n") 
            : 
            (std::cout << "test value " << testValues[count] << " \x1b[31m failed. There's something wrong with your code!\x1b[0m\n");

        std::cout << "Recursion: \n";
        (index2 == expectedValues[count])
            ? 
            (std::cout << "test value " << testValues[count] << "\x1b[32m passed\x1b[0m\n") 
            : 
            (std::cout << "test value " << testValues[count] << " \x1b[31m failed. There's something wrong with your code!\x1b[0m\n");

        std::cout << "\x1b[33m Time iteration: \x1b[0m" << stop - start << "\n\x1b[33m Time recursion: \x1b[0m" << stop2 - start2 << '\n';            
    }

    return 0;
}