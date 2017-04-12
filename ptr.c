#include<stdio.h>


int main()
{
  int a=5;
  int *ptr,**ptr1;
  ptr=&a;
  ptr1=&ptr;

  printf("%d\n,%d\n,%d\n,%d\n,%d\n,%d\n,%d\n",a,&a,ptr,*ptr,ptr1,*ptr1,**ptr1);
  return 0;
}

