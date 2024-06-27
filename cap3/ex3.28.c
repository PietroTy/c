//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main( void )    {

    float s;
    int t;
    float v;

    printf( "Saldo inicial: " );
    scanf( "%f", &s );

    printf( "Operacoes:\n" );
    printf( "   1) Deposito;\n" );
    printf( "   2) Saque;\n");
    printf( "   3) Fim.\n" );

    do {

        printf( "Operacao desejada: " );
        scanf( "%d", &t );

        switch ( t ) {

            case 1:
                printf( "Valor a depositar: " );
                scanf( "%f", &v);
                s += v;
                break;

            case 2:
                printf( "Valor a sacar: " );
                scanf( "%f", &v );
                s -= v;
                break;

            case 3:
                break;

            default:
                printf( "Operacao invalida.\n" );
                break;

        }

    } while ( t != 3 );

    printf( "Saldo final: " );

    if ( s < 0 ) {

        printf( "-" );
    
    }
    printf( "R$%.2f\n", s < 0 ? - s : s );

    if( s < 0 ) {

        printf( "Conta devedora." );

    } else if( s == 0 ) {

        printf( "Sem saldo." );

    } else if( s > 0 ) {

        printf( "Conta preferencial." );

    }

    return 0;
}