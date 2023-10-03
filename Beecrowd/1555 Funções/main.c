#include <stdio.h>
#include <math.h>

int main()
{
    int N, i, x, y, r, b, c, maior;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d %d", &x, &y);
        r = pow(3 * x, 2) + pow(y, 2);
        b = (2 * pow(x, 2)) + pow(5 * y, 2);
        c = (-100 * x) + pow(y, 3);
        if (r > b && r > c)
            maior = r;
        else if (b > r && b > c)
            maior = b;
        else
            maior = c;

        if (maior == r)
            printf("Rafael ganhou\n");
        else if (maior == b)
            printf("Beto ganhou\n");
        else
            printf("Carlos ganhou\n");
    }

    return 0;
}