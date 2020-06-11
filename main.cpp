#include <iostream>
#include <locale>
#include <windows.h>
#include "movie.h"
#include "store.h"
using namespace std;

int main()
{
	Store f;
	int c;
	string s;
	do{
		cout << "0. Exit application" << endl;
		cout << "1. Print out all the movie information" << endl;
		cout << "2. Add a Movie" << endl;
		cout << "3. Delete a Movie" << endl;
		cout << "4. Print out movie by ID" << endl;
		cout << "5. Print only the movies that are in Stock"<<endl;
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
