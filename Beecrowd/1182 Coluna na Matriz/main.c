#include <stdio.h>
#define TAM 12

int main()
{
    double M[TAM][TAM], soma = 0, media = 0;
    int i, j, C;
    char T;

    scanf("%d", &C);
    do
    {
        scanf("%c", &T);
    } while (T != 'S' && T != 'M');

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
            scanf("%lf", &M[i][j]);
    }

    for (i = 0; i < TAM; i++)
        soma += M[i][C];

    if (T == 'S')
        printf("%.1lf\n", soma);
    else
    {
        media = soma / TAM;
        printf("%.1lf\n", media);
    }

    return 0;
}