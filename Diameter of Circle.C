#include <stdio.h>

int main() {
float radius,diameter;
const float pi=3.14159;
clrscr();

printf("Enter the radius: ");
scanf("%f",&diameter);

diameter=2*pi*radius;
printf("Diameter of the circle is %.2f",diameter);
getch();
return 0;
}