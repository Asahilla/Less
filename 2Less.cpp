#include <iostream>
#include "mod.h"

using namespace std;

int main()
{
	// 2 задание:
	int a;
	cout << "Введите число" << endl;
	cin >> a;
	(a <= 21) ? cout << 21 - a << endl : cout << (a - 21) * 2 << endl;

// 3 задание:
	int cube[3][3][3] = { { {1, 2, 3}, {4, 5, 6,}, {7, 8, 9} },
	                      { {10, 11, 12}, {13, 14, 15}, {16, 17, 18} },
	                      { {19, 20, 21}, {22, 23, 24}, {25, 26, 27} }};
	int *ptr;
	cout << "Достаем число из массива:" << endl;
	ptr = &cube[0][3][3];
	cout << "Вот " << *ptr << endl;

// 4 задание:
    modif();
	return 0;
}