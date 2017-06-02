#ifndef PERSONAJE_H
#define PERSONAJE_H
#include "Posicion.h"


class Personaje
{
    public:
        Personaje();
        Personaje(char *nombre1, char cuerpo1,int vida1);
        ~Personaje();
        virtual void Saludar()=0;
        char getVida();
        Posicion getPosicion();
    protected:
        char *nombre;
        char cuerpo;
        int vida;
        Posicion posicion;
    private:
};

#endif // PERSONAJE_H
