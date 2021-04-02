#include <stdio.h>

typedef union
{
  struct {
    unsigned fractional: 23;
    unsigned exponent  : 8;
    int      sign      : 1;
  } ff;
  float f;
} fu;

void print_bits(unsigned v, int width)
{
  char r[width+1];
  for(int i = 0; i < width; r[i++] = '0');
  r[width] = '\0';

  while(width--)
  {
    if(v & 1)
      r[width] = '1';
    v >>= 1;
  }

  printf(r);
}

void println_float_fields(float f)
{
  fu u;
  u.f = f;
  printf("S: %d\t E: %03u (%03d) ", u.ff.sign, u.ff.exponent, u.ff.exponent - 127);
  print_bits(u.ff.fractional, 23);
  printf(" <----- %f\n", u.f);
}

int main()
{
  println_float_fields(1.0f);
  println_float_fields(1.5f);
  println_float_fields(-2.0f);
  println_float_fields(-2.5f);
  return 0;
}
