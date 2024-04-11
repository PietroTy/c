#include<stdio.h>
#include<stdlib.h>

int main( void ) {

    float n;
    int q = 0;
    float s = 0;
    float m;

    printf( "Forneca a nota de 10 alunos: \n" );

    for( int i = 1 ; i <= 10 ; i++ ) {

        q++;

        printf( "Nota %d: ", q );
        scanf( "%f", &n );

        s = s + n;

    }

    m = s / q;

    printf( "A media aritmetica das dez notas e: %.2f", m );

    return 0;
}