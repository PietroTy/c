#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n1;
    int n2;

    printf("Entre com um numero: ");
    scanf("%d", &n1);
    printf("Entre com outro numero: ");
    scanf("%d", &n2);

    if ( n1 <= n2 ) {

        printf("Ordem decrescente: %d >= %d\n", n2, n1);

    }   else {

        printf("Ordem decrescente: %d >= %d\n", n1, n2);

    }
    
    return 0;
}