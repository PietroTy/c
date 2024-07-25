//PietroTy//
#include <stdio.h>
#include <stdlib.h>

int pos( void );
int somaDivisores( int n );

int main( void ){

    int n[5];


    for(int i = 0; i < 5; i++){
        printf( "n[%d]: ", i );
        n[i] = pos();
    }

    for(int i = 0; i < 5; i++){
        printf( "Soma dos divisores de %d: %d\n", n[i], somaDivisores(n[i]));
    }
    return 0;
}
int pos( void ){

    int v;

    do{
        scanf( "%d", &v );
        if( v <= 0 ){
            printf( "Entre com um valor positivo: " );
        }

    } while ( v <= 0 );

    return v;
}
int somaDivisores( int n ){

    int s = 0;

    for(int i = 1; i < n; i++){
        if (n % i == 0)
        s = s + i;
    }

    return s;
}