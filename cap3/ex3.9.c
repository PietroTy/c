#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n;
    int r;

    printf("Tabuada do Numero: ");
    scanf("%d", &n);

    for ( int i = -1; i <= 10; i++ ) {

        r = n * i;

        printf("%d x %d = %d\n", n, i, r);

    }

    return 0;
}