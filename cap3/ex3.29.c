#include<stdio.h>
#include<stdlib.h>

int main( void )    {

    int n1;
    int n2;
    int r;
    char d;


    do {

        printf( "N1: " );
        scanf( "%d", &n1 );

        printf( "N2: " );
        scanf( "%d", &n2 );

        r = n1 / n2;

        if ( n2 != 0 ){

            printf( "%d / %d = %d", n1, n2, r )

        } else {

            printf( "Nao existe divisao inteira por zero!" )

        }

        printf( "Voce deseja realizar outro calculo? (S/N): " );
        scanf( "%c", &d );

    } while ( d != "N" );

    return 0;
}