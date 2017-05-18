#ifndef COMPLEJOS_H
#define COMPLEJOS_H


class complejos
{
    public:
        complejos();
        double getX();
        double getY();
        void imprimirNum();
        double sumNumComp(double r1, double c1);
        double resNumComp(double r1, double c1);

    protected:
    private:
        double real;
        double compleja;


};

#endif // COMPLEJOS_H
