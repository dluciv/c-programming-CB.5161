#include "module1.h"

int factorial(int v)
{
  int r = v;
  while(v-- > 1)
  {
    r *= v;
  }
  return r;
}
