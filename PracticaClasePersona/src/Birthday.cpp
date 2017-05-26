#include "Birthday.h"
#include <iostream>
using namespace std;

Birthday::Birthday()
{
    year = 0;
    month = 0;
    day = 0;
}
Birthday::Birthday(int year1,int month1,int day1)
{
    year = year1;
    month = month1;
    day = day1;
}

Birthday::~Birthday()
{
    cout <<"Destruccion hecha"<<endl;
}
int Birthday::getYear()
{
    return year;
}
int Birthday::getMonth()
{
    return month;
}
int Birthday::getDay()
{
    return day;
}


