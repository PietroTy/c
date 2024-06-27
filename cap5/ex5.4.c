//PietroTy//
#include <stdio.h>
#include <stdlib.h>

int main (void)   {

    int A[2][2];
    int D;

    for(int i = 0 ; i < 2 ; i++) {

        for(int j = 0 ; j < 2 ; j++) {

            printf("array[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for(int i = 0 ; i < 2 ; i++) {

        for(int j = 0 ; j < 2 ; j++) {

            D = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);
        }
    }

    printf("Determinante: %d", D);
    
    return 0;
}