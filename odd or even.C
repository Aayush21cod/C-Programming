#include <stdio.h>

int main() {
   int num;
   clrscr();

   printf("Enter an integer: ");
   scanf("%d",&num);

   if(num%2==0){
   printf("%d is even number\n",num);
   }
   else printf("%d is a odd number\n",num);

   getch();
   return 0;
}