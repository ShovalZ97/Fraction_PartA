
#include <iostream>
#include <stdexcept>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

namespace ariel
{
    class Fraction
    {
    private:
        int numerator;
        int denominator;
        static void reduce(int numerator, int denominator);

    public:
        Fraction();
        Fraction(int numerator, int denominator);
        Fraction(float number);

        //************* + operator ***************

        Fraction operator+(const Fraction &other) const;

        Fraction operator+(const float &number) const;

        friend Fraction operator+(const float &number, const Fraction &other);

        //************* - operator ***************
        Fraction operator-(const Fraction &other) const;

        Fraction operator-(const float &number) const;

        friend Fraction operator-(const float &number, const Fraction &other);

        //************* / operator ***************

        Fraction operator/(const Fraction &other) const;

        Fraction operator/(const float &number) const;

        friend Fraction operator/(const float &number, const Fraction &other);

        //************* * operator ***************

        Fraction operator*(const Fraction &other) const;

        Fraction operator*(const float &number) const;

        friend Fraction operator*(const float &number, const Fraction &other);

        //************* ++ operator ***************

        Fraction operator++(int);

        Fraction &operator++();

        //************* -- operator ***************

        Fraction operator--(int);

        Fraction &operator--();

        //************* == operator ***************

        bool operator==(const Fraction &other) const;

        bool operator==(const float &other) const;

        friend bool operator==(const float &number, const Fraction &other);

        //************* != operator ***************

        bool operator!=(const Fraction &other) const;

        bool operator!=(const float &other) const;

        friend bool operator!=(const float &number, const Fraction &other);

        //************* > operator ***************

        bool operator>(const Fraction &other) const;

        bool operator>(const float &other) const;

        friend bool operator>(const float &number, const Fraction &other);

        //************* < operator ***************

        bool operator<(const Fraction &other) const;

        bool operator<(const float &other) const;

        friend bool operator<(const float &number, const Fraction &other);

        //************* >= operator ***************

        bool operator>=(const Fraction &other) const;

        bool operator>=(const float &other) const;

        friend bool operator>=(const float &number, const Fraction &other);

        //************* <= operator ***************

        bool operator<=(const Fraction &other) const;

        bool operator<=(const float &other) const;

        friend bool operator<=(const float &number, const Fraction &other);

        //************* << operator ***************

        friend ostream &operator<<(ostream &osOutput, const Fraction &fraction);
    };

}