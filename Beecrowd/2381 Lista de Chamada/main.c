#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void BubbleSort(char **nome, int pTam);

int main()
{
    int k, n;

    scanf("%d %d", &k, &n);

    char **nome = NULL;

    nome = malloc(k * sizeof(char *));

    for (int i = 0; i < k; i++)
    {
        nome[i] = malloc(21 * sizeof(char));
		//scanf("%s", nome[i]);
    }

    for (int i = 0; i < k; i++)
        scanf("%s", nome[i]);

    BubbleSort(nome, k);

    printf("%s\n", nome[n - 1]);

	for (int i = 0; i < k; i++)
		free(nome[i]);
	free(nome);

    return 0;
}

void BubbleSort(char **nome, int pTam)
{
    int trocou;
    char aux[21];
    do
    {
        trocou = 0;
        for (int i = 0; i < pTam - 1; i++)
        {
            if (strcmp(nome[i], nome[i + 1]) > 0)
            {
                strcpy(aux, nome[i]);
                strcpy(nome[i], nome[i + 1]);
                strcpy(nome[i + 1], aux);
                trocou = 1;
            }
        }
    } while (trocou);
}