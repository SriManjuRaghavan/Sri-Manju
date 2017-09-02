#include<stdio.h>
#include<conio.h>
void main()
{

   int year;
   if(year%4==0)
   {
       printf("the entered year is leap year");
   }
   elseif(year%4!=0)
   {
       printf("the enter year is not leap year");
   }
   else
    printf("the entered option is invalid");
}
