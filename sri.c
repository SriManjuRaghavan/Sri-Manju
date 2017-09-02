#include<stdio.h>
#include<conio.h>
void main()
{ int number;
    scanf("%d",&number);
    if(number==0)
    {

        printf("the entered number is zero");
    }
    else if(number>0)
    {
        printf("the entered number is positive");
    }
    else
    {
        printf("the entered number is negative");
    }
}
