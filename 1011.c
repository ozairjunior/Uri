#include <stdio.h>

int main(){

    double raio, pi = 3.14159;

    scanf("%lf", &raio );

    printf("VOLUME = %.3lf\n", (4/3.0 * pi * pow(raio,3)) );

    return 0;
}

