#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarOcorrencias(const char *str, char c);

int main(void){

    char f[41];

    printf("Frase: ");
    fgets(f, 41, stdin);
    f[strlen(f)-1] = '\0';

    char l[] = {'A', 'E', 'I', 'O', 'U'};

    for( int i = 0; i<5; i++){
        char mai = l[i];
        char min = mai + ('a' - 'A');

        int omai = contarOcorrencias(f, mai);
        int omin = contarOcorrencias(f, min);

        printf("%c/%c: %d\n", mai, min, omai + omin);
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