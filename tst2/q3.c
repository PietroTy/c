//PietroTy//
#include <stdlib.h>
#include <stdio.h>

void inverter( int *array, int n );

int main(void){

    int array[10];

    for(int i = 0; i < 10; i++){
        printf("n[%d]: ", i);
        scanf("%d", &array[i]);
    }

    int n1 = array[0];


    inverter(array, 10);

    printf("Array invertido:");

    for(int i = 0; i < 10; i++){
        printf(" %d", array[i+1]);
    }
    

    return 0;
}

void inverter( int *array, int n ){

    int m = array[0];

    for(int i = 0; i <= n; i++){

        m = array[i];
        array[i] = array[n];
        array[n] = m;

        n = n-1;

    }
}

