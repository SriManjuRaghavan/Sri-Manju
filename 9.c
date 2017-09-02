#include<stdio.h>
#include<conio.h>
void main()
{
    int number,sum=0;
    scanf("%d",&number);
    if(number>0)
    {
    for(i=1;i<number;i++)
    {
        sum=sum+i;
    }
    print("the sum of number is %d",sum);
    }
    else
        printf("the entered number is invalid option");
}
