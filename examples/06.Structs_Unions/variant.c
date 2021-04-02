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

void print_number(number n)
{
  switch(n.number_type)
  {
    case INT:
      printf("I: %d\n", n.i);
      break;
    case FLOAT:
      printf("F: %f\n", n.f);
  }
}

int main()
{
  printf("%d, %d\n", sizeof(var_type), sizeof(number));

  number ni;
  ni.number_type = INT;
  ni.i = 123;
  print_number(ni);
  
  number nf;
  nf.number_type = FLOAT;
  nf.f = 45.67f;
  print_number(nf);

  // !!!
  nf.number_type = INT;
  print_number(nf);
  return 0;
}
