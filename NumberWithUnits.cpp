#include "NumberWithUnits.hpp"
#include <iostream>
using namespace std;

namespace ariel{
   
    void NumberWithUnits::read_units(std::ifstream &file_name){};

    /**************************************************************************
    addition operators: 
       +  += ++ 
    **************************************************************************/
    NumberWithUnits operator+(const NumberWithUnits& num){
        return num;
    }

    NumberWithUnits operator+(const NumberWithUnits& first, const NumberWithUnits& second){
        return first;
    }

    NumberWithUnits& NumberWithUnits::operator+=(const NumberWithUnits& other){
        return *this;
    }

    NumberWithUnits& NumberWithUnits::operator++(){ //adds one prefix
        return *this;
    }

    NumberWithUnits& NumberWithUnits::operator++(int){ //adds one postfix
        return *this;
    }


    /**************************************************************************
    subtraction operators: 
       - -= --
    **************************************************************************/
    NumberWithUnits operator-(NumberWithUnits& num){
        return num;
    }

    NumberWithUnits operator-(const NumberWithUnits& first, const NumberWithUnits& second){
        return first;
    }

    NumberWithUnits& NumberWithUnits::operator-=(const NumberWithUnits& other){
        return *this;
            }

    NumberWithUnits& NumberWithUnits::operator--(){ //prefix
        return *this;
    }

    NumberWithUnits& NumberWithUnits::operator--(int){ //postfix
        return *this;
    }

    /**************************************************************************
    multiplication operators: 
       *  *=  
    **************************************************************************/
    NumberWithUnits operator*(const NumberWithUnits& num_u, double num){
        return num_u;
    }

    NumberWithUnits operator*(double num,const NumberWithUnits& num_u){
        return num_u;
    }

    NumberWithUnits& NumberWithUnits::operator*=(double num){
            return *this;
    }

    /**************************************************************************
    comparison operators: 
       <  >  == != <= >=
    **************************************************************************/
    bool operator==(const NumberWithUnits& first, const NumberWithUnits& second){
        return true;
    }
   
    bool operator!=(const NumberWithUnits& first, const NumberWithUnits& second){
        return true;
    }
   
    bool operator<(const NumberWithUnits& first, const NumberWithUnits& second){
        return true;
    }
   
    bool operator<=(const NumberWithUnits& first, const NumberWithUnits& second){
        return true;
    }
   
    bool operator>(const NumberWithUnits& first, const NumberWithUnits& second){
        return true;
    }
   
    bool operator>=(const NumberWithUnits& first, const NumberWithUnits& second){
        return true;
    }


    /**************************************************************************
    input/output operators:
        << >>
    **************************************************************************/
    istream& operator>>(istream& input, NumberWithUnits& num){
        string str;
        input >> num.value >> str >> num.unit;
        return input;
    }

    ostream& operator<< (ostream& output, const NumberWithUnits& num){
        return output;
    }

}