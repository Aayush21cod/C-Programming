#include <stdio.h>

int main(void){
    
    int cost;
    
    printf("Enter the total amount of your bill: ");
    scanf("%d",&cost);
    
    if (cost >= 1000) {printf("Congratulations, you have got 10 percent discount on your bill!!");}
    else if (cost >=500 && cost <=999){printf("You have got 5 percent discount on your bill");}
    else printf("No discount is applicable, sorry");
    
    return 0;
}
