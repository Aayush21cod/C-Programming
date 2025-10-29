#include <stdio.h>
int main (){
float radius;
float Area;
const float PI = 3.14159;
clrscr ();

printf("Enter the radius:");
scanf("%f", &radius);

Area = PI * radius * radius;

printf("\nArea: %.2f\n", Area);
getch ();
return 0;
}