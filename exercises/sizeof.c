#include<stdio.h>
#define sizof(x) (((char*)(&x+1))-((char*)(&x)))

int main()
{
   int a;
   char b;
   double c;
   int d[10];
   printf("%ld\t%ld\t%ld\t%ld\n",sizof(a),sizof(b),sizof(c),sizof(d));
}
