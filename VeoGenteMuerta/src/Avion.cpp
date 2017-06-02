#include "Avion.h"

Avion::Avion()
{
    this -> modelo = NULL;
    this -> year = NULL;
}
Avion::Avion(char *modelo1,int year1)
{
    modelo = new char[20];
    this -> modelo = modelo1;
    this -> year = year1;
}
Avion::~Avion()
{
    delete[] modelo;

}

int Avion::getYear(){return year;}
