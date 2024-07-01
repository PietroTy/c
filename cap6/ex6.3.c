//PietroTy//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)   {

    float n;

    printf("Numero: ");
    scanf("%d", &n);

    printf("Maior inteiro mais proximo: %.02f\n", ceil(n));
    printf("Menor inteiro mais proximo: %.02f\n", floor(n));

    return 0;
}