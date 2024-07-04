//PietroTy//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float areaCirculo (float r);
float circunferenciaCirculo (float r);

int main (void)   {

    float r;
    float A;

    printf( "Raio: " );
    scanf( "%f", &r );


    printf( "Area = %.02f\n", areaCirculo(r));
    printf( "Circunferencia = %.02f\n", circunferenciaCirculo(r));

    return 0;
}

float areaCirculo (float r)   {

    const double PI = acos(-1);
    return PI * pow(r, 2);

}

float circunferenciaCirculo (float r)   {

    const double PI = acos(-1);
    return 2 * r * PI;

}