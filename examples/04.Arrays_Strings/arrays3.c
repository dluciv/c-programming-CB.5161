#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 15000

typedef float arr_n[][N];

void cache_test(arr_n m)
{
  clock_t s, f;
  float a = 0.0;

  s = clock();

  for(int n = 0; n < 100; ++n)
    for(int i = 0; i < N; ++i)
      for(int j = 0; j < N; ++j)
        a += m[i][j];

  f = clock();

  printf("%f: %f ms\n", a, ((double)(f - s)) * 1000.0 / CLOCKS_PER_SEC);
}

int main()
{
  void *d = malloc(sizeof(float) * N * N);
  cache_test(d);
  free(d);

  return 0;
}
