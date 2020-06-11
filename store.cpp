#include "store.h"
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;


Store::Store()
{
 cout<<"�������� ��� �� ���������: ";
 cin.sync();
 getline(cin, MovieStoreName);
 cout<<"�������� ����� �� �������: ";
 cin>>m_br;
 m = new Movie[m_br];

    for(int i = 0; i < m_br; i++)
    {
        m[i].Read();
    }
};

Store::Store(string n, int b)
{
    MovieStoreName = n;
    cout<<"����� �� ����� ";
    m = new Movie[m_br];
};

void Store::Print()
{
  cout<<"���������: "<<MovieStoreName<<endl;
  for (int i = 0; i < m_br; i++)
  {
      m[i].Print();
      cout<<endl;
  }

};

void Store::Add()
{
    int i;
    if(m_br)
    {
        m_br++;
        Movie *p = m;
        m = new Movie[m_br];
        for(i = 0; i < m_br-1; i++)
        {
             m[i] = p[i];
        }

        delete []p;
        cout << "������ ����� �� ����� ����: "<< endl;
        m[m_br-1].Read();
    }
    else
    {
        m_br++;
        m = new Movie;
        cout<<"������ ����� �� ����� ����: "<<endl;
        m[0].Read();
    }
};

void Store::Dell()
{
	int m_id, i, j;
	cout << "������ ������ ����� �� ����:  ";
	cin >> m_id;
	if(m_id)
	{
        m_br--;
        Movie *p = m;
        m = new Movie[m_br];
        for(j = 0, i = 0; i <= m_br; i++)
            {
                if(p[i].numb_access() != m_id)
                    m[j++] = p[i];
            }
		delete []p;
	}
	else
		{
		    cout << "���� ����� ����!!!\n";
		}
};

void Store::PrintByID()
{
cout <<"������ ������ ����� �� ����: "<<endl;
long int s;
cin>>s;

    for (int i = 0; i < m_br; i++)
    {
        if(m[i].numb_access() == s)
            m[i].Print();

    }

};

void Store::AllInStock()
{
   for(int i = 0; i < m_br; i++)
   {
        if(m[i].InStock)
           {
               m[i].Print();
           }
   }
};
