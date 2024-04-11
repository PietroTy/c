#include<stdio.h>
#include<stdlib.h>

int main( void )    {

    int n = 1;
    float p;
    float md;
    float ma = 0;
    float s = 0;
    int q = 0;

    do {

        printf( "Entre com o peso da pessoa %02d: ", n );
        scanf( "%f", &p );

        if( p > ma ) {

            ma = p;

        }

        if( p > 60 ) {

            s = s + p;
            q++;

        }

        n++;

    } while( p >= 0 );

    if( q > 0 ) {

    md = s / q;

    }
    
    printf( "Media dos pesos acima de 60kg: %.2f\n", md );
    printf( "A pessoa mais pesada possui %.2fkg\n", ma );

    return 0;
}