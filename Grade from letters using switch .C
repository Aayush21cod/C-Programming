#include <stdio.h>

int main(){
char d;
clrscr();

printf("Enter the Letter:");
scanf("%s",&d);

switch (d){
case 'a':
printf("Excellent\n");
break;
case 'b':
printf("Good\n");
break;
case 'c':
printf("Avg\n");
break;
case 'd':
printf("Poor\n");
break;
case 'f':
printf("Fail\n");
break;
}

getch();
return 0 ;

}