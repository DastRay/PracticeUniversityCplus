#pragma once
#include "Expression.h"

class Number : public Expression
{
public:
   Number(double value) : value(value) {}
   virtual ~Number() {}

   double eval() const override;

   void print() const override;

private:
   double value;
};

