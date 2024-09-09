#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimirCaixa( const char *str );

int main(void){

    char string[41];

    printf("String: \n");
    fgets(string, 41, stdin);
    string[strlen(string)-1] = '\0';

    imprimirCaixa(string);

    return 0;
}

void imprimirCaixa( const char *str){
    int larguraTerminal = 80;
    int comprimentoString = strlen(str) + 2;
    int espacoAntes = (comprimentoString - comprimentoString) / 2;

    printf("++");
    for( int i = 0; i < comprimentoString; i++){
        putchar('=');
    }
    printf("++\n");

    printf("||");
    
    printf(" %s ", str);
    
    printf("||\n");

    printf("++");
    for( int i = 0; i < comprimentoString; i++){
        putchar('=');
    }
    printf("++\n");
}
