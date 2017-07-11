#include<stdio.h>

int main()
{
 char a[]="test the string";
 int i;
  for(i=sizeof(a)-1;i>=0;i--){
   printf("%c",a[i]);
}
}
