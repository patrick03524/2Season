#include <iostream>
#include <cmath>
using namespace std;


class point{
public:
    double x,y;
    void printpoint(double x, double y){
        cout <<"( "<<x<<" , "<<y<<" )";
    }
};

class vector{
public:
    point a,b;
    void inicialvector(){
        a.x=0;
        a.y=0;
    }
    void printvect(point a, point b){
        a.printpoint(a.x,a.y);
        cout <<" -> ";
        b.printpoint(b.x,b.y);
    }
    double Distancia(point a,point b){
        double res = 0;
        res = pow(pow(((b.x)-(a.x)),2)+pow(((b.y)-(b.x)),2),(0.5));
        return res;
    }

};


int main()
{
    point a,b;
    vector vect;
    vect.a.x = 7;
    vect.a.y = 5;
    cout <<vect.a.x<<endl;
    cout <<vect.a.y<<endl;
    vect.b.x = 4;
    vect.b.y = 1;
    cout <<vect.a.x<<endl;
    cout <<vect.a.y<<endl;
    vect.printvect(vect.a,vect.b);
    cout <<endl;
    double distancia = vect.Distancia(vect.a,vect.b);
    cout << "La distancia entre los 2 puntos es : "<<distancia <<endl;
    return 0;
}
