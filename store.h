#ifndef STORE_H_INCLUDED
#define STORE_H_INCLUDED
#pragma once
#include <string>
#include "movie.h"
using namespace std;
class Movie;
class Store
{
private:
    string MovieStoreName;
    Movie *m;
    int m_br;

public:
    Store();
    Store(string, int);
    ~Store() {delete []m;}
    void Print();
    void Add();
    void Dell();
    void PrintByID();
    void NewInStock();
    void AllInStock();
};

#endif // STORE_H_INCLUDED
