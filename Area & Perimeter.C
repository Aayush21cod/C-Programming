#include<stdio.h>
int main()
{float l,w,area,perimeter;
clrscr();
printf("Enter lenght: ");
scanf("%f", &l);
printf("Enter width: ");
scanf("%f",&w);
area = l * w;
perimeter = 2 * (l + w);
printf("Area: %f\n",area);
printf("Perimeter: %f\n",perimeter);
getch();
return 0;
}