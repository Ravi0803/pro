#include<stdio.h>

typedef char uchar;
int main()
{
  uchar a=0x22;
  if(a&(1<<0))
   printf("Bit is set");
  else
   printf("Bit is clear");
  return 0;
}
