#include "CheckFraction.h"

void CheckFraction::check(const int num)
{
   if (num == 0)
   {
      //cout << "Неверная дробь! Знаменатель равен нулю" << endl;
      perror("Неверная дробь! Знаменатель равен нулю");
   }
}
