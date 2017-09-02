#include<stdio.h>
#include<conio.h>
void main()
{
    int number,i;
    scanf("%d",&number);
     if(number>0)
     {
        for(i=0;i<=10;i++)
        {
            printf(" %d * %d = %d",number,i,number*i);
            
        }
       
     }
   else
    printf("the entered option is invalid option");
}
