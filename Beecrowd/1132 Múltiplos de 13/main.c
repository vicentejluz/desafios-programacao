#include <stdio.h>

int main()
{

    int X, Y, aux, i, soma = 0;

    scanf("%d", &X);
    scanf("%d", &Y);

    if (X > Y)
    {
        aux = X;
        X = Y;
        Y = aux;
    }

    for (i = X; i <= Y; i++)
    {
        if (i % 13 != 0)
        {
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}