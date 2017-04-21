#include <iostream>

using namespace std;

int SumArreglo (int array1[], int len, int i, int res)
{
    if (i == len){
        return res;
    }
    res = res + array1[i];
    return SumArreglo(array1,len,i+1,res);
}

void MultiMatrices(int *arreglo1[] ,int *arreglo2[],int *arreglototal[])
{
    int temp1 = 0, temp2 = 0;
    for (int i = 0; i<=filas;i++){
        for (int j = 0;i<=columnas+1;j++){
            temp1=*arreglo1[i] * *arreglo2[];
            temp2=*arreglo1[i+1] * *arreglo2[j+1];
            arreglototal[i][j]=temp1+temp2;
        }
    }

}

char Invertir(char *array[],int lim, int i)
{
    int temp;
    if (i >= lim){
        return *array;
    }
    temp = *array[i];
    *array[i]=*array[lim];
    *array[lim]=temp;
    return Invertir(array,lim-1,i+1);
}

int main()
{
    int len;
    cin >> len;
    int arreglo[len];
    for (int i=0;i<len;i++){
        cin >> arreglo[i];
    }
    int Resultado = SumArreglo(arreglo,len,0,0);
    cout << "El resultado es : "<<Resultado<<endl;

    int len2 = 4;
    int lim = len2 -1;
    char *array[len2];
    char a[4]={'h','o','l','a'};
    array[len2] = &a;
    cout <<Invertir(array,lim,0);


    return 0;
}
