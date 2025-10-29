#include <stdio.h>

int main(){
    float principal,rate,time,simpleInterest;
    
    printf("Enter the principal amount: ");
    scanf("%f",&principal);
    
    printf("Enter the rate: ");
    scanf("%f",&rate);
    
    printf("Enter the time (YYYY): ");
    scanf("%f",&time);
    
    simpleInterest=(principal*rate*time)/100;
    
    printf("The Simple Interest is %.2f",simpleInterest);
    
    return 0;
}
