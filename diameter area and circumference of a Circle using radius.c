#include <stdio.h>

int main(void){
    float radius;
    const float pi=3.14159;

    printf("Enter the radius: ");
    scanf("%f",&radius);

    
    printf("Diameter of the circle is %.2f\n",2*radius);
    printf("Area of the circle is %.2f\n",pi*radius*radius);
    printf("Circumference of the circle: %.2f\n",2*pi*radius);
    return 0;
    }
`
