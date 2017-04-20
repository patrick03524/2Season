#include <iostream>

using namespace std;

int main2()
{
    cout << "Problema 1" << endl;
    //Millas a kilometros
    const double razonmakm = 1.60934;
    double millas;
    cout << "Ingrese la cantidad de millas :  ";
    cin >> millas;
    cout << ""<<endl;
    cout << "Las millas convertidas a kilometros : " <<millas*razonmakm << endl;
    return 0;
}
