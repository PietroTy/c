#include <stdio.h>
#include <stdlib.h>

typedef struct Complexo{
    float real;
    float imaginario;
} Complexo;

Complexo somar( const Complexo *c1, const Complexo *c2 );
void imprimirComplexo( const Complexo *c );

int main(void){

    Complexo n1;
    Complexo n2;
    Complexo soma;

    printf("Complexo 1\n");
    printf("    Parte real: ");
    scanf("%f", &n1.real);
    printf("    Parte imaginaria: ");
    scanf("%f", &n1.imaginario);
    printf("Complexo 2\n");
    printf("    Parte real: ");
    scanf("%f", &n2.real);
    printf("    Parte imaginaria: ");
    scanf("%f", &n2.imaginario);

    soma = somar(&n1, &n2);

    printf("(%.2f + %.2fi) + (%.2f + %.2fi) = ", n1.real, n1.imaginario, n2.real, n2.imaginario);
    imprimirComplexo(&soma);

    return 0;
}

Complexo somar( const Complexo *c1, const Complexo *c2 ){

    Complexo soma;

    soma.real = c1->real + c2->real;
    soma.imaginario = c1->imaginario + c2->imaginario;

    return soma;
}

void imprimirComplexo( const Complexo *c ){

    printf("(%.2f + %.2fi)", c->real, c->imaginario);

}