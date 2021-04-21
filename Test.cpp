#include "doctest.h"
#include "NumberWithUnits.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("addition operators"){
    NumberWithUnits number1(530,"g");
    NumberWithUnits number2(15.7,"kg");
    NumberWithUnits number3(1.2,"ton");
    
    CHECK(number1 + number2 == NumberWithUnits(16230,"g"));
    CHECK(number2 + number3 == NumberWithUnits(1215.7,"kg"));
    CHECK(++number2 == NumberWithUnits(16.7,"kg"));
    CHECK((number3 += number2) == NumberWithUnits(1.2157,"ton"));
    CHECK(number2++ == NumberWithUnits(16.7,"kg"));
    CHECK((+number2) == NumberWithUnits(15.7,"kg"));   
}

TEST_CASE("subtraction operators"){
    NumberWithUnits number1(120,"cm");
    NumberWithUnits number2(230,"m");
    NumberWithUnits number3(4,"km");
    
    CHECK(number3 - number1 == NumberWithUnits(3.88,"km"));
    CHECK(--number1 == NumberWithUnits(119,"cm"));
    CHECK((number2 -= number1) == NumberWithUnits(228.8,"ton"));
    CHECK(number2-- == NumberWithUnits(229,"kg"));
    CHECK((-number3) == NumberWithUnits(-4,"kg"));   
}

TEST_CASE("multiplication operators"){
    NumberWithUnits number1(46,"sec");
    NumberWithUnits number2(130," min");
    NumberWithUnits number3(4.5,"hour");
    double d = rand() % 100;

    CHECK_EQ(number1 * d, NumberWithUnits(46*d, "sec"));
    CHECK_EQ(d * number2  , NumberWithUnits(d*130, "min"));
    CHECK_EQ((number3 *= d) , NumberWithUnits(4.5*d, "ton"));
}

TEST_CASE("comparison operators"){
    NumberWithUnits number1(120,"cm");
    NumberWithUnits number2(230,"m");
    NumberWithUnits number3(4,"km");
    NumberWithUnits number4(15,"cm");
    NumberWithUnits number5(75,"m");
    NumberWithUnits number6(1.4,"km");
    
    CHECK_NE(number1 , number2);
    CHECK(number1 != number2);
    CHECK(number4 < number1);
    CHECK(number3 > number6);
    CHECK(number2 >= number5);
    CHECK(number6 >= number1);
    CHECK_NE(number3 ,number6);
    CHECK(number1 == number4);
}

TEST_CASE("input/output operators"){
    NumberWithUnits number1(120,"cm");
    NumberWithUnits number2(230,"g");
}

TEST_CASE("exeptions"){
    NumberWithUnits number1(120,"cm");
    NumberWithUnits number2(230,"g");
    NumberWithUnits number3(4,"sec");
    
    CHECK_THROWS(number3 + number1);
    CHECK_THROWS(number2 -= number1);
    CHECK_THROWS(number2 + number3);
    CHECK_THROWS(number1 - number3);
    CHECK_THROWS(number3 += number1);

}