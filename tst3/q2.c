//PietroTy//
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void decompoeCentavos( int totalCentavos, int *umR, int *cinquentaC, int *vinteCincoC, int *dezC, int *cincoC, int *umC );

int main(void){
    int m;
    int umR;
    int cq;
    int v;
    int d;
    int c;
    int um;


    printf("Centavos: ");
    scanf("%d", &m);

    decompoeCentavos(m, &umR, &cq, &v, &d, &c, &um);

    printf("%d moeda(s) de R$1,00\n", umR);
    printf("%d moeda(s) de R$0,50\n", cq);
    printf("%d moeda(s) de R$0,25\n", v);
    printf("%d moeda(s) de R$0,10\n", d);
    printf("%d moeda(s) de R$0,05\n", c);
    printf("%d moeda(s) de R$0,01\n", um);

    return 0;
}

void decompoeCentavos( int totalCentavos, int *umR, int *cinquentaC, int *vinteCincoC, int *dezC, int *cincoC, int *umC ){

    *umR = totalCentavos / 100;
    totalCentavos = totalCentavos % 100;
    *cinquentaC = totalCentavos / 50;
    totalCentavos = totalCentavos % 50;
    *vinteCincoC = totalCentavos / 25;
    totalCentavos = totalCentavos % 25;
    *dezC = totalCentavos / 10;
    totalCentavos = totalCentavos % 10;
    *cincoC = totalCentavos / 5;
    totalCentavos = totalCentavos % 5;
    *umC = totalCentavos;

}

