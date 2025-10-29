#include <stdio.h>
int main (){
int num1, num2, num3, sum, multi;
clrscr ();

printf("Enter 1st number:");
scanf("%d", &num1);

printf("Enter 2nd number:");
scanf("%d", &num2);

printf("Enter 3rd number:");
scanf("%d", &num3);

sum = num1 + num2 + num3;
multi = num1 * num2 * num3;

printf("sum = %.d\n", sum);
printf("multi = %.d\n",multi);
getch ();
return 0;
}