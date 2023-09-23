#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    double preco, contPreco = 0, mediaPreco, mediaKiloDia;

    scanf("%d", &n);

    char fruta[n][10001];
    int contKilo[n], cont = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &preco);
        getchar();
        fgets(fruta[i], sizeof(fruta[i]), stdin);
        contPreco += preco;

        contKilo[i] = 1;
        for (int j = 0; j < strlen(fruta[i]); j++)
        {
            if (fruta[i][j] == ' ')
            {
                contKilo[i]++;
            }
        }
        cont += contKilo[i];
        printf("day %d: %d kg\n", (i + 1), contKilo[i]);
    }

    mediaPreco = contPreco / n;

    mediaKiloDia = (double)cont / n;

    printf("%.2lf kg by day\n", mediaKiloDia);
    printf("R$ %.2lf by day\n", mediaPreco);

    return 0;
}