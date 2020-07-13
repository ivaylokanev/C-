#ifndef element_hpp
#define element_hpp
#include "Libs.h"
class Element{
public:
    Element(void) {};
    ~Element(void) {};
    virtual void init()=0;
};


#endif
