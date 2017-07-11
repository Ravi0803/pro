#include<stdio.h>

int main()
  {
     int byte=0x3;
     if(byte&(1<<1))
        printf("set");
     else
        printf("clr");
    return 0;
  }

