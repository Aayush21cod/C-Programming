#include <stdio.h>

int main(void){
    int a,b;
    
    printf("What is the 1st number: ");
    scanf("%d",&a);
    
    printf("What is the 2st number: ");
    scanf("%d",&b);
    
    printf("Are %d and %d equal: %d\n",a,b ,a==b);
    printf("Are %d and %d not equal: %d\n",a,b ,a!=b);
    printf("Is %d less than %d : %d\n",a,b ,a<b);
    printf("Is %d greater than %d: %d\n",a,b ,a>b);
    printf("Is %d less than or equal to %d: %d\n",a,b ,a<=b);
    printf("Is %d greater than or equal %d: %d\n",a,b ,a>=b);
    
    return 0;
}
