#include <stdio.h>

int main() {
    int m;
    clrscr();

    printf("Enter marks: ");
    scanf("%d", &m);

    if(m>=40){if(m>=60){if(m>=80){printf("A\n");}
    else printf("B\n");}
    else printf("C\n");}
    else printf("D\n");

    getch();
    return 0;
    }