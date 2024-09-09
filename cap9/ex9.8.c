#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trocarString (char *a, char *b, char *c);

int main(void){

    char string1 [41];
    char string2 [41];
    char string3 [41];

    printf("String 1: ");
    fgets(string1, 41, stdin);
    string1[strlen(string1)-1] = '\0';

    printf("String 2: ");
    fgets(string2, 41, stdin);
    string2[strlen(string2)-1] = '\0';

    printf("String 3: ");
    fgets(string3, 41, stdin);
    string3[strlen(string3)-1] = '\0';
  
    trocarString(string1, string2, string3);

    return 0;
}

void trocarString (char *a, char *b, char *c){
    char t[41];

    if( strcmp(a, b) > 0 ){
    strcpy (t, a);
    strcpy (a, b);
    strcpy (b, t);

    }

    if( strcmp(b, c) > 0 ){
    strcpy (t, b);
    strcpy (b, c);
    strcpy (c, t);

    }

    if( strcmp(a, b) > 0 ){
    strcpy (t, a);
    strcpy (a, b);
    strcpy (b, t);

    }

    printf("%s, %s e %s\n", a, b, c);
}