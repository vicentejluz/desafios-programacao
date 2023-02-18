#include <stdio.h>

int main() {

    double Raio, pi = 3.14159, VolumeEsfera;

    scanf("%lf", &Raio);

    VolumeEsfera = (4.0 / 3) * pi * pow(Raio, 3);

    printf("VOLUME = %.3lf\n", VolumeEsfera);

    return 0;
}