#include "movie.h"
#include <iostream>
#include <cstring>
using namespace std;


Movie::Movie()
{
    MovieName = "";
    SerialNumber = 0;
    CreatedYear = 0;
    Director = "";
    DeviceType = "";
    RentPrice = 0;
    InStock = "";
};

Movie::Movie(string a, long int b, int c, string d, string e, int f, bool g)
{
    MovieName = a;
    SerialNumber = b;
    CreatedYear = c;
    Director = d;
    DeviceType = e;
    RentPrice = f;
    InStock = g;
};

void Movie::Print()
{
cout<<MovieName<<'\n'<<SerialNumber<<'\n'<<CreatedYear<<'\n'<<Director<<'\n'<<DeviceType<<'\n'<<RentPrice<<'\n'<<InStock<<endl;
cout<<endl;
};

void Movie::Read()
{
    cout<<"�������� ��� �� ����: ";
	cin.sync();
	getline (cin,MovieName);
	cout<<"�������� �������� ����� �� ����: ";
	cin>>SerialNumber;
	cout<<"�������� �������� �� ��������� ";
	cin>>CreatedYear;
	cout<<"�������� �������� �� �����: ";
    cin.sync();
	getline (cin,Director);
    cout<<"�������� ����� �� ����������� ���������� ";
	cin.sync();
	getline (cin,DeviceType);
	cout<<"����� �� �������: ";
	cin>>RentPrice;
	cout<<"��������� �� �����: ";
	cin>>InStock;
};

/**
<Movie Movie::operator<(Movie a)
{
    for(int i = 0; i < m_br; i++)
        {
        if(m[i].CreatedYear < m[x].CreatedYear)
            return m[x].Movie;
        else
            return m[i].Movie;
        }
};
*/

