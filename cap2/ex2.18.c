#include<stdio.h>
#include<stdlib.h>

int main(void){

    float n1;
    float n2;
    char op;

    printf("N1: ");
    scanf("%f", &n1);
    printf("N2: ");
    scanf("%f", &n2);
    printf("Escolha uma operacao de acordo com o menu:\n+) Adicao;\n-) Subtracao;\n*) Multiplicacao;\n/) Divisao.\nOperacao: ");
    scanf("%c", &op);

    if (  < 16 ) {

        printf("Nao eleitor.\n");

    } else if ( i >= 18 && i <= 65 ) {

        printf("Eleitor obrigatorio.\n");

    } else if ( i >= 16 && i < 18 || i > 65 ) {

        printf("Eleitor facultativo.\n");

    }
    return 0;

}