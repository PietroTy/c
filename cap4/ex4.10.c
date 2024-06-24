#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    #define sz 5
    
    int n[sz];
    int m;
    int cp[sz];
    int ct;
    
    for(int i = 0; i < sz; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", & n[i]);
    }
    printf("Copiar maiores que: ");
    scanf("%d", & m);

    for(int i = 0; i < sz; i++)
    {
        if(m < n[i])
        {
            cp[ct] = n[i];
            ct++;
        }
    }
    if(ct == 0) printf("Nao houve copia!");
    else for(int i = 0; i < ct; i++) printf("arrayCopia[%d] = %d\n", i, cp[i]);

    return 0;
}