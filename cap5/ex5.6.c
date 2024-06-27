//PietroTy//
#include <stdio.h>
#include <stdlib.h>

int main (void)   {

    int M1[2][3];
    int M2[3][2];

    for(int i = 0 ; i < 2 ; i++) {
        
        for(int j = 0 ; j < 3 ; j++) {

            printf("array[%d][%d]: ", i, j);
            scanf("%d", &M1[i][j]);
        }
    }

    for(int i = 0 ; i < 3 ; i++) {

        for(int j = 0 ; j < 2 ; j++) {

            M2[i][j] = M1[j][i];
        }
    }

    printf("M:\n");
    for(int i = 0 ; i < 2 ; i++) {

        for (int j = 0 ; j < 3 ; j++) {

            printf("%03d", M1[i][j]);
            if(j == 0 || j == 1) {

                printf(" ");
            }
        } 

        printf("\n");
    }

    printf("\n");
    printf("Mt:\n");

    for(int i = 0 ; i < 3 ; i++) {

        for(int j = 0 ; j < 2 ; j++) {

            printf("%03d", M2[i][j]);
            if(j == 0) {

                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}