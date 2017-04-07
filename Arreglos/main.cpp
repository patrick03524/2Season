#include <iostream>

using namespace std;

int sum (const int array[], const int length)
{
    int sum = 0;
    for (int i = 0;i<length;sum+=array[i++]);
    return sum;
}
int prom (const int array[], const int length)
{
    int prom = 0;
    for (int i = 0;i<length;prom+=array[i++]);
    prom = prom / length;
    return prom;
}
void invertir (int array[], const int length)
{
    int temp;
    for (int i=0, j=length-1; i<j;i++,j--){
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }
    for (int i=0;i<length;i++){
        cout << array[i];
    }
}
void intercambioprron(int &a, int &b)
{
    int t=a;
    a=b;
    b=t;
}
void invertiropt2(int array [],int length)
{
    for (int i=0;i<length/2;i++){
        intercambioprron(array[i],array[length-(i+1)]);
    }
}
void ordenar (int array[],const int length)
{
    int temp;
    for (int i=0;i<length;i++){
        for (int a=1;a<length;a++){
            if(array[i]>array[i+a]){
                temp = array[i];
                array[i]=array[i+a];
                array[i+a]=temp;
            }
        }
    }
    for (int i=0;i<length;i++){
        cout << array[i];
    }

}
int main()
{
    cout << "Trabajo Arrays" << endl;
    //Problema 1
    cout << "Problema 1" << endl;
    cout << "Ingrese el tamaho del Array : ";
    int n1;
    cin >> n1;
    int array[n1];
    for (int i=0;i<n1;i++){
        cout << "Ingrese un Valor : ";
        cin >> array[i];
    }
    cout << "La suma es : " << sum(array,n1)<<endl;

    //Problema 2
    cout <<"Problema 2"<< endl;
    cout << "Ingrese el tamaho del Array : ";
    int n2;
    cin >> n2;
    int array2[n2];
    for (int i=0;i<n2;i++){
        cout << "Ingrese un Valor : ";
        cin >> array2[i];
    }
    cout << "El promedio es : " << prom(array2,n2)<<endl;

    //Problema 3
    cout <<"Problema 3"<< endl;
    cout << "Ingrese el tamaho del Array : ";
    int n3;
    cin >> n3;
    int array3[n3];
    for (int i=0;i<n3;i++){
        cout << "Ingrese un Valor : ";
        cin >> array3[i];
    }
    cout << "El array invertido es : ";
    invertir(array3,n3);
    cout << endl;


    //Problema 4
    cout <<"Problema 4"<< endl;
    cout << "Ingrese el tamaho del Array : ";
    int n4;
    cin >> n4;
    int array4[n4];
    for (int i=0;i<n4;i++){
        cout << "Ingrese un Valor : ";
        cin >> array4[i];
    }
    ordenar(array4,n4);




    return 0;
}
