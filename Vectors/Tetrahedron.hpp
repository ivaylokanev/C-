#ifndef Tetrahedron_hpp
#define Tetrahedron_hpp
#include "segment.hpp"

class Tetrahedron:public Point{    
public:
Point p1,p2,p3,p4;
Tetrahedron();
Tetrahedron(Point&, Point&, Point&, Point&);
~Tetrahedron();
Tetrahedron(const Tetrahedron&);
Tetrahedron& operator=(const Tetrahedron&);
friend ostream& operator <<(std::ostream&, const Tetrahedron&);
friend istream& operator >> (istream&, Tetrahedron&);

//methods 
bool check_if_Correct();
bool check_if_Ortogonal();
float get_Surface();
float get_Volume();
    
};
#include "Tetrahedron.hpp"

#endif /* Tetrahedron_hpp */
