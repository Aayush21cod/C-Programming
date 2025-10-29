#include <stdio.h>

int main(){
int English,Math,Science,t;
float p;
clrscr();

printf("Enter English marks: ");
scanf("%d",&English);

printf("Enter Maths marks: ");
scanf("%d",&Math);

printf("Enter Science marks: ");
scanf("%d",&Science);

t=English+Math+Science;
p=(t/300.0)*100;

printf("Total marks is: %d\n",t);


printf("Persentage: %.2f\n",p);
if(p<=50){printf("You have failed\n");}
else printf("You have passed\n");

if(p>=90){printf("You have got Distinction\n");}
else if (p>=80){printf("1st class\n");}
else if (p>=70){printf("2nd class\n");}
getch();
return 0;
}