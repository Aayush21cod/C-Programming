#include<stdio.h>;

int main(){
float c;
clrscr();

printf("Enter the Celsius: ");
scanf("%f",&c);

printf("The Fahrenheit is: %.2f",(c*9/5)+32);

getch();
return 0;
}