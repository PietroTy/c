//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void){

    int f1 = 1;
    int f2 = 1;
    int f;
    int t;

    printf("Termo desejado: ");
    scanf("%d ", &t);

    if ( t < 2 ) {

        printf("Fibonacci de %d e 1 ", t);

    } else {

        for ( int i = 1; i <= t - 1; i++ ) {

        f = f1 + f2;
        f2 = f1;
        f1 = f;

        }

        printf("Fibonacci de %d e %d ", t, f);

    }


    return 0;
}