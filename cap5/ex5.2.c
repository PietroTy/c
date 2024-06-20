#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int A1 [3][3];
    int A2 [3][3];
    int R [3][3];

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

    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            printf ("%03d", A1[i][j]);
            if (j < 3){
                printf (" ");
            }

        }
        if (i == 1){
            printf(" + ");
        }
        else {
            printf("   ");
        }
        for (int j = 0; j < 3; j++){
            printf ("%03d", A2[i][j]);
            if (j < 3){
                printf (" ");
            }

        }
        if (i == 1){
            printf(" = ");
        }
        else {
            printf("   ");
        }
        for (int j = 0; j < 3; j++){
            printf ("%03d", R[i][j]);
            if (j < 3){
                printf (" ");
            }

        }
        printf ("\n");
        
    }

}