#include "TigerPlane.h"

TigerPlane::TigerPlane()
{
    this -> modelo = NULL;
    this -> year = NULL;
    this -> color = NULL;
}
TigerPlane::TigerPlane(char *modelo1,int year1,char *color1)
{
    modelo = new char[20];
    this -> modelo = modelo1;
    this -> year = year1;
    color = new char [20];
    this -> color = color1;
}
TigerPlane::~TigerPlane()
{
    delete[] modelo;
    delete[] color;
}
void TigerPlane::Saludo()
{
    cout <<"Hola soy un : "<<modelo<<endl;
    cout <<"Fui fabricado en el "<<year<<endl;
}
int TigerPlane::getYear(){return year;}
