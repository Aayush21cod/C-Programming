#include <stdio.h>

int main(){
    float km,m,ft,inches,cm;
    
    printf("Enter the distance between two cities");
    scanf("%f",&km);
    
    m=1000*km;
    ft=3.28*m;
    inches=ft*12;
    cm=100*m;
    
    printf("%.2fkm is %.2fm\n",km,m);
    printf("%.2fkm is %.2ffeet\n",km,ft);
    printf("%.2fkm is %.2finches\n",km,inches);
    printf("%.2fkm is %.2fcm\n",km,cm);

    return 0;
}
