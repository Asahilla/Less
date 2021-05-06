#include <iostream>

using namespace std;

void modif()
{
	int a;
	int b;
	int c;
	int d;
	cout << "Введите числа:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	float x = float(a) * (float(b) + (float(c)/float(d)));
	cout<< "Ответ: " << x << endl;
};