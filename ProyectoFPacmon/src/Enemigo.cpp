#include "Enemigo.h"

Enemigo::Enemigo()
{
    this -> nombre = NULL;
    this -> cuerpo = NULL;
    this -> vida = NULL;
}
Enemigo::Enemigo(char *nombre1, char cuerpo1,int vida1)
{
    nombre = new char[20];
    this -> nombre = nombre1;
    this -> cuerpo = cuerpo1;
    this -> vida = vida1;
}

Enemigo::~Enemigo()
{
    delete[] nombre;

}
void Enemigo::Saludar()
{
    cout <<"Hola soy un enemigo alv ahora te wa a tocar la jalea"<<endl;
    cout <<"Soy el malvado "<<nombre<<endl;
}

char Enemigo::getVida(){return vida;}
Posicion Enemigo::getPosicion(){return posicion;}
