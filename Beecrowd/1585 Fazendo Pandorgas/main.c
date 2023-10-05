#include <stdio.h>

int main()
{
    int N, i, x, y, cm;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d %d", &x, &y);
        cm = x * y / 2;

        printf("%d cm2\n", cm);
    }

    return 0;
}