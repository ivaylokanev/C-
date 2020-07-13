#ifndef TRIANGLE_H
#define TRIANGLE_H

#include"point.hpp"


class Triangle : public Point{
public:
    Triangle(Point&, Point&, Point&);
    Triangle(double&, double&, double&);
    string sideType(Triangle&);
    string angleType(Triangle&);
    Point mediCentar(Triangle&);
    ~Triangle();
    void triangleType(Triangle&);
    double Perimetar();
    double areaTriangle();
    double poluPerimetar();
    double length(Point&, Point&);
    void largestSide(double,double,double);
    double maximum();
    friend std::ostream& operator <<(std::ostream&, Triangle&);
    friend istream& operator >> (istream&, Triangle&);

    bool operator <(Point&);
    bool operator > (Point&);
    bool operator ==(Point&);
private:
    Point firstPoint;
    Point secondPoint;
    Point thirdPoint;
    double aLen,bLen,cLen;
    double longest;
};
#endif // TRIANGLE_H
