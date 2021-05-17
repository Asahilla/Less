#include <iostream>
#include <cstdlib>
using namespace std;

bool PrintArray(double arr[], int size)   // Функция для печати произвольного массива
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return true;
}

int boolarray(int array[], int size)
{

	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < size; i++)
	{
	array[i] =(array[i] == 1) ? 0 : 1;
		cout << array[i] << " ";	
	}
	cout << endl;

	return *array;
}

bool emptyarr(int arrs[], int size)
{
	int num = 1;
	const int step = 3;
	for (int i = 0; i < size; i++)
	{
		arrs[i] = num;
		num += step;
		cout << arrs[i] << " ";
	}
	cout << endl;
	return true;
}

int main()
{
	const int mysize = 5;
	double myarr[] = {1.10, 2.20, 3.30, 4.40, 5.50};
	PrintArray(myarr, mysize);
	int arra[] = {1,0,1,0,0,1,0};
	const int sizea= 7;
	boolarray(arra, sizea);
	const int sizeap = 8;
	int numb[sizeap];
	emptyarr(numb, sizeap);
	return 0;
}