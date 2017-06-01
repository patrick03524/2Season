#ifndef CONSERJE_H
#define CONSERJE_H
#include "Persona.h"

class Conserje : public Persona
{
    public:
        Conserje();
        Conserje(char *nombre1,char *sexo1,Birthday birthday1, int salario1);
        int getSalario();
        void saludar();
        int edadPersona();
    private:
        int salario;
};

#endif // CONSERJE_H
