//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void){

    float n1;
    float n2;
    char op;
    float n3;

    printf("N1: ");
    scanf("%f", &n1);
    printf("N2: ");
    scanf("%f", &n2);
    printf("Escolha uma operacao de acordo com o menu:\n+) Adicao;\n-) Subtracao;\n*) Multiplicacao;\n/) Divisao.\nOperacao: ");
    scanf(" %c", &op);

    switch ( op ) {
    case '+':
        n3 = n1 + n2;

        printf("%.2f %c %.2f = %.2f\n", n1, op, n2, n3);    
    break;

    case '-':
        n3 = n1 - n2;

        printf("%.2f %c %.2f = %.2f\n", n1, op, n2, n3);
    break;

    case '*':
        n3 = n1 * n2;

        printf("%.2f %c %.2f = %.2f\n", n1, op, n2, n3);
    break;

    case '/':
        n3 = n1 / n2;

        printf("%.2f %c %.2f = %.2f\n", n1, op, n2, n3);    
    break;

    default:
        printf("Opcao invalida!\n");
    break;
    }
    return 0;

}