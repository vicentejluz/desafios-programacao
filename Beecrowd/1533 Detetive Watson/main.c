#include <stdio.h>

int obtemMaior(int *pVetor, int pTam);
int obtemIndiceSegundoMaior(int *pVetor, int pTam, int maior);

int main()
{
    int n, maior, indiceSegundoMaior;

    while (1)
    {
        scanf("%d", &n);

        if (n == 0)
            break;

        int vet[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &vet[i]);
        }

        maior = obtemMaior(vet, n);

        indiceSegundoMaior = obtemIndiceSegundoMaior(vet, n, maior) + 1;

        printf("%d\n", indiceSegundoMaior);
    }

    return 0;
}

int obtemMaior(int *pVetor, int pTam)
{
    int maior = pVetor[0];

    for (int i = 0; i < pTam; i++)
    {
        if (pVetor[i] > maior)
        {
            maior = pVetor[i];
        }
    }
    return maior;
}

int obtemIndiceSegundoMaior(int *pVetor, int pTam, int maior)
{
    int segundoMaior = pVetor[0];
    int cont = 0;
    if (pVetor[0] == maior)
    {
        segundoMaior = pVetor[1];
        cont = 1;
    }

    for (int i = 0; i < pTam; i++)
    {
        if (pVetor[i] > segundoMaior && pVetor[i] != maior)
        {
            segundoMaior = pVetor[i];
            cont = i;
        }
    }
    return cont;
}