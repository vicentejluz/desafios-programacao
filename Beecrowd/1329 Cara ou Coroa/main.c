#include <stdio.h>

int main()
{
    int N, L, i, cont0, cont1;

    do
    {
        scanf("%d", &N);

        if (N != 0)
        {
            cont0 = 0;
            cont1 = 0;

            for (i = 0; i < N; i++)
            {
                scanf("%d", &L);

                if (L == 0)
                    cont0++;
                if (L == 1)
                    cont1++;
            }
            printf("Mary won %d times and John won %d times\n", cont0, cont1);
        }
    } while (N != 0);

    return 0;
}