#include <stdio.h>

int main()
{
    long long int hashmat, oponente, sub;

    while (scanf("%lld %lld", &hashmat, &oponente) != EOF)
    {
        sub = hashmat - oponente;
        if (sub < 0)
        {
            sub *= -1;
        }

        printf("%lld\n", sub);
    }

    return 0;
}