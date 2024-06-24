//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void)
{

int n [5];
int c [5];

int t = (int) ( sizeof( n ) / sizeof( n[0] ) );

for ( int i = 0; i < t; i++ ) {
    printf( "array[%d]: ", i );
    scanf( "%d", &n[i] );
    printf( "\n" );
}

for ( int i = 0; i < t; i++ ) {
    c[i] = n[i] * n[i] * n[i];

}

for ( int i = 0; i < t; i++ ) {
    printf( "arrayCubo[%d] = %d", i, c[i] );
    printf( "\n" );
}

return 0;

}
