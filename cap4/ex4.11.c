#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n[9];
    int qt;
    int v;

    printf("Quantidade de elementos (1 a 9): ");
    scanf("%d", & qt);

    while(qt < 1 || qt > 9)
    {
        printf("Quantidade incorreta, forneca novamente!\n");
        printf("Quantidade de elementos (1 a 9): ");
        scanf("%d", & qt);
    }
    
    for(int i = 0; i < qt; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", & n[i]);
    }

    printf("Valor que sera inserido: ");
    scanf("%d", & v);
    
    for(int i = qt; i >= 0; i--) n[i] = n[i - 1];
    n[0] = v;
    for(int i = 0; i < qt + 1; i++) printf("array[%d] = %d\n", i, n[i]);

    return 0;
}