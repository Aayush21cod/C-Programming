#include <stdio.h>.
int main()
{

float principal, rate, time, simpleinterest;

printf("Enter the principal amount:");
scanf("f", &principal);

printf("Enter the rate:");
scanf("%f", &rate);

printf("Enter the time:");
scanf("%f", &time);

simpleinterest=(principal * rate * time)/100;

printf("\nsimpleinterest is %2f\n , simpleinterest);
getch();
return 0;
}