#include <stdio.h>

int main(){
    int a,b;
    
    printf("Enter the 1st number: ");
    scanf("%d",&a);
    
    printf("Enter the 2st number: ");
    scanf("%d",&b);
    
    printf("%d AND(&) %d: %d\n",a,b,a&b);
    printf("%d OR(|) %d: %d\n",a,b,a|b);
    printf("%d XOR(^) %d: %d\n",a,b,a^b);
    printf("NOT(~) %d: %d\n",a,~a);
    printf("%d Left Shift(<<) 1: %d\n",a,a<<1);
    printf("%d Right Shift(>>) 1: %d\n",a,a>>1);
    
    return 0;
}
