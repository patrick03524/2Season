#include <iostream>
#include <vector>
# define min (x, y) (x < y ? x : y)

using namespace std;

template < class T> class Stack ;

template < class T> Stack <T> operator +( const Stack <T> &s1 , const Stack <T> &s2);

template < class T> Stack <T> operator -( const Stack <T> &s1 , const Stack <T> &s2);

template < class T>
class Stack {
    friend Stack <T> operator +<>( const Stack <T> &s1 , const Stack <T> &s2);
    friend Stack <T> operator -<>( const Stack <T> &s1 , const Stack <T> &s2);
    vector <T> items ;
public :
    bool empty () const { return items . empty () ;}
    void push ( const T & item ) { items . push_back ( item );}
    T pop () {
        T last = items . back ();
        items . pop_back ();
        return last ;
    }
    void getDatos(const Stack <T> &s1){
        for ( unsigned i = 0; i < s1. items . size (); ++i) {
            cout <<s1. items [i]<<" ";

        }
    }
};
template < class T>
Stack <T> operator +( const Stack <T> &s1 , const Stack <T> &s2)
    {
    Stack <T> result = s1;
    for ( unsigned i = 0; i < s1. items . size (); ++i) {
        result . items . push_back (s2. items [i]);
    }
    return result ;
}
template < class T>
Stack <T> operator -( const Stack <T> &s1 , const Stack <T> &s2)
    {
    Stack <T> result = s1;
    int temp;
    for (unsigned int i = 0; i<s1.items.size();i++) {
        if(s1. items [i] == s2. items [i]){
            while(i<s1.items.size()-1){
                temp = result.items [i+1];
                result.items[i] = result.items[i+1];
                result.items[i+1] = temp;
                i++;
            }
            result . items . pop_back();
        }
    }
    return result ;
}

int main()
{
    cout <<"Primera Operacion"<<endl;
    Stack<int> stack1, stack2,stackres,stackres2;
    stack1.push(8);
    stack2.push(5);
    cout <<"Stack 1 : ";
    stack1.getDatos(stack1);
    cout <<" "<<endl;
    cout <<"Stack 2 : ";
    stack2.getDatos(stack2);
    cout <<" "<<endl;
    stackres = (stack1+stack2);
    cout <<"Stack 3, resultado de la Suma de ambos : ";
    stackres.getDatos(stackres);
    cout <<" "<<endl;
    cout <<"Segunda Operacion "<<endl;
    stack1.push(6);
    stack2.push(6);
    stack1.push(5);
    stack2.push(4);
    cout <<"Stack 1 : ";
    stack1.getDatos(stack1);
    cout <<" "<<endl;
    cout <<"Stack 2 : ";
    stack2.getDatos(stack2);
    cout <<" "<<endl;
    stackres2 = (stack1-stack2);
    cout <<"Stack 4, resultado de la Resta de ambos : ";
    stackres2.getDatos(stackres2);


}

