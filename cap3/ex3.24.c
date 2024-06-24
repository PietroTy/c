//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void){

    int i;
    int men = 0;
    int mai = 0;
    int p = 1;

    do {

        printf( "Idade da pessoa %02d: ", p );
        scanf( "%d", &i);

        if ( i >= 0 && i < 21 ) {

            men++;
        } else if (i >= 0 && i > 50 ) {

            mai++;
        }

        p++;

    } while( i >=0 );

    printf( "Total de pessoas menores de 21 anos: %d\n", men );
    printf( "Total de pessoas com mais de 50 anos: %d\n", mai );

    return 0;
}