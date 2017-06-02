#ifndef POSICION_H
#define POSICION_H
#include <string>
#include <iostream>

using namespace std;
class Posicion
{
    public:
        Posicion();
        Posicion(int x1);
        Posicion(int x2,int y2);
        int getX();
        int getY();
        void dibujar(string c, Posicion p);
        void borrar(Posicion p);

    protected:
        int x,y;

};

#endif // POSICION_H
