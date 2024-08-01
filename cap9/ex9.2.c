//PietroTy//
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(void){

    char string[41];

    printf("Sentenca: ");
    fgets( string, 41, stdin );
    string[strlen(string)-1] = '\0';
    printf("Primeiro caractere: %c\n", string[0]);
    printf("Ultimo caractere: %c\n", string[strlen(string)-1]);
    printf("Numero de caracteres: %d\n", strlen(string));
}