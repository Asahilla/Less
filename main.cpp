#include <iostream>
#include "mylib.h"

#define SNIPER(x, y) \
{ \
    if(x >= 0 && x < y) \
    { \
        std::cout << "true" << std::endl; \
    } \
    else \
    { \
        std::cout << "false" << std::endl; \
    } \
}

//Task3

int SecondArr(int *Array, int size)
{
    for (int i = 0; i < size; i++)
        {
            std::cout << "arr[" << i << "] = ";
            std::cin >> Array[i];
        }
    return Array[size];
}

void BubleArr(int *Array, int size)
{
    for(int i = 1; i < size; ++i)
    {
        for(int r = 0; r < size - i; r++)
        {
            if(Array[r] < Array[r+1])
            {
                // Обмен местами
                int temp = Array[r];
                Array[r] = Array[r+1];
                Array[r+1] = temp;
            }
        }
    }
}

void PrintArr(int *Array, int size)
{
    for (int i = 0; i < size; i++) {
            std::cout << Array[i] << " ";
        }
        std::cout << std::endl;
}

//Task4

#pragma pack(push, 1)
struct Employee
{
    int id;
    char name;
    float Salary;
};
#pragma pack(pop)

int main()
{
    //task1
    std::cout << "Let's get" << std::endl;
    int size = 4;
    float arr[size];
    int Array[size];
    ArrInit(arr, size);
    PrintArray(arr, size);
    CountingArray(arr, size, 0, 0);

    //task2
    int a;
    std::cout << "Введите а" << std::endl;
    std::cin >> a;
    int b = 20;
    SNIPER(a, b);

    //task3
    SecondArr(Array, size);
    BubleArr(Array, size);
    PrintArr(Array, size);

    //task4
    std::cout << sizeof(Employee) << std::endl;

    return 0;
}
