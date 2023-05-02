#include <ostream>
#include <iostream>
#include <algorithm>
#include "Fraction.hpp"

using namespace std;

namespace ariel
{
    Fraction::Fraction()
    {
        this->denominator = 1;
        this->numerator = 0;
    }

    Fraction::Fraction(int numerator1, int denominator1):numerator(numerator1),denominator(denominator1)
    {
        if (denominator == 0)
            throw invalid_argument("The denominator can't be zero");
        reduce(numerator,denominator);
    }
    
    Fraction::Fraction(float number):numerator(1),denominator(1){}

    void Fraction::reduce(int numerator, int denominator)
    {
        int divide = __gcd(numerator,denominator);
        numerator =  numerator/ divide;
        denominator = denominator/divide;
    }
    
    //************* + operator ***************

    Fraction Fraction::operator+(const Fraction &other) const
    {
        return Fraction();
    }
    Fraction Fraction::operator+(const float &number) const
    {
        return Fraction();
    }
    Fraction operator+(const float &number, const Fraction &other)
    {
        return Fraction();
    }
    //************* - operator ***************

    Fraction Fraction::operator-(const Fraction &other) const
    {
        return Fraction();
    }
    Fraction Fraction::operator-(const float &number) const
    {
        return Fraction();
    }
    Fraction operator-(const float &number, const Fraction &other)
    {
        return Fraction();
    }

    //************* / operator ***************

    Fraction Fraction::operator/(const Fraction &other) const
    {
        return Fraction();
    }
    Fraction Fraction::operator/(const float &number) const
    {
        return Fraction();
    }
    Fraction operator/(const float &number, const Fraction &other)
    {
        return Fraction();
    }

    //************* * operator ***************

   Fraction Fraction::operator*(const Fraction &other)const
    {
        return Fraction();
    }
    Fraction Fraction::operator*(const float &number) const
    {
        return Fraction();
    }
    Fraction operator*(const float &number, const Fraction &other)
    {
        return Fraction();
    }

    //************* ++ operator ***************

    // Pre increcment
    Fraction &Fraction::operator++()
    {
        this->numerator += this->denominator;
        return *this;
    }
    // Post increcment
    Fraction Fraction::operator++(int)
    {
        Fraction num = *this;
        this->numerator += this->denominator;
        return num;
    }

    //************* -- operator ***************

    Fraction Fraction::operator--(int)
    {
        return Fraction();
    }
    Fraction &Fraction::operator--()
    {
        return *this;
    }
    //************* == operator ***************

    bool Fraction::operator==(const Fraction &other) const
    {
        if ((this->numerator == other.numerator) && (this->denominator == other.denominator))
            return true;
        else
            return false;
    }
    bool Fraction::operator==(const float &other) const
    {
        return *this == Fraction(other);
    }
    bool operator==(float number, const Fraction &other)
    {
        return false;
    }

    //************* != operator ***************

    bool Fraction::operator!=(const Fraction &other) const
    {
        return !(*this == other);
    }

    bool Fraction::operator!=(const float &other) const
    {
        return *this != other;
    }

    bool operator!=(float number, const Fraction &other)
    {
        return false;
    }

    //************* > operator ***************

    bool operator>(const float &number, const Fraction &other)
    {
        return false;
    }
    bool Fraction::operator>(const float &number) const
    {
        return false;
    }
    bool Fraction::operator>(const Fraction &other) const
    {
        return (numerator * other.denominator) > (other.numerator * denominator);
    }

    //************* < operator ***************

    bool Fraction::operator<(const Fraction &other) const
    {
        return (numerator * other.denominator) < (other.numerator * denominator);
    }

    bool Fraction::operator<(const float &number) const
    {
        return false;
    }

    bool operator<(const float &number, const Fraction &other)
    {
        return false;
    }

    //************* >= operator ***************

    bool Fraction::operator>=(const float &number) const
    {
        return false;
    }

    bool operator>=(const float &number, const Fraction &other)
    {
        return false;
    }

    bool Fraction::operator>=(const Fraction &other) const
    {
        return !(*this < other);
    }

    //************* <= operator ***************

    bool Fraction::operator<=(const float &number) const
    {
        return false;
    }

    bool operator<=(const float &number, const Fraction &other)
    {
        return false;
    }

    bool Fraction::operator<=(const Fraction &other) const
    {
        return !(*this > other);
    }

    //************* << operator ***************

    ostream &operator<<(ostream &osOutput, const Fraction &fraction)
    {
        return (osOutput << fraction.numerator << '/' << fraction.denominator);
    }

}