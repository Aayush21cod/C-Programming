#include <stdio.h>

int main(void){
    int a;
    
    printf("Enter a number: ");
    scanf("%d",&a);
    
    printf("++a: %d\n",++a);
    printf("a++: %d\n",a++);
    printf("--a: %d\n",--a);
    printf("a--: %d\n",a--);
    printf("Logical NOT of a: %d\n",!a);
    
    return 0;
}
