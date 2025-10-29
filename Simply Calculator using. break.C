#include<stdio.h>

int main(){
int c;
float a,b;
clrscr();

printf("Simple Calculator\nEnter the Artimetic Choice from the option\n");
printf("1. Add\n");
printf("2. Minus\n");
printf("3. Multiply\n");
printf("4. Div\n");
printf("5. Exit\n");

printf("Enter your Choice: ");
scanf("%d",&c);

switch(c){
case 1:
printf("Enter the 1st number: ");
scanf("%f",&a);
printf("Enter the 2nd number: ");
scanf("%f",&b);
printf("Sum: %.2f",a+b);
break;

case 2:
printf("Enter the 1st number: ");
scanf("%f",&a);
printf("Enter the 2nd number: ");
scanf("%f",&b);
printf("Min: %.2f",a-b);
break;

case 3:
printf("Enter the 1st number: ");
scanf("%f",&a);
printf("Enter the 2nd number: ");
scanf("%f",&b);
printf("Multi: %.2f",a*b);
break;

case 4:
printf("Enter the 1st number: ");
scanf("%f",&a);
printf("Enter the 2nd number: ");
scanf("%f",&b);
if(b!=0){printf("Div: %.2f",a/b);}
else printf("The 2nd number is 0");
break;

case 6:
printf("Exiting the program");
break;

}
getch();
return 0;
}