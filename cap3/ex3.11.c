#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n1;
    int n2;

    printf("N1: ");
    scanf("%d", &n1);
    printf("N2: ");
    scanf("%d", &n2);


    if ( n1 <= n2 ) {

        for ( int i = n1; i <= n2; i++ ) {

            printf("%d ", i);

        }

    } 
    if ( n1 > n2 ) {

        for ( int i = n1; i >= n2; i-- ) {

            printf("%d ", i);

        }

    }



    return 0;
}