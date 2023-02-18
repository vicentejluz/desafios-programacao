#include <stdio.h>

long long fatorial();

int main()
{
    long long soma;
    int m, n;

    while (scanf("%d %d", &m, &n) != EOF)
    {

        soma = fatorial(m) + fatorial(n);

        printf("%lld\n", soma);
    }

    return 0;
}

long long fatorial(int n)
{
    long long f = 1;

    for (int i = n; i >= 1; i--)
        f *= i;

    return f;
}