#include "Conserje.h"

Conserje::Conserje()
    : Persona(),salario(0){}

Conserje::Conserje(char *nombre1,char *sexo1,Birthday birthday1, int salario1)
    : Persona(nombre1,sexo1,birthday1),salario(salario1){}
int Conserje::getSalario()
{
    return salario;
}
void Conserje::saludar()
{
    cout <<"Hola soy un conserje" <<endl;
    cout <<"Mi nombre es :"<<nombre<<endl;
    cout <<"Mi sexo es : "<<sexo<<endl;
    cout <<"Mi Salario es : "<<salario<<"$ al mes "<<endl;
}
int Conserje::edadPersona()
{
    int currentyear = 2017;
    int currentmonth = 6;
    int currentday = 1;
    int currentage = currentyear - birthday.getYear();
    if (birthday.getMonth() > currentmonth){
        currentage=currentage-1;
    }
    else {
        if (birthday.getMonth() == currentmonth){
            if (birthday.getDay() > currentday){
                currentage = currentage -1;
            }
        }
    }
    return currentage;
}
