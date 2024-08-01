//PietroTy//
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(void){

    char palavras1[5][41];
    char palavras2[5][41];

    for(int i = 0; i < 5; i++){

        printf("\nPar %d, palavra 1: ", i+1);
        fgets( palavras1[i], 41, stdin );
        palavras1[i][strlen(palavras1[i])-1] = '\0';
        printf("\nPar %d, palavra 2: ", i+1);
        fgets( palavras2[i], 41, stdin );
        palavras2[i][strlen(palavras2[i])-1] = '\0';

    }
    for(int i = 0; i < 5; i++){

        if(palavras1[i][0] == palavras2[i][0]){

            printf("%s - %s: IGUAIS\n", palavras1[i], palavras2[i]);
        } 
        else if(strcmp(palavras1[i], palavras2[i]) < 0){

            printf("%s - %s: ORDEM CRESCENTE\n", palavras1[i], palavras2[i]);
        }
        else if(strcmp(palavras1[i], palavras2[i]) > 0){

            printf("%s - %s: ORDEM DECRESCENTE\n", palavras1[i], palavras2[i]);
        }


    }

}