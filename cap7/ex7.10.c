//PietroTy//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int calculaDigito ( int n);

int main(void){
    
    int n;

    printf("Numero: ");
    scanf("%d", &n);

    int dgtv = calculaDigito(n);

    if( dgtv == 0){
        printf("Digito verificador de %d: 0", n);
    }else{
        printf("Digito verificador de %d: %d", n, dgtv);
    }

    return 0;
}

int calculaDigito ( int n){

    if ( n < 1 || n > 9999){
        return 0;

    }

    int dgt;
    int wh = 2;
    int sm = 0;

    while ( n > 0){
        dgt = n % 10;
        sm += dgt * wh;
        wh++;
        n /= 10;

    }

    int rst = sm % 11;
    int dgtv = 11 - rst;

    if( dgtv == 10 || dgtv == 11){
        dgtv = 0;

    }
    return dgtv;
}
