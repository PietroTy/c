#include <stdio.h>
#include <stdlib.h>

typedef struct Data{
    int dia;
    int mes;
    int ano;
} Data;

int diaDoAno(const Data *data);

int main(void){

    Data data;

    printf("dia: ");
    scanf("%d", &data.dia);
    printf("mes: ");
    scanf("%d", &data.mes);
    printf("ano: ");
    scanf("%d", &data.ano);

    printf("O dia do ano da data %02d/%02d/%04d eh %d.", data.dia, data.mes, data.ano, diaDoAno(&data));

    return 0;

}

int diaDoAno(const Data *data){

    int diasPorMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int diasTotal = 0;

    if((data->ano % 400 == 0 || data->ano % 4 == 0) && data->ano % 100 != 0){
        diasPorMes[1]++;
    }

    for(int i = 0; i < data->mes - 1; i++){
        diasTotal += diasPorMes[i];
    }

    return (data->dia + diasTotal);

}