#include "MiG-29.h"

MiG-29::MiG-29()
{
    this -> modelo = NULL;
    this -> year = NULL;
    this -> color = NULL;
}
MiG-29::MiG-29(char *modelo1,int year1,char *color1)
{
    modelo = new char[20]
    this -> modelo = modelo1;
    this -> year = year1;
    color -> new char [20];
    this -> color = color1;
}
MiG-29::~MiG-29()
{
    delete[] modelo;
    delete year;
    delete[] color;
}
void TigerPlane::Saludo()
{
    cout <<"Hola"<<endl;
}
char TigerPlane::getModelo(){return modelo;}
int TigerPlane::getYear(){return year;}
