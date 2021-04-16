#include<stdio.h>
#include<math.h>

int main()
{
  FILE *i = fopen("1.csv", "r");

  int j;
  double d;
  while(EOF != fscanf(i, "%d,%lf", &j, &d))
  {
    printf("%d ---> %f\n", j, d);
  }

  fclose(i);

  return 0;
}
