#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;


class Point
{
    public:
        Point();
        Point(int a,int b);
        ~Point();
        int getX();
        int getY();
        void setX(const int new_x);
        void setY(const int new_y);
    protected:
        int x,y;
};

#endif // POINT_H
