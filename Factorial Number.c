#include <stdio.h>

int main(void){
    int a,i,f=1;
    
    printf("Enter the number");
    scanf("%d",&a);
    
    if (a<0) {
        printf("This is a negative number\n");
    }
    else if (a==0 || a==1){
        printf("The Factorial is 1");
    }
    else {
        for (i=1; i<=a; i++) {
            f=f*i;
        }
        printf("Factorial is %d\n",f);
        }
}
