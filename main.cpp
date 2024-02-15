#include "Expression.h"
#include "Number.h"
#include "Operator.h"
#include "Addition.h"
#include "Multiplication.h"
#include "Division.h"
#include "Subtraction.h"

#include "Rational.h"
#include "CheckFraction.h"

#include "Functions.h"

#include <locale>
#include <iostream>
#include <cmath>
#include <cstdbool>
#include <cstdlib>
using namespace std;

// this - указатель на текущий объект
// virtual - говорит о том что эту функцию наследник может переписать
// ctrl + shift + f - найти и заменить


//int main()
//{
//   setlocale(LC_ALL, "Russian");
//
//   Number number1(6);
//   Number number2(3);
//   Number number3(5);
//   Number number4(25);
//
//   Addition addition(number1, number2);
//   Multiplication multiplication(addition, number4);
//   Division division(number4, number3);
//   Subtraction subtraction(number4, number2);
//
//   cout << "Выражение: ";
//   multiplication.print();
//   cout << "\n";
//
//   double result1 = multiplication.eval();
//   cout << "Результат: " << result1 << "\n\n";
//
//   cout << "Выражение: ";
//   division.print();
//   cout << "\n";
//   double result2 = division.eval();
//   cout << "Результат: " << result2 << "\n\n";
//
//   cout << "Выражение: ";
//   subtraction.print();
//   cout << "\n";
//   double result3 = subtraction.eval();
//   cout << "Результат: " << result3 << "\n\n";
//
//
//   Addition addition1(number1, number2);
//   Subtraction subtraction1(number4, number1);
//   Multiplication multiplication1(addition1, subtraction1);
//   Division division1(multiplication1, number2);
//
//   cout << "Выражение: ";
//   division1.print();
//   cout << "\n";
//   double result4 = division1.eval();
//   cout << "Результат: " << result4 << "\n\n";
//
//   return 0;
//}

int main()
{
   setlocale(LC_ALL, "Russian");

   Rational rational1;
   Rational rational2(7);
   Rational rational3(5, 4);
   Rational rational4(6, 3);
   Rational rational5(6, 3);
   //Rational rational6(9, 0);

   cout << "Проверка сравнений:\n";
   bool res1 = rational3 == rational4;
   cout << res1 << endl;

   bool res2 = rational4 == rational5;
   cout << res2 << endl;

   bool res3 = rational3 != rational4;
   cout << res3 << endl;

   bool res4 = rational3 > rational4;
   cout << res4 << endl;

   bool res5 = rational4 > rational3;
   cout << res5 << endl;

   bool res6 = rational4 >= rational5;
   cout << res6 << endl;

   cout << "Проверка операторов:\n";
   rational3 += rational4; 
   rational3.printFraction(); //  13/4

   rational3 -= rational4;
   rational3.printFraction(); //  5/4 

   rational3 *= rational4;
   rational3.printFraction(); // 5/2

   rational3 /= rational4;
   rational3.printFraction(); // 5/4

   cout << "\n";

   rational3 = rational3 + rational4;
   rational3.printFraction(); //  13/4

   rational3 = rational3 - rational4;
   rational3.printFraction(); //  5/4 

   rational3 = rational3 * rational4;
   rational3.printFraction(); // 5/2

   rational3 = rational3 / rational4;
   rational3.printFraction(); // 5/4

   cout << "\nСпособы вывода:\n";
   cout << rational3.operator double() << endl;
   cout << rational3.eval() << endl;
   rational3.printFraction();
   rational3.printResult();



   return 0;
}