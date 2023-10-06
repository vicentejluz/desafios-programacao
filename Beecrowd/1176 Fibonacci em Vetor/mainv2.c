#include <stdio.h>

int main()
{
    int i, N, T;
    unsigned long long int fibonacci[61], ant = 0, prox = 1;

    for (i = 0; i <= 60; i++)
        if (i < 2)
            fibonacci[i] = ant + i;
        else
        {
            fibonacci[i] = ant + prox;
            ant = prox;
            prox = fibonacci[i];
        }

    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%d", &N);
        printf("Fib(%d) = %lld\n", N, fibonacci[N]);
    }
    return 0;
}