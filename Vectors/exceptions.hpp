//exceptions

#ifndef exceptions_hpp
#define exceptions_hpp
#include "element.hpp"

class VLE : public std::exception{
public:
    const char * what (){
        return "Vector length cannot be 0\n";
    }
};

class SIE : public std::exception{
public:
    const char * what(){
        return "interval \"t\" must be between 0 and 1\n";
    }
};

class EPE : public std::exception{
public:
    EPE(int num1, int num2){
        this->num1=num1;
        this->num2=num2;
    }
    const char * what(){
        std::cout<<num1<< " " << num2 << " ";
        return "Matching points ";
    }
private:
    int num1;
    int num2;
};
#endif
