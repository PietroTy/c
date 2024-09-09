#include <stdio.h>
#include <stdlib.h>

typedef struct Fracao{
    float numerador;
    float denominador;
} Fracao;

Fracao somar( const Fracao *f1, const Fracao *f2 );
Fracao subtrair( const Fracao *f1, const Fracao *f2 );
Fracao multiplicar( const Fracao *f1, const Fracao *f2 );
Fracao dividir( const Fracao *f1, const Fracao *f2 );
void imprimirFracao( const Fracao *f );

int main(void){

    Fracao n1;
    Fracao n2;
    Fracao resultado;

    printf("Fracao 1\n");
    printf("    Numerador: ");
    scanf("%f", &n1.numerador);
    printf("    Denominador: ");
    scanf("%f", &n1.denominador);
    printf("Fracao 2\n");
    printf("    Numerador: ");
    scanf("%f", &n2.numerador);
    printf("    Denominador: ");
    scanf("%f", &n2.denominador);

    resultado = somar(&n1, &n2);
    printf("%.2f/%.2f + %.2f/%.2f = ", n1.numerador, n1.denominador, n2.numerador, n2.denominador);
    imprimirFracao(&resultado);

    resultado = subtrair(&n1, &n2);
    printf("%.2f/%.2f - %.2f/%.2f = ", n1.numerador, n1.denominador, n2.numerador, n2.denominador);
    imprimirFracao(&resultado);

    resultado = multiplicar(&n1, &n2);
    printf("%.2f/%.2f * %.2f/%.2f = ", n1.numerador, n1.denominador, n2.numerador, n2.denominador);
    imprimirFracao(&resultado);

    resultado = dividir(&n1, &n2);
    printf("%.2f/%.2f / %.2f/%.2f = ", n1.numerador, n1.denominador, n2.numerador, n2.denominador);
    imprimirFracao(&resultado);

    return 0;
}

Fracao somar( const Fracao *f1, const Fracao *f2 ){

    Fracao resultado;

    if(f1->denominador != f2->denominador){
        resultado.denominador = f1->denominador * f2->denominador;
        resultado.numerador = (f1->numerador * f2->denominador) + (f2->numerador * f1->denominador);
    } else{
        resultado.numerador = f1->numerador + f2->numerador;
        resultado.denominador = f1->denominador;
    }

    return resultado;
}

Fracao subtrair( const Fracao *f1, const Fracao *f2 ){

    Fracao resultado;

    if(f1->denominador != f2->denominador){
        resultado.denominador = f1->denominador * f2->denominador;
        resultado.numerador = (f1->numerador * f2->denominador) - (f2->numerador * f1->denominador);
    } else{
        resultado.numerador = f1->numerador - f2->numerador;
        resultado.denominador = f1->denominador;
    }

    return resultado;
}

Fracao multiplicar( const Fracao *f1, const Fracao *f2 ){

    Fracao resultado;

    resultado.numerador = f1->numerador * f2->numerador;
    resultado.denominador = f1->denominador * f2->denominador;

    return resultado;
}

Fracao dividir( const Fracao *f1, const Fracao *f2 ){

    Fracao resultado;

    resultado.numerador = f1->numerador * f2->denominador;
    resultado.denominador = f1->denominador * f2->numerador;

    return resultado;
}

void imprimirFracao( const Fracao *f ){
    
    printf("%.2f/%.2f\n", f->numerador, f->denominador);

}
