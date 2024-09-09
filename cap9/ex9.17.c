#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int contarPalavras (const char *str);

int main(void){

    char f[41];

    printf("Frase: ");
    fgets(f, 41, stdin);
    f[strlen(f)-1] = '\0';

    int qtd = contarPalavras(f);

    printf("Quantidade de palavras: %d", qtd);

    return 0;
}

int contarPalavras (const char *str){
    int m = 0;
    bool emPalavras = false;

    while(*str){
        if(*str == ' ' || *str == '\t' || *str == '\n'){
            if (emPalavras){
                emPalavras = false;
            }
        }else{
            if(!emPalavras){
                m++;
                emPalavras = true;
            }
           
        }
        
         str++;
    }

    return m;
}