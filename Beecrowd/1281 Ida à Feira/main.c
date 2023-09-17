#include <stdio.h>
#include <string.h>

int main()
{
    int n, m, p;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &m);

        char produtos[m][51];
        double precos[m], total = 0;
        for (int j = 0; j < m; j++)
        {
            scanf("%s %lf", produtos[j], &precos[j]);
        }

        scanf("%d", &p);
        char produtosComprados[p][51];
        int quantidades[p];
        for (int j = 0; j < p; j++)
        {
            scanf("%s %d", produtosComprados[j], &quantidades[j]);

            for (int k = 0; k < m; k++)
            {
                if (strcmp(produtosComprados[j], produtos[k]) == 0)
                {
                    total += precos[k] * quantidades[j];
                }
            }
        }
        printf("R$ %.2lf\n", total);
    }

    return 0;
}