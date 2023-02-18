#include <stdio.h>

int main() {
    int t, n, k, div, mut, sub, res;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &k);

        if (k > n) {
            printf("%d\n", n);
        }
        else {
            div = n / k;
            mut = div * k;
            sub = n - mut;
            res = div + sub;
            printf("%d\n", res);
        }
    }

    return 0;
}