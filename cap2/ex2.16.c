//PietroTy//
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main (void){

    int n;
    int M;
    int D;
    int C;
    int L;
    int X;
    int V;
    int I;

    printf("Entre com um numero entre 1 e 3999: ");
    scanf("%d", &n);

    M = n / 1000;
    D = (n % 1000) / 500;
    C =  ((n % 1000) % 500) / 100;
    L =  (((n % 1000) % 500) % 100) / 50;
    X =   ((((n % 1000) % 500) % 100) % 50) / 10;
    V = (((((n % 1000) % 500) % 100) % 50) % 10) / 5;
    I =  (((((n % 1000) % 500) % 100) % 50) % 10) % 5;

    if (n > 0 && n < 4000){

        printf("%d = ", n);
        
        if (M != 0) {

            if (M == 3){
                printf("MMM");
            }

            else if (M == 2){
                printf("MM");
            }

            else if (M == 1){
                printf("M");
            }
        }

        if (D != 0){

            if (C != 4){
                printf("D");
            }

            else if (C == 4){
                printf("CM");
            } 
        }

        if (C != 0){

            if (C == 4 && D == 0){
                printf("CD");
            }

            else if (C == 3){
                printf("CCC");
            }

            else if (C == 2){
                printf("CC");
            }

            else if (C == 1){
                printf("C");
            }
        }

        if (L != 0){

            if (X != 4){
                printf("L");
            }

            else if (X == 4){
                printf("XC");
            }
        }

        if (X != 0){

            if (X == 4 && L == 0){
                printf("XL");
            }

            else if (X == 3){
                printf("XXX");
            }

            else if (X == 2){
                printf("XX");
            }

            else if (X == 1){
                printf("X");
            }
        }

        if (V != 0){

            if (I != 4){
                printf("V");
            }

            else if (I == 4){
                printf("IX");
            }
        }

        if (I != 0){

            if (I == 4 && V == 0){
                printf("IV");
            }

            else if (I == 3){
                printf("III");
            }

            else if (I == 2){
                printf("II");
            }

            else if (I == 1){
                printf("I");
            }
        }
    }

    else {
        printf("Numero incorreto!");
    }

    return 0;
}