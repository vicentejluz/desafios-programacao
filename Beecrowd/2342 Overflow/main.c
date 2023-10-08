#include <stdio.h>

int main()
{
    int n, p, q, res;
    char c;

    scanf("%d", &n);

    scanf("%d %c %d", &p, &c, &q);

    res = (c == '+') ? p + q : p * q;

    if (res > n)
        printf("OVERFLOW\n");
    else
        printf("OK\n");

    return 0;
}