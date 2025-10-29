#include <stdio.h>

int main() {
    int u;
    float bill;

    printf("Enter the units consumed: ");
    scanf("%d", &u);

    if (u <= 100) {bill = u * 1.00;}
    else if (u <= 300) {bill = (100 * 1.00) + (u - 100) * 2.00;}
    else if (u <= 500) {bill = (100 * 1.00) + (200 * 2.00) + (u - 300) * 2.00;}
    else {bill = (100 * 1.00) + (200 * 2.00) + (200 * 2.00) + (u- 500) * 3.25;}

    printf("The total electricity bill is: Rs. %.2f\n", bill);
    return 0;
}
