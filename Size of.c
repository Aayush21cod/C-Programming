#include <stdio.h>

int main(){
    int a;
    float b;
    char c;
    double d;
    
    printf("Size of int: %zu bytes\n",sizeof(int));
    printf("Size of float: %zu bytes\n",sizeof(float));
    printf("Size of char: %zu bytes\n",sizeof(char));
    printf("Size of double: %zu bytes\n",sizeof(double));
    
    return 0;
}
