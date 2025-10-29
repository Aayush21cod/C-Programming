#include <stdio.h>

int main(){
int a,b;
clrscr();

printf("Enter the 1st number: ");
scanf("%d",&a);

printf("Enter the 2nd number: ");
scanf("%d",&b);

printf("Arithmetic\n");
printf("%d + %d= %d\n",a,b,a+b);
printf("%d - %d= %d\n",a,b,a-b);
printf("%d * %d= %d\n",a,b,a*b);
printf("%d / %d= %d\n",a,b,a/b);
printf("%d modulo %d= %d\n",a,b,a%b);
printf("\n");
printf("Reational\n");
printf("%d > %d= %d\n",a,b,a>b);
printf("%d < %d= %d\n",a,b,a<b);
printf("%d <= %d= %d\n",a,b,a<=b);
printf("%d >= %d= %d\n",a,b,a>=b);
printf("%d == %d= %d\n",a,b,a==b);
printf("\n");
printf("Logical\n");
if(a<b && a!=0){
printf("Logical AND: true\n");
}
else printf("Logical AND: false\n");

if(a<b || b==0){
printf("Logical OR: true\n");
}
else printf("Logical OR: false\n");
printf("Logical NOT : %d\n",!(a==b));
printf("\n");
printf("Bitwise\n");
printf("%d & %d= %d\n",a,b,a&b);
printf("%d | %d= %d\n",a,b,a|b);
printf("%d << 2: %d\n",a,a<<2);
printf("%d >> 2: %d\n",a,a>>2);
printf("~%d = %d\n",a,~a);
printf("%d ^ %d = %d\n",a,b,a^b);

getch();
return 0;
}