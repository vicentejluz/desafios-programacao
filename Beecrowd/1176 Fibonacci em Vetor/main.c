#include <stdio.h>

int main()
{
    int i, N, T;
    unsigned long long int fibonacci[61];
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (i = 2; i <= 60; i++)
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%d", &N);
        printf("Fib(%d) = %llu\n", N, fibonacci[N]);
    }
    return 0;
}