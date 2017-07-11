#include<stdio.h>
int bit_pattern_sr(int num ,int pattern)
{
   int i,j;
   for(i=0;i<(sizeof(int)*8);i++)
   {
      if(((num&(pattern<<i))>>i)==pattern)
       {
           j++;
       }
   }
   return j;
}

int main()
{
   int a,b;
   a=52;
   b=52;
   printf("%d\n",bit_pattern_sr(a,b));
   return 0;
}
