//PietroTy//
#include <stdio.h>
#include <stdlib.h>

int absoluto (int n);

int main (void)   {

    int N[5];
    int A[5];

    for ( int i = 0; i < 5; i++ ) {

        printf( "n%d: ", i );
        scanf( "%d", &N[i] );
        printf( "\n" );
    }
    for ( int i = 0; i < 5; i++ ) {

        printf( "absoluto(%d) = %d", N[i], absoluto(N[i]));
        printf( "\n" );
    }

    return 0;
}

int absoluto (int n)   {

    if (n < 0) {

        return -n;
    }
    else {

        return n;
    }
}