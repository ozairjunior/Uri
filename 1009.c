#include <stdio.h>

int main(){

    char nome[7];
    double salarioFix, totalVend;

    scanf("%s", &nome);
    scanf("%lf", &salarioFix);
    scanf("%lf", &totalVend);

    printf("TOTAL = R$ %.2f\n", (salarioFix + totalVend*0.15));

    return 0;
}
