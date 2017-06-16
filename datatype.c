/*-----------------DATA TYPES--------------*/
// Program to check size of data type and modifiers
// Date:18.5.17
/*-----------------------------------------*/
#include<stdio.h>

float main()
 {
   long a;
   short b;
   char c;
   int e;
   long long f;
   float g;
   double h;
   long double j;
   printf("%ld\t,%ld\t,%ld\t,%ld\t,%ld\t,%ld\t,%ld\t,%ld\n",sizeof(a),sizeof(b),sizeof(c),sizeof(e),sizeof(f),sizeof(g),sizeof(h),sizeof(j));
   printf("%p\n,%p\n,%p\n,%p\n,%p\n,%p\n,%p\n,%p\n",&a,&b,&c,&e,&f,&g,&h,&j);
   return 2.01;
 }
