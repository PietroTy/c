//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    #define sz 5
    
    int n[sz];
    int b;
    int c = 0;

    for(int i = 0; i < sz; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", & n[i]);
    }
    printf("Buscar por: ");
    scanf("%d", & b);

    for(int i = 0; i < sz; i++) if(b == n[i]) c++;
        
    if(c < 1) printf("O array nao contem o valor %d.\n", b);
    else if (c > 1) printf("O array contem %d ocorrencias do valor %d.\n", c, b); 
    else printf("O array contem %d ocorrencia do valor %d.", c, b); 

    return 0;
}