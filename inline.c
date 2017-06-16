#include <stdio.h>

static inline int testing()
{
   return 0;
}

int main()
{
  int a;
  printf("before test\n");
  a=testing();
  printf("%d\tafter test\n",a);
  return 0;
}
