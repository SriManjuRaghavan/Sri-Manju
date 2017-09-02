#include<stdio.h>
#include<conio.h>
void main()
{ int number;
    scanf("%d",&number);
 if(number>0)
 {
   if(number%2==0)
   {
       
       printf("the entered number is an even");
   }
   else
    printf("the entered number is a odd");
 }
 else
     printf("the entered option is  an invalid option");
}
