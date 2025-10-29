#include <stdio.h>
int main()
{int a,b;
clrscr();
printf("Enter first number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);
printf("ADDITION: %d\n", a + b);
printf("SUBRATION: %d\n", a - b);
printf("MULTIPLY: %d\n", a * b);
printf("DIVISION: %d\n", a / b);
printf("MODULO: %d\n",a % b);
getch();
return 0;
}