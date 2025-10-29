//
//  2.c
//  LAB
//
//  Created by Aayush Talekar on 19/10/25.
//

#include <stdio.h>

int main(void){
    float marks;
    
    printf("Enter your marks: ");
    scanf("%f",&marks);
    
    if (marks>=40) {
        printf("You have passed");
    }
    else printf("You have failed");
}
