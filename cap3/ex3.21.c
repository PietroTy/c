#include<stdio.h>
#include<stdlib.h>

int main(void){

    int altura;

    printf("Altura: ");
    scanf("%d", &altura);

    for ( int i = 1; i >= altura; i-- ) {

       for ( int j = 1; j <= altura - i; j++ ) {

        printf(" ");

        }
        for ( int j = 1; i <= i; i++ ) {

        printf("*");

        }
        for ( int j = 1; j <= i - 1; j++ ) {

        printf("*");

        }

        printf("\n");

    }

    return 0;
}