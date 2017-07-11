//program to sort the array
#include<stdio.h>

int main()
{
  char a[]={98,22,56,43,11,92,89,67,11,22,11};
  int i,j,b;

  for(i=0;i<sizeof(a);i++){
     for(j=i;j<sizeof(a);j++){
      if(a[i]>a[j])
         b=a[j],a[j]=a[i],a[i]=b;
          

     }
   }
  for(i=0;i<sizeof(a);i++)
    printf("%d\t",a[i]);
}

