#include <iostream>

using namespace std;

int main()
{
    int x1 = 5, x2 = 3, y;
    y=(x1>x2) ? x1:x2;
    cout << y << endl;
    cout << "Ingrese 5 valores" <<endl;
    int Array[5], a,b,c,d,e;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    Array[0]=a;
    Array[1]=b;
    Array[2]=c;
    Array[3]=d;
    Array[4]=e;
    for (int i=0;i<=4;i++){
        if (i==4){
            cout <<Array[i];
        }
        else {
            cout <<Array[i]<<" , ";
        }
    }
    cout<<endl;
    //cout <<"["<<Array[0]<<" , "<<Array[1] << endl;
    int arreglo[3];
    int x=0;

    cin >> arreglo[x++];
    cin >> arreglo[x++];
    cin >> arreglo[x++];


    int f;
    f = arreglo[0];
    arreglo[0]=arreglo[2];
    arreglo[2]=f;

    for (int i=0;i<=2;i++){
        if (i==2){
            cout <<arreglo[i];
        }
        else {
            cout <<arreglo[i]<<" , ";
        }
    }



    return 0;
}
