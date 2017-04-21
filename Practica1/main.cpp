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

int sumaArray(int arreglo[], int len, int x, int total)
{
  if (x == len ){
    return total;
  }
  total = total + arreglo[x];
  return sumaArray(arreglo,len,x+1,total);

}


/*void CrearArreglo2(char *arreglo[], int len)
{
  for( int i = 0 ; i < len ; i++)
  {
    char a;
    cin >> a;
    *arreglo[i] = a;
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
           //InsertionSort
    int len;
    cout <<"Ingrese el tamanho del arreglo : ";
    cin >> len;
    int array1[len];
    CrearArreglo(array1,len);
    insertionSort(array1,len);
    ImprimirArreglo(array1,len); cout <<  "El resultado de la operacion -> "<<op<<" "<<a<<" "<<b<< endl;
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

    cout <<"Problema 11"<<endl;

    cout <<"Problema 12"<<endl;
    //De reversa mami :3
    int len3;
    cout <<"Ingrese el tamanho del arreglo : ";
    cin >> len3;
    int array3[len3];
    CrearArreglo(array3,len3);
    reversa(array3,len3);
    ImprimirArreglo(array3,len3);

    cout <<"Problema 14" <<endl;
    int len4;
    cout <<"Ingrese el tamanho del arreglo : ";
    cin >> len4;
    int array4[len4];
    CrearArreglo(array4,len4);
    cout <<sumaArray(array4,len4,0,0)<<endl;
    ImprimirArreglo(array4,len4);

    /*cout <<"Problema 15" << endl;
    int len5;
    cout <<"Ingrese el tamanho del arreglo : ";
    cin >> len5;
    char *array5[len5];
    CrearArreglo2(array5,len5);
    cout <<palindrome(array5,len5)<<endl;
    */





    return 0;
}

