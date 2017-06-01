#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include "Birthday.h"
using namespace std;


class Persona
{
    public:

        Persona();
        Persona(char *nombre1,char *sexo1,Birthday birthday1);
        ~Persona();
        virtual void saludar()=0;
        virtual int edadPersona();
    protected:
        char *nombre;
        char *sexo;
        Birthday birthday;

};

#endif // PERSONA_H
