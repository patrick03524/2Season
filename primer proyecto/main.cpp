#include <iostream>

using namespace std;

int main()
{
    /* Operaciones Fundamentales
    int a;
    cout <<"Ingrese el valor de a : ";
    cin >> a;
    float b;
    cout <<"Ingrese el valor de b : ";
    cin >> b;
    float c;
    cout <<"Ingrese el valor de c : ";
    cin >> c;
    //Entre a y b //
    float z = a + b;
    cout <<"La Suma de "<<a<<" y de "<<b<<" es "<<z<<endl;
    z = a - b;
    cout <<"La Resta de "<<a<<" y de "<<b<<" es "<<z<<endl;
    z = a * b;
    cout <<"La Multiplicaci"<<(char)162<<"n de "<<a<<" y de "<<b<<" es "<<z<<endl;
    z = a / b;
    cout <<"La divisi"<<(char)162<<"n de "<<a<<" entre "<<b<<" es "<<z<<endl;

    //Entre a y c //
    float y = a + c;
    cout <<"La Suma de "<<a<<" y de "<<c<<" es "<<y<<endl;
    y = a - c;
    cout <<"La Resta de "<<a<<" y de "<<c<<" es "<<y<<endl;
    y = a * c;
    cout <<"La Multiplicaci"<<(char)162<<"n de "<<a<<" y de "<<c<<" es "<<y<<endl;
    y = a / c;
    cout <<"La divisi"<<(char)162<<"n de "<<b<<" entre "<<c<<" es "<<y<<endl;
    //Entre b y c //
    float x = b + c;
    cout <<"La Suma de "<<b<<" y de "<<c<<" es "<<x<<endl;
    x = b - c;
    cout <<"La Resta de "<<b<<" y de "<<c<<" es "<<x<<endl;
    x = b * c;
    cout <<"La Multiplicaci"<<(char)162<<"n de "<<b<<" y de "<<c<<" es "<<x<<endl;
    x = b / c;
    cout <<"La divisi"<<(char)162<<"n de "<<b<<" entre "<<c<<" es "<<x<<endl;
    */

    //Área del Circulo
    float r;
    float pi= 3.1416;
    cout <<"Ingrese el valor del Radio r : ";
    cin >> r;
    cout <<"El "<<(char)181<<"rea del circulo es "<<pi*(r*r)<<endl;

    //Área del Rectángulo
    float base;
    cout << "Ingrese la Base del rect"<<(char)160<<"ngulo : "<<endl;
    cin >> base;
    float altura;
    cout <<"Ingrese la Altura del rect"<<(char)160<<"ngulo : "<<endl;
    cin >> altura;
    cout <<"El "<<(char)181<<"rea del rect"<<(char)160<<"ngulo es "<<base * altura<<endl;

    //Área del Cuadrado
    float lado;
    cout <<"Ingrese el valor de un lado al Cuadrado : "<< endl;
    cin >> lado;
    cout << "El "<<(char)181<<"rea del Cuadrado es : "<<lado*lado<<endl;

    //Intercambiar Valores
    int x1;
    cout <<"Ingrese un valor : "<< endl;
    cin >> x1;
    int x2;
    cout <<"Ingrese otro valor valor : "<< endl;
    cin >> x2;
    cout <<"Los valores ingresados son : "<<x1<<" y "<<x2<< endl;
    int temp = x1;
    x1 = x2;
    x2 = temp;
    cout <<"Los valores intercambiados son : "<<x1<<" y "<<x2<< endl;

    //Comparar el mayor de 2 números
    int num1;
    cout <<"Ingrese el primer n"<<(char)163<<"mero : "<< endl;
    cin >> num1;
    int num2;
    cout <<"Ingrese el segundo n"<<(char)163<<"mero : "<< endl;
    cin >> num2;
    if (num1>num2){
        cout <<"El mayor n"<<(char)163<<"mero es "<<num1<<endl;
    }
    else{
        cout <<"El mayor n"<<(char)163<<"mero es "<<num2<<endl;
    }

    //Intercambio de solo 2 variables
    int x3;
    cout <<"Ingrese un valor : "<< endl;
    cin >> x3;
    int x4;
    cout <<"Ingrese otro valor valor : "<< endl;
    cin >> x4;
    cout <<"Los valores ingresados son : "<<x3<<" y "<<x4<< endl;
    x3 = x3 + x4;
    x4 = x3 - x4;
    x3 = x3 - x4;
    cout <<"Los valores intercambiados son : "<<x3<<" y "<<x4<<endl;

    //Comparacion entre 3 variables
    int num3;
    cout <<"Ingrese el primer n"<<(char)163<<"mero : "<< endl;
    cin >> num3;
    int num4;
    cout <<"Ingrese el segundo n"<<(char)163<<"mero : "<< endl;
    cin >> num4;
    int num5;
    cout <<"Ingrese el tercero n"<<(char)163<<"mero : "<< endl;
    cin >> num5;
    if (num3>=num4 && num3>=num5){
        cout <<"El mayor n"<<(char)163<<"mero es "<<num3<<endl;
    }
    else{
        if (num4>=num5){
                cout <<"El mayor n"<<(char)163<<"mero es "<<num4<<endl;
        }
        else {cout <<"El mayor n"<<(char)163<<"mero es "<<num5<<endl;
        }
    }

    /*Diferencia entre ++c y c++

    */
    //Bonus
    int variable_mamona;
    cout<<"t h e  s e c r e t  i s "<<endl;
    cin >> variable_mamona;
    if (variable_mamona == 5){
        cout <<"Buena esa prron sacaste un secreto de este pinshi programa que no te ayudara en nada en tu putah vida jajaja salu3"<<endl;
    }

    return 1;
}
