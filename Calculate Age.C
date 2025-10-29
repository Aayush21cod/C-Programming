#include <stdio.h>

int main() {
int birthYear, currentYear, Age;

printf("Enter the current year (YYYY): ");
scanf("%d",&currentYear);

printf("Enter the birthYear (YYYY): ");
scanf("%d",&birthYear);

Age=currentYear-birthYear

printf("Your age is %d\n",Age);

return 0;

}