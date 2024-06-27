//PietroTy//
#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int A1[3][3];
    int A2[3][3];
    int R[3][3];

    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            printf ("array[%d][%d]:", i, j);
            scanf ("%d", &A1[i][j]);
        }
        
    }
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            printf ("array[%d][%d]:", i, j);
            scanf ("%d", &A2[i][j]);
        }
        
    }
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            R[i][j] = A1[i][j] + A2[i][j];
        }
        
    }

    printf ("array1:       array2:       arraySoma:\n");

    for(int j = 0 ; j < 3 ; j++) {

        printf("%03d ", A1[0][j]);

    }

    printf("  ");

    for(int j = 0 ; j < 3 ; j++) {

        printf("%03d ", A2[0][j]);

    }

    printf("  ");

    for(int j = 0 ; j < 3 ; j++) {

        printf("%03d", R[0][j]);
        if(j == 0 || j == 1) {

            printf(" ");

        }

    }

    printf("\n");

    for(int j = 0 ; j < 3 ; j++) {

        printf("%03d ", A1[1][j]);

    }

    printf("+");
    printf(" ");

    for(int j = 0 ; j < 3 ; j++) {

        printf("%03d ", A2[1][j]);

    }

    printf("=");
    printf(" ");

    for(int j = 0 ; j < 3 ; j++) {

        printf("%03d", R[1][j]);
        if(j == 0 || j == 1) {

            printf(" ");

        }

    }

    printf("\n");

    for(int j = 0 ; j < 3 ; j++) {

        printf("%03d ", A1[2][j]);

    }

    printf("  ");

    for(int j = 0 ; j < 3 ; j++) {

        printf("%03d ", A2[2][j]);

    }

    printf("  ");

    for(int j = 0 ; j < 3 ; j++) {

        printf("%03d", R[2][j]);
        if(j == 0 || j == 1) {

            printf(" ");
        }

    }

    return 0;
}