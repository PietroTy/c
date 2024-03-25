#include<stdio.h>
#include<stdlib.h>

int main(void){

    char op;
    float c;
    float f;

    printf("Escolha uma operacao de acordo com o menu:\nC) Celsius -> Fahrenheit;\nF)Fahrenheit -> Celsius.\nOpcao: ");
    scanf(" %c", &op);

    switch ( op ) {
    case 'C':
        printf("Entre com a temperatura em graus Celsius: ");
        scanf("%f", &c);

        f = (c * 1.8) + 32;

        printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit\n", c, f);    
    break;

    case 'F':
        printf("Entre com a temperatura em graus Fahrenheit: ");
        scanf("%f", &f);

        c = (f - 32) / 1.8;

        printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius\n", f, c);
    break;

    default:
        printf("Opcao invalida!\n");
    break;
    }
    return 0;

}