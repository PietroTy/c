//PietroTy//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)   {

    int a;
    int b;
    int c;
    float D;
    float x1;
    float x2;

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    if (a <= 0 || b <= 0 || c <= 0){
        printf("Nao existe equacao do segundo grau!");

        return 0;
    }

    D = pow(b, 2) - (4 * a * c);
    x1 = (-b - sqrt(D)) / 2 * a;
    x2 = (-b + sqrt(D)) / 2 * a;

    printf("Delta: %.02f\n", D);



    if (D < 0){
        printf("S = {}");
    }
    else if (D == 0){
        printf("S = {%.02f}", x1);

    }
    else {
        printf("S = {%.02f, %.02f}", x1, x2);
    }
    
    

    return 0;
}