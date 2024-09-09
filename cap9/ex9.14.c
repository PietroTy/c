#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tornarMaiuscula (char *str);

int main(void){

    char f[41];

    printf("Frase: ");
    fgets(f, 41, stdin);
    f[strlen(f)-1] = '\0';

    tornarMaiuscula(f);

    printf("%s\n", f);



    return 0;
}

void tornarMaiuscula (char *str){
    while (*str){
        if(*str >= 'a' && *str <= 'z'){
            *str = *str - ('a' - 'A');
        }
        str++;
    }

}