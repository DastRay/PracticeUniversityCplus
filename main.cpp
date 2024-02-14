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

// this - указатель на текущий объект
// virtual - говорит о том что эту функцию наследник может переписать
// ctrl + shift + f - найти и заменить


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

   cout << "Выражение: ";
   multiplication.print();
   cout << "\n";

   double result1 = multiplication.eval();
   cout << "Результат: " << result1 << "\n\n";

   cout << "Выражение: ";
   division.print();
   cout << "\n";
   double result2 = division.eval();
   cout << "Результат: " << result2 << "\n\n";

   cout << "Выражение: ";
   subtraction.print();
   cout << "\n";
   double result3 = subtraction.eval();
   cout << "Результат: " << result3 << "\n\n";

   Addition addition1(number1, number2);
   Subtraction subtraction1(number4, number1);
   Multiplication multiplication1(addition1, subtraction1);
   Division division1(multiplication1, number2);

   cout << "Выражение: ";
   division1.print();
   cout << "\n";
   double result4 = division1.eval();
   cout << "Результат: " << result4 << "\n\n";

   return 0;
}