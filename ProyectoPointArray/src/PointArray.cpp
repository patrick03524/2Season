#include "PointArray.h"

PointArray::PointArray()
{
    size_pointArray = 0;
    points = new Point[0];
}
PointArray::PointArray(const Point points1[],const int size_pa)
{
    this -> size_pointArray = size_pa;
    points = new Point[size_pa];
    for(int i = 0; i < size_pa; ++i){
        points[i] = points1[i];
    }
}
PointArray::PointArray(const PointArray &pv){
    size_pointArray = pv.size_pointArray;
    points = new Point[size_pointArray];
    for(int i = 0; i < size_pointArray; i++){
        points[i] = pv.points[i];
    }
}


PointArray::~PointArray(){
    delete[] points;
}

void PointArray::resize(int newSize){
    Point *pts = new Point[newSize];
    int minSize = ( newSize > size_pointArray ? size_pointArray : newSize );
    for ( int i = 0; i < minSize ; i ++){
        pts [i] = points [i]; }
    delete [] points ;
    size_pointArray = newSize ;
    points = pts ;
}
void PointArray::clear(){
    resize(0);
}
void PointArray::push_back(const Point &p){
    resize(size_pointArray + 1);
    points[size_pointArray - 1] = p;
}
void PointArray :: insert ( const int position , const Point &p) {
    resize ( size_pointArray + 1);
    for ( int i = size_pointArray - 1; i > position ; i --) {
    points [i] = points [i -1];
    }
    points [ position ] = p;
}
void PointArray :: remove ( const int position ) {
    if( position >= 0 && position < size_pointArray ) {
    for( int i = position; i < size_pointArray - 2; i ++) {
        points [i] = points [i + 1];
        }
    resize ( size_pointArray - 1);
    }
}
Point * PointArray :: get ( const int position ) {
    return position >= 0 && position < size_pointArray ? points + position : NULL ;
}

const Point * PointArray :: get ( const int position ) const {
    return position >= 0 && position < size_pointArray ? points + position : NULL ;
}

