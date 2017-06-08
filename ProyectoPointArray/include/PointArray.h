#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Point.h"


class PointArray : public Point
{
    public:
        PointArray();
        PointArray(const Point points1[],const int size_pa);
        PointArray(const PointArray &pv);
        ~PointArray();

        void push_back(const Point &p);
        void insert(const int position,const Point &p);
        void remove(const int position);
        const int getSize();
        void clear();
        Point *get(const int position);
        const Point *get(const int pos)const;

    private:
        Point *points;
        int size_pointArray;
        void resize(int size);
};

#endif // POINTARRAY_H
