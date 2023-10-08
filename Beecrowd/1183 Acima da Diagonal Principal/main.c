#include <stdio.h>
#define TAM 12

int main()
{
    double M[TAM][TAM], soma = 0, media = 0;
    int i, j, cont = 0;
    char O;

    do
    {
        scanf("%c", &O);
    } while (O != 'S' && O != 'M');

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
            scanf("%lf", &M[i][j]);
    }
    for (i = 0; i < TAM; i++)
    {
        for (j = i + 1; j < TAM; j++)
        {
            soma += M[i][j];
            cont++;
        }
    }

    if (O == 'S')
        printf("%.1lf\n", soma, cont);
    else
    {
        media = soma / cont;
        printf("%.1lf\n", media);
    }

    return 0;
}