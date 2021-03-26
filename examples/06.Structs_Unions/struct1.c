#include <stdio.h>
#include <math.h>

typedef struct
{
  double x;
  double y;
} point2d;

double dist(const point2d p1, const point2d p2)
{
  return sqrt(pow(p1.x - p2.x, 2.0) + pow(p1.y - p2.y, 2.0));
}

int main()
{
  point2d a, b = {3., 4.};
  a.x = 0.;
  a.y = 0.;

  printf("%d\n", sizeof(point2d));

  printf("%lf\n", dist(a, b));

  return 0;
}
