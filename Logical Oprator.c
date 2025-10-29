#include <stdio.h>

int main(void){
    int a,b;
    
    printf("Enter the 1st number: ");
    scanf("%d",&a);
    
    printf("Enter the 2st number:  ");
    scanf("%d",&b);
    
    if (a<b && a!=0) {
        printf("Logical AND: true\n");
    }
    else printf("Logical AND: false\n");
    
    if (a<b || a!=0) {
        printf("Logical OR: true\n");
    }
    else printf("Logical OR: false\n");
    
    printf("Logical NOT: %d\n",!(a==b));
    return 0;
}
