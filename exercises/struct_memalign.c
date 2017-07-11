//program to check mem_align
#include<stdio.h>
//#pragma pack(1)

struct test{
char a;
int b;
};

int main()
 {
   struct test test1;
   printf("%p\t%p\n",&test1.a,&test1.b);
 }

