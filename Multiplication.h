#pragma once

#include "Operator.h"

class Multiplication : public Operator
{
public:
   using Operator::Operator;

   virtual ~Multiplication() {}

   double calculate(double left, double right) const override;

   void printOperator() const override;
};
