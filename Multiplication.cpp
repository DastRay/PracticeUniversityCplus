#include "Multiplication.h"

double Multiplication::calculate(double left, double right) const
{
   return left * right;
}

void Multiplication::printOperator() const
{
   cout << "*";
}