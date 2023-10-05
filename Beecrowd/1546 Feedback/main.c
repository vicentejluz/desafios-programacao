#include <stdio.h>

int main()
{
    int N, K, num, i, j;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &K);
        for (j = 0; j < K; j++)
        {
            scanf("%d", &num);
            if (num == 1)
                printf("Rolien\n");
            else if (num == 2)
                printf("Naej\n");
            else if (num == 3)
                printf("Elehcim\n");
            else
                printf("Odranoel\n");
        }
    }

    return 0;
}