#include <stdio.h>
#include <stdlib.h>

typedef struct Ponto {
    int x;
    int y;
} Ponto;

typedef struct Retangulo {
    Ponto superiorEsquerdo;
    Ponto inferiorDireito;
} Retangulo;

Retangulo novoRetangulo( const Ponto *sEsq, const Ponto *iDir );
int calcularArea( const Retangulo *r );
void imprimirRentagulo( const Retangulo *r );
Ponto obterCentro( const Retangulo *r );

int main( void ) {

    Ponto p1;
    Ponto p2;

    printf( "Ponto superior esquerdo\n" );
    printf( "    x: " );
    scanf( "%d", &p1.x );
    printf( "    y: " );
    scanf( "%d", &p1.y );

    printf( "Ponto inferior direito\n" );
    printf( "    x: " );
    scanf( "%d", &p2.x );
    printf( "    y: " );
    scanf( "%d", &p2.y );

    Retangulo novo = novoRetangulo( &p1, &p2 );
    imprimirRentagulo( &novo );

    Ponto centro = obterCentro( &novo );
    printf( "Centro: (%+02d, %+02d)", centro.x, centro.y );

    return 0;

}

Retangulo novoRetangulo( const Ponto *sEsq, const Ponto *iDir ) {

    /*Retangulo novoR;
    novoR.superiorEsquerdo.x = sEsq->x;
    novoR.superiorEsquerdo.y = sEsq->y;
    novoR.inferiorDireito.x = iDir->x;
    novoR.inferiorDireito.y = iDir->y;*/

    Retangulo novoR = {
        .superiorEsquerdo = {
            .x = sEsq->x,
            .y = sEsq->y
        },
        .inferiorDireito = {
            .x = iDir->x,
            .y = iDir->y
        }
    };

    return novoR;

}

int calcularArea( const Retangulo *r ) {

    int largura = r->inferiorDireito.x - r->superiorEsquerdo.x;
    int altura = r->superiorEsquerdo.y - r->inferiorDireito.y;

    return largura * altura;

}

void imprimirRentagulo( const Retangulo *r ) {

    printf( "(%+02d, %+02d) =====|\n", r->superiorEsquerdo.x, r->superiorEsquerdo.y );
    printf( "|               |\n" );
    printf( "|               |\n" );
    printf( "|===== (%+02d, %+02d)\n", r->inferiorDireito.x, r->inferiorDireito.y );

}

Ponto obterCentro( const Retangulo *r ) {

    int largura = r->inferiorDireito.x - r->superiorEsquerdo.x;
    int altura = r->superiorEsquerdo.y - r->inferiorDireito.y;

    Ponto centro = {
        .x = r->superiorEsquerdo.x + largura / 2,
        .y = r->inferiorDireito.y + altura / 2
    };

    return centro;

}