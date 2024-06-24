//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void){

    float f;
    float c;

    printf("Temperatura em graus Celsius: ");
    scanf("%f", &c);

    f = ( c * 1.8 ) + 32;

    printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit\n", c, f);
    
    return 0;
}