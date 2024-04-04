#include<stdio.h>
#include<stdlib.h>

int main(void){

    int s;
    int d;
    int h;
    int m;

    printf("Segundos: ");
    scanf("%d", &s);

    d = s / 86400;
    s = s - (d * 86400);
    h = s / 3600;
    s = s - (h * 3600);
    m = s / 60;
    s = s - (m * 60);

    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);

    return 0;
}