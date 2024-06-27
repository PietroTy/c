//PietroTy//
#include <stdio.h>
#include <stdlib.h>

int main (void)   {

    int A1[3][2];
    int A2[2][3];
    int M[3][3];

    for(int i = 0 ; i < 3 ; i++) {

        for(int j = 0 ; j < 2 ; j++) {

            printf("array1[%d][%d]: ", i, j);
            scanf("%d", &A1[i][j]);
        }
    }

    printf("\n");

    for(int i = 0 ; i < 2 ; i++) {

        for(int j = 0 ; j < 3 ; j++) {

            printf("array2[%d][%d]: ", i, j);
            scanf("%d", &A2[i][j]);
        }
    }

    for(int i = 0 ; i < 3 ; i++) {

        for(int j = 0 ; j < 3 ; j++) {

            M[i][j] = ( A1[i][0] * A2[0][j] ) + ( A1[i][1] * A2[1][j] );
        }
    }

    printf("\n");
    printf("A x B =\n");

    for(int i = 0 ; i < 3 ; i++) {

        for(int j = 0 ; j < 3 ; j++) {

            printf("%03d", M[i][j]);
            if(j == 0 || j == 1) {

                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}