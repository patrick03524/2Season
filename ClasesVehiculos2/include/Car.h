#ifndef CAR_H
#define CAR_H

#include "Vehiculo.h"


class Car : public Vehiculo
{
public:
    Car(const string &miLicencia, const string myYear, int myTires, string &myStyle);
    const string getStyle(); ///{return style;}
    const int getRuedas();/// const {return ruedas;}
    const string getDesc();
private:
    string style;
};

#endif // CAR_H
