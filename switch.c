#include <stdio.h>

int main()
{
  int a[5] = {1,2,3};
  switch (a) {
  case 1:
    printf("Help");
    break; 
  case 2:
    printf("Fail");
    break;
  default:
    printf("test");
    break;}
 return 0;
}
