#include "MiG-29.h"

MiG29::MiG29()
{
    this -> modelo = NULL;
    this -> year = NULL;
    this -> color = NULL;
}
MiG29::MiG29(char *modelo1,int year1,char *color1)
{
    modelo = new char[20];
    this -> modelo = modelo1;
    this -> year = year1;
    color = new char [20];
    this -> color = color1;
}
MiG29::~MiG29()
{
    delete[] modelo;
    delete[] color;
}
void MiG29::Saludo()
{
    cout <<"Hola soy un : "<<modelo<<endl;
    cout <<"Fui fabricado en el "<<year<<endl;
}

int MiG29::getYear(){return year;}
