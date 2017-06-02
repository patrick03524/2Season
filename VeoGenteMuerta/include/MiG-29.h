#ifndef MIG-29_H
#define MIG-29_H


class MiG-29
{
    public:
        MiG-29();
        MiG-29(char *modelo1,int year1, char *color1);
        virtual ~MiG-29();
        void Saludo();
        char getModelo();
        int getYear();
    private:
        char *modelo;
        int year;
        char *color;
};

#endif // MIG-29_H
