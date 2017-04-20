#include <iostream>

using namespace std;

int potencia2num(int base, int exponente)
{
    if (exponente == 0 and base !=0){
        return 1;
    }
    if (exponente != 0 and base ==0){
        return 0;
    }
    if (exponente == 0 and base == 0){
        cout <<"Indeterminado" <<endl;
    }
    return (base^exponente);

}

int main()
{
    cout << "Problema 1" << endl;
    //Millas a kilometros
    const double razonmakm = 1.60934;
    double millas;
    cout << "Ingrese la cantidad de millas :  ";
    cin >> millas;
    cout <<""<<endl;
    if (millas >=0){
        cout << "Las millas convertidas a kilometros : " <<millas*razonmakm<< endl;
    }
    else{
        cout <<"El valor de las millas tiene que ser positivo"<<endl;
    }

    cout << "Problema 2" << endl;
    //Fahrenheit a Celsius
    cout << "Fahrenheit       Celsius" << endl;
    for (double fahr =0;fahr <=300; fahr+=20){
        cout <<fahr<<"               "<<(fahr - 32)*5/9 <<endl;
    }

    cout << "Problema 3" << endl;
    //Verificar si es par o impar
    int valor;
    cout << "Ingrese un valor :  ";
    cin >> valor;
    cout <<""<<endl;
    while (valor != -1){
        if (valor % 2 == 0){
            cout << "El numero es Par" << endl;
            cout << "Ingrese un valor :  ";
        cin >> valor;
        cout <<""<<endl;
        }
        else{
            cout << "El numero es impar" << endl;
            cout << "Ingrese un valor :  ";
        cin >> valor;
        cout <<""<<endl;
        }
    }
    cout << "Problema 4" << endl;
    //Potencia de dos numersao
    int base,exponente;
    cout << "Ingrese la base : ";
    cin >> base;
    cout <<""<<endl;
    cout << "Ingrese el exponente : ";
    cin >> exponente;
    cout <<""<<endl;
    cout <<potencia2num(base,exponente)<<endl;


    //faltan mas prro :v

    return 0;
}

