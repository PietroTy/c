#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n;
    int f = 1;

    printf("Numero: ");
    scanf("%d", &n);

    if ( n >= 0 ) {

        for ( int i = 1; i <= n; i++ ) {

            f = f * i;

        }

        printf("%d! = %d\n", n, f);

    }
    else {

        printf("Nao ha fatorial de numero negativo.\n");

    }
    
    return 0;
}