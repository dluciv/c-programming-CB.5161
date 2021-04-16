#include "module2.h"

int isqrt(int v)
{
  int l = 0, u = v;

  do
  {
    int m = (l + u + 1) / 2;
    if(m * m <= v)
      l = m;
    else
      u = m - 1;
  }
  while(l < u);

  return l;
}
