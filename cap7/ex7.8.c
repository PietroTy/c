//PietroTy//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int pos( void );
bool saoAmigos( int n1, int n2 );
int main( void ){

    int n1[5];
    int n2[5];


    for(int i = 0; i < 5; i++){
        printf( "n1[%d]: ", i );
        n1[i] = pos();

        printf( "n2[%d]: ", i );
        n2[i] = pos();
    }
    for(int i = 0; i < 5; i++){
        if( saoAmigos ( n1[i], n2[i] ) == true ){
            printf( "%d e %d sao amigos\n", n1[i], n2[i] );
        } else {
            printf( "%d e %d nao sao amigos\n", n1[i], n2[i] );
    }
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
bool saoAmigos( int n1, int n2 ){

    int s1 = 0;
    int s2 = 0;

    for( int i = 1; i < n1; i++ ){
        if (n1 % i == 0)
        s1 = s1 + i;
    }

    for( int i = 1; i < n2; i++ ){
        if (n2 % i == 0)
        s2 = s2 + i;
    }

    if( s2 == n1 && s1 == n2 ){
        return true;
    }
    else {
        return false;
    }

}