//PietroTy//
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(void)
{
    #define sz 10

    int n[sz];
    int rm;
    bool posf;

    for(int i = 0; i < sz; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", & n[i]);
    }

    do
    {
        printf("Posicao a ser removida (0 a 9): ");
        scanf("%d", & rm);
        if(rm < 1 || rm > 9) 
        {
            printf("Posicao invalida, forneca novamente!\n");
            posf = true;
        } else posf = false;
    } while (posf);

    for(int i = 0; i < rm; i++) printf("array[%d] = %d\n", i, n[i]);
    for(int i = rm; i < sz - 1; i++)
    {
        n[i] = n[i + 1];
        printf("array[%d] = %d\n", i, n[i]);
    }

    return 0;
}