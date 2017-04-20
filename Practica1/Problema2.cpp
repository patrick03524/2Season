#include <iostream>

using namespace std;

int main3()
{
    cout << "Problema 2" << endl;
    //Fahrenheit a Celsius
    cout << "Fahrenheit       Celsius" << endl;
    for (double fahr =0;fahr <=300; fahr+=20){
        cout <<fahr<<"               "<<(fahr - 32)*5/9 <<endl;
    }
}
