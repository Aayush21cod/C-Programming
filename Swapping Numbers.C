#include <stdio.h>
int main (){
int a, b, temp;
clrscr ();

printf("Enter the 1st number:");
scanf("%d", &a);

printf("Enter the 2nd number:");
scanf("%d", &b);

a=a+b;
b=a-b;
a=a-b;

printf("After swapping:\n");
printf("a=%d\n", a);
printf("b=%d\n", b);
getch ();
return 0;
}








