#include <stdio.h>
#include <stdlib.h>

int main(){
    float P,R,time,SI,CI,amount;
    int i,years;
    
    printf("Enter the Principal amount:- ");
    scanf("%f",&P);
    
    printf("Enter annual interest rate (%)");
    scanf("%f",&R);
    
    printf("Enter the time(years)");
    scanf("%f",&time);
    
    years=(int)time;
    amount=P;
    
    SI=(P*R*time)/100;
    
    for (i=0; i<years; i++) {
        amount=amount*(amount*R/100);
    }
    
    CI=amount-P;
    
    printf("Simple Interest is %.2f\nCompount Interest is %.2f\n",SI,CI);
    return 0;
}
