#include <stdio.h>

int ePrimo(int pX);

int main()
{
    int x, n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (ePrimo(x))
            printf("%d eh primo\n", x);
        else
            printf("%d nao eh primo\n", x);
    }

    return 0;
}

int ePrimo(int pX)
{
    for (int i = 2; i < pX; i++)
    {
        if (pX % i == 0)
            return 0;
    }
    return 1;
}
