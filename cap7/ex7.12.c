//PietroTy//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void classificaDupla ( int n1, int n2);

int main(void){

    int n1[3];
    int n2[3];


    for(int i = 0; i < 3; i++){
        for( int j = 0 ; j < 1 ; j++){
            printf("n%d[%d]: ", j+1, i);
            scanf("%d", &n1[i]);
            printf("n%d[%d]: ", j+2, i);
            scanf("%d", &n2[i]);
            
        }

    }
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 1; j++){
        classificaDupla(n1[i], n2[i]);
        }
    }
 
    return 0;
}
void classificaDupla( int n1, int n2){
    if( n1 <= n2){
        printf("%d e %d: %d <= %d\n", n1, n2, n1, n2);
    }
    else{
        printf("%d e %d: %d <= %d\n", n1, n2, n2, n1);
    }
}