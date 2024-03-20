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

#include "Matrix.h"

#include "ComplexNumber.h"

#include "BigNumber.h"

#include <locale>
#include <iostream>
#include <cmath>
#include <cstdbool>
#include <cstdlib>
#include <string.h>
#include <cstring>
#include <string>
#include <vector>
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

//int main()
//{
//   setlocale(LC_ALL, "Russian");
//
//   Rational rational1;
//   Rational rational2(7);
//   Rational rational3(5, 4);
//   Rational rational4(6, 3);
//   Rational rational5(6, 3);
//   Rational rational6(9, 0);
//
//   cout << "Проверка сравнений:\n";
//   bool res1 = rational3 == rational4;
//   cout << res1 << endl;
//
//   bool res2 = rational4 == rational5;
//   cout << res2 << endl;
//
//   bool res3 = rational3 != rational4;
//   cout << res3 << endl;
//
//   bool res4 = rational3 > rational4;
//   cout << res4 << endl;
//
//   bool res5 = rational4 > rational3;
//   cout << res5 << endl;
//
//   bool res6 = rational4 >= rational5;
//   cout << res6 << endl;
//
//   cout << "\nПроверка операторов:\n";
//   rational3 += rational4; 
//   rational3.printFraction(); //  13/4
//
//   rational3 -= rational4;
//   rational3.printFraction(); //  5/4 
//
//   rational3 *= rational4;
//   rational3.printFraction(); // 5/2
//
//   rational3 /= rational4;
//   rational3.printFraction(); // 5/4
//
//   cout << "\n";
//
//   rational3 = rational3 + rational4;
//   rational3.printFraction(); //  13/4
//
//   rational3 = rational3 - rational4;
//   rational3.printFraction(); //  5/4 
//
//   rational3 = rational3 * rational4;
//   rational3.printFraction(); // 5/2
//
//   rational3 = rational3 / rational4;
//   rational3.printFraction(); // 5/4
//
//   cout << "\nСпособы вывода:\n";
//   cout << rational3.operator double() << endl;
//   cout << rational3.eval() << endl;
//   rational3.printFraction();
//   rational3.printResult();
//   cout << "\n";
//
//   return 0;
//}

//class Triangle
//{
//public:
//   Triangle(int a_, int b_, int c_)
//      : a(a_), b(b_), c(c_) {}
//
//   std::istream& operator>>(std::istream& in)
//   {
//      in >> this ->a >> this->b >> this->c;
//   }
//
//   std::ostream& operator<<(std::ostream& out)
//   {
//      out << this->a << this->b << this->c;
//   }
//
//private:
//   int a, b, c;
//};
//
//class Point
//{
//public:
//   Point(int a, int b)
//      : a(a), b(b) {}
//   ~Point() {}
//
//   Point operator+(Point& point)
//   {
//      return Point(this->a + point.a, this->b + point.b);
//   }
//
//   int a;
//   int b;
//};
//
//class Square
//{
//public:
//   int point;
//   int size;
//
//   Square() {}
//
//   Square(int point, int size)
//      : point(point), size(size)
//   {}
//
//   void setSize(int size_)
//   {
//      size = size_;
//   }
//
//   friend ostream& operator<<(ostream& out, const Square& square)
//   {
//      for (int i = 0; i < square.size; i++)
//      {
//         for (int j = 0; j < square.size; j++)
//         {
//            out << '#';
//         }
//
//         out << "\n";
//      }
//
//      return out;
//   }
//
//   friend istream& operator>>(istream& in, Square& square)
//   {
//      cout << "Введите квадрат:" << endl;
//
//      char str[10000];
//
//      cin >> str;
//
//      int size = strlen(str);
//
//      square.setSize(size);
//
//      for (int j = 0; j < size - 1; j++)
//      {
//         for (int n = 0; n < size; n++)
//         {
//            cout << "#";
//         }
//
//         cout << "\n";
//      }
//
//      return in;
//   }
//};
//
//int main()
//{
//   setlocale(LC_ALL, "Russian");
//
//   Square square;
//
//   cin >> square;
//
//   cout << "_____________" << endl;
//
//   cout << square;
//
//   return 0;
//}

