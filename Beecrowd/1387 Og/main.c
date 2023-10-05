#include <stdio.h>

int main()
{
    int L, R, soma;

    do
    {
        scanf("%d %d", &L, &R);

        if (L != 0 || R != 0)
        {
            soma = L + R;

            printf("%d\n", soma);
        }

    } while (L != 0 || R != 0);

    return 0;
}