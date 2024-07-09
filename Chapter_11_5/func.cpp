#include <algorithm>
#include <numeric>

int binarySearchIteration(const int *array, int target, int min, int max)
{
    while (min <= max)
    {
        int middle{std::midpoint(min, max)}; // Средний элемент массива

        if (array[middle] > target)
        {
            max = middle - 1;
        }
        else if (array[middle] < target)
        {
            min = middle + 1; 
        }
        else
        {
            return middle;
        }


    }
    return -1;
}

int binarySearchRecursion(const int *array, int target, int min, int max)
{
    if (min > max)
        return -1;
    
    int middle{std::midpoint(min, max)};

    if (array[middle] > target)
        return binarySearchRecursion(array, target, min, middle-1);
    else if (array[middle] < target)
        return binarySearchRecursion(array, target, middle+1, max);
    else
        return middle;
}