#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool contem( const char *fonte, const char *aPesquisar );

int main(void){

    char fonte[41];
    char aPesquisar[41];

    printf("String fonte: \n");
    fgets(fonte, 41, stdin);
    fonte[strlen(fonte)-1] = '\0';
    printf("String a pesquisar: \n");
    fgets(aPesquisar, 41, stdin);
    aPesquisar[strlen(aPesquisar)-1] = '\0';



    if( contem (fonte, aPesquisar)){

        printf("\"%s\" esta contida em \"%s\"\n", aPesquisar, fonte);

    }else{

        printf("\"%s\" nao esta contida em \"%s\"\n", aPesquisar, fonte);

    }



    return 0;
}
bool contem( const char *fonte, const char *aPesquisar){

    int lenFonte = strlen(fonte);
    int lenPesquisar = strlen(aPesquisar);


    if( lenPesquisar > lenFonte){
        return false;
    }
    for( int i = 0; i <= lenFonte - lenPesquisar; i++ ){
        int j;

        for( j = 0; j < lenPesquisar; j++ ){
            if(fonte[i+j] != aPesquisar[j]){
                break;
            }
        }

        if( j == lenPesquisar ){
            return true;
        }
    }

    return false;
}