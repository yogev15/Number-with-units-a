#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

namespace ariel
{
    class NumberWithUnits{          
       
        public:
            double value;
            std::string unit;

            NumberWithUnits(double new_value, std::string new_unit){};
                       
            static void read_units(std::ifstream &file_name);
   
            friend NumberWithUnits operator+(const NumberWithUnits& num);
            friend NumberWithUnits operator+(const NumberWithUnits& first, const NumberWithUnits& second);
            NumberWithUnits& operator+=(const NumberWithUnits& other);

            NumberWithUnits& operator++();
            NumberWithUnits& operator++(int);

            friend NumberWithUnits operator-(NumberWithUnits& num);
            friend NumberWithUnits operator-(const NumberWithUnits& first, const NumberWithUnits& second);
            NumberWithUnits& operator-=(const NumberWithUnits& other);

            NumberWithUnits& operator--();
            NumberWithUnits& operator--(int);
           

            friend NumberWithUnits operator*(const NumberWithUnits& num_u, double num);
            friend NumberWithUnits operator*(double num,const NumberWithUnits& num_u);
            NumberWithUnits& operator*=(double num);
           

            friend bool operator==(const NumberWithUnits& first, const NumberWithUnits& second);
            friend bool operator!=(const NumberWithUnits& first, const NumberWithUnits& second);
            friend bool operator<(const NumberWithUnits& first, const NumberWithUnits& second);
            friend bool operator<=(const NumberWithUnits& first, const NumberWithUnits& second);
            friend bool operator>(const NumberWithUnits& first, const NumberWithUnits& second);
            friend bool operator>=(const NumberWithUnits& first, const NumberWithUnits& second);

            friend std::ostream& operator<< (std::ostream& output, const NumberWithUnits& num);
            friend std::istream& operator>> (std::istream& input, NumberWithUnits& num);

    };

}