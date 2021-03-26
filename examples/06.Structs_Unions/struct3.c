#include <stdio.h>
#include <math.h>

typedef struct
{
  double x;
  double y;
  double z;
} point3d;

double distp(const point3d *p1, const point3d *p2)
{
  return sqrt(pow((*p1).x - (*p2).x, 2.0) + pow(p1->y - p2->y, 2.0) + pow(p1->z - p2->z, 2.0));
}

int main()
{
  point3d a, b = {3., 4., 1.};
  a.x = 0.;
  a.y = 0.;
  a.z = 1.;

  printf("%d, %d\n", sizeof(point3d), sizeof(point3d *));

  printf("%lf\n", distp(&a, &b));

  return 0;
}
