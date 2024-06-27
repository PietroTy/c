//PietroTy//
#include <stdio.h>
#include <stdlib.h>

int main (void)   {

    int N;
    int CT = 1;
    int A[100][100];

    printf("Numero entre 1 e 100: ");
    scanf("%d", &N);

    if(N < 1 || N > 100) {

        printf("Numero incorreto!");

    } else {

        for(int i = 0 ; i < N ; i++) {

            for(int j = (CT - 1) ; j <= (N - CT) ; j++) {

                A[i][j] = CT;
            }

            CT++;
        }

        CT = 1;

        for(int i = (N - 1) ; i > 0 ; i--) {

            for(int j = (CT - 1) ; j <= (N - CT) ; j++) {

                A[i][j] = CT;
            }

            CT ++;
        }

        CT = 1;

        for(int j = (CT - 1) ; j <= (N - CT) ; j++) {

            for(int i = (CT - 1) ; i <= (N - CT) ; i++) {

                A[i][j] = CT;
            }

            CT++;
        }

        CT = 1;

        for(int j = (N - 1) ; j > (0 + CT) ; j--) {

            for(int i = (CT - 1) ; i <= (N -  CT) ; i++) {

                A[i][j] = CT;
            }

            CT++;
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