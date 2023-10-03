#include <stdio.h>

int main()
{

    int B, N, D, C, V, i, j;

    do
    {

        scanf("%d %d", &B, &N);
        if (B != 0 && N != 0)
        {
            j = 0;
            int Vx[B];

            for (i = 1; i <= B; i++)
                scanf("%d", &Vx[i]);

            for (i = 1; i <= N; i++)
            {
                scanf("%d %d %d", &D, &C, &V);

                Vx[D] -= V;
                Vx[C] += V;
            }

            for (i = 1; i <= B; i++)
            {
                if (Vx[i] < 0)
                    j = 1;
            }

            if (j == 1)
                printf("N\n");
            else
                printf("S\n");
        }
    } while (B != 0 && N != 0);

    return 0;
}