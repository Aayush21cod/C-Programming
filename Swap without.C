#include <stdio.h>

int main() {
int a,b;
clrscr();
printf("Enter the 1st number: ");
scanf("%d",&a);

printf("Enter the 2nd number: ");
scanf("%d",&b);

a=a+b;
b=a-b;
a=a-b;

printf("a=%d b=%d",a,b);
getch();
return 0;
}