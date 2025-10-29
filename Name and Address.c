#include <stdlib.h>
#include <stdio.h>

int Lab_1_demo(void) {
    
    char name[100], address[100];
    printf("Enter your name:- ");
    scanf("%99s", name);
    
    printf("Where do to live:- ");
    scanf("%99s", address);
    
    printf("My name is %s and I live at %s\n", name, address);
    return EXIT_SUCCESS;
}

