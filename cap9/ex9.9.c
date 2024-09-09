#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter (char *destino, const char *origem);

int main(void){

    char string1[41];
    char string2[41];

    printf("String: ");
    fgets( string1, 41, stdin);
    string1[strlen(string1)-1] = '\0';

    inverter(string2, string1);

    printf( "Invertida: %s\n", string2);

    return 0;
}

void inverter (char *destino, const char *origem){
    int t = strlen (origem);
    int k = 0;

    for( int i = t -1; i >= 0; i--){
        destino[k] = origem[i];
        k++;
    }
    destino[k] = '\0';
}