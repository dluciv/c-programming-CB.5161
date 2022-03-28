#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void cache_test(float m[], size_t size)
{
  clock_t s, f;
  float a = 0.0;

  s = clock();

  for(int n = 0; n < 100; ++n)
    for(int i = 0; i < size; ++i)
        a += m[i];

  f = clock();

  printf("%f: %f ms\n", a, ((double)(f - s)) * 1000.0 / CLOCKS_PER_SEC);
}

int main()
{
  size_t s;
  printf("Size of array please: ");
  scanf("%d", &s);
  void *d = malloc(sizeof(float) * s);
  cache_test(d, s);
  free(d);

  return 0;
}
