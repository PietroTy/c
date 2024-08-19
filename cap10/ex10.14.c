#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
void mover( Retangulo *r, int x, int y );
bool contem( const Retangulo *r, const Ponto *p );

int main( void ) {

    Ponto p1;
    Ponto p2;
    Ponto pontos[5];

    printf( "Retangulo\n" );
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

    printf( "Pontos\n" );
    for ( int i = 0; i < 5; i++ ) {
        printf( "  Ponto %d\n", i+1 );
        printf( "    x: " );
        scanf( "%d", &pontos[i].x );
        printf( "    y: " );
        scanf( "%d", &pontos[i].y );
    } 

    for ( int i = 0; i < 5; i++ ) {
        printf( "(%+02d, %+02d): ", pontos[i].x, pontos[i].y );
        if ( contem( &novo, &pontos[i] ) ) {
            printf( "contido!\n" );
        } else {
            printf( "nao contido!\n" );
        }
    }

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

void mover( Retangulo *r, int x, int y ) {
    r->superiorEsquerdo.x += x;
    r->superiorEsquerdo.y += y;
    r->inferiorDireito.x += x;
    r->inferiorDireito.y += y;
}

bool contem( const Retangulo *r, const Ponto *p ) {

    return p->x >= r->superiorEsquerdo.x && 
           p->x <= r->inferiorDireito.x &&
           p->y >= r->inferiorDireito.y &&
           p->y <= r->superiorEsquerdo.y;

}
