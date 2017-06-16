//Program to count the word,lines,characters//
//written on 16/06/2017
#include<stdio.h>

int main()
{
 int c,lcnt=0,wcnt=0,charcnt=0;
 while((c=getchar())!=EOF)
   {
     
     if(c==' '||c=='/')
     {
      wcnt++;
      charcnt++;
     }
     else if(c=='\n')
     {
      lcnt++;
      wcnt++;
      charcnt++;
  //    c='\0';
     }
     else
     {
     charcnt++;
     }
     putchar(c);
   }
 printf("\nLine_Count=%d\neof=%d\nWord_Count=%d\nChar_Count=%d\n",lcnt,EOF,wcnt,charcnt);
}
