//PietroTy//
#include <stdio.h>
#include <stdlib.h>

float maiorNumero (float N1, float N2);

int main (void)   {

    float N1[5];
    float N2[5];

    for ( int i = 0; i < 5; i++ ) {

        printf( "n1[%d]: ", i );
        scanf( "%f", &N1[i] );


        if (N1[i] <= 0){

            do {

            printf( "Entre com um valor positivo!\n" );
            printf( "n1[%d]: ", i );
            scanf( "%f", &N1[i] );


            } while( N1[i] <= 0 );
        }

        printf( "\n" );

        printf( "n2[%d]: ", i );
        scanf( "%f", &N2[i] );


        if (N2[i] <= 0){

            do {

            printf( "Entre com um valor positivo!\n" );
            printf( "n2[%d]: ", i );
            scanf( "%f", &N2[i] );


            } while( N2[i] <= 0 );
        }

        printf( "\n" );
    }

    for ( int i = 0; i < 5; i++ ) {

        if(N1[i] != N2[i]){

            printf( "\n%.02f, %.02f: O maior valor e %.02f", N1[i], N2[i], maiorNumero(N1[i], N2[i]));
        }
        else {

            printf( "\n%.02f, %.02f: Eles sao iguais", N1[i], N2[i]);
        }
    }

    
    return 0;
}

float maiorNumero (float N1, float N2)   {

    if (N1 > N2) {

        return N1;
    }
    else {

        return N2;
    }
}