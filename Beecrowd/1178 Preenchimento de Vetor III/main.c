#include <stdio.h>

int main()
{

    double N[100], X, Y;
    int i;

    scanf("%lf", &X);

    N[0] = X;
    for (i = 1; i < 100; i++)
    {
        N[i] = N[i - 1] / 2;
    }
    for (i = 0; i < 100; i++)
    {
        printf("N[%d] = %.4lf\n", i, N[i]);
    }

    return 0;
}