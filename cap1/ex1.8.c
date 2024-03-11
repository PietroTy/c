#include<stdio.h>
#include<stdlib.h>

int main(void){

    int P;
    int A;
    int l;
    int h;

    printf("Valor da largura: ");
    scanf("%d", &l);
    printf("Valor da altura: ");
    scanf("%d", &h);

    P = ( 2 * l ) + ( 2 * h );
    A = l * h;

    printf("Perimetro = %d\n", P);
    printf("Area = %d\n", A);
    
    return 0;
}