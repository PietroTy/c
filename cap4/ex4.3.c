#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    #define sz 5

    float n[sz];
    float s = 0;
    float p = 1;

    for(int i = 0; i < sz; i++)
    {
        printf("array[%d]: ", i);
        scanf("%f", & n[i]);

        s = s + n[i];
        p = p * n[i];
    }
    printf("Somatorio: %.2f\n", s);
    printf("Produtorio: %.2f", p);

    return 0;
}