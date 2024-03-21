#include<stdio.h>
#include<stdlib.h>

int main(void){

    float n1;
    float n2;
    float no;
    float m;

    printf("Nota Av. 1: ");
    scanf("%f", &n1);
    printf("Nota Av. 2: ");
    scanf("%f", &n2);
    printf("Nota Optativa: ");
    scanf("%f", &no);

    if ( no > n2 && n1 > n2 ) {

        m = ( no + n1 ) / 2;

    } else if ( no > n1 && n2 > n1 ) {

        m = ( no + n2 ) / 2;

    } else {

        m = ( n1 + n2 ) / 2;

    }
    

    if ( m >= 6 ) {

        printf("Media: %.2f\n", m);
        printf("Aprovado!\n");

    } else if ( m >= 4 && m < 6 ) {

        printf("Media: %.2f\n", m);
        printf("Exame.\n");

    } else if ( m < 4 ) {

        printf("Media: %.2f\n", m);
        printf("Reprovado...\n");

    } 
    return 0;

}