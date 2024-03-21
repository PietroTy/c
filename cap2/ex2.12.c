#include<stdio.h>
#include<stdlib.h>

int main(void){

    int h1;
    int h2;
    int m1;
    int m2;
    int i1;
    int i2;

    printf("Idade Homem 1: ");
    scanf("%d", &h1);
    printf("Idade Homem 2: ");
    scanf("%d", &h2);
    printf("Idade Mulher 1: ");
    scanf("%d", &m1);
    printf("Idade Mulher 2: ");
    scanf("%d", &m2);

    if ( h1 > h2 && m1 > m2 ) {

        i1 = h1 + m2;
        i2 = h2 * m1;
        printf("Idade homem mais velho + idade mulher mais nova: %d\n", i1);
        printf("Idade homem mais novo * idade mulher mais velha: %d\n", i2);

    } else if ( h1 < h2 && m1 > m2 ) {

        i1 = h2 + m2;
        i2 = h1 * m1;
        printf("Idade homem mais velho + idade mulher mais nova: %d\n", i1);
        printf("Idade homem mais novo * idade mulher mais velha: %d\n", i2);

    } else if ( h1 > h2 && m1 < m2 ) {

        i1 = h1 + m1;
        i2 = h2 * m2;
        printf("Idade homem mais velho + idade mulher mais nova: %d\n", i1);
        printf("Idade homem mais novo * idade mulher mais velha: %d\n", i2);

    } else if ( h1 < h2 && m1 < m2 ) {

        i1 = h2 + m1;
        i2 = h1 * m2;
        printf("Idade homem mais velho + idade mulher mais nova: %d\n", i1);
        printf("Idade homem mais novo * idade mulher mais velha: %d\n", i2);

    }
    return 0;

}