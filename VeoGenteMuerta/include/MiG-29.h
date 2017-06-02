#ifndef MIG-29_H
#define MIG-29_H
#include "Avion.h"


class MiG29 : public Avion
{
    public:
        MiG29();
        MiG29(char *modelo1,int year1, char *color1);
        virtual ~MiG29();
        void Saludo();
        char getModelo();
        int getYear();
    private:
        char *modelo;
        int year;
        char *color;
};

#endif // MIG-29_H
