//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n;
    int s;
    int a;

    printf("Forneca um numero inteiro: ");
    scanf("%d", &n);

    s = n + 1;
    a = n - 1;

    printf("Sucessor de %d: %d\n", n, s);
    printf("Antecessor de %d: %d\n", n, a);
    
    return 0;
}