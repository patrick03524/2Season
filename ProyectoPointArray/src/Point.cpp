#include "Point.h"

Point::Point()
{
    this -> x = NULL;
    this -> y = NULL;
}
Point::Point(int a,int b)
{
    this -> x = a;
    this -> y = b;
}
int Point::getX(){return x;}
int Point::getY(){return y;}
void Point::setX(const int new_x){x = new_x;}
void Point::setY(const int new_y){y = new_y;}
