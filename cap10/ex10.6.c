#include <stdio.h>
#include <stdlib.h>

typedef struct Cor {
    int vermelho;
    int verde;
    int azul;
} Cor;

Cor novaCor(int vermelho, int verde, int azul);
void imprimirCor(const Cor *c);

int main(void) {

    Cor cor;
    int vermelho;
    int verde;
    int azul;
    
    printf("Vermelho: ");
    scanf("%d", &vermelho);
    printf("Verde: ");
    scanf("%d", &verde);
    printf("Azul: ");
    scanf("%d", &azul);

    cor = novaCor(vermelho, verde, azul);
    imprimirCor(&cor);

    return 0;
}

Cor novaCor(int vermelho, int verde, int azul) {

    Cor c;

    //Vermelho
    if(vermelho > 255){
        c.vermelho = 255;
    } else if(vermelho < 0){
        c.vermelho = 0;
    } else{
        c.vermelho = vermelho;
    }
    
        //Verde
    if(verde > 255){
        c.verde = 255;
    } else if(verde < 0){
        c.verde = 0;
    } else{
        c.verde = verde;
    }

        //Azul
    if(azul > 255){
        c.azul = 255;
    } else if(azul < 0){
        c.azul = 0;
    } else{
        c.azul = azul;
    }

    return c;
}

void imprimirCor(const Cor *c) {
    printf("Cor: rgb( %d, %d, %d )\n", c->vermelho, c->verde, c->azul);
}
