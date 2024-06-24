//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void){

    int P;
    int A;
    int l;

    printf("Valor do lado: ");
    scanf("%d", &l);

    P = l * 4;
    A = l * l;

    printf("Perimetro = %d\n", P);
    printf("Area = %d\n", A);
    
    return 0;
}