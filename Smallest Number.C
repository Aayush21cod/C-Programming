#include<stdio.h>
int main()
{int  a,b,small;
clrscr();
printf("Enter first number: ");
scanf("%d",&a);
printf("Enter second number: ");
scanf("%d",&b);
small = (a<b) ? a:b;
printf("SMALLER IS: %d\n",small);
getch();
return 0;
}