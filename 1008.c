#include <stdio.h>

int main(){

    int numero, horaTra;
    float valorHora;

    scanf("%d", &numero);
    scanf("%d", &horaTra);
    scanf("%f", &valorHora);

    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", horaTra*valorHora);

    return 0;
}

