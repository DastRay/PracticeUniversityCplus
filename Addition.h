#pragma once

#include "Operator.h"

class Addition : public Operator
{
public:
   using Operator::Operator;

   virtual ~Addition() {}

   double calculate(double left, double right) const override;

   void printOperator() const override;
};