//int main()
//{
//   setlocale(LC_ALL, "Russian");
//
//   Matrix matrix1(3, 3);
//   cin >> matrix1;
//   cout << matrix1;
//
//
//   Matrix matrix2(3, 2);
//
//   cin >> matrix2;
//
//   Matrix matrix3 = matrix1 * matrix2;
//
//   cout << (matrix1 * matrix2);
//
//   Matrix matrix4 = matrix1 + matrix2;
//
//   cout << matrix4;
//
//   Matrix matrix5 = matrix1 * 2;
//
//   cout << matrix5;
//
//   return 0;
//}


//int main()
//{
//   setlocale(LC_ALL, "Russian");
//
//   ComplexNumber number1;
//   cin >> number1;
//
//   ComplexNumber number2;
//   cin >> number2;
//
//   ComplexNumber number3 = number1 + number2;
//   cout << number3;
//
//   ComplexNumber number4 = number1 * number2;
//   cout << number4;
//
//   ComplexNumber number5 = number1 * 3;
//   cout << number5;
//}

//05.03.2024

//int main()
//{
//   //int arr[] = {8, 9, 12, 24, 56, 77, 92};
//   //int size = 7;
//   //int target = 24;
//
//   //printf("%d", binaryFind(arr, size, target));
//
//   string str1 = "abaacbacb";
//   string str2 = "acb";
//
//   int res = find(str1, str2);
//   printf("%d", res);
//
//   return 0;
//}

////////////////////////// 06.03.2024 /////////////////////////////////////////////////

//int main()
//{
//   setlocale(LC_ALL, "Russian");
//
//   //cout << "Задание №1" << endl;
//   //int size1 = 0;
//   //cout << "Введите размерность массива: ";
//   //cin >> size1;
//   //int* nums1 = new int[size1];
//   //fillArr(nums1, size1);
//   //int target1 = 0;
//   //cout << "Введите элемент который необходимо найти: ";
//   //cin >> target1;
//
//   //int res1 = binarySearch(nums1, size1, target1);
//   //cout << "Индекс " << res1 << " элемента " << target1 << endl;
//
//   //cout << "\nЗадание №2" << endl;
//   //int size2 = 0;
//   //cout << "Введите размерность массива: ";
//   //cin >> size2;
//   //int* nums2 = new int[size2];
//   //fillArr(nums2, size2);
//
//   //int res2 = findSingleElement(nums2, size2);
//   //cout << "Элемент без пары: " << res2 << endl;
//
//   //cout << "\nЗадание №3" << endl;
//   //int size3 = 0;
//   //cout << "Введите размерность массива: ";
//   //cin >> size3;
//   //int* nums3 = new int[size3];
//   //fillArr(nums3, size3);
//   //findUniqueElements(nums3, size3);
//
//   //cout << "\nЗадание №4" << endl;
//   //int size4 = 0;
//   //cout << "Введите размерность массива: ";
//   //cin >> size4;
//   //int* nums4 = new int[size4];
//   //fillArr(nums4, size4);
//   //int target4 = 0;
//   //cout << "Введите число, к которому необходимо найти ближайшую сумму: ";
//   //cin >> target4;
//   //int res4 = nearestSum(nums4, size4, target4);
//   //cout << "Сумма: " << res4 << endl;
//
//   return 0;
//}

//int main()
//{
//   int arr[] = { -13, -12, 0, 1, 2, 3, 6, 7, 8, 10};
//   const int size = sizeof(arr) / sizeof(arr[0]);
//
//   //quickSort(arr, 0, size - 1);
//
//   //mergeSort(arr, 0, size - 1);
//
//   sortSquare(arr, size);
//   printArr(arr, size);
//
//   return 0;
//}


