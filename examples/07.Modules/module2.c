#include "module2.h"

int isqrt(int v)
{
  int l = 0, u = v;

  do
  {
    int m = (l + u) / 2;
    if(l * l < v)
      l = m + 1;
    else if(u * u > v)
      u = m - 1;
    else
      break;
  }
  while(1);

  return l;
}
