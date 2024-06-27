//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    #define sz 5

    int n[sz];
    int iv[sz];

    for(int i = 0; i < sz; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", & n[i]);
    }
    for(int i = 0; i < sz; i++)
    {
        for(int j = 4; j >= 0; j--)
        {
            if(i + j == 4) iv[i] = n[j];
        }
    } 
    for(int i = 0; i < sz; i++) printf("arrayInv[%d] = %d\n", i, iv[i]);

    return 0;
}