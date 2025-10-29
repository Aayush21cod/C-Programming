#include <stdio.h>

int main(){
    int a,b;
    
    printf("Enter the 1st Number: ");
    scanf("%d",&a);
    
    printf("Enter the 2st Number: ");
    scanf("%d",&b);
    
    if (a<b && b!=0) {
        printf("Logical AND: true\n");
    }
    else printf("Logical AND: false\n");
    
    if (a<b || b==0) {
        printf("Logical OR: true\n");
    }
    else printf("Logical OR: false\n");
    
    printf("%d AND(Bitwise) %d= %d\n",a,b,a&b);
    printf("%d OR(Bitwise) %d= %d\n",a,b,a|b);
    
    return 0;
}
