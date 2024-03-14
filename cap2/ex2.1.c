#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n;

    printf("Entre com um numero: ");
    scanf("%d", &n);

    if ( n % 2 == 0 ) {

            printf("O numero %d e par.\n", n);

    }   else {

        printf("O numero %d e impar.\n", n);

    }
    
    return 0;
}