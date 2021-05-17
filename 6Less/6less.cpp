#include <iostream>
#include <fstream>
#include <istream>

using namespace std;

// Task 1
bool AddArr(int * arr, int &size)
{
	int numb = 1;
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = numb;
		if(numb == 1)
		{
			numb++;
		}
		else
		{
			numb *= 2;
		}
		cout << arr[i] << " ";
	}
	cout << endl;

	delete[] arr;
	return true;
}

int userwrite(int &size)
{
	cout << "Введите кол-во елементов" << endl;
	cin >> size;
	return size;
}
// Tsak 2

int** squarearr(int n, int m)
{
	int **Array;
	Array = new int *[n];
	for (int i = 0; i < n; i++)
	{
		Array[i] = new int[m];
	}
	return Array;
}

void InitArr(int** Array, int n, int m)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			Array[i][j] = rand() % 100;
			cout << Array[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < m; i++)
	{
		delete[] Array[i];
	}
	delete[] Array;
	Array = nullptr;
}
// Task 3

bool newfile()
{
	string name;
	cout << "Введите название первого файла:" << endl;
	cin >> name;
    ofstream out1;  
    out1.open(name);
    if (out1.is_open())
    {
        out1 << "Yesterday" << endl;
        out1 << "All my troubles seemed so far away" << endl;
        out1 << "Now it looks as though they're here to stay" << endl;
        out1 << "Oh, I believe in yesterday" << endl;
        out1 << endl;
        out1 << "Suddenly" << endl;
        out1 << "I'm not half the man I used to be" << endl;
        out1 << "There's a shadow hanging over me" << endl;
        out1 << "Oh, yesterday came suddenly" << endl;
        out1 << endl;
        out1 << "Why she had to go? I don't know" << endl;
        out1 << "She wouldn't say" << endl;
        out1 << "I said something wrong" << endl;
        out1 << "Now I long for yesterday" << endl;
        out1 << endl;
    }
 	return true;
}

bool secondfile()
{
	string name;
	cout << "Введите название второго файла:" << endl;
	cin >> name;
    ofstream out2;  
    out2.open(name);
    if (out2.is_open())
	{
		out2 << "Yesterday" << endl;
		out2 << "Love was such an easy game to play" << endl;
		out2 << "Now I need a place to hide away" << endl;
		out2 << "Oh, I believe in yesterday" << endl;
		out2 << endl;
		out2 << "Why she had to go? I don't know" << endl;
		out2 << "She wouldn't say" << endl;
		out2 << "I said something wrong" << endl;
		out2 << "Now I long for yesterday" << endl;
		out2 << endl;
		out2 << "Yesterday" << endl;
		out2 << "Love was such an easy game to play" << endl;
		out2 << "Now I need a place to hide away" << endl;
		out2 << "Oh, I believe in yesterday" << endl;
		out2 << "Mmm-mm-mm-mm-mm-mmm." << endl;
		out2 << endl;
	}
	return true;
}
//Task4

void Unionfile()
{
	ifstream out1;
		out1.open("Part1.txt");
	ifstream out2;
		out2.open("Part2.txt");
	ofstream uni;
		uni.open("Unifile.txt");

	string nam;

	while(!out1.eof())
	{
		getline(out1, nam);
		uni << nam;
	}

	while(!out2.eof())
	{
		getline(out2, nam);
		uni << nam;
	}
}

int main(int argc, char const *argv[])
{
	int x;
	userwrite(x);
	AddArr(0, x);

	int n, m;
	cout << "Введите N" << endl;
	cin >> n;
	cout << "Введите M" << endl;
	cin >> m;
	int **Array;
	Array = squarearr(n, m);
	InitArr(Array, n, m);

	newfile();
	secondfile();

	Unionfile();
	return 0;
}