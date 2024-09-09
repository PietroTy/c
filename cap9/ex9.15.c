#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tornarMinuscula (char *str);

int main(void){

    char f[41];
    fgets(f, 41, stdin);
    f[strlen(f)-1] = '\0';

    tornarMinuscula(f);

    printf("%s\n", f);


    return 0;
}

void tornarMinuscula (char *str){
    while(*str){
        if(*str >= 'A' && *str <= 'Z'){
            *str = *str - ('A' - 'a');
        }
        str++;
    }
}