#ifndef GERENTE_H
#define GERENTE_H
#include "Persona.h"

class Gerente : public Persona
{
    public:
        Gerente();
        Gerente(char *nombre1,char *sexo1,Birthday birthday1, int salario1);
        int getSalario();
        void saludar();
        int edadPersona();
    private:
        int salario;


};

#endif // GERENTE_H
