#include<stdio.h>
#include<stdlib.h>

int main(void){

    float a;
    float b;
    float c;

    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    if ((a - b) < c && c < (a + b) && (a - c) < b && b < (a + c) && (b - c) < a && a < (b + c)) {

    if ( a == b && b == c ) {

        printf("Triangulo EQUILATERO\n");

    }   else if ( a == b || c == b || a == c ){

        printf("Triangulo ISOSCELES\n");

    }   else if ( a != b && b != c && a != c){

        printf("Triangulo ESCALENO\n");

    }
    }   else {

        printf("As medidas fornecidas dos lados nao representam um triangulo valido!\n");

    }
        
    return 0;

}