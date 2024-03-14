#include<stdio.h>
#include<stdlib.h>

int main(void){

    float n1;
    float n2;
    float so;
    float su;

    printf("Entre com um numero: ");
    scanf("%f", &n1);
    printf("Entre com outro numero: ");
    scanf("%f", &n2);

    so = n1 + n2;
    su = n1 - n2;

    if ( so > 10 ) {

        printf("Os numeros fornecidos foram %.2f e %.2f\n", n1, n2);
        
    }   else {

        printf("A subtracao entre %.2f e %.2f e igual a %.2f\n", n1, n2, su);

    }
   
    return 0;
}