#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include "sources/Fraction.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("When there is negative number in denominator or numerator ") 
{
    //It is possible to do this (answer=-1/2)
    CHECK_NOTHROW(Fraction(1, -2));

    //It is possible to do this (answer=1)
    CHECK_NOTHROW(Fraction(-4, -4));
}

TEST_CASE("The denominator is zero")
{
    Fraction num1(2,4);
    Fraction num2(0,3);
    //Cant divide with 0 
    CHECK_THROWS(Fraction(3, 0));
    CHECK_THROWS(Fraction(-1, 0));
    CHECK_THROWS(num1 / num2);

}

TEST_CASE("When only the numerator is zero")
{
    //It is possible to do this (answer=0),check if function is work
    CHECK_NOTHROW(Fraction (0, 1));
    //It is possible to do this (answer=0)
    CHECK_NOTHROW(Fraction(0, -1));

    Fraction num1 (0, 4); 
    Fraction num2 (0, -4); 
    CHECK(num1 == 0);
    CHECK(num2 == 0);
}
TEST_CASE("The constructor should to reduce , so check if equal after reduce")
{
    Fraction num1 (3, 6); 
    Fraction num2 (-3, 6); 
    Fraction num3 (3, -6); 
    Fraction num4 (-3, -6);
    //Stay like this- dont have reduce 
    Fraction num5 (3, 4); 
    CHECK(num1 == Fraction(1, 2));
    CHECK(num2 == Fraction(-1, 2));
    CHECK(num3 == Fraction(-1, 2));
    CHECK(num4 == Fraction(1, 2));
    CHECK(num5 == Fraction(3, 4));
}

TEST_CASE("Test to operator +"){
    Fraction num1(1,2);
    Fraction num2(2,4);
    Fraction num3(1,1);
    Fraction num4(3,6);
    Fraction num5(5,2);

    CHECK((num1+num2)==1);
    CHECK((num1+num4)==num3);
    CHECK((num1+2)==num5);
}

TEST_CASE("Test to operator -"){
    Fraction num1(1,2);
    Fraction num2(2,4);
    Fraction num3(1,1);
    Fraction num4(3,6);
    Fraction num5(5,2);

    CHECK((num1-num2)==0);
    CHECK((num3+num2)==0.5);
    CHECK((num5-num3)==1.5);
}

TEST_CASE("Test to operator =="){
    Fraction num1(1,2);
    Fraction num2(2,4);
    Fraction num3(4,6);

    CHECK(num1==num2);
    CHECK(num3==0.5);
}
TEST_CASE("Test to operator >")
{
    Fraction num1(1, 2);
    Fraction num2(3, 9);

    CHECK(num1>num2);
    CHECK(1>num2);

}
TEST_CASE("Test to operator <")
{
    Fraction num1(1, 2);
    Fraction num2(3, 9);
    Fraction num3(3, 1);

    CHECK(num2<num1);
    CHECK(num3<5);

}
TEST_CASE("Test to operator <=")
{
    Fraction num1(1, 2);
    Fraction num2(3, 6);
    Fraction num3(3, 1);

    CHECK(num1<=num2);
    CHECK(num3<=3);
}
TEST_CASE("Test to operator >=")
{
    Fraction num1(1, 2);
    Fraction num2(3, 6);
    Fraction num3(3, 1);

    CHECK(num1<=num2);
    CHECK(num3<=3);
 
}

