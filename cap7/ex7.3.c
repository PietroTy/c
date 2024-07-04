//PietroTy//
#include <stdio.h>
#include <stdlib.h>

void maiorNumero (float* N1, float* N2);

int main (void)   {

    float N1[5];
    float N2[5];

    for ( int i = 0; i < 5; i++ ) {

        printf( "n1[%d]: ", i );
        scanf( "%f", &N1[i] );


        if (N1 <= 0){

            do {

            printf( "Entre com um valor positivo!\n" );
            printf( "n1[%d]: ", i );
            scanf( "%f", &N1 );


            } while( N1 <= 0 );
        }

        printf( "\n" );

        printf( "n2[%d]: ", i );
        scanf( "%f", &N2[i] );


        if (N2 <= 0){

            do {

            printf( "Entre com um valor positivo!\n" );
            printf( "n2[%d]: ", i );
            scanf( "%f", &N2 );


            } while( N2 <= 0 );
        }

        printf( "\n" );
    }

    for ( int i = 0; i < 5; i++ ) {

        if(N1 != N2){

            printf( "%.02f, %.02f: O maior valor e ", N1, N2);
            maiorNumero(N1, N2);
        }
        else {

            printf( "%.02f, %.02f: Eles sao iguais", N1, N2);
        }
    }

    
    return 0;
}

void maiorNumero (float* N1, float* N2)   {

    if (N1 > N2) {

    printf( "%.02f", N1);    
    }
    else {

    printf( "%.02f", N2);    
    }
}