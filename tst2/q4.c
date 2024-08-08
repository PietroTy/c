//PietroTy//
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


bool verificar( const char *codificado, const char *decodificado, int n );

int main(void){

    char dec[41];
    char cod[41];
    int quantidade;


    printf("Quantidade: ");
    scanf("%d", &quantidade);

    printf("Codificado: ");
    for(int i = 0; i < quantidade; i++){
        printf("c[%d]: ", i);
        scanf("%d", &cod[i]);
    }

    printf("Decodificado: ");
    for(int i = 0; i < quantidade; i++){
        printf("c[%d]: ", i);
        scanf("%d", &dec[i]);
    }


    if (verificar( cod, dec, quantidade) == true){
        printf("arrays equivalentes");

    }
    else{
        printf("arrays equivalentes");

    }


    return 0;
}

bool verificar( const char *codificado, const char *decodificado, int n ){

    int cod1[41];
    for(int i = 0; i < n; i++){

        if (codificado[i] == 'A'||codificado[i] == 'B'||codificado[i] == 'C'){
        
            cod1[i] = 2;
        }
        else if (codificado[i] == 'D'||codificado[i] == 'E'||codificado[i] == 'F'){
        
            cod1[i] = 3;
        }
        else if (codificado[i] == 'G'||codificado[i] == 'H'||codificado[i] == 'I'){
        
            cod1[i] = 4;
        }
        else if (codificado[i] == 'J'||codificado[i] == 'K'||codificado[i] == 'L'){
        
            cod1[i] = 5;
        }
        else if (codificado[i] == 'M'||codificado[i] == 'N'||codificado[i] == 'O'){
        
            cod1[i] = 6;
        }
        else if (codificado[i] == 'P'||codificado[i] == 'Q'||codificado[i] == 'R'||codificado[i] == 'S'){
        
            cod1[i] = 7;
        }
        else if (codificado[i] == 'T'||codificado[i] == 'U'||codificado[i] == 'V'){
        
            cod1[i] = 8;
        }
        else if (codificado[i] == 'W'||codificado[i] == 'X'||codificado[i] == 'Y'||codificado[i] == 'Z'){
        
            cod1[i] = 9;
        }
        else if (codificado[i] == 0){
        
            cod1[i] = 0;
        }
        else if (codificado[i] == 1){
        
            cod1[i] = 1;
        }
    }


    if (cod1 == decodificado){
        
        return true;
    }
    else{
        
        return false;

    }
    

}


