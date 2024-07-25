//PietroTy//
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void decompoeData(int diaDoAno, int ano, int *mes, int *dia);
bool ehBissexto(int ano);

int main(void){
    int d;
    int a;
    int diaDoMes;
    int m;


    printf("Dia do Ano: ");
    scanf("%d", &d);
    printf("Ano: ");
    scanf("%d", &a);

    decompoeData(d, a, &m, &diaDoMes);
    printf("O dia %d do ano %d cai no dia %d do mes %d.", d, a, diaDoMes, m);
    return 0;
}
bool ehBissexto(int ano){
    if(ano % 4 == 0){
        if(ano % 100 == 0){
            if(ano % 400 == 0){
                return true;
            }else{
                return false;
            }
        }
        return true;
    }
    return false;
}
void decompoeData(int diaDoAno, int ano, int *mes, int *dia){
    int diasPorMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(ehBissexto(ano) == true){
        diasPorMes[1] = 29;
    }

    for(int i = 0; i < 12; i++){
        *mes = i + 1;
        if(diaDoAno <= diasPorMes[i]){
            *dia = diaDoAno;
            break;
        }
        diaDoAno = diaDoAno - diasPorMes[i];
    }
}

