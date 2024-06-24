//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    #define sz 5

    int n[sz];
    int b;

    for(int i = 0; i < sz; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", & n[i]);
    }
    printf("Buscar por: ");
    scanf("%d", & b);

    for(int i = 0; i < sz; i++)
    {
        if(b == n[i]) printf("Indice %d: ACHEI\n", i);
        else printf("Indice %d: NAO ACHEI\n", i);
    }
    return 0;
}