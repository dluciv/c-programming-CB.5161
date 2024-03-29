#include <stdio.h>

typedef union
{
  float f;
  struct {
    unsigned fractional: 23;
    unsigned exponent  : 8;
    int      sign      : 1;
  } ff;
} fu;

void print_bits(unsigned v, int width)
{
  char r[width+1];
  r[width] = '\0';

  /*
  for(int i = 0; i < width; r[i++] = '0');

  while(width--)
  {
    if(v & 1)
      r[width] = '1';
    v >>= 1;
  }
  */

  // too hacky, better write code as above =)
  for(
    char *p = r + width - 1;
    width--;
    v >>= 1, *(--p) = v & 1 ? '1' : '0'
  )
  ;

  printf("%s", r);
}

void println_float_fields(float f)
{
  fu u = { f }; // Initialize uniion by assigning its first member
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
