#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    #define sz 5
    
    int n[sz];
    int b;
    int ind[sz];
    int c = 0;

    for(int i = 0; i < sz; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", & n[i]);
    }
    printf("Buscar por: ");
    scanf("%d", & b);

    for(int i = 0; i < sz; i++)
    {
        if(b == n[i])
        { 
            ind[c] = i;
            c++;
        }
    }
    if(c == 0) printf("O array nao contem o valor %d.", b);
    else if(c == 1) printf("O valor %d foi encontrado no indice %d do array.", b, ind[0]);
    else if(c == 2) printf("O valor %d foi encontrado nos indices %d e %d do array.", b, ind[0], ind[1]);
    else if(c == 3) printf("O valor %d foi encontrado nos indices %d, %d e %d do array.", b, ind[0], ind[1], ind[2]);
    else if(c == 4) printf("O valor %d foi encontrado nos indices %d, %d, %d e %d do array.", b, ind[0], ind[1], ind[2], ind[3]);
    else printf("O valor %d foi encontrado nos indices %d, %d, %d, %d e %d do array.", b, ind[0], ind[1], ind[2], ind[3], ind[4]);

    return 0;
}