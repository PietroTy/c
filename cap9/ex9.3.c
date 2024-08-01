//PietroTy//
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(void){

    char string[41];
    int a;

    printf("Sentenca: ");
    fgets( string, 41, stdin );
    string[strlen(string)-1] = '\0';
    
    for(int i = 0; i < strlen(string)-2; i=i+2){

        if(string[i] == ' '){

            printf("' ', ", string[i]);
        } 
        else{

            printf("%c, ", string[i]);
        }

        a = i;

    }

    printf("%c", string[a + 2]);
}