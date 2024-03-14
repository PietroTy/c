#include<stdio.h>
#include<stdlib.h>

int main(void){

    float n1;
    float n2;
    float n3;
    float s;

    printf("N1: ");
    scanf("%f", &n1);
    printf("N2: ");
    scanf("%f", &n2);
    printf("N3: ");
    scanf("%f", &n3);

    if ( n1 <= n2 ) {

        if ( n1 <= n3 ) {

            s = n3 + n2;

            printf("A soma dos dois numeros maiores fornecidos e %.2f\n", s);

        }   else {

            s = n1 + n2;

            printf("A soma dos dois numeros maiores fornecidos e %.2f\n", s);
        }

        

    }   else if ( n2 <= n3 ){

        if ( n2 <= n1 ) {

            s = n1 + n3;

            printf("A soma dos dois numeros maiores fornecidos e %.2f\n", s);

        }   else {

            s = n2 + n3;

            printf("A soma dos dois numeros maiores fornecidos e %.2f\n", s);
        }
    }   else if ( n3 <= n1 ){

        if ( n3 <= n2 ) {

            s = n2 + n1;

            printf("A soma dos dois numeros maiores fornecidos e %.2f\n", s);

        }   else {

            s = n3 + n1;

            printf("A soma dos dois numeros maiores fornecidos e %.2f\n", s);
        }
    }   

        
    return 0;
}