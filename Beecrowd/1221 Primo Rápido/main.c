#include <stdio.h>
#include <math.h>

int EPrimo(int pX);

int main()
{
    int n, x;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);

        if (EPrimo(x))
            printf("Prime\n");
        else
            printf("Not Prime\n");
    }

    return 0;
}

int EPrimo(int pX)
{
    int i;
    double raiz;
    if (pX == 2)
        return 2;
    else if (pX % 2 == 0)
        return 0;
    else
    {
        i = 3;
        raiz = sqrt(pX);
        while (i <= raiz)
        {
            if (pX % i == 0)
                return 0;
            i = i + 2;
        }
    }
}