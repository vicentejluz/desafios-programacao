#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    a >= b ? printf("%d\n", a) : printf("%d\n", b); // operador ternário (condição ? true : false)

    return 0;
}