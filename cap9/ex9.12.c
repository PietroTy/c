#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int contarOcorrencias(const char *str, char c);

int main(void)
{
    #define T 41

    char str[T];

    int maiuscula = 65; 
    int minuscula = 97;

    printf("Frase: ");
    fgets(str, T, stdin);
    str[strlen(str) - 1] = '\0';

    for(int i = 0; i < 5; i++)
    {
        int ocorrencias = contarOcorrencias(str, maiuscula) + contarOcorrencias(str, minuscula);
        printf("%c/%c: %d\n", maiuscula, minuscula, ocorrencias);

        maiuscula++;
        minuscula++;
    }

    return 0;
}

int contarOcorrencias(const char *str, char c)
{  
    int k = 0;
    
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c)
        {
            k++;
        }
    }
    return k;
}