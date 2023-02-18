#include <stdio.h>

int main() {

    int N, notas100 = 0, notas50 = 0, notas20 = 0, notas10 = 0, notas5 = 0, notas2 = 0, notas1 = 0;

    do
    {
        scanf("%d", &N);
    } while (N <= 0 || N >= 1000000);

    notas100 = N / 100;
    notas50 = (N - (notas100 * 100)) / 50;
    notas20 = (N - (notas100 * 100) - (notas50 * 50)) / 20;
    notas10 = (N - (notas100 * 100) - (notas50 * 50) - (notas20 * 20)) / 10;
    notas5 = (N - (notas100 * 100) - (notas50 * 50) - (notas20 * 20) - (notas10 * 10)) / 5;
    notas2 = (N - (notas100 * 100) - (notas50 * 50) - (notas20 * 20) - (notas10 * 10) - (notas5 * 5)) / 2;
    notas1 = (N - (notas100 * 100) - (notas50 * 50) - (notas20 * 20) - (notas10 * 10) - (notas5 * 5) - (notas2 * 2)) / 1;

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n", N, notas100, notas50, notas20);
    printf("%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", notas10, notas5, notas2, notas1);

    return 0;
}