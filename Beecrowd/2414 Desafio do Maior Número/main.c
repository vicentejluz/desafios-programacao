#include <stdio.h>

int main()
{
    int maior = 0, aux;

    while (1)
    {
        scanf("%d", &aux);

        if (aux == 0)
            break;

        if (maior < aux)
            maior = aux;
    }

    printf("%d\n", maior);

    return 0;
}