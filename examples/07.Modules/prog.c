#include <stdio.h>

#include "module1.h"
#include "module2.h"
#include "shared1.h"

int main()
{
  printf("%d\n", factorial(6));

  for(int i = 0; i < 5; ++i)
    printf("%d -> %d\n", i, isqrt(i));

  printf("%d\n", mul(2,3));

  return 0;
}
