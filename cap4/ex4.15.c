#include<stdio.h>
#include<stdio.h>
#include<stdbool.h>

int main(void)
{
    #define sz 5

    int n1[sz];
    int n2[sz];
    int in[sz] = {0};
    int ct = 0;
    bool ex;
    
    printf("Forneca os valores do primeiro array: \n");
    for(int i = 0; i < sz; i++)
    {
        printf("    array1[%d]: ", i);
        scanf("%d", & n1[i]);
    }
    printf("\n");

    printf("Forneca os valores do segundo array: \n");
    for(int i = 0; i < sz; i++)
    {
        printf("    array2[%d]: ", i);
        scanf("%d", & n2[i]);
    }

    for(int i = 0; i < sz; i++)
    {
        for(int j = 0; j < sz; j++)
        {
            if(n1[i] == n2[j]) 
            {
                bool fd = false;
                ex = true;
                for(int k = 0; k < ct; k++)
                {
                    if(in[k] == n1[i])
                    {
                        fd = true;
                        break;
                    }
                }
                if(!fd)
                {
                    in[ct] = n1[i];
                    ct++;
                }
            }
        } 
    }
    if(!ex) printf("Nao ha interseccao entre os elementos dos dois arrays fornecidos!");
    else for(int i = 0; i < ct; i++) printf("arrayInterseccao[%d] = %d\n", i, in[i]); 
    
    return 0;
}