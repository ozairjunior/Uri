#include <stdio.h>

int main(){

    int codigoPec1, numeroPec1, codigoPec2, numeroPec2;
    float valorPec1, valorPec2;

    scanf("%d %d %f", &codigoPec1, &numeroPec1, &valorPec1 );
    scanf("%d %d %f", &codigoPec2, &numeroPec2, &valorPec2 );

    printf("VALOR A PAGAR: R$ %.2f\n", ((valorPec1 * numeroPec1) + (valorPec2 * numeroPec2)));

    return 0;
}
