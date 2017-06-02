#include "TigerPlane.h"

TigerPlane::TigerPlane()
{
    this -> modelo = NULL;
    this -> year = NULL;
    this -> color = NULL;
}
TigerPlane::TigerPlane(char *modelo1,int year1,char *color1)
{
    modelo = new char[20]
    this -> modelo = modelo1;
    this -> year = year1;
    color -> new char [20];
    this -> color = color1;
}
TigerPlane::~TigerPlane()
{
    delete[] modelo;
    delete year;
    delete[] color;
}
void TigerPlane::Saludo()
{
    cout <<"Holo"<<endl;
}
char TigerPlane::getModelo(){return modelo;}
int TigerPlane::getYear(){return year;}
