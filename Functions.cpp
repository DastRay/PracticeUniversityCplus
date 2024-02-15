#include "Functions.h"

int gcd(unsigned int a, unsigned int b)
{
   if (a % b == 0)
   {
      return b;
   }

   if (b % a == 0)
   {
      return a;
   }

   if (a > b)
   {
      return gcd(a % b, b);
   }

   return gcd(a, b % a);
}
