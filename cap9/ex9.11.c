#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarOcorrencias(const char *str, char c);


int main(void){

    char c;
    char f[41];

   
    printf("Caractere: ");
    scanf("%c", &c);

    getchar();

    while(1) {
    printf("Frase: ");
    fgets(f, 41, stdin);
    f[strlen(f)-1] = '\0';

    if(strcmp(f, "fim") == 0){
        break;
    }

    int o = contarOcorrencias (f, c);

    printf("\"%s\" tem %d ocorrencia(s) do caractere '%c'\n", f, o, c);

    }
    

    return 0;
}

int contarOcorrencias(const char *str, char c){
    int m = 0;
    while(*str){
        if(*str == c){
            m++;
        }

        str++;
    }

    return m;
}