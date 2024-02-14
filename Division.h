#pragma once

#include "Operator.h"

class Division : public Operator
{
public:
   using Operator::Operator;

   virtual ~Division() {}

   double calculate(double left, double right) const override;

   void printOperator() const override;
};

