#include <iostream>
#include "vehiculo.h"
#include "Car.h"

using namespace std;

int main()
{
    Vehiculo vehiculo1("T4G5AIN4","2024",4);
    cout <<vehiculo1.getLicencia()<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
