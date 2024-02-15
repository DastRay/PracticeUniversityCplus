#include "Rational.h"

void Rational::setNumerator(int numenator_)
{
   numerator = numenator_;
}

void Rational::setDenominator(int denominator_)
{
   denominator = denominator_;
}

int Rational::getNumerator()
{
   return numerator;
}

int Rational::getDenominator()
{
   return denominator;
}

void Rational::printFraction()
{
   cout << "Ф№юсќ: " << numerator << " / " << denominator << endl;
}

void Rational::printResult()
{
   cout << numerator << " / " << denominator;
}

double Rational::eval()
{
   return ((double)numerator / denominator);
}

bool Rational::operator==(Rational& obj)
{
   return (numerator == obj.getNumerator() && denominator == obj.getDenominator());
}

bool Rational::operator!=(Rational& obj)
{
   return !(*this == obj);
}

bool Rational::operator>(Rational& obj)
{
   return (numerator * obj.getDenominator() > denominator * obj.getNumerator());
}

bool Rational::operator>=(Rational& obj)
{
   return ((*this > obj) || (*this == obj));
}

Rational Rational::operator+(Rational& obj)
{
   Rational res = *this;
   res += obj;

   return res;
}

Rational Rational::operator-(Rational& obj)
{
   Rational temp;
   temp.setNumerator(-obj.getNumerator());
   temp.setDenominator(obj.getDenominator());
   Rational res = *this;

   return (res += temp);
}

Rational Rational::operator*(Rational& obj)
{
   return (*this *= obj);
}

Rational Rational::operator/(Rational& obj)
{
   return (*this /= obj);
}

Rational Rational::operator+=(Rational& obj)
{
   numerator = numerator * obj.getDenominator() + obj.getNumerator() * denominator;
   denominator *= obj.getDenominator();
   simplify();

   return *this;
}

Rational Rational::operator-=(Rational& obj)
{
   Rational temp(-obj.getNumerator(), obj.getDenominator());
   return (*this += temp);
}

Rational Rational::operator*=(Rational& obj)
{
   numerator *= obj.getNumerator();
   denominator *= obj.getDenominator();
   simplify();

   return *this;
}

Rational Rational::operator/=(Rational& obj)
{
   Rational temp(obj.getDenominator(), obj.getNumerator());

   return (*this *= temp);
}

Rational::operator double()
{
   return ((double)numerator / denominator);
}

void Rational::simplify()
{
   int gcdValue = gcd(abs(numerator), abs(denominator));
   numerator /= gcdValue;
   denominator /= gcdValue;
}

int Rational::gcd(unsigned int a, unsigned int b)
{
   if (a % b == 0)
   {
      return b;
   }

   if (b % a == 0)
   {
      return a;
   }

   if (a > b)
   {
      return gcd(a % b, b);
   }

   return gcd(a, b % a);
}
