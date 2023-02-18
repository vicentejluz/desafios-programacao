#include <stdio.h>

int main() {
    int c, n, div, mut, menos;

    scanf("%d %d", &c, &n);

    div = c / n;
    mut = div * n;
    menos = c - mut;

    printf("%d\n", menos);

    return 0;
}