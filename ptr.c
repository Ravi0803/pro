#include<stdio.h>


int main()
{
  int a=5,b=6;
  int *ptr,**ptr1,*p;
  ptr=&a;
  ptr1=&ptr;
  p=&b;
  printf("%d\t,%d\t,%d\t,%d\t,%d\t,%d\t,%d\n",a,&a,ptr,*ptr,ptr1,*ptr1,**ptr1);
  printf("%d\t%d\t%d\t%d\t%d\t%d\n",b,&a,*p++,p++,p--,(*p)++);
  return 0;
}

