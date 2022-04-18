#include <stdio.h>

typedef enum
{
  INT   = 0,
  FLOAT = 1
} var_type;

typedef struct
{
  var_type number_type;
  union
  {
    int i;
    float f;
  };
}
number;

void print_numbers(number *ns, int s)
{
  while(s--)
  {
    switch(ns->number_type)
    {
      case INT:
        printf("I: %d\n", (*ns).i); // note the syntax
        break;
      case FLOAT:
        printf("F: %f\n", ns->f); // nete the syntax
    }
    ++ns;
  }
}

int main()
{
  printf("%lu, %lu\n", sizeof(var_type), sizeof(number));

  number ns[2];

  ns[0].number_type = INT;
  ns[0].i = 123;

  ns[1].number_type = FLOAT;
  ns[1].f = 45.67f;

  print_numbers(ns, 2);

  puts("");
  // !!!
  ns[1].number_type = INT;
  print_numbers(ns, 2);

  return 0;
}
