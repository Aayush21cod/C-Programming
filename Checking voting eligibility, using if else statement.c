#include <stdio.h>

int wel(void) {
    
    int age;
    
    printf("Enter your age:");
    scanf("%d",&age);
    
    if(age>=18){printf("You can vote");}
    else printf("Sorry you can't vote");

    return 0;
}
