//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void){

    int a;
    int b;
    int g;

    printf("alfa: ");
    scanf("%d", &a);
    printf("beta: ");
    scanf("%d", &b);
    printf("gama: ");
    scanf("%d", &g);

    if ( a + b + g == 180 ) {

    if ( a == 90 || b == 90 || g == 90 ) {

        printf("Triangulo RETANGULO\n");

    }   else if ( a > 90 || b > 90 || g > 90 ){

        printf("Triangulo OBTUSANGULO\n");

    }   else if ( a < 90 && b < 90 && g < 90 ){

        printf("Triangulo ACUTANGULO\n");

    }
    }   else {

        printf("As medidas fornecidas dos angulos nao representam um triangulo valido!\n");

    }
        
    return 0;

}