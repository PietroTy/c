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
bool intercepta( const Retangulo *r1, const Retangulo *r2 );

int main( void ) {

    Ponto supEsq1;
    Ponto infDir1;
    Ponto supEsq2;
    Ponto infDir2;

    printf( "Retangulo 1\n" );
    printf( "Ponto superior esquerdo\n" );
    printf( "    x: " );
    scanf( "%d", &supEsq1.x );
    printf( "    y: " );
    scanf( "%d", &supEsq1.y );

    printf( "Ponto inferior direito\n" );
    printf( "    x: " );
    scanf( "%d", &infDir1.x );
    printf( "    y: " );
    scanf( "%d", &infDir1.y );

    Retangulo ret1 = novoRetangulo( &supEsq1, &infDir1 );

    printf( "Retangulo 2\n" );
    printf( "Ponto superior esquerdo\n" );
    printf( "    x: " );
    scanf( "%d", &supEsq2.x );
    printf( "    y: " );
    scanf( "%d", &supEsq2.y );

    printf( "Ponto inferior direito\n" );
    printf( "    x: " );
    scanf( "%d", &infDir2.x );
    printf( "    y: " );
    scanf( "%d", &infDir2.y );

    Retangulo ret2 = novoRetangulo( &supEsq2, &infDir2 );

    if ( intercepta( &ret1, &ret2 ) ) {
        printf( "Os retangulos se interceptam!" );
    } else {
        printf( "Os retangulos nao se interceptam!" );
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

bool intercepta( const Retangulo *r1, const Retangulo *r2 ) {

    Ponto supDirRet1 = { 
        .x = r1->inferiorDireito.x, 
        .y = r1->superiorEsquerdo.y
    };

    Ponto infEsqRet1 = { 
        .x = r1->superiorEsquerdo.x, 
        .y = r1->inferiorDireito.y
    };

    Ponto supDirRet2 = { 
        .x = r2->inferiorDireito.x, 
        .y = r2->superiorEsquerdo.y
    };

    Ponto infEsqRet2 = { 
        .x = r2->superiorEsquerdo.x, 
        .y = r2->inferiorDireito.y
    };

    return contem( r1, &(r2->superiorEsquerdo ) ) ||
           contem( r1, &(r2->inferiorDireito ) ) ||
           contem( r1, &supDirRet2 ) ||
           contem( r1, &infEsqRet2 ) ||
           contem( r2, &(r1->superiorEsquerdo ) ) ||
           contem( r2, &(r1->inferiorDireito ) ) ||
           contem( r2, &supDirRet1 ) ||
           contem( r2, &infEsqRet1 );

}
