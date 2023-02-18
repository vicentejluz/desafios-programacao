#include <stdio.h>

int main() {

    int Distancia, X = 60, Y = 90;

    scanf("%d", &Distancia);

    Distancia = Distancia / ((Y / 60.0) - (X / 60.0));

    printf("%d minutos\n", Distancia);

    return 0;
}