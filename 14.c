#include<stdio.h>
#include<conio.h>
void main()
{
    int number1,number2i;
    scanf("%d%d",&number1,number2);
     if(number1>0&&number2>0)
     {
         for(i=number1;i<number2;i++)
        if(i%3==0)
         {
             printf("%d",i);
         }
         
     }
   else
    printf("the entered option is invalid option");
}
