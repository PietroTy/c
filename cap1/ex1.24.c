#include<stdio.h>
#include<stdlib.h>

int main(void){

    float h;
    float q;
    float i;
    float s;

    printf("Valor da hora/aula: ");
    scanf("%f", &h);
    printf("Quantidade de aulas: ");
    scanf("%f", &q);
    printf("Porcentagem de desconto do INSS: ");
    scanf("%f", &i);

    s = ( h * q ) * (100 - i) / 100;

    printf("Salario Liquido: %.2f\n", s);
    
    return 0;
}