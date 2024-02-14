#pragma once

#include "Operator.h"

class Subtraction : public Operator
{
public:
   using Operator::Operator;

   virtual ~Subtraction() {}

   double calculate(double left, double right) const override;

   void printOperator() const override;
};

