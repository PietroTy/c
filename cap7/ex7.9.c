//PietroTy//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehTriangulo( int l1, int l2, int l3);
int tipoTriangulo( int l1, int l2, int l3);
int pos(void);

int main(void){

    int l1[5];
    int l2[5];
    int l3[5];
    

    for(int i = 0; i < 5; i++){
        printf("ladoA[%d]: \n", i);
        l1[i] = pos();
        printf("ladoB[%d]: \n", i);
        l2[i] = pos();
        printf("ladoC[%d]: \n", i);
        l3[i] = pos();
    }
    for(int i = 0; i < 5; i++){
        switch (tipoTriangulo(l1[i], l2[i], l3[i])){

            case 0:
                printf("Valores %d, %d e %d: nao formam um triangulo\n", l1[i], l2[i], l3[i]);
                break;

            case 1:
                printf("Valores %d, %d e %d: triangulo equilatero\n", l1[i], l2[i], l3[i]);
                break;

            case 2:
                printf("Valores %d, %d e %d: triangulo isosceles\n", l1[i], l2[i], l3[i]);
                break;

            case 3:
                printf("Valores %d, %d e %d: triangulo escaleno\n", l1[i], l2[i], l3[i]);
                break;
        }

    }

    return 0;
}
int pos(void){
    int v;
    do{
        scanf( "%d", &v);
        if(v <= 0){
            printf( "Entre com um valor positivo: ");
        }

}while ( v <= 0);

return v;

}
bool ehTriangulo( int l1, int l2, int l3){
    if(l1 + l2 > l3 && l1 + l2 > l2 && l2 + l3 > l1){
        return true;
    }else{
        return false;
    }
}
int tipoTriangulo ( int l1, int l2, int l3){
    if( !ehTriangulo(l1, l2, l3)){
        return 0;
    }
    else if(l1 == l2 && l2 == l3){
        return 1;
    }
    else if(l1 == l2 || l2 == l3 || l3 == l1){
        return 2;
    }
    else{
        return 3;
    }
}