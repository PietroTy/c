//PietroTy//
#include <stdlib.h>
#include <stdio.h>

int produtorio(int n);

int main(void){

    int array[5];

    for(int i = 0; i < 5; i++){
        printf("n%d: ", i + 1);
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("\nprodutorio(%d) = %d", array[i], produtorio(array[i]));
    }


    return 0;
}

int produtorio(int n){

    int r = 1;

    for(int i = 1; i < n+1; i++){
        r = r * i;
    }  

    return r;


}

