#include<stdio.h>
#include<conio.h>
void main()
{
    int number1,number2,sum=0,remainder,i;
    scanf("%d%d",&number1,number2);
     if(number1>0&&number2>0)
     {
         for(i=number1;i<number2;i++)
         {
       while(i!=0)
       {
           remiander=i%10;
           i=i/10;
           sum=sum+(remainder*remainder*remainder);
       }
       if(i==sum)
        printf("%d",i);
         }

     }
   else
    printf("the entered option is invalid option");
}
