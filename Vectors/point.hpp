#ifndef H_POINT_H
#define H_POINT_H
#include "Libs.h"
class Point
{
public:
    double x, y, z;
    Point();
    Point(double, double, double);
    //Getters
    double getX();
    double getY();
    double getZ();

    void setX(double);
    void setY(double);
    void setZ(double);

    double operator *(Point& p2);
    friend bool operator ==(Point, Point);
    friend ostream& operator <<(std::ostream&, Point);
    friend istream& operator >> (istream&, Point&);
};

#endif
#pragma once
