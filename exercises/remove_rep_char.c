#include<stdio.h>
#include<string.h>
int main()
{
  char a[]="abacasfasdftsrhgsdfetdjgdjn";
  char b[sizeof(a)];
  int i,j=0;
  
  for(i=0;i<sizeof(a);i++){
  if(strchr(b,a[i])==NULL)
   b[j]=a[i],j++;
  }
  b[j]='\0';
  printf("%s\n%s\n",a,b);
}
  
  
