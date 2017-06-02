#ifndef POCMAN_H
#define POCMAN_H
#include "Personaje.h"


class Pocman : public Personaje
{
    public:
        Pocman();
        Pocman(char *nombre1, char cuerpo1,int vida1);
        ~Pocman();
        void Saludar();
        char getVida();
        Posicion getPosicion();
    private:
        char *nombre;
        char cuerpo;
        int vida;
        Posicion posicion;
};

#endif // POCMAN_H
