//PietroTy//
#include<stdio.h>
#include<stdlib.h>

int main(void){

    for ( int i = 39; i <= 60; i++ ) {

        if ( i % 4 == 0) {

            printf("%d: divisivel\n", i);


        } else {

            printf("%d: indivisivel\n", i);


        }


    }

    return 0;
}