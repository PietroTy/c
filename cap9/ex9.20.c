//PietroTy//
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(void){

    char string[41];

    printf("String: ");
    fgets( string, 41, stdin );
    string[strlen(string)-1] = '\0';
    printf("%c, %c, %c, %c.", string[0], string[1], string[2], string[3]);
}