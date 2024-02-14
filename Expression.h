#pragma once

#pragma warning(disable : 26440)
#pragma warning(disable : 26496)
#pragma warning(disable : 26432)
#pragma warning(disable : 26455)

#include <iostream>
using namespace std;

class Expression
{
public:
   Expression() {}
   virtual ~Expression() {}

   virtual double eval() const = 0;
   virtual void print() const = 0;
};