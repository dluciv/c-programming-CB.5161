#include<stdio.h>
#include<math.h>

int main()
{
  FILE *o = fopen("1.csv", "w");

  for(int i=0; i<10; ++i)
    fprintf(o, "%d,%lf\n", i, sin(i));

  fclose(o);

  return 0;
}
