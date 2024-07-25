//PietroTy//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void imprimeDuplaClassificada ( int n1, int n2, bool crsc);

int main(void){


    int n1[5];
    int n2[5];


    for(int i = 0; i < 5; i++){

        for(int j = 0; j < 1; j++){
            printf("n%d[%d]: ", j+1, i);
            scanf("%d", &n1[i]);;
            printf("n%d[%d]: ", j+2, i);
            scanf("%d", &n2[i]);

        }
    }
    

    for(int i = 0; i < 5; i++){

        if( i % 2 == 0){
            imprimeDuplaClassificada(n1[i], n2[i], true);
        }
        else{
            imprimeDuplaClassificada(n1[i], n2[i], false);
        }
        
    }
    return 0;
}
void imprimeDuplaClassificada ( int n1, int n2, bool crsc){
    if(crsc){

        if( n1 <= n2){
            printf("%d e %d: %d <= %d\n", n1, n2, n1, n2);
        }
        else{
            printf("%d e %d: %d <= %d\n", n1, n2, n2, n1);
        }
    }
    else{

        if( n1 >= n2){
            printf("%d e %d: %d >= %d\n", n1, n2, n1, n2);
        }
        else{
            printf("%d e %d: %d >= %d\n", n1, n2, n2, n1);
   }
}
}

