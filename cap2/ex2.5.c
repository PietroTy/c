//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n1;
    int n2;
    int n3;

    printf("N1: ");
    scanf("%d", &n1);
    printf("N2: ");
    scanf("%d", &n2);
    printf("N3: ");
    scanf("%d", &n3);

    if ( n1 <= n2 ) {

        if ( n2 <= n3 ) {

            printf("%d >= %d >= %d\n", n3, n2, n1);

        }   else {

            printf("%d >= %d >= %d\n", n2, n3, n1);

        }
    }   else if ( n2 <= n3 ){

        if ( n3 <= n1 ) {

            printf("%d >= %d >= %d\n", n1, n3, n2);

        }   else {

            printf("%d >= %d >= %d\n", n3, n1, n2);

        }

    }   else if ( n3 <= n1 ){

        if ( n1 <= n2 ) {

            printf("%d >= %d >= %d\n", n2, n1, n3);

        }   else {

            printf("%d >= %d >= %d\n", n1, n2, n3);

        }

    }    
    return 0;
}