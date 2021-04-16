#include "module2.h"

int isqrt(int v)
{
  int l = 0, u = v;

  do
  {
    int m = (l + u) / 2;
    if(m * m < v)
      l = m + 1;
    else
      u = m;
  }
  while(l < u);

  return l;
}
