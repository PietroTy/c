//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    #define sz 5

    int n[sz];
    int pr[sz];
    int cp = 0;
    int ip[sz];
    int ci = 0;
    

    for(int i = 0; i < sz; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", & n[i]);
    }
    for(int i = 0; i < sz; i++)
    {
        if(n[i] % 2 == 0)
        {
            pr[cp] = n[i];
            cp++;
        }else
        {
            ip[ci] = n[i];
            ci++;
        }
    }
    printf("Numeros pares:");
    for(int i = 0; i < cp; i++) printf(" %d", pr[i]);
    if (cp == 0) printf(" nao ha");
    printf(".\n");

    printf("Numeros impares:");
    for(int i = 0; i < ci; i++) printf(" %d", ip[i]);
    if (ci == 0) printf(" nao ha");
    printf(".");
    
    return 0;
}