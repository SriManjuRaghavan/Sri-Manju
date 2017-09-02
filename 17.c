#include<stdio.h>
#include<conio.h>
void main()
{
    int number,sum=0,remainder;
    scanf("%d",&number);
     if(number>0)
     {
       while(number!=0)
       {
           remiander=number%10;
           number=number/10;
           sum=sum+(remainder*remainder*remainder);
       }
       if(number==sum)
        printf("the given number is a arm strong number");
        else
        printf("the given number is not an armstrong number");

     }
   else
    printf("the entered option is invalid option");
}
