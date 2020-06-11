#include <iostream>
#include <locale>
#include <windows.h>
#include "movie.h"
#include "store.h"
using namespace std;

int main()
{
    system("chcp 1251");
	Store f;
	int c;
	string s;
	do{
		cout << "0. Изход от програмата" << endl;
		cout << "1. Отпечатване на данните на Филмите" << endl;
		cout << "2. Добавяне на филм" << endl;
		cout << "3. Изтриване на филм" << endl;
		cout << "4. Отпечатване на данните на филм" << endl;
		cout << "5. Отпечатване на всички налични филми"<<endl;
		cout <<""<<endl;
		cin >> c;
		switch(c)
		{
			case 0: break;
			case 1: f.Print(); break;
			case 2: f.Add(); break;
			case 3: f.Dell(); break;
			case 4: f.PrintByID(); break;
			case 5: f.AllInStock(); break;

			default: cout << "Грешен избор!" << endl; break;
		}
	}while(c);


	return 0;
}
