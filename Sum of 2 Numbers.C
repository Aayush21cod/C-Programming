#include <stdio.h>

int main() {
int num1,num2,ans;
clrscr();


printf("Enter the 1st number: ");
scanf("%d",&num1);

printf("Enter the 2nd number: ");
scanf("%d",&num2);
ans=num1+num2;
printf("Sum is %d\n",ans);
getch();
return 0;


}