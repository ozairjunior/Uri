#include <stdio.h>

int main(){

    int distanciaPec;
    float gastoCom;

    scanf("%d %f", &distanciaPec, &gastoCom);

    printf("%.3f km/l\n", distanciaPec/gastoCom);

    return 0;
}
