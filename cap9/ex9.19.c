#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void substring( char *recorte, const char *origem, int inicio, int fim);

int main(void){

    char string[41];
    char recorte[41];
    int inicio;
    int fim;

    printf("String: ");
    fgets(string, 41, stdin);

    string[strlen(string)-1] = '\0';

    printf("Inicio: ");
    scanf("%d", &inicio);
    printf("Fim: ");
    scanf("%d", &fim);

    substring(recorte, string, inicio, fim);

    printf("Recorte: %s\n", recorte);
    

    return 0;
}

void substring( char *recorte, const char *origem, int inicio, int fim){
    int len = strlen(origem);

    if( inicio < 0 || fim > len || inicio >= fim){

        strcpy(recorte, origem);

    }else{

        strncpy(recorte, origem + inicio, fim - inicio);
        recorte[fim - inicio] = '\0';
    }
}
