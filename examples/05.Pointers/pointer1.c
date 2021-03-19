#include <stdio.h>

int main()
{
  int a[1000], v, *p = a;
  printf("%u\t%u\n", &v, a);
  printf("%u\t%u\t%u\n", &a[0], a + 1, &a[5000]);
  printf("%u\t%u\n", p++, p);

  int *p1 = a + 800;
  printf("%d\t%d\t%d\t%d\n", *p1, *(p1 + 1), p1[0], p1[1]);

  return 0;
}
