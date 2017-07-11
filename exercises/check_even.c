//program to check the number is  odd
#include<stdio.h>

int main()
  {
    int i;
     
     for(i=0;i<256;i++){
        if(i&1)
         printf("odd=%d ",i);
     }
   return 0;
   }
      
