#include <stdio.h>

void BubbleSort(int *PV, int PTam);

int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        int cod[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &cod[i]);
        }

        BubbleSort(cod, n);

        for (int i = 0; i < n; i++)
            printf("%04d\n", cod[i]);
    }

    return 0;
}

void BubbleSort(int *PV, int PTam)
{
    int i, Trocou, aux;
    do
    {
        Trocou = 0;
        for (i = 0; i < PTam - 1; i++)
            if (PV[i] > PV[i + 1])
            {
                aux = PV[i];
                PV[i] = PV[i + 1];
                PV[i + 1] = aux;
                Trocou = 1;
            }
    } while (Trocou);
}