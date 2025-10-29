#include <stdio.h>

int main(){
int a;
clrscr();

printf("Enter the number: ");
scanf("%d",&a);

if(a>0){printf("The number is positive\n");}
else printf("The number is negative\n");

getch();
return 0;
}