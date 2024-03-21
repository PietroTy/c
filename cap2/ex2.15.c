#include<stdio.h>
#include<stdlib.h>

int main(void){

    int i;

    printf("Entre com sua idade: ");
    scanf("%d", &i);

    if ( i < 16 ) {

        printf("Nao eleitor.\n");

    } else if ( i >= 18 && i <= 65 ) {

        printf("Eleitor obrigatorio.\n");

    } else if ( i >= 16 && i < 18 || i > 65 ) {

        printf("Eleitor facultativo.\n");

    }
    return 0;

}