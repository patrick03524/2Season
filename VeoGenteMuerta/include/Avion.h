#ifndef AVION_H
#define AVION_H
#include <iostream>
using namespace std;



class Avion
{
    public:
        Avion();
        Avion(char *modelo1,int year1);
        ~Avion();
        virtual void Saludo()=0;
        int getYear();
    protected:
        char *modelo;
        int year;

};

#endif // AVION_H
