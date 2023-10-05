#include <stdio.h>

int main()
{
    int N, i, A, B, contA, contB;

    do
    {
        scanf("%d", &N);
        if (N != 0)
        {
            contA = 0;
            contB = 0;
            for (i = 0; i < N; i++)
            {
                scanf("%d %d", &A, &B);
                if (A > B)
                    contA++;
                else if (A < B)
                    contB++;
            }
            printf("%d %d\n", contA, contB);
        }
    } while (N != 0);
    return 0;
}