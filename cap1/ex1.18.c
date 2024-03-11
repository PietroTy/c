#include<stdio.h>
#include<stdlib.h>

int main(void){

    float A;
    float D;
    float d;

    printf("Valor da base: ");
    scanf("%f", &D);
    printf("Valor da altura: ");
    scanf("%f", &d);

    A = ( D * d ) / 2;

    printf("Area = %.2f\n", A);
    
    return 0;
}