//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void){

    float D;
    float C;
    float A;
    float r;
    float π;

    printf("Valor do raio do circulo: ");
    scanf("%f", &r);

    π =  3.141592;
    D =  2 * r;
    C = ( 2 * π ) * r;
    A = π * ( r * r );

    printf("Diametro = %.2f\n", D);
    printf("Circunferencia = %.2f\n", C);
    printf("Area = %.2f\n", A);
    
    return 0;
}