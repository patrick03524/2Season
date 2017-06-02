#ifndef TORRE_H
#define TORRE_H
#include "TigerPlane.h"
#include "MiG-29.h"
#include <vector>

class Torre
{
    public:
        vector <Avion*> aviones;
        void agregarAvion(Avion *w);
        void imprimirMensaje();
};

#endif // TORRE_H
