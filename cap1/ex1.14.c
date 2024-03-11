#include<stdio.h>
#include<stdlib.h>

int main(void){

    float P;
    float A;
    float l;

    printf("Valor do lado: ");
    scanf("%f", &l);

    P = l * 4;
    A = l * l;

    printf("Perimetro = %.2f\n", P);
    printf("Area = %.2f\n", A);
    
    return 0;
}