#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    #define sz 5
    
    int a[sz];
    int am[sz];
    int m;

    for(int i = 0; i < sz; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", & a[i]);
    }
    printf("Multiplicar por: ");
    scanf("%d", & m);
    
    for(int i = 0; i < sz; i++)
    {
        am[i] = a[i] * m;
        printf("arrayMult[%d] = %d\n", i, am[i]);
    }
    return 0;
}