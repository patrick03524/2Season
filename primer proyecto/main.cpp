#include <iostream>

using namespace std;

int main()
{
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


    float r;
    float pi= 3.1416;
    cout <<"Ingrese el valor del Radio r : ";
    cin >> r;
    cout <<"El "<<(char)181<<"rea del circulo es "<<pi*(r*r)<<endl;
    float base;
    cout << "Ingrese la Base del rect"<<(char)160<<"ngulo : "<<endl;
    cin >> base;
    float altura;
    cout <<"Ingrese la Altura del rect"<<(char)160<<"ngulo : "<<endl;
    cin >> altura;
    cout <<"El "<<(char)181<<"rea del rect"<<(char)160<<"ngulo es "<<base * altura<<endl;


    return 0;
}
