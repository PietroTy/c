#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n;
    int mt;

    printf("Numero: ");
    scanf("%d", &n);


    for ( int i = 1 ; i <= 1000; i++ ) {

        if ( i % n == 0) {

            mt++;

        } 


    }

    printf("Multiplos de %d no intervalo [1, 1000]: %d\n", n, mt);

    return 0;
}