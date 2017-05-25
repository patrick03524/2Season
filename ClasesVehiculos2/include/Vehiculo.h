#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
#include <string.h>

using namespace std;

class Vehiculo
{
public:
    Vehiculo(const string &miLicencia, const string myYear, int myTires);
    const string getDesc();
    const string getLicencia();
    const string getYear();
protected:
    string licencia;
    string year;
    int tires;

};

#endif // VEHICULO_H
