#pragma once

#pragma warning(disable : 26440)
#pragma warning(disable : 26496)
#pragma warning(disable : 26432)
#pragma warning(disable : 26455)

#include "CheckFraction.h"

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class Rational : public CheckFraction
{
public:
   using CheckFraction::CheckFraction;

   Rational() { numerator = 0; denominator = 1; }

   Rational(int numenator_) { numerator = numenator_; denominator = 1; }

   Rational(int numerator, int denominator)
      : numerator(numerator), denominator(denominator)
   {
      CheckFraction _check;
      _check.check(denominator);
   }

   ~Rational() { }

   void setNumerator(int numenator_);
   void setDenominator(int denominator_);

   int getNumerator();
   int getDenominator();

   void printFraction();
   void printResult();
   double eval();

   bool operator==(Rational& obj);
   bool operator!=(Rational& obj);
   bool operator>(Rational& obj);
   bool operator>=(Rational& obj);
   Rational operator+(Rational& obj);
   Rational operator-(Rational& obj);
   Rational operator*(Rational& obj);
   Rational operator/(Rational& obj);
   Rational operator+=(Rational& obj);
   Rational operator-=(Rational& obj);
   Rational operator*=(Rational& obj);
   Rational operator/=(Rational& obj);
   operator double();

private:
   int numerator; // числитель
   int denominator; // знаменатель

   void simplify();
   int gcd(unsigned int a, unsigned int b);
};

