#ifndef MOVIE_H_INCLUDED
#define MOVIE_H_INCLUDED
#pragma once
#include "store.h"
#include <string>
using namespace std;
class Store;
class Movie
{
private:
    string MovieName;
    long int SerialNumber;
    int CreatedYear;
    string Director;
    string DeviceType;
    int RentPrice;

public:
    bool InStock;
    Movie();
    Movie(string, long int, int, string, string, int, bool);
    void Read();
    void Print();
    Movie operator< (Movie a);
    int numb_access(){ return SerialNumber;}
};
#endif // MOVIE_H_INCLUDED
