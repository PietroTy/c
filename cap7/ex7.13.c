//PietroTy//
#include <stdio.h>
#include <stdlib.h>

void classificaTrinca (int n1, int n2, int n3);


int main (void){

    int n1[3];
    int n2[3];
    int n3[3];


    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 1; j++){
            printf("n%d[%d]: ", j+1, i);
            scanf("%d", &n1[i]);
            printf("n%d[%d]: ", j+2, i);
            scanf("%d", &n2[i]);
            printf("n%d[%d]: ", j+3, i);
            scanf("%d", &n3[i]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 1; j++){
            classificaTrinca(n1[i], n2[i], n3[i]);
        }
    }

    return 0;
}
void classificaTrinca (int n1, int n2, int n3){

    if(n1 <= n2 && n2 <= n3){
        printf("%d, %d e %d: %d <= %d <= %d\n",n1, n2, n3, n1, n2, n3);
    }
    else if(n2 <= n3 && n3 <= n1){
        printf("%d, %d e %d: %d <= %d <= %d\n",n1, n2, n3, n2, n3, n1);
    }
    else if(n3 <= n1 && n1 <= n2){
        printf("%d, %d e %d: %d <= %d <= %d\n",n1, n2, n3, n3, n1, n2);
    }
    else if( n1 <= n3 && n3 <= n2){
        printf("%d, %d e %d: %d <= %d <= %d\n",n1, n2, n3, n1, n3, n2);
    }
    else if( n2 <= n1 && n1 <= n3){
        printf("%d, %d e %d: %d <= %d <= %d\n",n1, n2, n3, n2, n1, n3);
    }
    else{
        printf("%d, %d e %d: %d <= %d <= %d\n",n1, n2, n3, n3, n2, n1);
    }

}