//program to swap without temp
#include<stdio.h>

int main()
{
  int a=2;
  int b=3;
  b=a^b;
  a=a^b;
  b=a^b;
  printf("%d\t%d\n",a,b);
}

