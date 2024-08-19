#include <stdio.h>
#include <stdlib.h>

typedef struct Cor {
    int vermelho;
    int verde;
    int azul;
} Cor;

Cor novaCor(int vermelho, int verde, int azul);
Cor clarear(const Cor *c);
void imprimirCor(const Cor *c);
void imprimirCorClar(const Cor *c);

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

    cor = clarear(&cor);
    imprimirCorClar(&cor);

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

Cor clarear(const Cor *c){
    
    Cor cClar;

    if(c->vermelho == 0 && c->verde == 0 && c->azul == 0){
        cClar.vermelho = cClar.verde = cClar.azul = 3;
        return cClar;
    }

    if(c->vermelho > 0 && c->vermelho < 3){
        cClar.vermelho = 3;
    } else{
        cClar.vermelho = c->vermelho;
    }

    if(c->verde > 0 && c->verde < 3){
        cClar.verde = 3;
    } else{
        cClar.verde = c->verde;
    }

    if(c->azul > 0 && c->azul < 3){
        cClar.azul = 3;
    } else{
        cClar.azul = c->azul;
    }

    cClar.vermelho = cClar.vermelho / 0.7;
    if(cClar.vermelho > 255){
        cClar.vermelho = 255;
    }

    cClar.verde = cClar.verde / 0.7;
    if(cClar.verde > 255){
        cClar.verde = 255;
    }

    cClar.azul = cClar.azul / 0.7;
    if(cClar.azul > 255){
        cClar.azul = 255;
    }

    return cClar;
    
}

void imprimirCor(const Cor *c) {
    printf("Cor base: rgb( %d, %d, %d )\n", c->vermelho, c->verde, c->azul);
}

void imprimirCorClar(const Cor *c) {
    printf("Cor clareada: rgb( %d, %d, %d )\n", c->vermelho, c->verde, c->azul);
}

