//
//  Nested if.c
//  LAB
//
//  Created by Aayush Talekar on 15/10/25.
//

#include <stdio.h>

int main() {
    int a, b, c;
    int highest, second_highest, lowest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        if (a > c) {
            highest = a;
            if (b > c) {
                second_highest = b;
                lowest = c;
            } else {
                second_highest = c;
                lowest = b;
            }
        } else {
            highest = c;
            second_highest = a;
            lowest = b;
        }
    } else { // b >= a
        if (b > c) {
            highest = b;
            if (a > c) {
                second_highest = a;
                lowest = c;
            } else {
                second_highest = c;
                lowest = a;
            }
        } else {
            highest = c;
            second_highest = b;
            lowest = a;
        }
    }

    printf("\nHighest number: %d", highest);
    printf("\nSecond highest number: %d", second_highest);
    printf("\nLowest number: %d\n", lowest);

    return 0;
}
