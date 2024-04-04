#include<stdio.h>
#include<stdlib.h>

int main(void){

    int h;
    int t;

    printf("Altura: ");
    scanf("%d", &h);


    for ( int t = 1 ; t <= h; t++ ) {

        for ( int i = 1 ; i <= t; i++ ) {

            printf("*");

        }

    printf("\n");

    }

    return 0;
}