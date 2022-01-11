#include <stdio.h>

int main()
{
  char a0[]  = "1234567";
  int  a1[]  = {1, 2, 3, 4};
  int  a2[8] = {1, 2};
  char a3[8] = "1234567";

  printf("%zu, %zu, %zu, %zu\n", sizeof(a0), sizeof(a1), sizeof(a2), sizeof(a3));
  return 0;
}
