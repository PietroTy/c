//PietroTy//
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(void){

    char string[3][41];
    char m[3][41];
    int n;

    for(int i = 0; i < 3; i++){

        printf("\nString %d: ", i+1);
        fgets( string[i], 41, stdin );
        string[i][strlen(string[i])-1] = '\0';

    }
    if(strcmp(string[0], string[1]) < 0 && strcmp(string[1], string[2]) < 0){

        printf("%s, %s e %s", string[0], string[1], string[2]);
    }
    else if(strcmp(string[2], string[1], string[0]) < 0){

        printf("%s, %s e %s", string[0], string[1], string[2]);
    }
    else if(strcmp(string[2], string[1], string[0]) < 0){

        printf("%s, %s e %s", string[0], string[1], string[2]);
    }
    else if(strcmp(string[2], string[1], string[0]) < 0){

        printf("%s, %s e %s", string[0], string[1], string[2]);
    }
    else if(strcmp(string[2], string[1], string[0]) < 0){

        printf("%s, %s e %s", string[0], string[1], string[2]);
    }
    else if(strcmp(string[2], string[1], string[0]) < 0){

        printf("%s, %s e %s", string[0], string[1], string[2]);
    }
    
}