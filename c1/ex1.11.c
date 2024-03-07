#include<stdio.h>
#include<stdlib.h>

int main(void){

    int A;
    int D;
    int d;

    printf("Valor da base: ");
    scanf("%d", &D);
    printf("Valor da altura: ");
    scanf("%d", &d);

    A = ( D * d ) / 2;

    printf("Area = %d\n", A);
    
    return 0;
}