//PietroTy//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)   {

    float b;
    float e;
    float r;

    printf("Base: ");
    scanf("%f", &b);
    printf("Expoente: ");
    scanf("%f", &e);

    r = pow(b, e);

    printf("%.02f ^ %.02f = %.02f", b, e, r);

    return 0;
}