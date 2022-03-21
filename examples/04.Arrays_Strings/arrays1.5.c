#include <stdio.h>

int main()
{
  char a1[] = "xbc";
  char a0[] = {'a', 'b', 'c'};

  printf("%zu, %zu\n", sizeof(a0), sizeof(a1));
  puts(a1);
  puts(a0);
  return 0;
}
