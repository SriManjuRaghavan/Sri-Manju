#include<stdio.h>
#include<conio.h>
void main()
{
    int number,power;
    scanf("%d%d",&number,&power);
   if(number>0&&power>0)
   {
     number=(number)^power;
     printf("the power of the given number is %d",number);
   }
   else
    printf("the entered option is invalid option");
}
