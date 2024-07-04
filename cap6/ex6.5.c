//PietroTy//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)   {

    float n;

    printf("Numero: ");
    scanf("%f", &n);

    if(n < 0){

        printf("Quadrado de %.02f: %.02f\n", n, pow(n, 2));

    } 
    else {

        printf("Raiz quadrada de %.02f: %.02f\n", n, sqrt(n));

    }

    return 0;
}