//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int lePositivo( void );
int somatorio( int n );

int main ( void ) {

    int n[5];

    for( int i = 0 ; i < 5 ; i++ ) {

        printf( "n[%d]: ", i );
        n[i] = lePositivo();

    }

    for( int i = 0 ; i < 5 ; i++ ) {

        printf( "Somatorio de 1 a %d: %d\n", n[i], somatorio( n[i] ) );

    }

    return 0;
}

int lePositivo( void ) {

    int v;

    do {

        scanf( "%d", &v );
        if( v <= 0 ) {

            printf( "Entre com um valor positivo: " );

        }

    } while( v <= 0 );

    return v;

}   

int somatorio( int n ) {

    int sm = 0;

    for( int i = 1 ; i <= n ; i++ ) {
        sm += i;
        
    }

    return sm;

}