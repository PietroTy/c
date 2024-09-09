#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimirCentralizado( const char *str );

int main(void){

    char string[41];


    printf("String: ");
    fgets(string, 41, stdin);
    string[strlen(string)-1]= '\0';


    imprimirCentralizado(string);

    return 0;

}
void imprimirCentralizado( const char *str){

    int larguraTerminal = 80;
    int comprimentoString = strlen(str);

    int espacoAntes = (larguraTerminal - comprimentoString) / 2;

    for( int i = 0; i < espacoAntes; i++){
        putchar(' ');
    }
    
    printf("%s\n", str);
}