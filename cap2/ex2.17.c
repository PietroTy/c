//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void){

    int i;

    printf("Entre com sua idade: ");
    scanf("%d", &i);

    switch ( i ) {
    case 2:
        printf("O valor fornecido foi %d.\n", i);
    break;

    case 4:
        printf("O valor fornecido foi %d.\n", i);
    break;

    case 6:
        printf("O valor fornecido foi %d.\n", i);
    break;

    case 8:
        printf("O valor fornecido foi %d.\n", i);
    break;
    
    default:
        printf("Valor invalido.\n");
    break;
    }
    return 0;

}