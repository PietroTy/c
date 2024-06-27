//PietroTy//
#include <stdio.h>
#include <stdlib.h>

int main (void)   {

    int A[3][4];
    int M[3][4];
    int V;

    for(int i = 0 ; i < 3 ; i++) {

        for(int j = 0 ; j < 4 ; j++) {

            printf("array[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Multiplicar por: ");
    scanf("%d", &V);

    for(int i = 0 ; i < 3 ; i++) {

        for(int j = 0 ; j < 4 ; j++) {

            M[i][j] = A[i][j] * V;
        }
    }

    printf("arrayMult:\n");

    for(int i = 0 ; i < 3 ; i++) {

        for(int j = 0 ; j < 4 ; j++) {

            printf("%03d", M[i][j]);
            if(j == 0 || j == 1 || j == 2) {

                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}