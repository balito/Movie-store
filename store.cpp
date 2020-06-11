#include "store.h"
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;


Store::Store()
{
 cout<<"Въведете име на видеотека: ";
 cin.sync();
 getline(cin, MovieStoreName);
 cout<<"Въведете броят на филмите: ";
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
    cout<<"Данни за филми ";
    m = new Movie[m_br];
};

void Store::Print()
{
  cout<<"Видеотека: "<<MovieStoreName<<endl;
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
        cout << "Въведи данни за новия филм: "<< endl;
        m[m_br-1].Read();
    }
    else
    {
        m_br++;
        m = new Movie;
        cout<<"Въведи данни за новия филм: "<<endl;
        m[0].Read();
    }
};

void Store::Dell()
{
	int m_id, i, j;
	cout << "Въведи сериен номер на филм:  ";
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
		    cout << "Няма такъв Филм!!!\n";
		}
};

void Store::PrintByID()
{
cout <<"Въведи сериен номер на филм: "<<endl;
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
