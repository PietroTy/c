//PietroTy//
#include <stdio.h>
#include <stdlib.h>

int main (void){

    int A[3][3];
    int D;

    for(int i = 0 ; i < 3 ; i++) {

        for(int j = 0 ; j < 3 ; j++) {

            printf("array[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for(int i = 0 ; i < 3 ; i++) {

        for(int j = 0 ; j < 3 ; j++) {

            D = (( A[0][0] * A[1][1] * A[2][2] ) + ( A[0][1] * A[1][2] * A[2][0] ) + ( A[0][2] * A[1][0] * A[2][1] )) - (( A[0][2] * A[1][1] * A[2][0] ) + ( A[0][0] * A[1][2] * A[2][1] ) + ( A[0][1] * A[1][0] * A[2][2] ));
        }
    }

    printf("Determinante: %d", D);

    return 0;
}