//PietroTy//
#include <stdio.h>
#include <stdlib.h>

void decompoeTempo(int totalSeg, int *horas, int *minutos, int *seg);

int main(void){

    int t;
    int h;
    int m;
    int s;

    printf("Total de segundos: ");
    scanf("%d", &t);
    printf("%d segundo(s) corresponde(m) a:\n", t);
    decompoeTempo(t, &h, &m, &s);

    printf("    %d hora(s)\n", h);
    printf("    %d minuto(s)\n", m);
    printf("    %d segundo(s)", s);
}
void decompoeTempo(int totalSeg, int *horas, int *minutos, int *seg){
    *horas = totalSeg / 3600;
    totalSeg = totalSeg % 3600;
    *minutos = totalSeg / 60;
    totalSeg = totalSeg % 60;
    *seg = totalSeg;
}