#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tamanho( const char *str);

int main(void){

    char string[41];

    printf("Frase: ");
    fgets(string, 41, stdin);
    string[strlen(string)-1] = '\0';

    int numCarac = tamanho(string);

    printf("%d caractere(s)!\n", numCarac);
    



    return 0;
}

int tamanho( const char *str){
    int count = 0;

    while( *str != '\0'){
        count++;
        str++;
    }

    return count;
}