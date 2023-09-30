#include <stdio.h>

#define TAM 21

typedef struct
{
    int chave;
    char valor[TAM];
} map;

void BubbleSort(map *mapa, int pTam);

int main()
{

    int n;

    while (scanf("%d", &n) != EOF)
    {
        map mapa[n];

        for (int i = 0; i < n; i++)
            scanf("%s %d", mapa[i].valor, &mapa[i].chave);

        BubbleSort(mapa, n);

        for (int i = 0; i < n; i++)
        {
            if (i < n - 1)
                printf("%s ", mapa[i].valor);
            else
                printf("%s\n", mapa[i].valor);
        }
    }
    return 0;
}

void BubbleSort(map *mapa, int pTam)
{
    int i, Trocou;
    map aux;
    do
    {
        Trocou = 0;
        for (i = 0; i < pTam - 1; i++)
            if (mapa[i].chave > mapa[i + 1].chave)
            {
                aux = mapa[i];
                mapa[i] = mapa[i + 1];
                mapa[i + 1] = aux;
                Trocou = 1;
            }
    } while (Trocou);
}
