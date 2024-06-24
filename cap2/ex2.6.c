//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void){

    float n;
    float m;
    float t;

    printf("Entre com um valor: ");
    scanf("%f", &n);

    m = n / 2;
    t = n * 3;

    if ( n > 20 ) {

        printf("A metade de %.2f e %.2f\n", n, m);
        
    }   else {

        printf("O triplo de %.2f e %.2f\n", n, t);

    }
   
    return 0;
}