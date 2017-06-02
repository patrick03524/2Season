#ifndef AVION_H
#define AVION_H


class Avion
{
    public:
        Avion();
        Avion(char *modelo1,int year1);
        ~Avion();
        virtual void Saludo()=0;
        char getModelo();
        int getYear();
    protected:
        char *modelo;
        int year;

};

#endif // AVION_H
