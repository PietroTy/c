//PietroTy//
#include <stdlib.h>
#include <stdio.h>

void decompoeTempo( int totalSegundos, int *horas, int *minutos, int *segundos );

int main(void){

    int t;
    int h;
    int m;
    int s;

    printf("Segundos: ");
    scanf("%d", &t);

    decompoeTempo(t, &h, &m, &s);

    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);


    return 0;
}

void decompoeTempo( int totalSegundos, int *horas, int *minutos, int *segundos ){

    *horas = totalSegundos/3600;
    totalSegundos = totalSegundos%3600;

    *minutos = totalSegundos/60;
    totalSegundos = totalSegundos%60;

    *segundos = totalSegundos;
}


