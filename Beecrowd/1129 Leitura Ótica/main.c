#include <stdio.h>

int obtemPosMenor(int a, int b, int c, int d, int e);

int main()
{
    int n, a, b, c, d, e;
    int cont, posMenor;

    while (1)
    {
        scanf("%d", &n);

        if (n == 0)
            break;

        for (int i = 0; i < n; i++)
        {
            cont = 0;
            scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
            if (a > 127 && b > 127 && c > 127 && d > 127 && e > 127)
                cont = 2;
            if (a <= 127)
                cont++;
            if (b <= 127)
                cont++;
            if (c <= 127)
                cont++;
            if (d <= 127)
                cont++;
            if (e <= 127)
                cont++;

            if (cont > 1)
                printf("*\n");
            else
            {
                posMenor = obtemPosMenor(a, b, c, d, e);
                if (posMenor == 0)
                    printf("A\n");
                else if (posMenor == 1)
                    printf("B\n");
                else if (posMenor == 2)
                    printf("C\n");
                else if (posMenor == 3)
                    printf("D\n");
                else if (posMenor == 4)
                    printf("E\n");
            }
        }
    }
    return 0;
}

int obtemPosMenor(int a, int b, int c, int d, int e)
{
    int v[] = {a, b, c, d, e};

    int menor = v[0], pos = 0;

    for (int i = 0; i < 5; i++)
    {
        if (v[i] < menor)
        {
            menor = v[i];
            pos = i;
        }
    }
    return pos;
}
