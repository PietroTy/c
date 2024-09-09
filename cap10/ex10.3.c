#include <stdio.h>
#include <stdlib.h>


typedef struct Hora{ 
    int hora;
    int minuto;
    int segundo;
} Hora;

Hora gerarHora(int quantidadeSegundos);
void imprimirHora(const Hora *hora);

int main(void){

    int segundos;
    Hora hora;

    printf("Segundos: ");
    scanf("%d", &segundos);

    hora = gerarHora(segundos); 

    imprimirHora(&hora);

    return 0;

}

Hora gerarHora(int quantidadeSegundos){

    Hora hora;

    hora.hora = quantidadeSegundos / 3600;
    hora.minuto = (quantidadeSegundos % 3600)/60;
    hora.segundo = ((quantidadeSegundos % 3600)%60);

    return hora;

}

void imprimirHora(const Hora *hora){

    printf("Hora correspondente: %02d:%02d:%02d", hora->hora, hora->minuto, hora->segundo);

}