#include<stdio.h>
#include<conio.h>
void main()
{ char a;
    scanf("%c",&a);
   if((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u')||(a=='A')||(a=='E')||(a=='I')||(a=='O')||(a=='U'))
   {

       printf("the entered character is a vowel");
   }
   elseif((a=='b')||(a=='B')||(a=='C')||(a=='D')||(a=='E')||(a=='F')||(a=='G')||(a=='H')||(a=='J')||(a=='K')||(a=='L')||(a=='M')||(a=='N')||(a=='P')||(a=='Q')||(a=='R')||(a=='S')||(a=='T')||(a=='V')||(a=='W')||(a=='X')||(a=='Y')||(a=='Z')||(a=='c')||(a=='d')||(a=='f')||(a=='g')||(a=='h')||(a=='j')||(a=='k')||(a=='l')||(a=='m')||(a=='n')||(a=='p')||(a=='q')||(a=='r')||(a=='s')||(a=='t')||(a=='v')||(a=='w')||(a=='x')||(a=='y')||(a=='z'))
    printf("the entered character is a constant");
   else
    printf("the enter character is invalid option");
}
