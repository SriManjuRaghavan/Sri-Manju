#include<stdio.h>
#include<conio.h>
void main()
{
    int number,count=0,i;
    scanf("%d%d",&number);
     if(number>0)
     {
         for(i=1;i<=9;i++)
         {
              
         if(number%i==0)
         {
             count++;
         }
         }
         if(count==2)
         {
             printf("the entered number is prime number");
         }
         else
            printf("the entered number is not a prime number");
     }
   else
    printf("the entered option is invalid option");
}
