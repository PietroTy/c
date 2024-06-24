//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    #define sz 5
    
    int n[sz];

    for(int i = 0; i < sz; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", & n[i]);
    }
    for(int i = 0; i < 4; i++) 
    {
        n[i] = n[i + 1];
        printf("array[%d] = %d\n", i, n[i]);
    }
    
    return 0;
}