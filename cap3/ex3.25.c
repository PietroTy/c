#include<stdio.h>
#include<stdlib.h>

int main( void )    {

    float v;
    float m;
    float s = 0;
    int q = 0;


    do {

        printf( "Entre com um valor: " );
        scanf( "%f", &v );

        if( v >= 0 ){
            
            q++;
            s = s + v;

        }


    } while( v >= 0 );


    if( q > 0 ) {

        m = s / q;

    }

    printf( "Somatorio: %.2f\n", s );
    printf( "Media: %.2f\n", m );
    printf( "Quantidade: %d\n", q );



    return 0;
}
