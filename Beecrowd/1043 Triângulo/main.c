#include <stdio.h>

int main() {

    double A, B, C, Per, Ar;

    scanf("%lf %lf %lf", &A, &B, &C);

    if (((B - C) < A && A < (B + C)) && ((A - C) < B && B < (A + C)) && ((A - B) < C && C < (A + B))) {
        Per = A + B + C;
        printf("Perimetro = %.1lf\n", Per);
    }
    else {
        Ar = ((A + B) * C) / 2;
        printf("Area = %.1lf\n", Ar);
    }

    return 0;
}