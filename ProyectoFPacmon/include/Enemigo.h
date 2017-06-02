#ifndef ENEMIGO_H
#define ENEMIGO_H
#include "Personaje.h"

class Enemigo : public Personaje
{
    public:
        Enemigo();
        Enemigo(char *nombre1, char cuerpo1,int vida1);
        ~Enemigo();
        void Saludar();
        char getVida();
        Posicion getPosicion();
    private:
        char *nombre;
        char cuerpo;
        int vida;
        Posicion posicion;

};

#endif // ENEMIGO_H
