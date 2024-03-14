#include<stdio.h>
#include<stdlib.h>

int main(void){

    float l;
    float ml;
    float p;
    float a;

    printf("Entre com a quantidade de lados: ");
    scanf("%f", &l);
    printf("Entre com a medida do lado: ");
    scanf("%f", &ml);

    p = ml * l;
    a = ml * ml;

    if ( l == 3 ) {

        printf("TRIANGULO de perimetro %.2f\n", p);

    }   else if ( l == 4 ){

        printf("QUADRADO de area %.2f\n", a);

    }   else if ( l == 5 ){

        printf("PENTAGONO\n");

    }   else {

        printf("Poligono nao identificado\n");

    }   

        
    return 0;
}