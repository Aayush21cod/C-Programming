#include <stdio.h>


int main(){
int a,b;
printf("Enter the number: ");
scanf("%d",&a);

if(a>0){printf("The number is +ve");}
else printf("The number is -ve");

b=a%2
if(b==0){printf("The number is even");}
else printf("The number is odd");

if(a<=40){printf("You have passed");}
else printf("You have failed");

getch();
return 0;
}