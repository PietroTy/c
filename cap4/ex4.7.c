#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    #define sz 5

    int n1[sz];
    int n2[sz];
    int s[sz];

    printf("Forneca os valores do primeiro array:\n");
    for(int i = 0; i < sz; i++)
    {
        printf("    array1[%d]: ", i);
        scanf("%d", & n1[i]);
    }
    printf("\n");

    printf("Forneca os valores do segundo array:\n");
    for(int i = 0; i < sz; i++)
    {
        printf("    array2[%d]: ", i);
        scanf("%d", & n2[i]);
    }

    for(int i = 0; i < sz; i++) 
    {
        s[i] = n1[i] + n2[i];
        printf("arraySoma[%d] = %d\n", i, s[i]);
    }

    return 0;
}