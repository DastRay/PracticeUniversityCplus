#pragma once

#include "Expression.h"

class Operator : public Expression
{
public:
   Operator(const Expression& leftOperand, const Expression& rightOperand)
      : leftOperand(leftOperand), rightOperand(rightOperand) {}

   virtual ~Operator() {}

   virtual double calculate(double left, double right) const = 0;

   double eval() const override;

   virtual void printOperator() const = 0;

   void print() const override;

protected:
   const Expression& leftOperand;
   const Expression& rightOperand;
};

