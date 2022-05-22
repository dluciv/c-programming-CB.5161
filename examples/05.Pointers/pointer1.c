#include <stdio.h>

int main()
{
  int a[1000], v, *p = a;
  printf("%p\t%p\n", &v, a);
  printf("%p\t%p\t%p\n", &a[0], a + 1, &a[5000]);
  printf("%p\t%p\n", p++, p);

  double *p1 = (void *)(a + 800);
  printf("%d\t%d\t%d\t%d\n", *p1, *(p1 + 1), p1[0], p1[1]);

  void *vp = a;
  printf("%d, %p, %p\n", sizeof(*vp), vp, vp + 1);
  printf("%d\n", *(int *)(vp + 1));

  return 0;
}
