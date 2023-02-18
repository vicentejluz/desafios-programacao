#include <stdio.h>

int main() {

    int X, Y, Z, menor, meio, maior;

    scanf("%d %d %d", &X, &Y, &Z);

    if (X < Y && X < Z)
        menor = X;
    else if (X > Y && X > Z)
        maior = X;
    else
        meio = X;
    if (Y < X && Y < Z)
        menor = Y;
    else if (Y > X && Y > Z)
        maior = Y;
    else
        meio = Y;
    if (Z < X && Z < Y)
        menor = Z;
    else if (Z > X && Z > Y)
        maior = Z;
    else
        meio = Z;

    printf("%d\n%d\n%d\n\n", menor, meio, maior);
    printf("%d\n%d\n%d\n", X, Y, Z);

    return 0;
}