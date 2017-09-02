#include<stdio.h>
#include<conio.h>
void main()
{ int a;
    scanf("%d",&a);
    if(a==0)
    {

        printf("the entered number is zero");
    }
    else if(a>0)
    {
        printf("the entered number is positive");
    }
    else
    {
        printf("the entered number is negative");
    }
}
