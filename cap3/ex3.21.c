#include<stdio.h>
#include<stdlib.h>

int main( void ) {

    int a;

    printf( "Altura: " );
    scanf( "%d", &a );

    if( a >= 0) {
 
        for( int i = 1 ; i <= a ; i++ ) {

            for( int j = 1 ; j <= a - i ; j++ ) {

                printf( " " );

            }

            for( int j = 1 ; j <= i ; j++ ) {

                printf( "*" );

            }

            for( int j = 1 ; j <= i - 1 ; j++ ) {

                printf( "*" );

            }

            printf( "\n" );

        }

    } 
    
    else if( a <= 0 ) {

        a = -a;

        for( int i = a ; i >= 1 ; i-- ) {

            for( int j = 1 ; j <= a - i ; j++ ) {

                printf(" ");

            }

            for( int j = 1 ; j <= i ; j++ ) {

                printf( "*" );

            }

            for( int j = 1 ; j <= i - 1 ; j++ ) {

                printf( "*" );

            }

            printf( "\n" );
        } 


    }

    return 0;
}