#ifndef segment_hpp
#define segment_hpp
#include "line.hpp"

class Segment:private Line{
private:
    Point pt;
    Point pst, pend;
    Vector Vect;
    double t1,t2;
    double x,y,z;
public:
    Segment();
    Segment(Point&, Vector&, double, double);
    Segment(Point& pt1, Point pt2);
    Segment(Segment&, Segment&);
    double segLen();
    Point segMid();
    bool segPointCheck();
    double shortDistance();
    bool operator ==(const Point&);
   
    Vector getVect();
    double getT();
    double getX();
    double getY();
    double getZ();
    istream& ext(istream&)const;
    ostream& ins(ostream&)const;
    double operator *(Segment&);
    friend std::ostream& operator <<(std::ostream&, const Segment&);
    friend istream& operator >> (istream&, Segment&);
};

#endif
