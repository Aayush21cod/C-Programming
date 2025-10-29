#include <stdio.h>

int main(void) {
int num1, num2;
clrscr();
printf("Name: Aayush Talekar\n");
printf("Enter first number: ");
scanf("%d", &num1);
printf("Enter second number: ");
scanf("%d", &num2);

(num1 == num2) ? printf("Numbers are equal.\n") : printf("Numbers are not equal.\n");
getch();
return 0;
}
