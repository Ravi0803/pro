#include<stdio.h>
/*Program to check the operator */
int main()
{
int i,*b,_b=2,*c;  
float a;
//char *date ='1234'; //assigns the values continuously upto 32 bit address  if date is pointer variable else assign data upto 5 
//char date='1234',*_c,d,_c=&d; valid only if assigment removed from this statement
//(i=2=3) Error for lvalue assignment
printf("i@%ld\tb@%ld\t_b@%ld\tc@%ld\ta@%ld\n",&i,b,&_b,c,&a);
(i=1,b++,3.14*i**b);//valid statement
a=7/22*(3.14+2)*3/5;
i++;
}
