#pragma warning(disable : 26440)
#pragma warning(disable : 26455)

#include "Expression.h"
#include "Number.h"
#include "Operator.h"
#include "Addition.h"
#include "Multiplication.h"
#include "Division.h"
#include "Subtraction.h"

#include <locale>
#include <iostream>
#include <cmath>
#include <cstdbool>
#include <cstdlib>
using namespace std;

// this - ��������� �� ������� ������
// virtual - ������� � ��� ��� ��� ������� ��������� ����� ����������
// ctrl + shift + f - ����� � ��������


int main()
{
   setlocale(LC_ALL, "Russian");

   Number number1(6);
   Number number2(3);
   Number number3(5);
   Number number4(25);

   Addition addition(number1, number2);
   Multiplication multiplication(addition, number4);
   Division division(number4, number3);
   Subtraction subtraction(number4, number2);

   cout << "���������: ";
   multiplication.print();
   cout << "\n";

   double result1 = multiplication.eval();
   cout << "���������: " << result1 << "\n\n";

   cout << "���������: ";
   division.print();
   cout << "\n";
   double result2 = division.eval();
   cout << "���������: " << result2 << "\n\n";

   cout << "���������: ";
   subtraction.print();
   cout << "\n";
   double result3 = subtraction.eval();
   cout << "���������: " << result3 << "\n\n";

   Addition addition1(number1, number2);
   Subtraction subtraction1(number4, number1);
   Multiplication multiplication1(addition1, subtraction1);
   Division division1(multiplication1, number2);

   cout << "���������: ";
   division1.print();
   cout << "\n";
   double result4 = division1.eval();
   cout << "���������: " << result4 << "\n\n";

   return 0;
}