///////////////////// 13.03.2024 ///////////////////////////
//int main() 
//{
//   setlocale(LC_ALL, "Russian");
//   int grades[] = { 7, 2, 5, 7, 8, 2, 3 };
//   int size = sizeof(grades) / sizeof(grades[0]);
//
//   int* result = sortGrades(grades, size);
//   cout << "Отсортированный массив оценок: ";
//   printArr(result, size);
//
//   //int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
//   //const const int size = sizeof(arr) / sizeof(arr[0]);
//   //const int result = maxSubArraySum(arr, size);
//
//   //cout << "Наибольшая сумма непрерывной подпоследовательности: " << result <<endl;
//
//   return 0;
//}

//int main()
//{
//   setlocale(LC_ALL, "Russian");
//
//   long long int num = 9;
//   cout << isPrime(num) << endl;
//
//   cout << "Делители числа " << num << ": ";
//   for (int i = 1; i <= num; i++)
//   {
//      if (num % i == 0)
//      {
//         cout << i << ", ";
//      }
//   }
//}

//int main()
//{
//   BigNumber number1("12345");
//   BigNumber number2("12343");
//
//   cout << number1 + number2;
//}

//int main() 
//{
//   setlocale(LC_ALL, "Russian");
//
//   //char num1[] = "91";
//   //char num2[] = "10";
//   //char* sum = addStrings(num1, num2);
//   //printf("Сумма: %s\n", sum);
//   //delete[] sum;
//
//   const long long int num = 10;
//   for (int i = 0; i < num; i++)
//   {
//      cout << "Число Фибоначчи " << i << " = " << charFib(i) << endl;
//   }
//
//   return 0;
//}

//int main() 
//{
//   setlocale(LC_ALL, "Russian");
//
//   //int number = 0;
//   //cout << "Введите номер числа Фибоначчи: ";
//   //cin >> number;
//   //cout << "Число Фибоначчи под номером " << number << ": " << charFib(number) << endl;
//
//   FILE* fibonacci;
//   errno_t err = fopen_s(&fibonacci, "fibonacci.txt", "w");
//   if (err != 0 || !fibonacci)
//   {
//      perror("File cant't open!");
//      return 1;
//   }
//
//   int number = 0;
//   cout << "Введите номер числа Фибоначчи до которого хотите заполнить файл: ";
//   cin >> number;
//   fibonacciToFile(number, fibonacci);
//
//   fclose(fibonacci);
//
//   return 0;
//}

//int main()
//{
//   setlocale(LC_ALL, "Russian");
//
//   //int arr[] = { -1, 2, -3, 4, 5 };
//   //const int size = sizeof(arr) / sizeof(arr[0]);
//
//   //sortt(arr, size);
//   //cout << "Массив отсортированных чисел: ";
//   //printArr(arr, size);
//
//   //vector <string> str = { "2000-02-12", "2005-01-01" };
//   //sortD(str);
//
//   //cout << str[0] << endl;
//   //cout << str[1] << endl;
//
//   const int arr[] = { 2, 4, 3, 5, 7, 8, 9 };
//   const int size = sizeof(arr) / sizeof(arr[0]);
//   const int target = 7;
//
//   findPairs(arr, size, target);
//
//   return 0;
//}

// 20.03.2024
int main()
{
   setlocale(LC_ALL, "Russian");

   //cout << "Проверка являются ли строки анаграммами" << endl;
   //string str1;
   //cout << "Введите первую строку: ";
   //getline(cin, str1);

   //string str2;
   //cout << "Введите вторую строку: ";
   //getline(cin, str2);

   //if (isAnagramm(str1, str2) == true) 
   //{
   //   cout << "Строки являются анаграммами" << endl;
   //}
   //else 
   //{
   //   cout << "Строки не являются анаграммами" << endl;
   //}

   //cout << "\n\n";

   string str = "This is a sample text! Text contains, punctuation. Sample, text.";
   cout << "Строка в которой подсчитываются слова: " << str << endl;
   countWordinStr(str);

   return 0;
}