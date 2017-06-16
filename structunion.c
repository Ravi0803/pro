#include<stdio.h>
#pragma pack(1)
typedef struct var
{
  int c;
  char a;
//  short int f;
  int d;
}var ;

typedef union tes 
{
  char a:3;
  char b:5;
  short int c:12;
}tes;

int main()
{  
  var var1;
  tes test1; 
  printf("%ld,%ld",sizeof(var1),sizeof(tes));
  printf("%p,%p,%p",&var1.a,&var1.d,&test1);
  return 0;
}
