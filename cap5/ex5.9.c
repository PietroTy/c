//PietroTy//
#include <stdio.h>
#include <stdlib.h>

int main (void)   {

    int N;
    int A[100][100];

    printf("Numero entre 1 e 100: ");
    scanf("%d", &N);

    if(N < 1 || N > 100) {

        printf("Numero incorreto!");

    } else {

        for(int i = 0 ; i < N ; i++) {

            for(int j = 0 ; j < N ; j++) {

                if(i<= j) {

                    A[i][j] = (j - i) + 1;

                } else {

                    A[i][j] = (i - j) + 1;
                }
            }
        }

        for(int i = 0 ; i < N ; i++) {

            for(int j = 0 ; j < N ; j++) {

                printf("%3d", A[i][j]);
                if(j < N - 1) {

                    printf(" ");
                }
            }

            printf("\n");
        }
    }

    return 0;
}