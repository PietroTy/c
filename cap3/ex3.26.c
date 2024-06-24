//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main( void )    {

    int v;
    int mn = 0;
    int ma = 0;
    int q = 0;

    do {

        printf( "Entre com um valor: " );
        scanf( "%d", &v);

        if ( v >= 0 ) {

            if( q == 0) {

                mn = v;

            }

            if( v > ma ) {

                ma = v;

            }
            
            if( v < mn ) {

                mn = v;
            
            }

            q++;

        } else {

            printf( "Menor numero: %d\n", mn );
            printf( "Maior numero: %d\n", ma );

        }

    } while( v >= 0 );

    return 0;
}