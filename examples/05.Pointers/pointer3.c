#include <stdio.h>

int main(int argc, const char *argv[])
{
  // ....
  int tot = 2086678; // ...really calculate total length or args + spaces between using strlen fnuction
  // ....

  char a[tot + 1];
  a[0] = 0;

  // "./a.out" "1" "2" "3" "456" -- strcat --> "./a.out 1 2 3 456"
  puts(a);

  return 0;
}
