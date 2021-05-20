#include <iostream>

void ArrInit (float Array[], int size)
{
    float num = 2.2;
    for (int i = 0; i < size; ++i)
    {
        Array[i] = num;
        num -= 1.2;
    }
}

void PrintArray(float *Array, int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << Array[i] << " ";
    }
    std::cout << std::endl;
}

void CountingArray(float *Array, int size, int positive, int negative)
{

        for (int i = 0; i < size; i++)
        {
            if (Array[i] > 0)
                ++positive;
            else if (Array[i] < 0)
                ++negative;
        }
        std::cout << "положительных: " << positive << std::endl;
        std::cout << "отрицательных: " << negative << std::endl;
}
