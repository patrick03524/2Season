#include <iostream>

using namespace std;

int main()
{
    //Problema Invertir Arreglo de 10 elementos
    cout <<"1.-"<<endl;
    int tam,temp;
    cin >> tam;
    int arreglo[tam];
    for (int i=0;i<tam;i++){
        cin >> arreglo[i];
    }
    for (int i=0, j=tam-1; i<j;i++,j--){
        temp=arreglo[i];
        arreglo[i]=arreglo[j];
        arreglo[j]=temp;
    }
    for (int i=0;i<tam;i++){
        cout << arreglo[i]<<endl;
    }

    //Invertir Sumar los 5 elementos de un arreglo
    cout <<"2.-"<<endl;
    tam=5;
    int arreglo2[tam];
    temp=0;
    for (int i=0;i<tam;i++){
        cin >> arreglo2[i];
        }
    for (int i=0, j=tam-1; i<=j; i++){
        temp=temp+arreglo2[i];
    }
    cout << temp << endl;


    return 0;

    //iNTENTAR PROBLEMA SACAR LA LISTA DE LOS NUMEROS PRIMOS ENTRE 1-100

}
