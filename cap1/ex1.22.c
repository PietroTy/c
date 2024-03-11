#include<stdio.h>
#include<stdlib.h>

int main(void){

    float v;
    float p;

    printf("Valor do produto: ");
    scanf("%f", &v);

    p = v - ( v * 0.09 );

    printf("Preco de venda com 9%% de desconto: %.2f\n", p);
    
    return 0;
}