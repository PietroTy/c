//PietroTy//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool numeroCorreto( int n);
int obtemDigito( int n);
int obtemNumero( int n);
int dig( int n);

int main (void){
    int n;


    printf("Numero: ");
    scanf("%d", &n);

    if( n < 0 || n > 99999){
        printf("Numero fora da faixa permitida");

    }else if( numeroCorreto(n)){

        printf("Numero completo: %d\n", n);
        printf("Numero: %d\n", obtemNumero(n));
        printf("Digito: %d\n", obtemDigito(n));
        printf("Digito calculado: %d\n", dig(obtemNumero(n)));
        printf("O numero fornecido esta correto!\n");

    }else{
        printf("Numero completo: %d\n", n);
        printf("Numero: %d\n", obtemNumero(n));
        printf("Digito: %d\n", obtemDigito(n));
        printf("Digito calculado: %d\n", dig(obtemNumero(n)));
        printf("O numero fornecido esta incorreto!\n");
    }
   
    return 0;
}
int obtemDigito ( int n){
    return n % 10;
}
int obtemNumero (int n){
    return n / 10;
}
int dig ( int n){
    
    int wh = 2;
    int sm = 0;

    while ( n > 0){
        int dgt = n % 10;
        sm += dgt * wh;
        wh++;
        n /= 10;
    }

    int rst = sm % 11;
    int digv = 11 - rst;

    if( digv == 10 || digv == 11){
        digv = 0;
    }

    return digv;
}
bool numeroCorreto (int n){
    int n1 = obtemNumero(n);
    int dgt = obtemDigito(n);
    int dgt1 = dig (n1);
    if( n < 10 || n > 99999){
        return false;
    }else if(dgt == 0 && dgt1 == 0){
        return dgt == dgt1;
    }else{
        return dgt == dgt1;
    }  
}