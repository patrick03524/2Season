#include <iostream>
#include <vector>
using namespace std;

class Component
{
  public:
    virtual void traverse() = 0;
};

class Leaf: public Component
{
    int value;
  public:
    Leaf(int val)
    {
        value = val;
    }
    void traverse()
    {
        cout << value << ' ';
    }
};

class Composite: public Component
{

    vector < Component * > children;
  public:

    void add(Component *ele)
    {
        children.push_back(ele);
    }
    void traverse()
    {
        for (unsigned int i = 0; i < children.size(); i++)
        // Polimorfismo
          children[i]->traverse();
    }
};

int main()
{
    Composite containers[4];

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 3; j++)
            containers[i].add(new Leaf(i *3+j)); //Guarda el espacio de memoria de la Clase Leaf y le da de parametros numeros del 0 al 12


    for (int i = 1; i < 4; i++)
        containers[0].add(&(containers[i]));

    for (int i = 0; i < 4; i++)
    {
        containers[i].traverse();
        cout << endl;
    }


}
