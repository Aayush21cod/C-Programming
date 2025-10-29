#include <stdio.h>

int main() {
int age;
char ch,name[50];
clrscr();

printf("Enter your age: ");
scanf("%d",&age);

getchar();

printf("Enter character:");
ch=getchar();

printf("You entered: ");
putchar(ch);
printf("\n");

getchar();
printf("Enter your name: ");
gets(name);
printf("Hello\n");
puts(name);
printf("your age is %d\n",age);
getch();
return 0;
}