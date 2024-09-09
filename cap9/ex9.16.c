#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removerLetra (char *str, char c);

int main(void){

    char frase[41];
    char caractere;

    printf("Frase: ");
    fgets(frase, 41, stdin);
    frase[strlen(frase)-1] = '\0';

    printf("Caractere: ");
    scanf("%c", &caractere);

    removerLetra(frase, caractere);

    printf("%s\n", frase);


    return 0;
}

void removerLetra (char *str, char c){
    char *leitura = str;
    char *escrita = str;
    
    while(*leitura){
        if(*leitura != c && *leitura != c - ('a' - 'A') && *leitura != c + ('a' - 'A')){
            *escrita++ = *leitura;
        }
        leitura++;
    }
    *escrita = '\0';

}