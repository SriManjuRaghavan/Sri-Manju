#include<stdio.h>
#include<conio.h>
void main()
{ char a;
    scanf("%c",&a);
    if((a>=65&&a<=90)||(a>=97&&a<=122))
    {
        printf("the entered chararter is a alphabet");
    }
    else
        printf("the entered chararter is not an alphabet");
}
