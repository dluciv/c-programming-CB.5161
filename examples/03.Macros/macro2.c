#include <stdio.h>

#define PRINTNUMBER(x) "Number is: " #x

int main(void)
{
  int x = 45;
  puts(PRINTNUMBER(x));
  puts(PRINTNUMBER(45));
  puts("One" "Two" "Three");
  return 0;
}