#include<stdio.h>
int main()
{int year;
clrscr();
printf("Enter your year: ");
scanf("%d",&year);
if(year%4 == 0)
{printf("Its a leap year");}
else
{printf("Not a leap year");}
getch();
return 0;
}