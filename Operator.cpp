#include "Operator.h"

double Operator::eval() const
{
   double leftValue = leftOperand.eval();
   double rightValue = rightOperand.eval();

   return calculate(leftValue, rightValue);
}

void Operator::print() const
{
   cout << "(";
   leftOperand.print();
   cout << " ";
   printOperator();
   cout << " ";
   rightOperand.print();
   cout << ")";
}
