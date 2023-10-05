#include <stdio.h>

int main()
{
    int n, cycle, i = 1;

    while (1)
    {
        scanf("%d", &n);
        if (n == -1)
            break;
        cycle = n / 2;
        printf("Experiment %d: %d full cycle(s)\n", i++, cycle);
    }

    return 0;
}