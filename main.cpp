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
		cout << "0. ����� �� ����������" << endl;
		cout << "1. ����������� �� ������� �� �������" << endl;
		cout << "2. �������� �� ����" << endl;
		cout << "3. ��������� �� ����" << endl;
		cout << "4. ����������� �� ������� �� ����" << endl;
		cout << "5. ����������� �� ������ ������� �����"<<endl;
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

			default: cout << "������ �����!" << endl; break;
		}
	}while(c);


	return 0;
}
