//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void){

    float P;
    float A;
    float l;
    float h;

    printf("Valor da largura: ");
    scanf("%f", &l);
    printf("Valor da altura: ");
    scanf("%f", &h);

    P = ( 2 * l ) + ( 2 * h );
    A = l * h;

    printf("Perimetro = %.2f\n", P);
    printf("Area = %.2f\n", A);
    
    return 0;
}