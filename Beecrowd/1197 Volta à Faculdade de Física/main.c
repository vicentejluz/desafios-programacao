#include <stdio.h>

int main()
{
    int v, t, dobro;

    while (scanf("%d %d", &v, &t) != EOF)
    {
        dobro = (v * t) * 2;

        printf("%d\n", dobro);
    }

    return 0;
}