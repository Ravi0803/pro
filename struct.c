#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct AGE 
 {
  char *name;
  int age;
 };

int main()
{
  struct AGE age2;
  struct AGE* age1= malloc(sizeof(age1));
  age1=&age2;
  age2.name="RAVISHANKA";
  age2.age=26;
 
  printf("%s\n%d\n%ld",age1->name,age1->age);
  return 0;
}
 
