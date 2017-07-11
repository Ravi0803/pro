#include<stdio.h>

int main ()
{
   char a[]={1,1,1,1,1,2,2,2,3,3,4,5,6};
   char b[sizeof(a)];
   int i,j;
    for (i=0;i<sizeof(a);i++)
    {
      while(a[i]==a[i+1])
       {
        i++;
       }
       b[j]=a[i];
       j++;
     }
     b[j]='\0';
    for(i=0;i<sizeof(b);i++)
      printf("%d\n",b[i]);
   return 0;
}

