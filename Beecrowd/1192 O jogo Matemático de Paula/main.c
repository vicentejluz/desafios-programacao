#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int N, i, cal;
    char c[4];

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf(" %s", c);

        if (c[0] == c[2])
            cal = atoi(&c[0]) * atoi(&c[2]);
        else if (islower(c[1]))
            cal = atoi(&c[0]) + atoi(&c[2]);
        else
            cal = atoi(&c[2]) - atoi(&c[0]);

        printf("%d\n", cal);
    }

    return 0;
}