#include <stdio.h>

int on(){
int d;
clrscr();

printf("Enter the day:");
scanf("%d",&d);

switch (d){
case 1:
printf("Sunday\n");
break;
case 2:
printf("Monday\n");
break;
case 3:
printf("Tuesday\n");
break;
case 4:
printf("Wenesday\n");
break;
case 5:
printf("Thusday\n");
break;
case 6:
printf("Friday\n");
break;
case 7:
printf("Sunday\n");
break;
}

getch();
return 0 ;

}
