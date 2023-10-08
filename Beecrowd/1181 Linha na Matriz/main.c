#include <stdio.h>
#define TAM 12

int main()
{
    double M[TAM][TAM], soma = 0, media = 0;
    int i, j, L;
    char T;

    scanf("%d", &L);
    do
    {
        scanf("%c", &T);
    } while (T != 'S' && T != 'M');

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
            scanf("%lf", &M[i][j]);
    }

    for (j = 0; j < TAM; j++)
        soma += M[L][j];

    media = soma / TAM;

    if (T == 'S')
        printf("%.1lf\n", soma);
    else
        printf("%.1lf\n", media);

    return 0;
}