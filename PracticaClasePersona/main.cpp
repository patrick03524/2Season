#include <iostream>
#include "Persona.h"
#include "Birthday.h"

using namespace std;

int main()
{
    Persona Josefina();
    Birthday Cumple(1999,7,21);
    Persona Pancracio("Pancracio","Masculino",Cumple);
    Pancracio.saludar();
    cout <<"Mi edad actual es : "<<Pancracio.edadPersona()<<endl;

}
