#include "Torre.h"

void Torre::agregarAvion(Avion *w)
{
    aviones.push_back(w);
}
void Torre::imprimirMensaje()
{
    for (int i = 0; i<aviones.size(); i++){
        aviones[i]-> Saludo();
    }
}


