#include "complejos.h"
#include <iostream>

using namespace std;


complejos::complejos()
{
    double real = 0.0;
    double compleja=1.0;
}
double complejos::getX()
{
    return real;
}
double complejos::getY()
{
    return compleja;
}
void complejos::imprimirNum()
{
    cout<<"El numero complejo ingresado es : "<<real<<"+"<<compleja<<"i "<<endl;
}
double complejos::sumNumComp(double r1, double c1)
{
    real += r1;
    compleja+=c1;
}
double complejos::resNumComp(double r1, double c1)
{
    return 2;
}
