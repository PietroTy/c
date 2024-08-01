//PietroTy//
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(void){

    char string[41];

    printf("Nome: ");
    fgets( string, 41, stdin );
    string[strlen(string)-1] = '\0';
    
    for(int i = 0; i < strlen(string); i++){

        printf("%s\n", string);

    }
}