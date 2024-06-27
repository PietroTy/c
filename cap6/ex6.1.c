//PietroTy//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)   {

    int a;
    int b;
    int c;
    float D;
    int x1;
    int x2;
    float S[2];

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    D = pow(b, 2) - (4 * a * c);
    S[1] = (-b - sqrt(D)) / 2 * a;
    S[0] = (-b + sqrt(D)) / 2 * a;

    printf("Delta: %.02f\n", D);

    if (S[0] > 0 || S[1] > 0){

        if (S[0] == S[1]){
            printf("S = {%.02f}", S[0]);
        }
        else {
            printf("S = {%.02f, %.02f}", S[1], S[1]);
        }
    }
    

    return 0;
}