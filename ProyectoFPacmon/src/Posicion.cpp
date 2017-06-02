#include "Posicion.h"
#include <iostream>

using namespace std;
Posicion::Posicion()
{
    x=0,y=0;
}
Posicion::Posicion(int x1)
{
    x=x1,y=x1;
}
Posicion::Posicion(int x2,int y2)
{
    x=x2,y=y2;
}
int Posicion::getX()
    {return x;}
int Posicion::getY()
    {return y;}
void Posicion::dibujar(string c, Posicion p)
    {
        x = p.x;
        y = p.y;
        cout<<c;
    }
void Posicion::borrar(Posicion p)
    {
        dibujar(" ",p);
    }
