#include<stdio.h>
#include<conio.h>
void main()
{
    int number,fact=1,i;
    scanf("%d",&number);
     if(number>0)
     {
         for(i=1;i<number;i++)
       {fact=fact*i;}
       printf("the factorial of the given number is %d",fact);
       
     }
   else
    printf("the entered option is invalid option");
}
