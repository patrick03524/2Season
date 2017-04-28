#include <iostream>

using namespace std;

int potencia2num(int base, int exponente)
{
    if (exponente!=0 and base !=0){
        if (exponente==0){
            return 1;
        }
        if (base ==0){
            return 0;
        }

        int total = base;
        for (int x = 1; x<exponente; x++){
            total *= base;
        }
        return total;
    }
}

void intercambio1(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

}

void intercambio2(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

void insertionSort( int arreglo[], int len)
{

  for( int  i = 1 ; i < len ; i++)
  {
    int j = i;
    while ( j > 0 && arreglo[j-1] > arreglo [j])
    {
      int temp = arreglo[j];
      arreglo[j]=arreglo[j-1];
      arreglo[j-1]=temp;
      j--;
    }
  }

}
void CrearArreglo(int arreglo[], int len)
{
  for( int i = 0 ; i < len ; i++)
  {
    int num;
    cin >> num;
    arreglo[i] = num;
  }

}
void ImprimirArreglo(int arreglo[], int len)
{
  cout << "La lista es: ";
  for(int x = 0 ; x < len ; x++)
  {
    cout << arreglo[x] << " " ;
  }
  cout <<endl;
}

void Merge(char arreglo[], int p, int q, int r)
{
    int n1 = q-p+1;
    int n2 = r-q;
    char newArray1[n1+1], newArray2[n2+1];
    for (int i=1; i<n1+1;i++){
        newArray1[i] = arreglo[p+i-1];
    }
    for (int j = 1; j<n2+1;j++){
        newArray2[j] = arreglo[q+j];
    }
    int i = 1,j = 1;
    for(int k = p; k<r+1; k++){
        if (newArray1[i] <= newArray2[j]){
            arreglo[k] = newArray1[i];
            i++;
        }
        else {
            arreglo[k] = newArray2[j];
            j++;
        }
    }

}

void MergeSort(char arreglo[], int p,int r)
{
    if (p < r){
        int q = (p+r)/2;
        MergeSort(arreglo,p,q);
        MergeSort(arreglo,q+1,r);
        Merge(arreglo,p,q,r);
    }
}


void reversa(int arreglo[],int len)
{
  int temp;
  int limit = len-1;
  for(int i = 0 ; i < (len/2) ;i++)
  {
    temp= arreglo[i];
    arreglo[i]=arreglo[limit];
    arreglo[limit]=temp;
    --limit;
  }
}

void reversa2(int *arreglo[],int len)
{
  int temp;
  int limit = len-1;
  for(int i = 0 ; i < (len/2) ;i++)
  {
    temp= *arreglo[i];
    *arreglo[i]=*arreglo[limit];
    *arreglo[limit]=temp;
    --limit;
  }
}

int sumaArray(int arreglo[], int len, int x, int total)
{
  if (x == len ){
    return total;
  }
  total = total + arreglo[x];
  return sumaArray(arreglo,len,x+1,total);

}



/*void CrearMatriz(int fila,int columna, int arreglo[3][3])
{
    int num;
    cout << "Ingresar valores para las filas y columnas" <<endl;
    for( int i = 0 ; i < fila ; i++){
        for (int j = 0; j<columna;j++ ){
            cin >> num;
            arreglo[i][j] = num;
        }
    }
}

bool palindrome(char *arreglo[], int len)
{
    int i = 0;
    bool resultado = true;
    while(i < (len/2)){
        if (*arreglo[i] == *arreglo[len - i]){
            resultado = true;
            i++;
        }
        else{
            resultado = false;
            break;
        }
    }
    return resultado;
}*/



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
    cout <<"El resultado es : "<<potencia2num(base,exponente)<<endl;

    cout << "Problema 5" << endl;
    //0 al 9
    int num1;
    cout << "Ingresar un numero del 0 al 9 : ";
    cin >> num1;
    cout << "" << endl;
    while (num1 != -1){
        switch(num1){
            case 0:
                cout << "cero" <<endl;
                break;
            case 1:
                cout << "uno" <<endl;
                break;
            case 2:
                cout << "dos" <<endl;
                break;
            case 3:
                cout << "tres" <<endl;
                break;
            case 4:
                cout << "cuatro" <<endl;
                break;
            case 5:
                cout << "cinco" <<endl;
                break;
            case 6:
                cout << "seis" <<endl;
                break;
            case 7:
                cout << "siete" <<endl;
                break;
            case 8:
                cout << "osho" <<endl;
                break;
            case 9:
                cout << "nueve" <<endl;
                break;
            default:
                cout <<"Numero no permitido" <<endl;
                break;

            }
            cout << "Ingresar un numero del 0 al 9 : ";
            cin >> num1;

    }

    cout <<"Problema 6" <<endl;
    double a,b,rpta;
    char op;
    cout << "Ingresa el operador y dos numeros : " << endl;
    cin >> op >> a >> b;
    bool cont2 = true;
    while (cont2 == true)
    {
        if(op=='+' or op == '-' or op == '*' or op == '/')
        {
            cont2 = false;
            if (op == '+'){
                rpta = a + b;
            }
            else if (op == '-'){
                rpta = a - b;
            }
            else if (op == '*'){
                rpta = a * b;
            }
            else if (op == '/'){
                rpta = a / b;
            }
        cout <<  "El resultado de la operacion -> "<<op<<" "<<a<<" "<<b<< endl;
        cout << "El resultado es : " << rpta<< endl;
        }
        else
        {
        cout << endl << endl << "Ingresa un operador correcto" << endl;
        break;
        }
    }

    cout << "Problema 7" <<endl;
    //Intercambio por referencia
    int n1,n2;
    cout << "Ingrese el valor de a: ";
    cin >> n1;
    cout << "Ingrese el valor de b: ";
    cin >> n2;
    intercambio1(n1,n2);
    cout <<"El valor de a es : "<<n1<<endl;
    cout <<"El valor de b es : "<<n2<<endl;

    cout << "Problema 8" <<endl;
    //Intercambio por punteros alv
    int n3,n4;
    cout << "Ingrese el valor de a: ";
    cin >> n3;
    cout << "Ingrese el valor de b: ";
    cin >> n4;
    int *pt1 = &n3;
    int *pt2 = &n4;
    intercambio2(pt1,pt2);
    cout <<"El valor de a es : "<<n3<<endl;
    cout <<"El valor de b es : "<<n4<<endl;

    cout <<"Problema 9" <<endl;
    //InsertionSort
    int len1;
    cout <<"Ingrese el tamanho del arreglo : ";
    cin >> len1;
    int array1[len1];
    CrearArreglo(array1,len1);
    insertionSort(array1,len1);
    ImprimirArreglo(array1,len1);

    cout <<"Problema 10"<<endl;
    //MergeSort
    /*
    int len2;
    cout <<"Ingrese el tamanho del arreglo : ";
    cin >> len2;
    int arrayA[len2];
    CrearArreglo(arrayA,len2);
    MergeSort(arrayA,0,len2-1);
    ImprimirArreglo(arrayA,len2);
    */

    cout <<"Problema 11"<<endl;
    /*
    int lenf = 3,lenc = 3;
    int myMatriz[lenf][lenc] = {{1,2,3},{4,3,2},{3,2,1}};
    */

    cout <<"Problema 12"<<endl;
    int len3;
    cout <<"Ingrese el tamanho del arreglo : ";
    cin >> len3;
    int array3[len3];
    CrearArreglo(array3,len3);
    reversa(array3,len3);
    ImprimirArreglo(array3,len3);

    cout << "Problema 13" << endl;
    int len4;
    cout <<"Ingrese el tamanho del arreglo : ";
    cin >> len4;
    int array4[len4];
    CrearArreglo(array4,len4);
    int *arraypt4[len4];
    for (int i = 0; i<len4; i++){
        arraypt4[i] = &(array4[i]);
    }
    reversa2(arraypt4,len4);
    for(int j = 0 ; j < len4 ; j++)
    {
        cout << *arraypt4[j] << " " ;
    }
    cout <<endl;



    cout <<"Problema 14" <<endl;
    int len5;
    cout <<"Ingrese el tamanho del arreglo : ";
    cin >> len5;
    int array5[len5];
    CrearArreglo(array5,len5);
    cout <<"la Suma de los elementos del Arreglo es : "<<sumaArray(array5,len5,0,0)<<endl;
    ImprimirArreglo(array5,len5);

    /*cout <<"Problema 15" << endl;
    int len6;
    cout <<"Ingrese el tamanho del arreglo : ";
    cin >> len6;
    char *array6[len6];
    CrearMatriz(array6,len6);
    cout <<palindrome(array6,len6)<<endl;
    */





    return 0;
}

