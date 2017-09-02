#include<stdio.h>
#include<conio.h>
void main()
{ char a;
    scanf("%c",&a);
 int d=a;
    if((d>=65&&d<=90)||(d>=97&&d<=122))
    {
        printf("the entered chararter is a alphabet");
    }
    else
        printf("the entered chararter is not an alphabet");
}
