//PietroTy//
#include <stdlib.h>
#include <stdio.h>

int buscar(const int *a, int n, int chave);

int main(void){
    int a[10];
    int s;
    int indice;

    for(int i = 0; i < 10; i++){
        printf("n[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Buscar por: ");
    scanf("%d", &s);

    indice = buscar(a, 10, s);

    if(indice == -1){
        printf("O valor %d nao foi encontrado.", s);
    }else{
        printf("O valor %d foi encontrado na posicao %d.", s, indice);
    }
}
int buscar(const int *a, int n, int chave){
    for(int i = 0; i < n; i++){
        if(a[i] == chave){
            return i;
        }
    }
    return -1;
}