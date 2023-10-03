#include <stdio.h>

#define TAM 20

int main()
{
    int n[TAM], j = 0;

    for (int i = 0; i < TAM; i++)
        scanf("%d", &n[i]);

    for (int i = TAM - 1; i >= 0; i--)
    {
        printf("N[%d] = %d\n", j, n[i]);
        j++;
    }

    return 0;
}