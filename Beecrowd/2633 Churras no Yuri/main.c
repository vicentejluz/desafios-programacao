#include <stdio.h>
#include <string.h>

typedef struct
{
    int chave;
    char valor[21];
} Map;

void BubbleSort(Map *mapa, int pTam);

int main()
{

    int n, v;
    char s[21];

    while (scanf("%d", &n) != EOF)
    {
        Map mapa[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%s %d", s, &v);

            strcpy(mapa[i].valor, s);
            mapa[i].chave = v;
        }

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

void BubbleSort(Map *mapa, int pTam)
{
    int i, Trocou;
    Map aux;
    do
    {
        Trocou = 0;
        for (i = 0; i < pTam - 1; i++)
            if (mapa[i].chave > mapa[i + 1].chave)
            {
                aux.chave = mapa[i].chave;
                strcpy(aux.valor, mapa[i].valor);
                mapa[i].chave = mapa[i + 1].chave;
                strcpy(mapa[i].valor, mapa[i + 1].valor);
                mapa[i + 1].chave = aux.chave;
                strcpy(mapa[i + 1].valor, aux.valor);
                Trocou = 1;
            }
    } while (Trocou);
}
