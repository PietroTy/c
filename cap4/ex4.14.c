//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    #define sz 10

    int n[sz];
    int rm = 0;

    for(int i = 0; i < sz; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", & n[i]);
    } 

    for(int i = 0; i < sz - rm; i++)
    {
        if(n[i] % 2 == 0)
        {
            rm++;
            for(int j = i; j < 9; j++)
            {
                n[j] = n[j + 1];
            }
            i--;
        }
    }

    for (int i = 0; i < 10 - rm; i++)
    {
        printf("array[%d] = %d\n", i, n[i]);
    }

    return 0;
}