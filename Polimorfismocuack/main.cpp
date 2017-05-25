#include <iostream>
#include <string.h>
using namespace std;

class Persona {
  public:
   Persona(char *n) { strcpy(nombre, n); }
   void VerNombre() { cout << nombre << endl; }
  protected:
   char nombre[30];
};

class Empleado : public Persona {
  public:
   Empleado(char *n) : Persona(n) {}
   void VerNombre() {
      cout << "Emp: " << nombre << endl;
   }
};

class Estudiante : public Persona {
  public:
   Estudiante(char *n) : Persona(n) {}
   void VerNombre() {
      cout << "Est: " << nombre << endl;
   }
};

int main() {
   Persona *Pepito = new Estudiante("CUACK");
   Persona *Carlos = new Empleado("Tugfa");

   Carlos->VerNombre();
   Pepito->VerNombre();


   return 0;
}
