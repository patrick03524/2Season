#include "vehiculo.h"


Vehiculo::Vehiculo(const string &miLicencia,const string myYear)
{
    licencia=miLicencia;
    year=myYear;
}
const string Vehiculo::getDesc()
{
    return licencia + " from " + year;

}
const string Vehiculo::getLicencia()
{
    return licencia;

}
const string Vehiculo::getYear()
{
    return year;
}
