#include <stdio.h>

int main(){
    int a,b;
    
    printf("Enter the 1st number: ");
    scanf("%d",&a);
    
    printf("Enter the 2st number: ");
    scanf("%d",&b);
    
    a>b?printf("%d > %d\n",a,b):printf("%d < %d\n",a,b);
    
    a==b?printf("Both number are equal"):printf("Both number not equal");
    
    
    return 0;
}
