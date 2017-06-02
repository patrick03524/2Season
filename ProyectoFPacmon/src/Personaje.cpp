#include "Personaje.h"

Personaje::Personaje()
{
    this -> nombre = NULL;
    this -> cuerpo = NULL;
    this -> vida = NULL;
}
Personaje::Personaje(char *nombre1, char cuerpo1,int vida1)
{
    nombre = new char[20];
    this -> nombre = nombre1;
    this -> cuerpo = cuerpo1;
    this -> vida = vida1;
}

Personaje::~Personaje()
{
    delete[] nombre;

}
void Personaje::Saludar(){}

char Personaje::getVida(){return vida;}
Posicion Personaje::getPosicion(){return posicion;}
