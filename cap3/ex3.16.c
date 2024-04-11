#include<stdio.h>
#include<stdlib.h>

int main(void){

    int f1 = 1;
    int f2 = 1;
    int f;

    printf("%d ", f1);
    printf("%d ", f2);


    for ( int i = 1; i <= 18; i++ ) {

        f = f1 + f2;
        f2 = f1;
        f1 = f;

        printf("%d ", f);
    }

    return 0;
}