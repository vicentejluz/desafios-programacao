#include <stdio.h>
#include <string.h>

int main() {

    char nome[10];
    double salario, totalV, TOTAL;

    fflush(stdin);
    gets(nome);

    scanf("%lf %lf", &salario, &totalV);

    TOTAL = salario + totalV * 0.15;

    printf("TOTAL = R$ %.2lf\n", TOTAL);

    return 0;
}