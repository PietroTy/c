//PietroTy//
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

void tornarMinuscula( char *str );

int main(void){

    char string[41];

    printf("Frase: ");
    fgets( string, 41, stdin );
    string[strlen(string)-1] = '\0';

    tornarMinuscula(&string);
    printf("%c", string);


}

void tornarMinuscula( char *str ){
    *str = tolower(str);

}