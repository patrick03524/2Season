#ifndef TIGERPLANE_H
#define TIGERPLANE_H


class TigerPlane : public Avion
{
    public:
        TigerPlane();
        TigerPlane(char *modelo1,int year1, char *color1);
        virtual ~TigerPlane();
        void Saludo();
        char getModelo();
        int getYear();
    private:
        char *modelo;
        int year;
        char *color;
};

#endif // TIGERPLANE_H
