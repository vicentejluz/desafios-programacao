#include <stdio.h>

int main()
{
    int a, b, c;
    int viceCamp;

    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a < b && a > c))
    {
        viceCamp = a;
    }
    else if ((b > a && b < c) || (b < a && b > c))
    {
        viceCamp = b;
    }
    else
    {
        viceCamp = c;
    }

    printf("%d\n", viceCamp);

    return 0;
}