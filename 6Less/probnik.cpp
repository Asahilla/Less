#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool newfile()
{
	string name;
	cout << "Введите название файла:" << endl;
	cin >> name;
    ofstream out;  
    out.open(name);
    if (out.is_open())
    {
        out << "Yesterday" << endl;
        out << "All my troubles seemed so far away" << endl;
        out << "Now it looks as though they're here to stay" << endl;
        out << "Oh, I believe in yesterday" << endl;
        out << endl;
        out << "Suddenly" << endl;
        out << "I'm not half the man I used to be" << endl;
        out << "There's a shadow hanging over me" << endl;
        out << "Oh, yesterday came suddenly" << endl;
        out << endl;
        out << "Why she had to go? I don't know" << endl;
        out << "She wouldn't say" << endl;
        out << "I said something wrong" << endl;
        out << "Now I long for yesterday" << endl;
    }
 	return true;
}

bool secondfile()
{
	string name;
	cout << "Введите название файла:" << endl;
	cin >> name;
    ofstream out;  
    out.open(name);
    if (out.is_open())
	{
		out << "Yesterday" << endl;
		out << "Love was such an easy game to play" << endl;
		out << "Now I need a place to hide away" << endl;
		out << "Oh, I believe in yesterday" << endl;
		out << endl;
		out << "Why she had to go? I don't know" << endl;
		out << "She wouldn't say" << endl;
		out << "I said something wrong" << endl;
		out << "Now I long for yesterday" << endl;
		out << endl;
		out << "Yesterday" << endl;
		out << "Love was such an easy game to play" << endl;
		out << "Now I need a place to hide away" << endl;
		out << "Oh, I believe in yesterday" << endl;
		out << "Mmm-mm-mm-mm-mm-mmm." << endl;
	}
	return true;
}

int main()
{
	newfile();
	secondfile(); 
    return 0;
}