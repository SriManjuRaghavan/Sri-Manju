#include<stdio.h>
#include<conio.h>
void main()
{
    int number,sum;
    scanf("%d",&number);
    if(number>0)
    {
    while(number!=0)
    {
        remainder=number%10;
        number=number/10;
        sum=sum+remainder;
    }
    print("the sum of number is %d",sum);
    }
    else
        printf("the entered number is invalid option");
}
