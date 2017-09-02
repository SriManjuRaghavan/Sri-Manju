#include<stdio.h>
#include<conio.h>
void main()
{
    int number,count=0;
    scanf("%d",&number);
    if(number>0)
    {
    while(number!=0)
    {
        remainder=number%10;
        number=number/10;
        count++;
    }
    print("the number of integers in the number is %d",count);
    }
    else
        printf("the entered number is invalid option");
}
