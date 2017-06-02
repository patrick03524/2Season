#include "PointArray.h"

PointArray::PointArray()
{
    this -> size_pointArray = 0;
    points = new Point[size_pointArray];
}
PointArray::PointArray(const Point points1[],const int size_pa)
{
    points = points1;
    this -> size_pointArray = size_pa;
}
PointArray::PointArray(const PointArray &pv)
{

}

PointArray::~PointArray()
{

}
