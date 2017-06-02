#include <iostream>
#include "TigerPlane.h"
#include "MiG-29.h"
#include "Torre.h"

using namespace std;

int main()
{
    TigerPlane tigerPlane1();
    TigerPlane tigerPlane2("TigerPlane",1999,"Amarillo");
    MiG29 miG29_1();
    MiG29 miG29_2("MiG-29",2004,"Rojo");
    Torre torreA;
    torreA.agregarAvion(&tigerPlane2);
    torreA.imprimirMensaje();
    torreA.agregarAvion(&miG29_2);
    torreA.imprimirMensaje();

}
