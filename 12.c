#include<stdio.h>
#include<conio.h>
void main()
{
    int number,new_number=0,remainder;
    scanf("%d",&number);
     if(number>=0&&number>=9)
     {
         printf("the given number is palindrome");
     }
     else if(number>0)
     {
         while(number!=0)
         {
           remainder=number%10;
           number=number/10;
           new_number=new_number*10+remainder;  
         }
         if(new_number==number)
         {
             printf("the entered number is palindrome");
         }
         else
            printf("the entered number is not palindrome"))
     }
   else
    printf("the entered option is invalid option");
}
