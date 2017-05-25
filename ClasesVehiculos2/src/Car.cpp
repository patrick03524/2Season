#include "Car.h"
#include "Vehiculo.h"

Car::Car(const string &miLicencia, const string myYear, int myTires, string &myStyle)
    : Vehiculo(miLicencia,myYear,myTires),style(myStyle){}
const string Car::getStyle()
{
    return style;
}
