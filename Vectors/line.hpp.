#ifndef line_hpp
#define line_hpp
#include "vector.hpp"

class Line:public Vector{
private:
    Point p1;
    Point p2;
    Vector vect;
public:
    Line();
    Line(Point& ,Vector&);
    Line(Point& ,Point&);
    Line(Line& ,Line&);
    Vector getDirection();
    Vector nmv();
    Vector& getVect();
    Point getP1();
    Point getP2();
    void setP1(Point&);
    void setP2(Point&);
    void setVect(Vector&);
    double angle(Line&);
    bool lineParCheck(Line&);
    
    //overloading
    bool operator +  (Point&);
    bool operator || (Line&);
    bool operator != (Line&);
    bool operator |  (Line&);
    bool operator && (Line&);
    friend std::ostream& operator <<(std::ostream&, Line&);
    friend istream& operator >> (istream&, Line&);

};
    
#endif
