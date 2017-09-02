#include<stdio.h>
#include<conio.h>
void main()
{
    int number,count=0
    scanf("%d",&number);
    while(number!=0)
    {
        remainder=number%10;
        number=number/10;
        count++;
    }
    print("the sum of number is %d",count);}
