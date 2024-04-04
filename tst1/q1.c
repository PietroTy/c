#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n1;
    int n2;
    int sm;
    int sb;
    int mt;
    int dv;

    printf("Primeiro numero: ");
    scanf("%d", &n1);
    printf("Segundo numero: ");
    scanf("%d", &n2);

    sm = n1 + n2;
    sb = n1 - n2;
    mt = n1 * n2;
    dv = n1 / n2;

    printf("%d + %d = %d\n", n1, n2, sm);
    printf("%d - %d = %d\n", n1, n2, sb);
    printf("%d * %d = %d\n", n1, n2, mt);
    printf("%d / %d = %d\n", n1, n2, dv);

    
    return 0;
}