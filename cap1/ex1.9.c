//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void){

    int A;
    int b;
    int h;

    printf("Valor da base: ");
    scanf("%d", &b);
    printf("Valor da altura: ");
    scanf("%d", &h);

    A = ( b * h ) / 2;

    printf("Area = %d\n", A);
    
    return 0;
}