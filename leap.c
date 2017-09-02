#include<stdio.h>
#include<conio.h>
void main()
{

   int year;
   if(year>0)
   {
   if(year%4==0)
   {
       printf("the entered year is leap year");
   }
   else
   {
       printf("the entered year is not leap year");
   }
   }
   else
    printf("the entered option is invalid");
}
