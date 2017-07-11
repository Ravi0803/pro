//service to check the pointer
#include <stdio.h>

int main()
{
  const volatile int a=10;
  const int b=10;
  int *p=&b;
  const int const *pt=p;
  int const *pt1=&a;
  *p=11;
  printf("%d\t%d\t%d\t%d\t%d\n",a,b,*p,*pt,*pt1);
  printf("%d\t%d\t%d\n",p,pt,pt1);
}

