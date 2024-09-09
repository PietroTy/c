//PietroTy//
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(void){

    char p1[5][41];
    char p2[5][41];

    for(int i = 0; i < 5; i++){

        printf("\nPar %d, palavra 1: ", i+1);
        fgets( p1[i], 41, stdin );
        p1[i][strlen(p1[i])-1] = '\0';
        printf("\nPar %d, palavra 2: ", i+1);
        fgets( p2[i], 41, stdin );
        p2[i][strlen(p2[i])-1] = '\0';

    }
    for(int i = 0; i < 5; i++){

        if(p1[i][0] == p2[i][0]){

            printf("%s - %s: IGUAIS\n", p1[i], p2[i]);
        } 
        else if(strcmp(p1[i], p2[i]) < 0){

            printf("%s - %s: ORDEM CRESCENTE\n", p1[i], p2[i]);
        }
        else if(strcmp(p1[i], p2[i]) > 0){

            printf("%s - %s: ORDEM DECRESCENTE\n", p1[i], p2[i]);
        }


    }

}