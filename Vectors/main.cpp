#include "triangle.hpp"
#include "Tetrahedron.hpp"

int main(){
try{
    try{
        try{
      Point pt1 (0,0,0);
      Point pt2 (2,1,7);
      Point pt3 (0,0,0);
      Point pt4 (3,2,1);
      Vector v1(pt1,pt3);
//      Triangle tr(pt1,pt2,pt3);
      Line l1 (pt1, v1);
      Line l2 (pt1,pt3);
      Line l3 (pt1,pt2);
      Segment s1(pt1, v1, 1,0);
      Tetrahedron tt (pt1, pt2, pt3, pt4);
      cout << v1;
      
  }catch(VLE e){
      cout <<  e.what();
  }
    }catch(EPE p){
        cout << p.what();
    }
}    catch(SIE s){
            cout << s.what();
        }
    }
