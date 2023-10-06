#include <stdio.h>

int main()
{

    int Vp[5], Vi[5], P = 0, I = 0, j, i, X;

    for (i = 0; i < 15; i++)
    {
        scanf("%d", &X);

        if (X % 2 == 0)
        {
            Vp[P] = X;
            P++;
            if (P == 5)
            {
                for (j = 0; j < 5; j++)
                    printf("par[%d] = %d\n", j, Vp[j]);
                P = 0;
            }
        }
        else
        {
            Vi[I] = X;
            I++;
            if (I == 5)
            {
                for (j = 0; j < 5; j++)
                    printf("impar[%d] = %d\n", j, Vi[j]);
                I = 0;
            }
        }
    }
    for (j = 0; j < I; j++)
        printf("impar[%d] = %d\n", j, Vi[j]);
    I = 0;

    for (j = 0; j < P; j++)
        printf("par[%d] = %d\n", j, Vp[j]);
    P = 0;

    return 0;
}