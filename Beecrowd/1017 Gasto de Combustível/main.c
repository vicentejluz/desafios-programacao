#include <stdio.h>

int main() {

    int T, V;
    double Qtde;

    scanf("%d %d", &T, &V);

    Qtde = T * V / 12.0;

    printf("%.3lf\n", Qtde);

    return 0;
}