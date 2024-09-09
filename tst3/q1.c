//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void)
{


    int n[5];
    int b;


    for(int i = 0; i < 5; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", & n[i]);
    }
    printf("Buscar por: ");
    scanf("%d", & b);

    for(int i = 0; i < 5; i++)
    {
        if(b == n[i]) printf("Indice %d: ACHEI\n", i);
        else printf("Indice %d: NAO ACHEI\n", i);
    }
    return 0;
}