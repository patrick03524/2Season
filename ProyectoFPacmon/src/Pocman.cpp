#include "Pocman.h"

Pocman::Pocman()
{
    this -> nombre = NULL;
    this -> cuerpo = NULL;
    this -> vida = NULL;
}
Pocman::Pocman(char *nombre1, char cuerpo1,int vida1)
{
    nombre = new char[20];
    this -> nombre = nombre1;
    this -> cuerpo = cuerpo1;
    this -> vida = vida1;
}

Pocman::~Pocman()
{
    delete[] nombre;

}
void Pocman::Saludar()
{
    cout <<"Hola soy Pocman"<<endl;
    cout <<"Soy el Gran, todopoderoso venudote "<<nombre<<endl;
    cout <<"Tengo "<<vida<<" vida(s) alv ;v"<<endl;
}

char Pocman::getVida(){return vida;}
Posicion Pocman::getPosicion(){return posicion;}

