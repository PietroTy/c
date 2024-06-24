//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void){

    float w;
    float h;
    float imc;

    printf("Entre com seu peso em quilogramas: ");
    scanf("%f", &w);
    printf("Entre com sua altura em metros: ");
    scanf("%f", &h);

    imc = w / ( h * h);

    if ( imc < 17 ) {

        printf("IMC: %.2f\n", imc);
        printf("Voce esta muito abaixo do peso ideal!\n");

    } else if ( imc >= 17 && imc < 18.5 ) {

        printf("IMC: %.2f\n", imc);
        printf("Voce esta abaixo do peso ideal!\n");

    } else if ( imc >= 18.5 && imc < 25 ) {

        printf("IMC: %.2f\n", imc);
        printf("Parabens! Voce esta em seu peso normal!\n");

    } else if ( imc >= 25 && imc < 30 ) {

        printf("IMC: %.2f\n", imc);
        printf("Atencao, voce esta acima de seu peso (sobrepeso)!\n");

    } else if ( imc >= 30 && imc < 35 ) {

        printf("IMC: %.2f\n", imc);
        printf("Cuidado! Obesidade grau I!\n");

    } else if ( imc >= 35 && imc < 40 ) {

        printf("IMC: %.2f\n", imc);
        printf("Cuidado! Obesidade grau II!\n");

    } else if ( imc >= 40 ) {

        printf("IMC: %.2f\n", imc);
        printf("Muito cuidado!!! Obesidade grau III!\n");

    }
    return 0;

}