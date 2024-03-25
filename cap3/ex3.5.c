#include<stdio.h>
#include<stdlib.h>

int n;

int main(void){

    if ( n >= 0 ) {

        for ( int i = 15; i <= 30; i++ ) {

        n = i * i;

        printf("%d ", n);

        }

    } else {

         printf("Valor incorreto (negativo)");

    }

   

    return 0;
}