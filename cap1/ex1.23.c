//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n;
    int a;
    int i;

    printf("Ano de nascimento: ");
    scanf("%d", &n);
    printf("Ano atual: ");
    scanf("%d", &a);

    i = a - n;

    printf("Idade aproximada: %d anos\n", i);
    
    return 0;
}