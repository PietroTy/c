#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool ehPalindromo( const char *str );

int main(void){


    char string[41];

    printf("String: ");
    fgets(string, 41, stdin);
    string[strlen(string)-1] = '\0';

if(ehPalindromo(string)){
        printf("\"%s\" eh um palindromo!", string);
}else{
        printf("\"%s\" nao eh um palindromo!", string);
    }

    return 0;
}

bool ehPalindromo( const char *str ){
    int inicio = 0;
    int fim = strlen(str)-1;

    while( inicio < fim ){
        if( str[inicio] != str[fim]){
            return false;
        }
        inicio++;
        fim--;
    }

    return true;
}